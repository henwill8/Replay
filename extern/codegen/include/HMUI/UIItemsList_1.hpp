// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: DataCallback because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.UIItemsList`1
  template<typename T>
  class UIItemsList_1 : public UnityEngine::MonoBehaviour {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, UnityEngine::MonoBehaviour*>));
    public:
    // Nested type: HMUI::UIItemsList_1::DataCallback<T>
    class DataCallback;
    // Autogenerated type: HMUI.UIItemsList`1/DataCallback
    class DataCallback : public System::MulticastDelegate, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, UnityEngine::MonoBehaviour*>));
      public:
      using declaring_type = UIItemsList_1<T>*;
      static constexpr std::string_view NESTED_NAME = "DataCallback";
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      static typename UIItemsList_1<T>::DataCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        return THROW_UNLESS(il2cpp_utils::New<typename UIItemsList_1<T>::DataCallback*>(object, method));
      }
      // public System.Void Invoke(System.Int32 idx, T item)
      // Offset: 0xFFFFFFFF
      void Invoke(int idx, T item) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", idx, item));
      }
      // public System.IAsyncResult BeginInvoke(System.Int32 idx, T item, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(int idx, T item, System::AsyncCallback* callback, ::Il2CppObject* object) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", idx, item, callback, object));
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      void EndInvoke(System::IAsyncResult* result) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
      }
    }; // HMUI.UIItemsList`1/DataCallback
    // private T _prefab
    // Offset: 0x0
    T prefab;
    // private UnityEngine.Transform _itemsContainer
    // Offset: 0x0
    UnityEngine::Transform* itemsContainer;
    // private System.Boolean _insertInTheBeginning
    // Offset: 0x0
    bool insertInTheBeginning;
    // private Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // private System.Collections.Generic.List`1<T> _items
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* items;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.IEnumerable`1<T> get_items()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<T>* get_items() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<T>*>(this, "get_items"));
    }
    // public System.Void SetData(System.Int32 numberOfElements, HMUI.UIItemsList`1/DataCallback<T> dataCallback)
    // Offset: 0xFFFFFFFF
    void SetData(int numberOfElements, typename HMUI::UIItemsList_1<T>::DataCallback* dataCallback) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", numberOfElements, dataCallback));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static UIItemsList_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<UIItemsList_1<T>*>());
    }
  }; // HMUI.UIItemsList`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::UIItemsList_1, "HMUI", "UIItemsList`1");
#pragma pack(pop)
