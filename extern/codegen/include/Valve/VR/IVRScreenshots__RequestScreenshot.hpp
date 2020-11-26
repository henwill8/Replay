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
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRScreenshots/_RequestScreenshot
  class IVRScreenshots::_RequestScreenshot : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1923060
    static IVRScreenshots::_RequestScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRScreenshotError Invoke(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1923074
    Valve::VR::EVRScreenshotError Invoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1923314
    System::IAsyncResult* BeginInvoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(ref System.UInt32 pOutScreenshotHandle, System.IAsyncResult result)
    // Offset: 0x19233DC
    Valve::VR::EVRScreenshotError EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_RequestScreenshot
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_RequestScreenshot*, "Valve.VR", "IVRScreenshots/_RequestScreenshot");
#pragma pack(pop)
