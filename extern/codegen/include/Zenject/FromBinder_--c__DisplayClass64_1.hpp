// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass64_1
  class FromBinder::$$c__DisplayClass64_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.MonoBehaviour monoBehaviour
    // Offset: 0x10
    UnityEngine::MonoBehaviour* monoBehaviour;
    // Creating conversion operator: operator UnityEngine::MonoBehaviour*
    constexpr operator UnityEngine::MonoBehaviour*() const noexcept {
      return monoBehaviour;
    }
    // System.Boolean <FromComponentsSibling>b__2(UnityEngine.Component x)
    // Offset: 0x129C940
    bool $FromComponentsSibling$b__2(UnityEngine::Component* x);
    // public System.Void .ctor()
    // Offset: 0x129C938
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass64_1* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass64_1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass64_1*, "Zenject", "FromBinder/<>c__DisplayClass64_1");
#pragma pack(pop)
