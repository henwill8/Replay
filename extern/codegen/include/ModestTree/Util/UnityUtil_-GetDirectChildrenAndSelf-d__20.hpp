// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetDirectChildrenAndSelf>d__20
  class UnityUtil::$GetDirectChildrenAndSelf$d__20 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private UnityEngine.GameObject <>2__current
    // Offset: 0x18
    UnityEngine::GameObject* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // private UnityEngine.GameObject obj
    // Offset: 0x28
    UnityEngine::GameObject* obj;
    // public UnityEngine.GameObject <>3__obj
    // Offset: 0x30
    UnityEngine::GameObject* $$3__obj;
    // private System.Collections.IEnumerator <>7__wrap1
    // Offset: 0x38
    System::Collections::IEnumerator* $$7__wrap1;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xD65580
    static UnityUtil::$GetDirectChildrenAndSelf$d__20* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xD65FF4
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xD65FD8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xD660C0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private UnityEngine.GameObject System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
    // Offset: 0xD6636C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    UnityEngine::GameObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xD66374
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xD663D4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
    // Offset: 0xD663DC
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xD66490
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetDirectChildrenAndSelf>d__20
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*, "ModestTree.Util", "UnityUtil/<GetDirectChildrenAndSelf>d__20");
#pragma pack(pop)
