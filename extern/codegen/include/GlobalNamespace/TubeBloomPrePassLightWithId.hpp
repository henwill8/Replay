// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TubeBloomPrePassLightWithId
  class TubeBloomPrePassLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // private System.Boolean _setOnlyOnce
    // Offset: 0x38
    bool setOnlyOnce;
    // private System.Boolean _setColorOnly
    // Offset: 0x39
    bool setColorOnly;
    // public UnityEngine.Color get_color()
    // Offset: 0x1882CFC
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1882D1C
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1882D80
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TubeBloomPrePassLightWithId* New_ctor();
  }; // TubeBloomPrePassLightWithId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLightWithId*, "", "TubeBloomPrePassLightWithId");
#pragma pack(pop)
