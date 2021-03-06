// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.PartyUpdateAction
#include "Oculus/Platform/PartyUpdateAction.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.PartyUpdateNotification
  // [] Offset: FFFFFFFF
  class PartyUpdateNotification : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.PartyUpdateAction Action
    // Size: 0x4
    // Offset: 0x10
    Oculus::Platform::PartyUpdateAction Action;
    // Field size check
    static_assert(sizeof(Oculus::Platform::PartyUpdateAction) == 0x4);
    // Padding between fields: Action and: PartyId
    char __padding0[0x4] = {};
    // public readonly System.UInt64 PartyId
    // Size: 0x8
    // Offset: 0x18
    uint64_t PartyId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 SenderId
    // Size: 0x8
    // Offset: 0x20
    uint64_t SenderId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String UpdateTimestamp
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* UpdateTimestamp;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String UserAlias
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* UserAlias;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt64 UserId
    // Size: 0x8
    // Offset: 0x38
    uint64_t UserId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String UserName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* UserName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PartyUpdateNotification
    PartyUpdateNotification(Oculus::Platform::PartyUpdateAction Action_ = {}, uint64_t PartyId_ = {}, uint64_t SenderId_ = {}, ::Il2CppString* UpdateTimestamp_ = {}, ::Il2CppString* UserAlias_ = {}, uint64_t UserId_ = {}, ::Il2CppString* UserName_ = {}) noexcept : Action{Action_}, PartyId{PartyId_}, SenderId{SenderId_}, UpdateTimestamp{UpdateTimestamp_}, UserAlias{UserAlias_}, UserId{UserId_}, UserName{UserName_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13EEC38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyUpdateNotification* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::PartyUpdateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyUpdateNotification*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.PartyUpdateNotification
  #pragma pack(pop)
  static check_size<sizeof(PartyUpdateNotification), 64 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_PartyUpdateNotificationSizeCheck;
  static_assert(sizeof(PartyUpdateNotification) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PartyUpdateNotification*, "Oculus.Platform.Models", "PartyUpdateNotification");
