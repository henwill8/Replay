// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF73AC
  class IVRScreenshots::_SubmitScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SubmitScreenshot
    _SubmitScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2005800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_SubmitScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_SubmitScreenshot*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRScreenshotError Invoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0x2005814
    OVR::OpenVR::EVRScreenshotError Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2005ADC
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2005B98
    OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_SubmitScreenshot
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*, "OVR.OpenVR", "IVRScreenshots/_SubmitScreenshot");
