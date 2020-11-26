// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: IResourceReader
  class IResourceReader;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceSet
  class ResourceSet : public ::Il2CppObject/*, public System::IDisposable, public System::Collections::IEnumerable*/ {
    public:
    // protected System.Resources.IResourceReader Reader
    // Offset: 0x10
    System::Resources::IResourceReader* Reader;
    // protected System.Collections.Hashtable Table
    // Offset: 0x18
    System::Collections::Hashtable* Table;
    // private System.Collections.Hashtable _caseInsensitiveTable
    // Offset: 0x20
    System::Collections::Hashtable* caseInsensitiveTable;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // System.Void .ctor(System.Boolean junk)
    // Offset: 0x15DC864
    static ResourceSet* New_ctor(bool junk);
    // private System.Void CommonInit()
    // Offset: 0x15DC7FC
    void CommonInit();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15DC86C
    void Dispose(bool disposing);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x15DC96C
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // private System.Collections.IDictionaryEnumerator GetEnumeratorHelper()
    // Offset: 0x15DC970
    System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();
    // public System.String GetString(System.String name)
    // Offset: 0x15DCA1C
    ::Il2CppString* GetString(::Il2CppString* name);
    // public System.String GetString(System.String name, System.Boolean ignoreCase)
    // Offset: 0x15DCC84
    ::Il2CppString* GetString(::Il2CppString* name, bool ignoreCase);
    // public System.Object GetObject(System.String name)
    // Offset: 0x15DD178
    ::Il2CppObject* GetObject(::Il2CppString* name);
    // public System.Object GetObject(System.String name, System.Boolean ignoreCase)
    // Offset: 0x15DD17C
    ::Il2CppObject* GetObject(::Il2CppString* name, bool ignoreCase);
    // private System.Object GetObjectInternal(System.String name)
    // Offset: 0x15DCB8C
    ::Il2CppObject* GetObjectInternal(::Il2CppString* name);
    // private System.Object GetCaseInsensitiveObjectInternal(System.String name)
    // Offset: 0x15DCE88
    ::Il2CppObject* GetCaseInsensitiveObjectInternal(::Il2CppString* name);
    // protected System.Void .ctor()
    // Offset: 0x15DC7D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ResourceSet* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x15D7B34
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x15DCA18
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Resources.ResourceSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceSet*, "System.Resources", "ResourceSet");
#pragma pack(pop)
