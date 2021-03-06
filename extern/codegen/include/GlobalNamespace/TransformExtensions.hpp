// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TransformExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TransformExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TransformExtensions
    TransformExtensions() noexcept {}
    // static public UnityEngine.Quaternion InverseTransformRotation(UnityEngine.Transform trans, UnityEngine.Quaternion worldRotation)
    // Offset: 0x229D9D0
    static UnityEngine::Quaternion InverseTransformRotation(UnityEngine::Transform* trans, UnityEngine::Quaternion worldRotation);
  }; // TransformExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TransformExtensions*, "", "TransformExtensions");
