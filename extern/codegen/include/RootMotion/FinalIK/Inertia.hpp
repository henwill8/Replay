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
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia
  // [] Offset: FFFFFFFF
  class Inertia : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::Inertia::Body
    class Body;
    // [TooltipAttribute] Offset: 0xD2A108
    // public RootMotion.FinalIK.Inertia/Body[] bodies
    // Size: 0x8
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::Inertia::Body*>* bodies;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Inertia::Body*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2A140
    // public RootMotion.FinalIK.OffsetModifier/OffsetLimits[] limits
    // Size: 0x8
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* limits;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>*) == 0x8);
    // Creating value type constructor for type: Inertia
    Inertia(::Array<RootMotion::FinalIK::Inertia::Body*>* bodies_ = {}, ::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* limits_ = {}) noexcept : bodies{bodies_}, limits{limits_} {}
    // public System.Void ResetBodies()
    // Offset: 0x1C3246C
    void ResetBodies();
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1C325C0
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x1C329F4
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Inertia::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia*, creationType>()));
    }
  }; // RootMotion.FinalIK.Inertia
  #pragma pack(pop)
  static check_size<sizeof(Inertia), 56 + sizeof(::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>*)> __RootMotion_FinalIK_InertiaSizeCheck;
  static_assert(sizeof(Inertia) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Inertia*, "RootMotion.FinalIK", "Inertia");
