// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsTableView
#include "GlobalNamespace/MultiplayerResultsTableView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerResultsTableView/<>c__DisplayClass31_1
  class MultiplayerResultsTableView::$$c__DisplayClass31_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.RectTransform winnerRectTransform
    // Offset: 0x10
    UnityEngine::RectTransform* winnerRectTransform;
    // Creating conversion operator: operator UnityEngine::RectTransform*
    constexpr operator UnityEngine::RectTransform*() const noexcept {
      return winnerRectTransform;
    }
    // System.Void <StartAnimation>b__3(UnityEngine.Vector2 val)
    // Offset: 0xF7E6B8
    void $StartAnimation$b__3(UnityEngine::Vector2 val);
    // public System.Void .ctor()
    // Offset: 0xF7E470
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MultiplayerResultsTableView::$$c__DisplayClass31_1* New_ctor();
  }; // MultiplayerResultsTableView/<>c__DisplayClass31_1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass31_1*, "", "MultiplayerResultsTableView/<>c__DisplayClass31_1");
#pragma pack(pop)
