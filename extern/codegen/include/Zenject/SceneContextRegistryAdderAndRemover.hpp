// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContextRegistry
  class SceneContextRegistry;
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SceneContextRegistryAdderAndRemover
  class SceneContextRegistryAdderAndRemover : public ::Il2CppObject/*, public Zenject::IInitializable, public System::IDisposable*/ {
    public:
    // private readonly Zenject.SceneContextRegistry _registry
    // Offset: 0x10
    Zenject::SceneContextRegistry* registry;
    // private readonly Zenject.SceneContext _sceneContext
    // Offset: 0x18
    Zenject::SceneContext* sceneContext;
    // Creating interface conversion operator: operator Zenject::IInitializable
    operator Zenject::IInitializable() noexcept {
      return *reinterpret_cast<Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(Zenject.SceneContext sceneContext, Zenject.SceneContextRegistry registry)
    // Offset: 0x1351D9C
    static SceneContextRegistryAdderAndRemover* New_ctor(Zenject::SceneContext* sceneContext, Zenject::SceneContextRegistry* registry);
    // public System.Void Initialize()
    // Offset: 0x1351DEC
    // Implemented from: Zenject.IInitializable
    // Base method: System.Void IInitializable::Initialize()
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x1351E0C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Zenject.SceneContextRegistryAdderAndRemover
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContextRegistryAdderAndRemover*, "Zenject", "SceneContextRegistryAdderAndRemover");
#pragma pack(pop)
