// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_ShowKeyboardForOverlay
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFBD1C
  class IVROverlay::_ShowKeyboardForOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShowKeyboardForOverlay
    _ShowKeyboardForOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2017F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ShowKeyboardForOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_ShowKeyboardForOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ShowKeyboardForOverlay*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x2017F2C
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2018248
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2018374
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ShowKeyboardForOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowKeyboardForOverlay*, "Valve.VR", "IVROverlay/_ShowKeyboardForOverlay");
