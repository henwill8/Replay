// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapSelectionView
  class BeatmapSelectionView : public UnityEngine::MonoBehaviour {
    public:
    // private LevelBar _levelBar
    // Offset: 0x18
    GlobalNamespace::LevelBar* levelBar;
    // private TMPro.TextMeshProUGUI _noLevelText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* noLevelText;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetBeatmap(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x1A2D758
    void SetBeatmap(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // public System.Void .ctor()
    // Offset: 0x1A2D7E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapSelectionView* New_ctor();
  }; // BeatmapSelectionView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSelectionView*, "", "BeatmapSelectionView");
#pragma pack(pop)
