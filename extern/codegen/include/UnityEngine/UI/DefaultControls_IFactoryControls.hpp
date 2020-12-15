// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.DefaultControls/IFactoryControls
  class DefaultControls::IFactoryControls {
    public:
    // public UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, ::Array<System::Type*>* components);
    // Creating initializer_list -> params proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, std::initializer_list<System::Type*> components);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    template<class ...TParams>
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, TParams&&... components) {
      return CreateGameObject(name, {components...});
    }
  }; // UnityEngine.UI.DefaultControls/IFactoryControls
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::IFactoryControls*, "UnityEngine.UI", "DefaultControls/IFactoryControls");
#pragma pack(pop)