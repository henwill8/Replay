// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InstancedMaterialLightWithId
  class InstancedMaterialLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // private MaterialPropertyBlockColorSetter _materialPropertyBlockColorSetter
    // Offset: 0x30
    GlobalNamespace::MaterialPropertyBlockColorSetter* materialPropertyBlockColorSetter;
    // private System.Boolean _setColorOnly
    // Offset: 0x38
    bool setColorOnly;
    // private System.Single _intensity
    // Offset: 0x3C
    float intensity;
    // private System.Single _minAlpha
    // Offset: 0x40
    float minAlpha;
    // private UnityEngine.Color _color
    // Offset: 0x44
    UnityEngine::Color color;
    // protected override System.Void OnEnable()
    // Offset: 0x1879590
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::OnEnable()
    void OnEnable();
    // public override System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x18795F8
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color newColor)
    void ColorWasSet(UnityEngine::Color newColor);
    // public System.Void .ctor()
    // Offset: 0x18796E0
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InstancedMaterialLightWithId* New_ctor();
  }; // InstancedMaterialLightWithId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancedMaterialLightWithId*, "", "InstancedMaterialLightWithId");
#pragma pack(pop)
