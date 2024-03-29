// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_PORT_INFO_H_
#define MEDIA_MIDI_MIDI_PORT_INFO_H_

#include <string>
#include <vector>

#include "media/midi/midi_export.h"

namespace midi {

enum MidiPortState {
  MIDI_PORT_DISCONNECTED,
  MIDI_PORT_CONNECTED,
  MIDI_PORT_OPENED,
  MIDI_PORT_STATE_LAST = MIDI_PORT_OPENED,
};

struct MIDI_EXPORT MidiPortInfo final {
  MidiPortInfo();
  MidiPortInfo(const std::string& in_id,
               const std::string& in_manufacturer,
               const std::string& in_name,
               const std::string& in_version,
               MidiPortState in_state);

  MidiPortInfo(const MidiPortInfo& info);
  ~MidiPortInfo();

  std::string id;
  std::string manufacturer;
  std::string name;
  std::string version;
  MidiPortState state;
};

using MidiPortInfoList = std::vector<MidiPortInfo>;

}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_PORT_INFO_H_
