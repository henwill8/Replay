// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.TQ
  // [] Offset: FFFFFFFF
  class TQ : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 t
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 t;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion q
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion q;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: TQ
    TQ(UnityEngine::Vector3 t_ = {}, UnityEngine::Quaternion q_ = {}) noexcept : t{t_}, q{q_} {}
    // public System.Void .ctor(UnityEngine.Vector3 translation, UnityEngine.Quaternion rotation)
    // Offset: 0x19753AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TQ* New_ctor(UnityEngine::Vector3 translation, UnityEngine::Quaternion rotation) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::TQ::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TQ*, creationType>(translation, rotation)));
    }
  }; // RootMotion.TQ
  #pragma pack(pop)
  static check_size<sizeof(TQ), 28 + sizeof(UnityEngine::Quaternion)> __RootMotion_TQSizeCheck;
  static_assert(sizeof(TQ) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::TQ*, "RootMotion", "TQ");
