// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IInstantiator
  class IInstantiator {
    public:
    // public T Instantiate()
    // Offset: 0xFFFFFFFF
    template<class T>
    T Instantiate() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public T Instantiate(System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T Instantiate(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, extraArgs)));
    }
    // public System.Object Instantiate(System.Type concreteType)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Instantiate(System::Type* concreteType);
    // public System.Object Instantiate(System.Type concreteType, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Instantiate(System::Type* concreteType, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs);
    // public TContract InstantiateComponent(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    TContract InstantiateComponent(UnityEngine::GameObject* gameObject) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<TContract>(this, "InstantiateComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, gameObject)));
    }
    // public TContract InstantiateComponent(UnityEngine.GameObject gameObject, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    TContract InstantiateComponent(UnityEngine::GameObject* gameObject, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<TContract>(this, "InstantiateComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, gameObject, extraArgs)));
    }
    // public UnityEngine.Component InstantiateComponent(System.Type componentType, UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    UnityEngine::Component* InstantiateComponent(System::Type* componentType, UnityEngine::GameObject* gameObject);
    // public UnityEngine.Component InstantiateComponent(System.Type componentType, UnityEngine.GameObject gameObject, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    UnityEngine::Component* InstantiateComponent(System::Type* componentType, UnityEngine::GameObject* gameObject, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs);
    // public T InstantiateComponentOnNewGameObject()
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiateComponentOnNewGameObject() {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiateComponentOnNewGameObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public T InstantiateComponentOnNewGameObject(System.String gameObjectName)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiateComponentOnNewGameObject(::Il2CppString* gameObjectName) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiateComponentOnNewGameObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObjectName)));
    }
    // public T InstantiateComponentOnNewGameObject(System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiateComponentOnNewGameObject(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiateComponentOnNewGameObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, extraArgs)));
    }
    // public T InstantiateComponentOnNewGameObject(System.String gameObjectName, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiateComponentOnNewGameObject(::Il2CppString* gameObjectName, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiateComponentOnNewGameObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObjectName, extraArgs)));
    }
    // public UnityEngine.GameObject InstantiatePrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* InstantiatePrefab(UnityEngine::Object* prefab);
    // public UnityEngine.GameObject InstantiatePrefab(UnityEngine.Object prefab, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* InstantiatePrefab(UnityEngine::Object* prefab, UnityEngine::Transform* parentTransform);
    // public UnityEngine.GameObject InstantiatePrefab(UnityEngine.Object prefab, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* InstantiatePrefab(UnityEngine::Object* prefab, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parentTransform);
    // public UnityEngine.GameObject InstantiatePrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* InstantiatePrefabResource(::Il2CppString* resourcePath);
    // public UnityEngine.GameObject InstantiatePrefabResource(System.String resourcePath, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* InstantiatePrefabResource(::Il2CppString* resourcePath, UnityEngine::Transform* parentTransform);
    // public UnityEngine.GameObject InstantiatePrefabResource(System.String resourcePath, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* InstantiatePrefabResource(::Il2CppString* resourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parentTransform);
    // public T InstantiatePrefabForComponent(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabForComponent(UnityEngine::Object* prefab) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, prefab)));
    }
    // public T InstantiatePrefabForComponent(UnityEngine.Object prefab, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabForComponent(UnityEngine::Object* prefab, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, prefab, extraArgs)));
    }
    // public T InstantiatePrefabForComponent(UnityEngine.Object prefab, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabForComponent(UnityEngine::Object* prefab, UnityEngine::Transform* parentTransform) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, prefab, parentTransform)));
    }
    // public T InstantiatePrefabForComponent(UnityEngine.Object prefab, UnityEngine.Transform parentTransform, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabForComponent(UnityEngine::Object* prefab, UnityEngine::Transform* parentTransform, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, prefab, parentTransform, extraArgs)));
    }
    // public T InstantiatePrefabForComponent(UnityEngine.Object prefab, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabForComponent(UnityEngine::Object* prefab, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parentTransform) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, prefab, position, rotation, parentTransform)));
    }
    // public T InstantiatePrefabForComponent(UnityEngine.Object prefab, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parentTransform, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabForComponent(UnityEngine::Object* prefab, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parentTransform, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, prefab, position, rotation, parentTransform, extraArgs)));
    }
    // public System.Object InstantiatePrefabForComponent(System.Type concreteType, UnityEngine.Object prefab, UnityEngine.Transform parentTransform, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* InstantiatePrefabForComponent(System::Type* concreteType, UnityEngine::Object* prefab, UnityEngine::Transform* parentTransform, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs);
    // public T InstantiatePrefabResourceForComponent(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabResourceForComponent(::Il2CppString* resourcePath) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabResourceForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath)));
    }
    // public T InstantiatePrefabResourceForComponent(System.String resourcePath, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabResourceForComponent(::Il2CppString* resourcePath, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabResourceForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath, extraArgs)));
    }
    // public T InstantiatePrefabResourceForComponent(System.String resourcePath, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabResourceForComponent(::Il2CppString* resourcePath, UnityEngine::Transform* parentTransform) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabResourceForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath, parentTransform)));
    }
    // public T InstantiatePrefabResourceForComponent(System.String resourcePath, UnityEngine.Transform parentTransform, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabResourceForComponent(::Il2CppString* resourcePath, UnityEngine::Transform* parentTransform, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabResourceForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath, parentTransform, extraArgs)));
    }
    // public T InstantiatePrefabResourceForComponent(System.String resourcePath, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parentTransform)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabResourceForComponent(::Il2CppString* resourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parentTransform) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabResourceForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath, position, rotation, parentTransform)));
    }
    // public T InstantiatePrefabResourceForComponent(System.String resourcePath, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parentTransform, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiatePrefabResourceForComponent(::Il2CppString* resourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parentTransform, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiatePrefabResourceForComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath, position, rotation, parentTransform, extraArgs)));
    }
    // public System.Object InstantiatePrefabResourceForComponent(System.Type concreteType, System.String resourcePath, UnityEngine.Transform parentTransform, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* InstantiatePrefabResourceForComponent(System::Type* concreteType, ::Il2CppString* resourcePath, UnityEngine::Transform* parentTransform, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs);
    // public T InstantiateScriptableObjectResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiateScriptableObjectResource(::Il2CppString* resourcePath) {
      static_assert(std::is_convertible_v<T, UnityEngine::ScriptableObject*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiateScriptableObjectResource", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath)));
    }
    // public T InstantiateScriptableObjectResource(System.String resourcePath, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    template<class T>
    T InstantiateScriptableObjectResource(::Il2CppString* resourcePath, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs) {
      static_assert(std::is_convertible_v<T, UnityEngine::ScriptableObject*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "InstantiateScriptableObjectResource", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, resourcePath, extraArgs)));
    }
    // public System.Object InstantiateScriptableObjectResource(System.Type scriptableObjectType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* InstantiateScriptableObjectResource(System::Type* scriptableObjectType, ::Il2CppString* resourcePath);
    // public System.Object InstantiateScriptableObjectResource(System.Type scriptableObjectType, System.String resourcePath, System.Collections.Generic.IEnumerable`1<System.Object> extraArgs)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* InstantiateScriptableObjectResource(System::Type* scriptableObjectType, ::Il2CppString* resourcePath, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* extraArgs);
    // public UnityEngine.GameObject CreateEmptyGameObject(System.String name)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* CreateEmptyGameObject(::Il2CppString* name);
  }; // Zenject.IInstantiator
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::IInstantiator*, "Zenject", "IInstantiator");
#pragma pack(pop)
