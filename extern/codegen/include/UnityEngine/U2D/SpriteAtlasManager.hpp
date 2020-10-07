// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlas
  class SpriteAtlas;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Autogenerated type: UnityEngine.U2D.SpriteAtlasManager
  class SpriteAtlasManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static System::Action_2<::Il2CppString*, System::Action_1<UnityEngine::U2D::SpriteAtlas*>*>* _get_atlasRequested();
    // Set static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static void _set_atlasRequested(System::Action_2<::Il2CppString*, System::Action_1<UnityEngine::U2D::SpriteAtlas*>*>* value);
    // Get static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static System::Action_1<UnityEngine::U2D::SpriteAtlas*>* _get_atlasRegistered();
    // Set static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static void _set_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static private System.Boolean RequestAtlas(System.String tag)
    // Offset: 0x139A038
    static bool RequestAtlas(::Il2CppString* tag);
    // static public System.Void add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x139A134
    static void add_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static public System.Void remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x139A224
    static void remove_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static private System.Void PostRegisteredAtlas(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x139A314
    static void PostRegisteredAtlas(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static System.Void Register(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x139A3A0
    static void Register(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static private System.Void .cctor()
    // Offset: 0x139A3E0
    static void _cctor();
  }; // UnityEngine.U2D.SpriteAtlasManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteAtlasManager*, "UnityEngine.U2D", "SpriteAtlasManager");
#pragma pack(pop)
