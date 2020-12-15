// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: Compositor_CumulativeStats
  struct Compositor_CumulativeStats;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_GetCumulativeStats
  class IVRCompositor::_GetCumulativeStats : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E5E04
    static IVRCompositor::_GetCumulativeStats* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0x18E5E18
    void Invoke(Valve::VR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E6084
    System::IAsyncResult* BeginInvoke(Valve::VR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.IAsyncResult result)
    // Offset: 0x18E6138
    void EndInvoke(Valve::VR::Compositor_CumulativeStats& pStats, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetCumulativeStats
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetCumulativeStats*, "Valve.VR", "IVRCompositor/_GetCumulativeStats");
#pragma pack(pop)