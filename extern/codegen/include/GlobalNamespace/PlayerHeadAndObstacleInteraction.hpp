// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ObstacleController
  class ObstacleController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeadAndObstacleInteraction
  // [] Offset: FFFFFFFF
  class PlayerHeadAndObstacleInteraction : public ::Il2CppObject {
    public:
    // [InjectAttribute] Offset: 0xD3CC08
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xD3CC18
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // private System.Int32 _lastFrameNumCheck
    // Size: 0x4
    // Offset: 0x20
    int lastFrameNumCheck;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastFrameNumCheck and: intersectingObstacles
    char __padding2[0x4] = {};
    // private readonly System.Collections.Generic.List`1<ObstacleController> _intersectingObstacles
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* intersectingObstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // Creating value type constructor for type: PlayerHeadAndObstacleInteraction
    PlayerHeadAndObstacleInteraction(GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, int lastFrameNumCheck_ = {}, System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* intersectingObstacles_ = {}) noexcept : playerTransforms{playerTransforms_}, beatmapObjectManager{beatmapObjectManager_}, lastFrameNumCheck{lastFrameNumCheck_}, intersectingObstacles{intersectingObstacles_} {}
    // public System.Collections.Generic.List`1<ObstacleController> get_intersectingObstacles()
    // Offset: 0xFB9A1C
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* get_intersectingObstacles();
    // private System.Void GetObstaclesContainingPoint(UnityEngine.Vector3 worldPos, System.Collections.Generic.List`1<ObstacleController> obstacleControllers)
    // Offset: 0xFB9A8C
    void GetObstaclesContainingPoint(UnityEngine::Vector3 worldPos, System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* obstacleControllers);
    // public System.Void .ctor()
    // Offset: 0xFB9C4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeadAndObstacleInteraction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerHeadAndObstacleInteraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeadAndObstacleInteraction*, creationType>()));
    }
  }; // PlayerHeadAndObstacleInteraction
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeadAndObstacleInteraction), 40 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>*)> __GlobalNamespace_PlayerHeadAndObstacleInteractionSizeCheck;
  static_assert(sizeof(PlayerHeadAndObstacleInteraction) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeadAndObstacleInteraction*, "", "PlayerHeadAndObstacleInteraction");
