// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameServerPlayerTableCell
#include "GlobalNamespace/GameServerPlayerTableCell.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameServerPlayerTableCell/<>c__DisplayClass26_0
  class GameServerPlayerTableCell::$$c__DisplayClass26_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifiersList
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifiersList;
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*() const noexcept {
      return modifiersList;
    }
    // System.Void <SetData>b__0(System.Int32 id, GameplayModifierInfoListItem listItem)
    // Offset: 0x1A1D8A8
    void $SetData$b__0(int id, GlobalNamespace::GameplayModifierInfoListItem* listItem);
    // public System.Void .ctor()
    // Offset: 0x1A1D4F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GameServerPlayerTableCell::$$c__DisplayClass26_0* New_ctor();
  }; // GameServerPlayerTableCell/<>c__DisplayClass26_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass26_0*, "", "GameServerPlayerTableCell/<>c__DisplayClass26_0");
#pragma pack(pop)
