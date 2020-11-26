// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperone/_ForceBoundsVisible
  class IVRChaperone::_ForceBoundsVisible : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136ED9C
    static IVRChaperone::_ForceBoundsVisible* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean bForce)
    // Offset: 0x136819C
    void Invoke(bool bForce);
    // public System.IAsyncResult BeginInvoke(System.Boolean bForce, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136EDB0
    System::IAsyncResult* BeginInvoke(bool bForce, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x136EE40
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_ForceBoundsVisible
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_ForceBoundsVisible*, "Valve.VR", "IVRChaperone/_ForceBoundsVisible");
#pragma pack(pop)
