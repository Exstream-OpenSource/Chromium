// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/sync/engine_impl/cycle/directory_type_debug_info_emitter.h"

#include <stdint.h>

#include <vector>

#include "components/sync/engine/cycle/status_counters.h"
#include "components/sync/engine/cycle/type_debug_info_observer.h"
#include "components/sync/syncable/entry.h"
#include "components/sync/syncable/syncable_read_transaction.h"

namespace syncer {

DirectoryTypeDebugInfoEmitter::DirectoryTypeDebugInfoEmitter(
    syncable::Directory* directory,
    ModelType type,
    base::ObserverList<TypeDebugInfoObserver>* observers)
    : directory_(directory),
      type_(type),
      type_debug_info_observers_(observers) {}

DirectoryTypeDebugInfoEmitter::DirectoryTypeDebugInfoEmitter(
    ModelType type,
    base::ObserverList<TypeDebugInfoObserver>* observers)
    : directory_(NULL), type_(type), type_debug_info_observers_(observers) {}

DirectoryTypeDebugInfoEmitter::~DirectoryTypeDebugInfoEmitter() {}

std::unique_ptr<base::ListValue> DirectoryTypeDebugInfoEmitter::GetAllNodes() {
  syncable::ReadTransaction trans(FROM_HERE, directory_);
  std::unique_ptr<base::ListValue> nodes(
      directory_->GetNodeDetailsForType(&trans, type_));
  return nodes;
}

const CommitCounters& DirectoryTypeDebugInfoEmitter::GetCommitCounters() const {
  return commit_counters_;
}

CommitCounters* DirectoryTypeDebugInfoEmitter::GetMutableCommitCounters() {
  return &commit_counters_;
}

void DirectoryTypeDebugInfoEmitter::EmitCommitCountersUpdate() {
  FOR_EACH_OBSERVER(TypeDebugInfoObserver, (*type_debug_info_observers_),
                    OnCommitCountersUpdated(type_, commit_counters_));
}

const UpdateCounters& DirectoryTypeDebugInfoEmitter::GetUpdateCounters() const {
  return update_counters_;
}

UpdateCounters* DirectoryTypeDebugInfoEmitter::GetMutableUpdateCounters() {
  return &update_counters_;
}

void DirectoryTypeDebugInfoEmitter::EmitUpdateCountersUpdate() {
  FOR_EACH_OBSERVER(TypeDebugInfoObserver, (*type_debug_info_observers_),
                    OnUpdateCountersUpdated(type_, update_counters_));
}

void DirectoryTypeDebugInfoEmitter::EmitStatusCountersUpdate() {
  // This is expensive.  Avoid running this code unless about:sync is open.
  if (!type_debug_info_observers_->might_have_observers())
    return;

  syncable::ReadTransaction trans(FROM_HERE, directory_);
  std::vector<int64_t> result;
  directory_->GetMetaHandlesOfType(&trans, type_, &result);

  StatusCounters counters;
  counters.num_entries_and_tombstones = result.size();

  for (std::vector<int64_t>::const_iterator it = result.begin();
       it != result.end(); ++it) {
    syncable::Entry e(&trans, syncable::GET_BY_HANDLE, *it);
    if (!e.GetIsDel()) {
      counters.num_entries++;
    }
  }

  FOR_EACH_OBSERVER(TypeDebugInfoObserver, (*type_debug_info_observers_),
                    OnStatusCountersUpdated(type_, counters));
}

}  // namespace syncer
