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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnControllerPlayerHeightSetter
  // [] Offset: FFFFFFFF
  class BeatmapObjectSpawnControllerPlayerHeightSetter : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xD3CD48
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3CD58
    // private readonly PlayerHeightDetector _playerHeightDetector
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerHeightDetector* playerHeightDetector;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectSpawnControllerPlayerHeightSetter
    BeatmapObjectSpawnControllerPlayerHeightSetter(GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}, GlobalNamespace::PlayerHeightDetector* playerHeightDetector_ = {}) noexcept : beatmapObjectSpawnController{beatmapObjectSpawnController_}, playerHeightDetector{playerHeightDetector_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF5C0A0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF5C180
    void OnDestroy();
    // private System.Void HandlePlayerHeightDidChange(System.Single playerHeight)
    // Offset: 0xF5C154
    void HandlePlayerHeightDidChange(float playerHeight);
    // static public System.Single JumpOffsetYForPlayerHeight(System.Single playerHeight)
    // Offset: 0xF5C25C
    static float JumpOffsetYForPlayerHeight(float playerHeight);
    // public System.Void .ctor()
    // Offset: 0xF5C2EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnControllerPlayerHeightSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnControllerPlayerHeightSetter*, creationType>()));
    }
  }; // BeatmapObjectSpawnControllerPlayerHeightSetter
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnControllerPlayerHeightSetter), 32 + sizeof(GlobalNamespace::PlayerHeightDetector*)> __GlobalNamespace_BeatmapObjectSpawnControllerPlayerHeightSetterSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnControllerPlayerHeightSetter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*, "", "BeatmapObjectSpawnControllerPlayerHeightSetter");
