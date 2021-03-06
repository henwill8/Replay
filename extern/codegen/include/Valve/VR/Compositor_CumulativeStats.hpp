// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.Compositor_CumulativeStats
  // [] Offset: FFFFFFFF
  struct Compositor_CumulativeStats/*, public System::ValueType*/ {
    public:
    // public System.UInt32 m_nPid
    // Size: 0x4
    // Offset: 0x0
    uint m_nPid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresents
    // Size: 0x4
    // Offset: 0x4
    uint m_nNumFramePresents;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFrames
    // Size: 0x4
    // Offset: 0x8
    uint m_nNumDroppedFrames;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumReprojectedFrames
    // Size: 0x4
    // Offset: 0xC
    uint m_nNumReprojectedFrames;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresentsOnStartup
    // Size: 0x4
    // Offset: 0x10
    uint m_nNumFramePresentsOnStartup;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFramesOnStartup
    // Size: 0x4
    // Offset: 0x14
    uint m_nNumDroppedFramesOnStartup;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumReprojectedFramesOnStartup
    // Size: 0x4
    // Offset: 0x18
    uint m_nNumReprojectedFramesOnStartup;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumLoading
    // Size: 0x4
    // Offset: 0x1C
    uint m_nNumLoading;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresentsLoading
    // Size: 0x4
    // Offset: 0x20
    uint m_nNumFramePresentsLoading;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFramesLoading
    // Size: 0x4
    // Offset: 0x24
    uint m_nNumDroppedFramesLoading;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumReprojectedFramesLoading
    // Size: 0x4
    // Offset: 0x28
    uint m_nNumReprojectedFramesLoading;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumTimedOut
    // Size: 0x4
    // Offset: 0x2C
    uint m_nNumTimedOut;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresentsTimedOut
    // Size: 0x4
    // Offset: 0x30
    uint m_nNumFramePresentsTimedOut;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFramesTimedOut
    // Size: 0x4
    // Offset: 0x34
    uint m_nNumDroppedFramesTimedOut;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumReprojectedFramesTimedOut
    // Size: 0x4
    // Offset: 0x38
    uint m_nNumReprojectedFramesTimedOut;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Compositor_CumulativeStats
    constexpr Compositor_CumulativeStats(uint m_nPid_ = {}, uint m_nNumFramePresents_ = {}, uint m_nNumDroppedFrames_ = {}, uint m_nNumReprojectedFrames_ = {}, uint m_nNumFramePresentsOnStartup_ = {}, uint m_nNumDroppedFramesOnStartup_ = {}, uint m_nNumReprojectedFramesOnStartup_ = {}, uint m_nNumLoading_ = {}, uint m_nNumFramePresentsLoading_ = {}, uint m_nNumDroppedFramesLoading_ = {}, uint m_nNumReprojectedFramesLoading_ = {}, uint m_nNumTimedOut_ = {}, uint m_nNumFramePresentsTimedOut_ = {}, uint m_nNumDroppedFramesTimedOut_ = {}, uint m_nNumReprojectedFramesTimedOut_ = {}) noexcept : m_nPid{m_nPid_}, m_nNumFramePresents{m_nNumFramePresents_}, m_nNumDroppedFrames{m_nNumDroppedFrames_}, m_nNumReprojectedFrames{m_nNumReprojectedFrames_}, m_nNumFramePresentsOnStartup{m_nNumFramePresentsOnStartup_}, m_nNumDroppedFramesOnStartup{m_nNumDroppedFramesOnStartup_}, m_nNumReprojectedFramesOnStartup{m_nNumReprojectedFramesOnStartup_}, m_nNumLoading{m_nNumLoading_}, m_nNumFramePresentsLoading{m_nNumFramePresentsLoading_}, m_nNumDroppedFramesLoading{m_nNumDroppedFramesLoading_}, m_nNumReprojectedFramesLoading{m_nNumReprojectedFramesLoading_}, m_nNumTimedOut{m_nNumTimedOut_}, m_nNumFramePresentsTimedOut{m_nNumFramePresentsTimedOut_}, m_nNumDroppedFramesTimedOut{m_nNumDroppedFramesTimedOut_}, m_nNumReprojectedFramesTimedOut{m_nNumReprojectedFramesTimedOut_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.Compositor_CumulativeStats
  #pragma pack(pop)
  static check_size<sizeof(Compositor_CumulativeStats), 56 + sizeof(uint)> __Valve_VR_Compositor_CumulativeStatsSizeCheck;
  static_assert(sizeof(Compositor_CumulativeStats) == 0x3C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::Compositor_CumulativeStats, "Valve.VR", "Compositor_CumulativeStats");
