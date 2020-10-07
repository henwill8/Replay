// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::WSA
namespace UnityEngine::XR::WSA {
}
// Completed forward declares
// Type namespace: UnityEngine.XR.WSA
namespace UnityEngine::XR::WSA {
  // Autogenerated type: UnityEngine.XR.WSA.WorldAnchor
  class WorldAnchor : public UnityEngine::Component {
    public:
    // Nested type: UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate
    class OnTrackingChangedDelegate;
    // private UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate OnTrackingChanged
    // Offset: 0x18
    UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate* OnTrackingChanged;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static private System.Void Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor worldAnchor, System.Boolean located)
    // Offset: 0x197E0C0
    static void Internal_TriggerEventOnTrackingLost(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located);
  }; // UnityEngine.XR.WSA.WorldAnchor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WSA::WorldAnchor*, "UnityEngine.XR.WSA", "WorldAnchor");
#pragma pack(pop)
