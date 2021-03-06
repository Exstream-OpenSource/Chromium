// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "extensions/browser/quota_service.h"

#include "base/stl_util.h"
#include "base/threading/thread_task_runner_handle.h"
#include "extensions/browser/extension_function.h"
#include "extensions/common/error_utils.h"

namespace {

// If the browser stays open long enough, we reset state once a day.
// Whatever this value is, it should be an order of magnitude longer than
// the longest interval in any of the QuotaLimitHeuristics in use.
constexpr int kPurgeIntervalInDays = 1;

constexpr char kOverQuotaError[] = "This request exceeds the * quota.";

bool g_purge_disabled_for_testing = false;

}  // namespace

namespace extensions {

QuotaService::QuotaService() {
  if (!g_purge_disabled_for_testing && base::ThreadTaskRunnerHandle::IsSet()) {
    purge_timer_.Start(FROM_HERE,
                       base::TimeDelta::FromDays(kPurgeIntervalInDays),
                       this,
                       &QuotaService::Purge);
  }
}

QuotaService::~QuotaService() {
  DCHECK(CalledOnValidThread());
  purge_timer_.Stop();
  Purge();
}

std::string QuotaService::Assess(const std::string& extension_id,
                                 ExtensionFunction* function,
                                 const base::ListValue* args,
                                 const base::TimeTicks& event_time) {
  DCHECK(CalledOnValidThread());

  if (function->ShouldSkipQuotaLimiting())
    return std::string();

  // Lookup function list for extension.
  FunctionHeuristicsMap& functions = function_heuristics_[extension_id];

  // Lookup heuristics for function, create if necessary.
  QuotaLimitHeuristics& heuristics = functions[function->name()];
  if (heuristics.empty())
    function->GetQuotaLimitHeuristics(&heuristics);

  if (heuristics.empty())
    return std::string();  // No heuristic implies no limit.

  QuotaLimitHeuristic* failed_heuristic = NULL;
  for (QuotaLimitHeuristics::iterator heuristic = heuristics.begin();
       heuristic != heuristics.end();
       ++heuristic) {
    // Apply heuristic to each item (bucket).
    if (!(*heuristic)->ApplyToArgs(args, event_time)) {
      failed_heuristic = *heuristic;
      break;
    }
  }

  if (!failed_heuristic)
    return std::string();

  std::string error = failed_heuristic->GetError();
  DCHECK_GT(error.length(), 0u);
  return error;
}

QuotaService::ScopedDisablePurgeForTesting::ScopedDisablePurgeForTesting() {
  DCHECK(!g_purge_disabled_for_testing);
  g_purge_disabled_for_testing = true;
}

QuotaService::ScopedDisablePurgeForTesting::~ScopedDisablePurgeForTesting() {
  DCHECK(g_purge_disabled_for_testing);
  g_purge_disabled_for_testing = false;
}

void QuotaService::PurgeFunctionHeuristicsMap(FunctionHeuristicsMap* map) {
  FunctionHeuristicsMap::iterator heuristics = map->begin();
  while (heuristics != map->end()) {
    base::STLDeleteElements(&heuristics->second);
    map->erase(heuristics++);
  }
}

void QuotaService::Purge() {
  DCHECK(CalledOnValidThread());
  std::map<std::string, FunctionHeuristicsMap>::iterator it =
      function_heuristics_.begin();
  for (; it != function_heuristics_.end(); function_heuristics_.erase(it++))
    PurgeFunctionHeuristicsMap(&it->second);
}

void QuotaLimitHeuristic::Bucket::Reset(const Config& config,
                                        const base::TimeTicks& start) {
  num_tokens_ = config.refill_token_count;
  expiration_ = start + config.refill_interval;
}

void QuotaLimitHeuristic::SingletonBucketMapper::GetBucketsForArgs(
    const base::ListValue* args,
    BucketList* buckets) {
  buckets->push_back(&bucket_);
}

QuotaLimitHeuristic::QuotaLimitHeuristic(const Config& config,
                                         BucketMapper* map,
                                         const std::string& name)
    : config_(config), bucket_mapper_(map), name_(name) {}

QuotaLimitHeuristic::~QuotaLimitHeuristic() {}

bool QuotaLimitHeuristic::ApplyToArgs(const base::ListValue* args,
                                      const base::TimeTicks& event_time) {
  BucketList buckets;
  bucket_mapper_->GetBucketsForArgs(args, &buckets);
  for (BucketList::iterator i = buckets.begin(); i != buckets.end(); ++i) {
    if ((*i)->expiration().is_null())  // A brand new bucket.
      (*i)->Reset(config_, event_time);
    if (!Apply(*i, event_time))
      return false;  // It only takes one to spoil it for everyone.
  }
  return true;
}

std::string QuotaLimitHeuristic::GetError() const {
  return extensions::ErrorUtils::FormatErrorMessage(kOverQuotaError, name_);
}

bool QuotaService::TimedLimit::Apply(Bucket* bucket,
                                     const base::TimeTicks& event_time) {
  if (event_time > bucket->expiration())
    bucket->Reset(config(), event_time);

  return bucket->DeductToken();
}

}  // namespace extensions
