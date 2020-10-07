// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_ShowKeyboard
  class IVROverlay::_ShowKeyboard : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C7358
    static IVROverlay::_ShowKeyboard* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x16C736C
    Valve::VR::EVROverlayError Invoke(int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public System.IAsyncResult BeginInvoke(System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C76A4
    System::IAsyncResult* BeginInvoke(int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C77B4
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ShowKeyboard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowKeyboard*, "Valve.VR", "IVROverlay/_ShowKeyboard");
#pragma pack(pop)
