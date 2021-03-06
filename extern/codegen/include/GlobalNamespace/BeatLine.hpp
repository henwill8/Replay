// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: BeatLine
  // [] Offset: FFFFFFFF
  class BeatLine : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::BeatLine::Pool
    class Pool;
    // Nested type: GlobalNamespace::BeatLine::HighlightData
    struct HighlightData;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatLine/HighlightData
    // [] Offset: FFFFFFFF
    struct HighlightData/*, public System::ValueType*/ {
      public:
      // public System.Single startTime
      // Size: 0x4
      // Offset: 0x0
      float startTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single arriveDuration
      // Size: 0x4
      // Offset: 0x4
      float arriveDuration;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single halfJumpDuration
      // Size: 0x4
      // Offset: 0x8
      float halfJumpDuration;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Creating value type constructor for type: HighlightData
      constexpr HighlightData(float startTime_ = {}, float arriveDuration_ = {}, float halfJumpDuration_ = {}) noexcept : startTime{startTime_}, arriveDuration{arriveDuration_}, halfJumpDuration{halfJumpDuration_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // BeatLine/HighlightData
    #pragma pack(pop)
    static check_size<sizeof(BeatLine::HighlightData), 8 + sizeof(float)> __GlobalNamespace_BeatLine_HighlightDataSizeCheck;
    static_assert(sizeof(BeatLine::HighlightData) == 0xC);
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private UnityEngine.AnimationCurve _arriveFadeCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* arriveFadeCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _jumpFadeCurve
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* jumpFadeCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _alphaMul
    // Size: 0x4
    // Offset: 0x48
    float alphaMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxAlpha
    // Size: 0x4
    // Offset: 0x4C
    float maxAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Collections.Generic.List`1<BeatLine/HighlightData> _highlights
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>* highlights;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x68
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatLine
    BeatLine(GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight_ = {}, UnityEngine::AnimationCurve* arriveFadeCurve_ = {}, UnityEngine::AnimationCurve* jumpFadeCurve_ = {}, float alphaMul_ = {}, float maxAlpha_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatLine::HighlightData>* highlights_ = {}, UnityEngine::Color color_ = {}, float rotation_ = {}) noexcept : tubeBloomPrePassLight{tubeBloomPrePassLight_}, arriveFadeCurve{arriveFadeCurve_}, jumpFadeCurve{jumpFadeCurve_}, alphaMul{alphaMul_}, maxAlpha{maxAlpha_}, highlights{highlights_}, color{color_}, rotation{rotation_} {}
    // public System.Boolean get_isFinished()
    // Offset: 0x1067F50
    bool get_isFinished();
    // public System.Single get_rotation()
    // Offset: 0x1067FA8
    float get_rotation();
    // public System.Void Init(UnityEngine.Vector3 position, System.Single rotation)
    // Offset: 0x1067FB0
    void Init(UnityEngine::Vector3 position, float rotation);
    // public System.Void AddHighlight(System.Single startTime, System.Single arriveDuration, System.Single jumpDuration)
    // Offset: 0x10680C8
    void AddHighlight(float startTime, float arriveDuration, float jumpDuration);
    // public System.Void ManualUpdate(System.Single songTime)
    // Offset: 0x106814C
    void ManualUpdate(float songTime);
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x10680BC
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x10682C0
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatLine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatLine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatLine*, creationType>()));
    }
  }; // BeatLine
  #pragma pack(pop)
  static check_size<sizeof(BeatLine), 104 + sizeof(float)> __GlobalNamespace_BeatLineSizeCheck;
  static_assert(sizeof(BeatLine) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine*, "", "BeatLine");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLine::HighlightData, "", "BeatLine/HighlightData");
