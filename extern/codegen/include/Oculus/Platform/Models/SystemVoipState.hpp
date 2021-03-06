// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.VoipMuteState
#include "Oculus/Platform/VoipMuteState.hpp"
// Including type: Oculus.Platform.SystemVoipStatus
#include "Oculus/Platform/SystemVoipStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.SystemVoipState
  // [] Offset: FFFFFFFF
  class SystemVoipState : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.VoipMuteState MicrophoneMuted
    // Size: 0x4
    // Offset: 0x10
    Oculus::Platform::VoipMuteState MicrophoneMuted;
    // Field size check
    static_assert(sizeof(Oculus::Platform::VoipMuteState) == 0x4);
    // public readonly Oculus.Platform.SystemVoipStatus Status
    // Size: 0x4
    // Offset: 0x14
    Oculus::Platform::SystemVoipStatus Status;
    // Field size check
    static_assert(sizeof(Oculus::Platform::SystemVoipStatus) == 0x4);
    // Creating value type constructor for type: SystemVoipState
    SystemVoipState(Oculus::Platform::VoipMuteState MicrophoneMuted_ = {}, Oculus::Platform::SystemVoipStatus Status_ = {}) noexcept : MicrophoneMuted{MicrophoneMuted_}, Status{Status_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13F0C60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemVoipState* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::SystemVoipState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemVoipState*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.SystemVoipState
  #pragma pack(pop)
  static check_size<sizeof(SystemVoipState), 20 + sizeof(Oculus::Platform::SystemVoipStatus)> __Oculus_Platform_Models_SystemVoipStateSizeCheck;
  static_assert(sizeof(SystemVoipState) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SystemVoipState*, "Oculus.Platform.Models", "SystemVoipState");
