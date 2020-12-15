// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabInstantiatorCached
  class PrefabInstantiatorCached : public ::Il2CppObject/*, public Zenject::IPrefabInstantiator*/ {
    public:
    // private readonly Zenject.IPrefabInstantiator _subInstantiator
    // Offset: 0x10
    Zenject::IPrefabInstantiator* subInstantiator;
    // private UnityEngine.GameObject _gameObject
    // Offset: 0x18
    UnityEngine::GameObject* gameObject;
    // Creating interface conversion operator: operator Zenject::IPrefabInstantiator
    operator Zenject::IPrefabInstantiator() noexcept {
      return *reinterpret_cast<Zenject::IPrefabInstantiator*>(this);
    }
    // public System.Void .ctor(Zenject.IPrefabInstantiator subInstantiator)
    // Offset: 0x134A7F0
    static PrefabInstantiatorCached* New_ctor(Zenject::IPrefabInstantiator* subInstantiator);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0x134B640
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: System.Collections.Generic.List`1<Zenject.TypeValuePair> IPrefabInstantiator::get_ExtraArguments()
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public System.Type get_ArgumentTarget()
    // Offset: 0x134B6F4
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: System.Type IPrefabInstantiator::get_ArgumentTarget()
    System::Type* get_ArgumentTarget();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0x134B7A4
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: Zenject.GameObjectCreationParameters IPrefabInstantiator::get_GameObjectCreationParameters()
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public UnityEngine.Object GetPrefab()
    // Offset: 0x134B858
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: UnityEngine.Object IPrefabInstantiator::GetPrefab()
    UnityEngine::Object* GetPrefab();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    // Offset: 0x134B90C
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: UnityEngine.GameObject IPrefabInstantiator::Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction);
  }; // Zenject.PrefabInstantiatorCached
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiatorCached*, "Zenject", "PrefabInstantiatorCached");
#pragma pack(pop)