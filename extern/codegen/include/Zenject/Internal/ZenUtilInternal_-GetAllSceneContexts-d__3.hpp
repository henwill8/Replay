// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
  class ZenUtilInternal::$GetAllSceneContexts$d__3 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>, public System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private Zenject.SceneContext <>2__current
    // Offset: 0x18
    Zenject::SceneContext* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> <>7__wrap1
    // Offset: 0x28
    System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>* $$7__wrap1;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFC216C
    static ZenUtilInternal::$GetAllSceneContexts$d__3* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xFC305C
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFC3040
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFC311C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private Zenject.SceneContext System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current()
    // Offset: 0xFC3530
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    Zenject::SceneContext* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFC3538
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFC3598
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Zenject.SceneContext> System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator()
    // Offset: 0xFC35A0
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFC3638
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*, "Zenject.Internal", "ZenUtilInternal/<GetAllSceneContexts>d__3");
#pragma pack(pop)
