// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayersAtGameStartModel
#include "GlobalNamespace/PlayersAtGameStartModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayersAtGameStartModel/<>c__DisplayClass8_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1B63C
  class PlayersAtGameStartModel::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.HashSet`1<System.String> playerIds
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<::Il2CppString*>* playerIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(System::Collections::Generic::HashSet_1<::Il2CppString*>* playerIds_ = {}) noexcept : playerIds{playerIds_} {}
    // Creating conversion operator: operator System::Collections::Generic::HashSet_1<::Il2CppString*>*
    constexpr operator System::Collections::Generic::HashSet_1<::Il2CppString*>*() const noexcept {
      return playerIds;
    }
    // System.Boolean <SaveConnectedPlayersContainedIn>b__0(IConnectedPlayer p)
    // Offset: 0x1C1C8D0
    bool $SaveConnectedPlayersContainedIn$b__0(GlobalNamespace::IConnectedPlayer* p);
    // public System.Void .ctor()
    // Offset: 0x1C1C4CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersAtGameStartModel::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayersAtGameStartModel::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersAtGameStartModel::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // PlayersAtGameStartModel/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(PlayersAtGameStartModel::$$c__DisplayClass8_0), 16 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*)> __GlobalNamespace_PlayersAtGameStartModel_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(PlayersAtGameStartModel::$$c__DisplayClass8_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersAtGameStartModel::$$c__DisplayClass8_0*, "", "PlayersAtGameStartModel/<>c__DisplayClass8_0");
