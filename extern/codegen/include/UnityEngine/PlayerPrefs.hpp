// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PlayerPrefs
  class PlayerPrefs : public ::Il2CppObject {
    public:
    // static private System.Boolean TrySetInt(System.String key, System.Int32 value)
    // Offset: 0x1734F88
    static bool TrySetInt(::Il2CppString* key, int value);
    // static private System.Boolean TrySetSetString(System.String key, System.String value)
    // Offset: 0x1734FD8
    static bool TrySetSetString(::Il2CppString* key, ::Il2CppString* value);
    // static public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x1735028
    static void SetInt(::Il2CppString* key, int value);
    // static public System.Int32 GetInt(System.String key, System.Int32 defaultValue)
    // Offset: 0x1735154
    static int GetInt(::Il2CppString* key, int defaultValue);
    // static public System.Int32 GetInt(System.String key)
    // Offset: 0x17351A4
    static int GetInt(::Il2CppString* key);
    // static public System.Void SetString(System.String key, System.String value)
    // Offset: 0x17351E8
    static void SetString(::Il2CppString* key, ::Il2CppString* value);
    // static public System.String GetString(System.String key, System.String defaultValue)
    // Offset: 0x173529C
    static ::Il2CppString* GetString(::Il2CppString* key, ::Il2CppString* defaultValue);
    // static public System.Void DeleteAll()
    // Offset: 0x17352EC
    static void DeleteAll();
  }; // UnityEngine.PlayerPrefs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
#pragma pack(pop)
