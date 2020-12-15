// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRNativeBuffer
  class OVRNativeBuffer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Boolean disposed
    // Offset: 0x10
    bool disposed;
    // private System.Int32 m_numBytes
    // Offset: 0x14
    int m_numBytes;
    // private System.IntPtr m_ptr
    // Offset: 0x18
    System::IntPtr m_ptr;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Int32 numBytes)
    // Offset: 0x12320E0
    static OVRNativeBuffer* New_ctor(int numBytes);
    // public System.Void Reset(System.Int32 numBytes)
    // Offset: 0x1232290
    void Reset(int numBytes);
    // public System.Int32 GetCapacity()
    // Offset: 0x1232294
    int GetCapacity();
    // public System.IntPtr GetPointer(System.Int32 byteOffset)
    // Offset: 0x123229C
    System::IntPtr GetPointer(int byteOffset);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x123225C
    void Dispose(bool disposing);
    // private System.Void Reallocate(System.Int32 numBytes)
    // Offset: 0x1232144
    void Reallocate(int numBytes);
    // private System.Void Release()
    // Offset: 0x12323B0
    void Release();
    // protected override System.Void Finalize()
    // Offset: 0x12321E0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x1232330
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // OVRNativeBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNativeBuffer*, "", "OVRNativeBuffer");
#pragma pack(pop)