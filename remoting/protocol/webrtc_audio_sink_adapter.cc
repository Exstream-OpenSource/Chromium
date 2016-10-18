// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "remoting/protocol/webrtc_audio_sink_adapter.h"

#include "base/callback.h"
#include "remoting/proto/audio.pb.h"
#include "remoting/protocol/audio_stub.h"

namespace remoting {
namespace protocol {

WebrtcAudioSinkAdapter::WebrtcAudioSinkAdapter(
    scoped_refptr<webrtc::MediaStreamInterface> stream,
    base::WeakPtr<AudioStub> audio_stub) {
  audio_stub_ = audio_stub;

  media_stream_ = std::move(stream);

  webrtc::AudioTrackVector audio_tracks = media_stream_->GetAudioTracks();

  // Caller must verify that the media stream contains audio tracks.
  DCHECK(!audio_tracks.empty());

  if (audio_tracks.size() > 1U) {
    LOG(WARNING) << "Received media stream with multiple audio tracks.";
  }

  audio_track_ = audio_tracks[0];
  audio_track_->GetSource()->AddSink(this);
}

WebrtcAudioSinkAdapter::~WebrtcAudioSinkAdapter() {
  audio_track_->GetSource()->RemoveSink(this);
}

void WebrtcAudioSinkAdapter::OnData(const void* audio_data,
                                    int bits_per_sample,
                                    int sample_rate,
                                    size_t number_of_channels,
                                    size_t number_of_frames) {
  if (!audio_stub_)
    return;

  std::unique_ptr<AudioPacket> audio_packet(new AudioPacket());
  audio_packet->set_encoding(AudioPacket::ENCODING_RAW);

  switch (sample_rate) {
    case 44100:
      audio_packet->set_sampling_rate(AudioPacket::SAMPLING_RATE_44100);
      break;
    case 48000:
      audio_packet->set_sampling_rate(AudioPacket::SAMPLING_RATE_48000);
      break;
    default:
      LOG(WARNING) << "Unsupported sampling rate: " << sample_rate;
      return;
  }

  if (bits_per_sample != 16) {
    LOG(WARNING) << "Unsupported bits/sample: " << bits_per_sample;
    return;
  }
  audio_packet->set_bytes_per_sample(AudioPacket::BYTES_PER_SAMPLE_2);

  if (number_of_channels != 2) {
    LOG(WARNING) << "Unsupported number of channels: " << number_of_channels;
    return;
  }
  audio_packet->set_channels(AudioPacket::CHANNELS_STEREO);

  size_t data_size =
      number_of_frames * number_of_channels * (bits_per_sample / 8);
  audio_packet->add_data(reinterpret_cast<const char*>(audio_data), data_size);
  audio_stub_->ProcessAudioPacket(std::move(audio_packet), base::Closure());
}

}  // namespace protocol
}  // namespace remoting