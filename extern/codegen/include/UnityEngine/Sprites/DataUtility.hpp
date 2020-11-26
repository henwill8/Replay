// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.Sprites
namespace UnityEngine::Sprites {
  // Autogenerated type: UnityEngine.Sprites.DataUtility
  class DataUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector4 GetInnerUV(UnityEngine.Sprite sprite)
    // Offset: 0x16C21A0
    static UnityEngine::Vector4 GetInnerUV(UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector4 GetOuterUV(UnityEngine.Sprite sprite)
    // Offset: 0x16C21B4
    static UnityEngine::Vector4 GetOuterUV(UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector4 GetPadding(UnityEngine.Sprite sprite)
    // Offset: 0x16C21C8
    static UnityEngine::Vector4 GetPadding(UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector2 GetMinSize(UnityEngine.Sprite sprite)
    // Offset: 0x16C21DC
    static UnityEngine::Vector2 GetMinSize(UnityEngine::Sprite* sprite);
  }; // UnityEngine.Sprites.DataUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprites::DataUtility*, "UnityEngine.Sprites", "DataUtility");
#pragma pack(pop)
