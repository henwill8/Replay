// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSCharacterDataModel
#include "GlobalNamespace/BTSCharacterDataModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterDataModel/PrefabWithId
  // [] Offset: FFFFFFFF
  class BTSCharacterDataModel::PrefabWithId : public ::Il2CppObject {
    public:
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: prefab
    char __padding0[0x4] = {};
    // private BTSCharacter _prefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BTSCharacter* prefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacter*) == 0x8);
    // Creating value type constructor for type: PrefabWithId
    PrefabWithId(int id_ = {}, GlobalNamespace::BTSCharacter* prefab_ = {}) noexcept : id{id_}, prefab{prefab_} {}
    // public System.Int32 get_id()
    // Offset: 0x1038B10
    int get_id();
    // public BTSCharacter get_prefab()
    // Offset: 0x1038B18
    GlobalNamespace::BTSCharacter* get_prefab();
    // public System.Void .ctor()
    // Offset: 0x1038B20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterDataModel::PrefabWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterDataModel::PrefabWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterDataModel::PrefabWithId*, creationType>()));
    }
  }; // BTSCharacterDataModel/PrefabWithId
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterDataModel::PrefabWithId), 24 + sizeof(GlobalNamespace::BTSCharacter*)> __GlobalNamespace_BTSCharacterDataModel_PrefabWithIdSizeCheck;
  static_assert(sizeof(BTSCharacterDataModel::PrefabWithId) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterDataModel::PrefabWithId*, "", "BTSCharacterDataModel/PrefabWithId");
