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
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: EnvironmentsListSO
  class EnvironmentsListSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: CustomLevelLoader
  // [] Offset: FFFFFFFF
  class CustomLevelLoader : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private EnvironmentInfoSO _defaultEnvironmentInfo
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::EnvironmentInfoSO* defaultEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private EnvironmentInfoSO _defaultAllDirectionsEnvironmentInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentInfoSO* defaultAllDirectionsEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private EnvironmentsListSO _environmentSceneInfoCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::EnvironmentsListSO* environmentSceneInfoCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentsListSO*) == 0x8);
    // private UnityEngine.Sprite _defaultPackCover
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Sprite* defaultPackCover;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: CustomLevelLoader
    CustomLevelLoader(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, GlobalNamespace::EnvironmentInfoSO* defaultEnvironmentInfo_ = {}, GlobalNamespace::EnvironmentInfoSO* defaultAllDirectionsEnvironmentInfo_ = {}, GlobalNamespace::EnvironmentsListSO* environmentSceneInfoCollection_ = {}, UnityEngine::Sprite* defaultPackCover_ = {}) noexcept : beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, defaultEnvironmentInfo{defaultEnvironmentInfo_}, defaultAllDirectionsEnvironmentInfo{defaultAllDirectionsEnvironmentInfo_}, environmentSceneInfoCollection{environmentSceneInfoCollection_}, defaultPackCover{defaultPackCover_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1046150
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomLevelLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomLevelLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomLevelLoader*, creationType>()));
    }
  }; // CustomLevelLoader
  #pragma pack(pop)
  static check_size<sizeof(CustomLevelLoader), 56 + sizeof(UnityEngine::Sprite*)> __GlobalNamespace_CustomLevelLoaderSizeCheck;
  static_assert(sizeof(CustomLevelLoader) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomLevelLoader*, "", "CustomLevelLoader");
