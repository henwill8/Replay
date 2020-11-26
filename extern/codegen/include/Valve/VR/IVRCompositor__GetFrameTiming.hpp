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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_GetFrameTiming
  class IVRCompositor::_GetFrameTiming : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E6C44
    static IVRCompositor::_GetFrameTiming* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo)
    // Offset: 0x18E6C58
    bool Invoke(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E6ED0
    System::IAsyncResult* BeginInvoke(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x18E6F84
    bool EndInvoke(Valve::VR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetFrameTiming
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetFrameTiming*, "Valve.VR", "IVRCompositor/_GetFrameTiming");
#pragma pack(pop)
