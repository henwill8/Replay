// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnEventValueParser
  // [] Offset: FFFFFFFF
  class BTSCharacterSpawnEventValueParser : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BTSCharacterSpawnEventValueParser
    BTSCharacterSpawnEventValueParser() noexcept {}
    // static field const value: static private System.Int32 kPrefabMask
    static constexpr const int kPrefabMask = 255;
    // Get static field: static private System.Int32 kPrefabMask
    static int _get_kPrefabMask();
    // Set static field: static private System.Int32 kPrefabMask
    static void _set_kPrefabMask(int value);
    // static field const value: static private System.Int32 kPrefabBitOffset
    static constexpr const int kPrefabBitOffset = 0;
    // Get static field: static private System.Int32 kPrefabBitOffset
    static int _get_kPrefabBitOffset();
    // Set static field: static private System.Int32 kPrefabBitOffset
    static void _set_kPrefabBitOffset(int value);
    // static field const value: static private System.Int32 kAnimationMask
    static constexpr const int kAnimationMask = 65280;
    // Get static field: static private System.Int32 kAnimationMask
    static int _get_kAnimationMask();
    // Set static field: static private System.Int32 kAnimationMask
    static void _set_kAnimationMask(int value);
    // static field const value: static private System.Int32 kAnimationBitOffset
    static constexpr const int kAnimationBitOffset = 8;
    // Get static field: static private System.Int32 kAnimationBitOffset
    static int _get_kAnimationBitOffset();
    // Set static field: static private System.Int32 kAnimationBitOffset
    static void _set_kAnimationBitOffset(int value);
    // static field const value: static private System.Int32 kAlternativeMaterialMask
    static constexpr const int kAlternativeMaterialMask = 65536;
    // Get static field: static private System.Int32 kAlternativeMaterialMask
    static int _get_kAlternativeMaterialMask();
    // Set static field: static private System.Int32 kAlternativeMaterialMask
    static void _set_kAlternativeMaterialMask(int value);
    // static field const value: static private System.Int32 kAlternativeMaterialOffset
    static constexpr const int kAlternativeMaterialOffset = 16;
    // Get static field: static private System.Int32 kAlternativeMaterialOffset
    static int _get_kAlternativeMaterialOffset();
    // Set static field: static private System.Int32 kAlternativeMaterialOffset
    static void _set_kAlternativeMaterialOffset(int value);
    // static public System.Int32 GetPrefabId(System.Int32 value)
    // Offset: 0x103A510
    static int GetPrefabId(int value);
    // static public System.Int32 GetAnimationId(System.Int32 value)
    // Offset: 0x103A518
    static int GetAnimationId(int value);
    // static public System.Boolean GetIsAlternativeMaterial(System.Int32 value)
    // Offset: 0x103A88C
    static bool GetIsAlternativeMaterial(int value);
    // static public System.Int32 MergeValuesIntoOneInt(System.Int32 prefabId, System.Int32 animationId, System.Boolean isAlternativeMaterial)
    // Offset: 0x103A9A8
    static int MergeValuesIntoOneInt(int prefabId, int animationId, bool isAlternativeMaterial);
  }; // BTSCharacterSpawnEventValueParser
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnEventValueParser*, "", "BTSCharacterSpawnEventValueParser");
