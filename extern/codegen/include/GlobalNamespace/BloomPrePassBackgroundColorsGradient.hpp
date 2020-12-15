// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassBackgroundTextureGradient
#include "GlobalNamespace/BloomPrePassBackgroundTextureGradient.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient : public GlobalNamespace::BloomPrePassBackgroundTextureGradient {
    public:
    // Nested type: GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element
    class Element;
    // private BloomPrePassBackgroundColorsGradient/Element[] _elements
    // Offset: 0x30
    ::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>* elements;
    // public BloomPrePassBackgroundColorsGradient/Element[] get_elements()
    // Offset: 0x18753FC
    ::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>* get_elements();
    // private UnityEngine.Color EvaluateColor(System.Single t)
    // Offset: 0x1875470
    UnityEngine::Color EvaluateColor(float t);
    // protected override System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0x1875404
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int numberOfPixels);
    // public System.Void .ctor()
    // Offset: 0x18755F8
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::.ctor()
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassBackgroundColorsGradient* New_ctor();
  }; // BloomPrePassBackgroundColorsGradient
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradient*, "", "BloomPrePassBackgroundColorsGradient");
#pragma pack(pop)