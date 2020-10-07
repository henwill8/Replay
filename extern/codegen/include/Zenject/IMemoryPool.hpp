// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IMemoryPool
  class IMemoryPool {
    public:
    // public System.Int32 get_NumTotal()
    // Offset: 0xFFFFFFFF
    int get_NumTotal();
    // public System.Int32 get_NumActive()
    // Offset: 0xFFFFFFFF
    int get_NumActive();
    // public System.Int32 get_NumInactive()
    // Offset: 0xFFFFFFFF
    int get_NumInactive();
    // public System.Type get_ItemType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ItemType();
    // public System.Void Resize(System.Int32 desiredPoolSize)
    // Offset: 0xFFFFFFFF
    void Resize(int desiredPoolSize);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear();
    // public System.Void ExpandBy(System.Int32 numToAdd)
    // Offset: 0xFFFFFFFF
    void ExpandBy(int numToAdd);
    // public System.Void ShrinkBy(System.Int32 numToRemove)
    // Offset: 0xFFFFFFFF
    void ShrinkBy(int numToRemove);
    // public System.Void Despawn(System.Object obj)
    // Offset: 0xFFFFFFFF
    void Zenject_IMemoryPool_Despawn(::Il2CppObject* obj);
  }; // Zenject.IMemoryPool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IMemoryPool*, "Zenject", "IMemoryPool");
#pragma pack(pop)
