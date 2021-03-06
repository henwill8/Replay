// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.Marshal
  // [] Offset: FFFFFFFF
  class Marshal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Marshal
    Marshal() noexcept {}
    // Get static field: static public readonly System.Int32 SystemMaxDBCSCharSize
    static int _get_SystemMaxDBCSCharSize();
    // Set static field: static public readonly System.Int32 SystemMaxDBCSCharSize
    static void _set_SystemMaxDBCSCharSize(int value);
    // Get static field: static public readonly System.Int32 SystemDefaultCharSize
    static int _get_SystemDefaultCharSize();
    // Set static field: static public readonly System.Int32 SystemDefaultCharSize
    static void _set_SystemDefaultCharSize(int value);
    // static public System.IntPtr AllocCoTaskMem(System.Int32 cb)
    // Offset: 0x130BA60
    static System::IntPtr AllocCoTaskMem(int cb);
    // static public System.IntPtr AllocHGlobal(System.IntPtr cb)
    // Offset: 0x130BA64
    static System::IntPtr AllocHGlobal(System::IntPtr cb);
    // static public System.IntPtr AllocHGlobal(System.Int32 cb)
    // Offset: 0x130BA68
    static System::IntPtr AllocHGlobal(int cb);
    // static System.Void copy_to_unmanaged(System.Array source, System.Int32 startIndex, System.IntPtr destination, System.Int32 length)
    // Offset: 0x130BAE0
    static void copy_to_unmanaged(System::Array* source, int startIndex, System::IntPtr destination, int length);
    // static System.Void copy_from_unmanaged(System.IntPtr source, System.Int32 startIndex, System.Array destination, System.Int32 length)
    // Offset: 0x130BAE4
    static void copy_from_unmanaged(System::IntPtr source, int startIndex, System::Array* destination, int length);
    // static public System.Void Copy(System.Byte[] source, System.Int32 startIndex, System.IntPtr destination, System.Int32 length)
    // Offset: 0x130BAE8
    static void Copy(::Array<uint8_t>* source, int startIndex, System::IntPtr destination, int length);
    // static public System.Void Copy(System.IntPtr source, System.Byte[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x130BB74
    static void Copy(System::IntPtr source, ::Array<uint8_t>* destination, int startIndex, int length);
    // static public System.Void Copy(System.IntPtr source, System.Char[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x130BC00
    static void Copy(System::IntPtr source, ::Array<::Il2CppChar>* destination, int startIndex, int length);
    // static public System.Void Copy(System.IntPtr source, System.Int16[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x130BC8C
    static void Copy(System::IntPtr source, ::Array<int16_t>* destination, int startIndex, int length);
    // static public System.Void Copy(System.IntPtr source, System.Single[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x130BD18
    static void Copy(System::IntPtr source, ::Array<float>* destination, int startIndex, int length);
    // static public System.Void FreeBSTR(System.IntPtr ptr)
    // Offset: 0x130BDA4
    static void FreeBSTR(System::IntPtr ptr);
    // static public System.Void FreeCoTaskMem(System.IntPtr ptr)
    // Offset: 0x130BDA8
    static void FreeCoTaskMem(System::IntPtr ptr);
    // static public System.Void FreeHGlobal(System.IntPtr hglobal)
    // Offset: 0x130BDAC
    static void FreeHGlobal(System::IntPtr hglobal);
    // static private System.Void ClearUnicode(System.IntPtr ptr)
    // Offset: 0x130BDB0
    static void ClearUnicode(System::IntPtr ptr);
    // static public System.Void ZeroFreeGlobalAllocUnicode(System.IntPtr s)
    // Offset: 0x130BEFC
    static void ZeroFreeGlobalAllocUnicode(System::IntPtr s);
    // static public System.Int32 GetHRForException(System.Exception e)
    // Offset: 0x130BF68
    static int GetHRForException(System::Exception* e);
    // static public System.Int32 GetLastWin32Error()
    // Offset: 0x130BF74
    static int GetLastWin32Error();
    // static public System.String PtrToStringAnsi(System.IntPtr ptr)
    // Offset: 0x130BF78
    static ::Il2CppString* PtrToStringAnsi(System::IntPtr ptr);
    // static public System.String PtrToStringUni(System.IntPtr ptr)
    // Offset: 0x130BF7C
    static ::Il2CppString* PtrToStringUni(System::IntPtr ptr);
    // static public System.Void PtrToStructure(System.IntPtr ptr, System.Object structure)
    // Offset: 0x130BF80
    static void PtrToStructure(System::IntPtr ptr, ::Il2CppObject* structure);
    // static public System.Object PtrToStructure(System.IntPtr ptr, System.Type structureType)
    // Offset: 0x130BF84
    static ::Il2CppObject* PtrToStructure(System::IntPtr ptr, System::Type* structureType);
    // static public System.Void PtrToStructure(System.IntPtr ptr, T structure)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void PtrToStructure(System::IntPtr ptr, T structure) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::Marshal::PtrToStructure");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.InteropServices", "Marshal", "PtrToStructure", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(ptr, structure)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, ptr, structure);
    }
    // static public T PtrToStructure(System.IntPtr ptr)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T PtrToStructure(System::IntPtr ptr) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::Marshal::PtrToStructure");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.InteropServices", "Marshal", "PtrToStructure", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(ptr)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, ptr);
    }
    // static public System.Byte ReadByte(System.IntPtr ptr, System.Int32 ofs)
    // Offset: 0x130BF88
    static uint8_t ReadByte(System::IntPtr ptr, int ofs);
    // static public System.Int16 ReadInt16(System.IntPtr ptr, System.Int32 ofs)
    // Offset: 0x130BEB4
    static int16_t ReadInt16(System::IntPtr ptr, int ofs);
    // static public System.Int32 ReadInt32(System.IntPtr ptr)
    // Offset: 0x130BFB0
    static int ReadInt32(System::IntPtr ptr);
    // static public System.Int64 ReadInt64(System.IntPtr ptr)
    // Offset: 0x130BFF8
    static int64_t ReadInt64(System::IntPtr ptr);
    // static public System.IntPtr ReadIntPtr(System.IntPtr ptr)
    // Offset: 0x130C058
    static System::IntPtr ReadIntPtr(System::IntPtr ptr);
    // static private System.Int32 ReleaseInternal(System.IntPtr pUnk)
    // Offset: 0x130C104
    static int ReleaseInternal(System::IntPtr pUnk);
    // static public System.Int32 Release(System.IntPtr pUnk)
    // Offset: 0x130C108
    static int Release(System::IntPtr pUnk);
    // static public System.Int32 SizeOf(System.Object structure)
    // Offset: 0x130C1C8
    static int SizeOf(::Il2CppObject* structure);
    // static public System.Int32 SizeOf(System.Type t)
    // Offset: 0x130C248
    static int SizeOf(System::Type* t);
    // static public System.Int32 SizeOf(T structure)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int SizeOf(T structure) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::Marshal::SizeOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.InteropServices", "Marshal", "SizeOf", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(structure)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, structure);
    }
    // static public System.IntPtr SecureStringToCoTaskMemUnicode(System.Security.SecureString s)
    // Offset: 0x130C24C
    static System::IntPtr SecureStringToCoTaskMemUnicode(System::Security::SecureString* s);
    // static public System.IntPtr SecureStringToGlobalAllocUnicode(System.Security.SecureString s)
    // Offset: 0x130C4D4
    static System::IntPtr SecureStringToGlobalAllocUnicode(System::Security::SecureString* s);
    // static public System.Void StructureToPtr(System.Object structure, System.IntPtr ptr, System.Boolean fDeleteOld)
    // Offset: 0x130C578
    static void StructureToPtr(::Il2CppObject* structure, System::IntPtr ptr, bool fDeleteOld);
    // static public System.Void StructureToPtr(T structure, System.IntPtr ptr, System.Boolean fDeleteOld)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void StructureToPtr(T structure, System::IntPtr ptr, bool fDeleteOld) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::Marshal::StructureToPtr");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.InteropServices", "Marshal", "StructureToPtr", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(structure, ptr, fDeleteOld)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, structure, ptr, fDeleteOld);
    }
    // static public System.IntPtr UnsafeAddrOfPinnedArrayElement(System.Array arr, System.Int32 index)
    // Offset: 0x130C580
    static System::IntPtr UnsafeAddrOfPinnedArrayElement(System::Array* arr, int index);
    // static public System.IntPtr UnsafeAddrOfPinnedArrayElement(T[] arr, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::IntPtr UnsafeAddrOfPinnedArrayElement(::Array<T>* arr, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::Marshal::UnsafeAddrOfPinnedArrayElement");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.InteropServices", "Marshal", "UnsafeAddrOfPinnedArrayElement", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, index)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, index);
    }
    // static public System.Void WriteInt16(System.IntPtr ptr, System.Int32 ofs, System.Int16 val)
    // Offset: 0x130BE60
    static void WriteInt16(System::IntPtr ptr, int ofs, int16_t val);
    // static private System.IntPtr GetFunctionPointerForDelegateInternal(System.Delegate d)
    // Offset: 0x130C584
    static System::IntPtr GetFunctionPointerForDelegateInternal(System::Delegate* d);
    // static public System.IntPtr GetFunctionPointerForDelegate(TDelegate d)
    // Offset: 0xFFFFFFFF
    template<class TDelegate>
    static System::IntPtr GetFunctionPointerForDelegate(TDelegate d) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.InteropServices", "Marshal", "GetFunctionPointerForDelegate", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDelegate>::get()}, ::il2cpp_utils::ExtractTypes(d)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDelegate>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, d);
    }
    // static private System.Void .cctor()
    // Offset: 0x130C588
    static void _cctor();
  }; // System.Runtime.InteropServices.Marshal
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::Marshal*, "System.Runtime.InteropServices", "Marshal");
