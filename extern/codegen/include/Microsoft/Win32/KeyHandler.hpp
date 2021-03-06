// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
  // Forward declaring type: RegistryValueOptions
  struct RegistryValueOptions;
}
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.KeyHandler
  // [] Offset: FFFFFFFF
  class KeyHandler : public ::Il2CppObject {
    public:
    // public System.String Dir
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Dir;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String ActualDir
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ActualDir;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean IsVolatile
    // Size: 0x1
    // Offset: 0x20
    bool IsVolatile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsVolatile and: values
    char __padding2[0x7] = {};
    // private System.Collections.Hashtable values
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* values;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.String file
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* file;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean dirty
    // Size: 0x1
    // Offset: 0x38
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: KeyHandler
    KeyHandler(::Il2CppString* Dir_ = {}, ::Il2CppString* ActualDir_ = {}, bool IsVolatile_ = {}, System::Collections::Hashtable* values_ = {}, ::Il2CppString* file_ = {}, bool dirty_ = {}) noexcept : Dir{Dir_}, ActualDir{ActualDir_}, IsVolatile{IsVolatile_}, values{values_}, file{file_}, dirty{dirty_} {}
    // Get static field: static private System.Collections.Hashtable key_to_handler
    static System::Collections::Hashtable* _get_key_to_handler();
    // Set static field: static private System.Collections.Hashtable key_to_handler
    static void _set_key_to_handler(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable dir_to_handler
    static System::Collections::Hashtable* _get_dir_to_handler();
    // Set static field: static private System.Collections.Hashtable dir_to_handler
    static void _set_dir_to_handler(System::Collections::Hashtable* value);
    // Get static field: static private System.String user_store
    static ::Il2CppString* _get_user_store();
    // Set static field: static private System.String user_store
    static void _set_user_store(::Il2CppString* value);
    // Get static field: static private System.String machine_store
    static ::Il2CppString* _get_machine_store();
    // Set static field: static private System.String machine_store
    static void _set_machine_store(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x187E740
    static void _cctor();
    // private System.Void .ctor(Microsoft.Win32.RegistryKey rkey, System.String basedir)
    // Offset: 0x187EA90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyHandler* New_ctor(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* basedir) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::KeyHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyHandler*, creationType>(rkey, basedir)));
    }
    // private System.Void .ctor(Microsoft.Win32.RegistryKey rkey, System.String basedir, System.Boolean is_volatile)
    // Offset: 0x187EA98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyHandler* New_ctor(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* basedir, bool is_volatile) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::KeyHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyHandler*, creationType>(rkey, basedir, is_volatile)));
    }
    // public System.Void Load()
    // Offset: 0x187ED58
    void Load();
    // private System.Void LoadKey(System.Security.SecurityElement se)
    // Offset: 0x187F3CC
    void LoadKey(System::Security::SecurityElement* se);
    // public Microsoft.Win32.RegistryKey Ensure(Microsoft.Win32.RegistryKey rkey, System.String extra, System.Boolean writable, System.Boolean is_volatile)
    // Offset: 0x187FA80
    Microsoft::Win32::RegistryKey* Ensure(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* extra, bool writable, bool is_volatile);
    // public Microsoft.Win32.RegistryKey Probe(Microsoft.Win32.RegistryKey rkey, System.String extra, System.Boolean writable)
    // Offset: 0x187FE40
    Microsoft::Win32::RegistryKey* Probe(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* extra, bool writable);
    // static private System.String CombineName(Microsoft.Win32.RegistryKey rkey, System.String extra)
    // Offset: 0x187FD40
    static ::Il2CppString* CombineName(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* extra);
    // static private System.Int64 GetSystemBootTime()
    // Offset: 0x18803EC
    static int64_t GetSystemBootTime();
    // static private System.Int64 GetRegisteredBootTime(System.String path)
    // Offset: 0x1880708
    static int64_t GetRegisteredBootTime(::Il2CppString* path);
    // static private System.Void SaveRegisteredBootTime(System.String path, System.Int64 btime)
    // Offset: 0x18809DC
    static void SaveRegisteredBootTime(::Il2CppString* path, int64_t btime);
    // static private System.Void CleanVolatileKeys()
    // Offset: 0x187E84C
    static void CleanVolatileKeys();
    // static public System.Boolean VolatileKeyExists(System.String dir)
    // Offset: 0x18801CC
    static bool VolatileKeyExists(::Il2CppString* dir);
    // static public System.String GetVolatileDir(System.String dir)
    // Offset: 0x187EC98
    static ::Il2CppString* GetVolatileDir(::Il2CppString* dir);
    // static public Microsoft.Win32.KeyHandler Lookup(Microsoft.Win32.RegistryKey rkey, System.Boolean createNonExisting)
    // Offset: 0x1880FD8
    static Microsoft::Win32::KeyHandler* Lookup(Microsoft::Win32::RegistryKey* rkey, bool createNonExisting);
    // static private System.String GetRootFromDir(System.String dir)
    // Offset: 0x1880E98
    static ::Il2CppString* GetRootFromDir(::Il2CppString* dir);
    // static public System.Void Drop(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1881514
    static void Drop(Microsoft::Win32::RegistryKey* rkey);
    // public System.Object GetValue(System.String name, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0x18819B4
    ::Il2CppObject* GetValue(::Il2CppString* name, Microsoft::Win32::RegistryValueOptions options);
    // public System.String[] GetSubKeyNames()
    // Offset: 0x1881BCC
    ::Array<::Il2CppString*>* GetSubKeyNames();
    // public System.Void Flush()
    // Offset: 0x1882018
    void Flush();
    // public System.Boolean ValueExists(System.String name)
    // Offset: 0x1882B28
    bool ValueExists(::Il2CppString* name);
    // public System.Boolean get_IsMarkedForDeletion()
    // Offset: 0x1881B3C
    bool get_IsMarkedForDeletion();
    // private System.Void Save()
    // Offset: 0x1882130
    void Save();
    // static private System.String get_UserStore()
    // Offset: 0x1880BDC
    static ::Il2CppString* get_UserStore();
    // static private System.String get_MachineStore()
    // Offset: 0x1880CEC
    static ::Il2CppString* get_MachineStore();
    // protected override System.Void Finalize()
    // Offset: 0x1882C38
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Microsoft.Win32.KeyHandler
  #pragma pack(pop)
  static check_size<sizeof(KeyHandler), 56 + sizeof(bool)> __Microsoft_Win32_KeyHandlerSizeCheck;
  static_assert(sizeof(KeyHandler) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::KeyHandler*, "Microsoft.Win32", "KeyHandler");
