// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassBackgroundColor
  class BloomPrePassBackgroundColor : public GlobalNamespace::BloomPrePassNonLightPass {
    public:
    // private System.Single _intensity
    // Offset: 0x20
    float intensity;
    // private System.Single _minAlpha
    // Offset: 0x24
    float minAlpha;
    // private System.Single _grayscaleFactor
    // Offset: 0x28
    float grayscaleFactor;
    // private UnityEngine.Shader _shader
    // Offset: 0x30
    UnityEngine::Shader* shader;
    // private UnityEngine.Color _color
    // Offset: 0x38
    UnityEngine::Color color;
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // Get static field: static private System.Boolean _initialized
    static bool _get__initialized();
    // Set static field: static private System.Boolean _initialized
    static void _set__initialized(bool value);
    // public UnityEngine.Color get_color()
    // Offset: 0x187502C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1875038
    void set_color(UnityEngine::Color value);
    // private UnityEngine.Color get_bgColor()
    // Offset: 0x1875044
    UnityEngine::Color get_bgColor();
    // private System.Void InitIfNeeded()
    // Offset: 0x18750D0
    void InitIfNeeded();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x187522C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // public System.Void .ctor()
    // Offset: 0x1875314
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassBackgroundColor* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1875398
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBackgroundColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColor*, "", "BloomPrePassBackgroundColor");
#pragma pack(pop)