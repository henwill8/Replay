// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.UnityUtil/<>c
  class UnityUtil::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly ModestTree.Util.UnityUtil/<>c <>9
    static ModestTree::Util::UnityUtil::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.Util.UnityUtil/<>c <>9
    static void _set_$$9(ModestTree::Util::UnityUtil::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> <>9__3_0
    static System::Func_2<UnityEngine::SceneManagement::Scene, bool>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::SceneManagement::Scene, bool>* value);
    // Get static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__15_0
    static System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* _get_$$9__15_0();
    // Set static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__15_0
    static void _set_$$9__15_0(System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* value);
    // Get static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__18_0
    static System::Func_2<UnityEngine::Component*, int>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__18_0
    static void _set_$$9__18_0(System::Func_2<UnityEngine::Component*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__19_0
    static System::Func_2<UnityEngine::Component*, int>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__19_0
    static void _set_$$9__19_0(System::Func_2<UnityEngine::Component*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__22_0
    static System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* _get_$$9__22_0();
    // Set static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__22_0
    static void _set_$$9__22_0(System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__23_0
    static System::Func_2<UnityEngine::GameObject*, bool>* _get_$$9__23_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__23_0
    static void _set_$$9__23_0(System::Func_2<UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x10E80D4
    static void _cctor();
    // System.Boolean <get_AllLoadedScenes>b__3_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x10E8144
    bool $get_AllLoadedScenes$b__3_0(UnityEngine::SceneManagement::Scene scene);
    // UnityEngine.GameObject <GetRootParentOrSelf>b__15_0(UnityEngine.Transform x)
    // Offset: 0x10E8170
    UnityEngine::GameObject* $GetRootParentOrSelf$b__15_0(UnityEngine::Transform* x);
    // System.Int32 <GetComponentsInChildrenTopDown>b__18_0(UnityEngine.Component x)
    // Offset: 0x10E818C
    int $GetComponentsInChildrenTopDown$b__18_0(UnityEngine::Component* x);
    // System.Int32 <GetComponentsInChildrenBottomUp>b__19_0(UnityEngine.Component x)
    // Offset: 0x10E8224
    int $GetComponentsInChildrenBottomUp$b__19_0(UnityEngine::Component* x);
    // UnityEngine.GameObject <GetAllGameObjects>b__22_0(UnityEngine.Transform x)
    // Offset: 0x10E82BC
    UnityEngine::GameObject* $GetAllGameObjects$b__22_0(UnityEngine::Transform* x);
    // System.Boolean <GetAllRootGameObjects>b__23_0(UnityEngine.GameObject x)
    // Offset: 0x10E82D8
    bool $GetAllRootGameObjects$b__23_0(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0x10E813C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UnityUtil::$$c* New_ctor();
  }; // ModestTree.Util.UnityUtil/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$$c*, "ModestTree.Util", "UnityUtil/<>c");
#pragma pack(pop)
