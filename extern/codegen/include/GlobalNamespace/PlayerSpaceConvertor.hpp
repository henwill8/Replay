// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSpaceConvertor
  // [] Offset: FFFFFFFF
  class PlayerSpaceConvertor : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Quaternion _worldToPlayerSpaceRotation
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Quaternion worldToPlayerSpaceRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: PlayerSpaceConvertor
    PlayerSpaceConvertor(UnityEngine::Quaternion worldToPlayerSpaceRotation_ = {}) noexcept : worldToPlayerSpaceRotation{worldToPlayerSpaceRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Quaternion get_worldToPlayerSpaceRotation()
    // Offset: 0xFBBBB0
    UnityEngine::Quaternion get_worldToPlayerSpaceRotation();
    // protected System.Void Start()
    // Offset: 0xFBBBBC
    void Start();
    // public System.Void .ctor()
    // Offset: 0xFBBC78
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpaceConvertor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSpaceConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpaceConvertor*, creationType>()));
    }
  }; // PlayerSpaceConvertor
  #pragma pack(pop)
  static check_size<sizeof(PlayerSpaceConvertor), 24 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_PlayerSpaceConvertorSizeCheck;
  static_assert(sizeof(PlayerSpaceConvertor) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpaceConvertor*, "", "PlayerSpaceConvertor");
