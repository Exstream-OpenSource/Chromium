// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_TEST_PIXEL_TEST_OUTPUT_SURFACE_H_
#define CC_TEST_PIXEL_TEST_OUTPUT_SURFACE_H_

#include "base/memory/weak_ptr.h"
#include "cc/output/output_surface.h"

namespace cc {

class PixelTestOutputSurface : public OutputSurface {
 public:
  explicit PixelTestOutputSurface(
      scoped_refptr<ContextProvider> context_provider,
      bool flipped_output_surface);
  explicit PixelTestOutputSurface(
      std::unique_ptr<SoftwareOutputDevice> software_device);
  ~PixelTestOutputSurface() override;

  // OutputSurface implementation.
  void EnsureBackbuffer() override;
  void DiscardBackbuffer() override;
  void BindFramebuffer() override;
  void Reshape(const gfx::Size& size,
               float device_scale_factor,
               const gfx::ColorSpace& color_space,
               bool has_alpha) override;
  bool HasExternalStencilTest() const override;
  void ApplyExternalStencil() override;
  void SwapBuffers(OutputSurfaceFrame frame) override;
  OverlayCandidateValidator* GetOverlayCandidateValidator() const override;
  bool IsDisplayedAsOverlayPlane() const override;
  unsigned GetOverlayTextureId() const override;
  bool SurfaceIsSuspendForRecycle() const override;
  uint32_t GetFramebufferCopyTextureFormat() override;

  void set_has_external_stencil_test(bool has_test) {
    external_stencil_test_ = has_test;
  }

 private:
  void SwapBuffersCallback();

  bool external_stencil_test_ = false;
  base::WeakPtrFactory<PixelTestOutputSurface> weak_ptr_factory_;
};

}  // namespace cc

#endif  // CC_TEST_PIXEL_TEST_OUTPUT_SURFACE_H_