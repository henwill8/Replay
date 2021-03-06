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
  // Autogenerated type: Valve.VR.IVROverlay/_GetGamepadFocusOverlay
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFBB78
  class IVROverlay::_GetGamepadFocusOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetGamepadFocusOverlay
    _GetGamepadFocusOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC30E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetGamepadFocusOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetGamepadFocusOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetGamepadFocusOverlay*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke()
    // Offset: 0x1EC30FC
    uint64_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC3310
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EC333C
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetGamepadFocusOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetGamepadFocusOverlay*, "Valve.VR", "IVROverlay/_GetGamepadFocusOverlay");
