// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Amplifier
  // [] Offset: FFFFFFFF
  class Amplifier : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::Amplifier::Body
    class Body;
    // [TooltipAttribute] Offset: 0xD29F10
    // public RootMotion.FinalIK.Amplifier/Body[] bodies
    // Size: 0x8
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::Amplifier::Body*>* bodies;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Amplifier::Body*>*) == 0x8);
    // Creating value type constructor for type: Amplifier
    Amplifier(::Array<RootMotion::FinalIK::Amplifier::Body*>* bodies_ = {}) noexcept : bodies{bodies_} {}
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1B50A6C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x1B51010
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Amplifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Amplifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Amplifier*, creationType>()));
    }
  }; // RootMotion.FinalIK.Amplifier
  #pragma pack(pop)
  static check_size<sizeof(Amplifier), 48 + sizeof(::Array<RootMotion::FinalIK::Amplifier::Body*>*)> __RootMotion_FinalIK_AmplifierSizeCheck;
  static_assert(sizeof(Amplifier) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier*, "RootMotion.FinalIK", "Amplifier");
