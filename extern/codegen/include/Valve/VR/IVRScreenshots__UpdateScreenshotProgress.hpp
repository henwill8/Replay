// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRScreenshots/_UpdateScreenshotProgress
  class IVRScreenshots::_UpdateScreenshotProgress : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1923B58
    static IVRScreenshots::_UpdateScreenshotProgress* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRScreenshotError Invoke(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0x1923B6C
    Valve::VR::EVRScreenshotError Invoke(uint screenshotHandle, float flProgress);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, System.Single flProgress, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1923E00
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, float flProgress, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1923EAC
    Valve::VR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_UpdateScreenshotProgress
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_UpdateScreenshotProgress*, "Valve.VR", "IVRScreenshots/_UpdateScreenshotProgress");
#pragma pack(pop)
