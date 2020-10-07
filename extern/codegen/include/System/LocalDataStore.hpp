// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreElement
  class LocalDataStoreElement;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.LocalDataStore
  class LocalDataStore : public ::Il2CppObject {
    public:
    // private System.LocalDataStoreElement[] m_DataTable
    // Offset: 0x10
    ::Array<System::LocalDataStoreElement*>* m_DataTable;
    // private System.LocalDataStoreMgr m_Manager
    // Offset: 0x18
    System::LocalDataStoreMgr* m_Manager;
    // public System.Void .ctor(System.LocalDataStoreMgr mgr, System.Int32 InitialCapacity)
    // Offset: 0x1016574
    static LocalDataStore* New_ctor(System::LocalDataStoreMgr* mgr, int InitialCapacity);
    // System.Void Dispose()
    // Offset: 0x1016600
    void Dispose();
    // public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x10166FC
    ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x10168B0
    void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // System.Void FreeData(System.Int32 slot, System.Int64 cookie)
    // Offset: 0x1016C88
    void FreeData(int slot, int64_t cookie);
    // private System.LocalDataStoreElement PopulateElement(System.LocalDataStoreSlot slot)
    // Offset: 0x10169C8
    System::LocalDataStoreElement* PopulateElement(System::LocalDataStoreSlot* slot);
  }; // System.LocalDataStore
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStore*, "System", "LocalDataStore");
#pragma pack(pop)
