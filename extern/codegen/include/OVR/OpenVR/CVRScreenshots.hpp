// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRScreenshots
  class CVRScreenshots : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRScreenshots FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRScreenshots FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRScreenshots
    constexpr operator OVR::OpenVR::IVRScreenshots() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xED1280
    static CVRScreenshots* New_ctor(System::IntPtr pInterface);
    // public OVR.OpenVR.EVRScreenshotError RequestScreenshot(ref System.UInt32 pOutScreenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0xED139C
    OVR::OpenVR::EVRScreenshotError RequestScreenshot(uint& pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public OVR.OpenVR.EVRScreenshotError HookScreenshot(OVR.OpenVR.EVRScreenshotType[] pSupportedTypes)
    // Offset: 0xED13BC
    OVR::OpenVR::EVRScreenshotError HookScreenshot(::Array<OVR::OpenVR::EVRScreenshotType>* pSupportedTypes);
    // public OVR.OpenVR.EVRScreenshotType GetScreenshotPropertyType(System.UInt32 screenshotHandle, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0xED13E4
    OVR::OpenVR::EVRScreenshotType GetScreenshotPropertyType(uint screenshotHandle, OVR::OpenVR::EVRScreenshotError& pError);
    // public System.UInt32 GetScreenshotPropertyFilename(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0xED1400
    uint GetScreenshotPropertyFilename(uint screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, OVR::OpenVR::EVRScreenshotError& pError);
    // public OVR.OpenVR.EVRScreenshotError UpdateScreenshotProgress(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0xED141C
    OVR::OpenVR::EVRScreenshotError UpdateScreenshotProgress(uint screenshotHandle, float flProgress);
    // public OVR.OpenVR.EVRScreenshotError TakeStereoScreenshot(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0xED1438
    OVR::OpenVR::EVRScreenshotError TakeStereoScreenshot(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public OVR.OpenVR.EVRScreenshotError SubmitScreenshot(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0xED1458
    OVR::OpenVR::EVRScreenshotError SubmitScreenshot(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename);
  }; // OVR.OpenVR.CVRScreenshots
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRScreenshots*, "OVR.OpenVR", "CVRScreenshots");
#pragma pack(pop)
