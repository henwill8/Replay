// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x1E
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.SafeHandle
  // [] Offset: FFFFFFFF
  class SafeHandle : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject/*, public System::IDisposable*/ {
    public:
    // protected System.IntPtr handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 _state
    // Size: 0x4
    // Offset: 0x18
    int state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _ownsHandle
    // Size: 0x1
    // Offset: 0x1C
    bool ownsHandle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _fullyInitialized
    // Size: 0x1
    // Offset: 0x1D
    bool fullyInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SafeHandle
    SafeHandle(System::IntPtr handle_ = {}, int state_ = {}, bool ownsHandle_ = {}, bool fullyInitialized_ = {}) noexcept : handle{handle_}, state{state_}, ownsHandle{ownsHandle_}, fullyInitialized{fullyInitialized_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static field const value: static private System.Int32 RefCount_Mask
    static constexpr const int RefCount_Mask = 2147483644;
    // Get static field: static private System.Int32 RefCount_Mask
    static int _get_RefCount_Mask();
    // Set static field: static private System.Int32 RefCount_Mask
    static void _set_RefCount_Mask(int value);
    // static field const value: static private System.Int32 RefCount_One
    static constexpr const int RefCount_One = 4;
    // Get static field: static private System.Int32 RefCount_One
    static int _get_RefCount_One();
    // Set static field: static private System.Int32 RefCount_One
    static void _set_RefCount_One(int value);
    // protected System.Void .ctor(System.IntPtr invalidHandleValue, System.Boolean ownsHandle)
    // Offset: 0x130C94C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeHandle* New_ctor(System::IntPtr invalidHandleValue, bool ownsHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::SafeHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeHandle*, creationType>(invalidHandleValue, ownsHandle)));
    }
    // protected System.Void SetHandle(System.IntPtr handle)
    // Offset: 0x130CA68
    void SetHandle(System::IntPtr handle);
    // public System.IntPtr DangerousGetHandle()
    // Offset: 0x130CA70
    System::IntPtr DangerousGetHandle();
    // public System.Boolean get_IsClosed()
    // Offset: 0x130CA78
    bool get_IsClosed();
    // public System.Boolean get_IsInvalid()
    // Offset: 0xFFFFFFFF
    bool get_IsInvalid();
    // public System.Void Close()
    // Offset: 0x130CA84
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x130CAA4
    void Dispose(bool disposing);
    // protected System.Boolean ReleaseHandle()
    // Offset: 0xFFFFFFFF
    bool ReleaseHandle();
    // public System.Void SetHandleAsInvalid()
    // Offset: 0x130CB80
    void SetHandleAsInvalid();
    // public System.Void DangerousAddRef(ref System.Boolean success)
    // Offset: 0x130C7E0
    void DangerousAddRef(bool& success);
    // public System.Void DangerousRelease()
    // Offset: 0x130C944
    void DangerousRelease();
    // private System.Void InternalDispose()
    // Offset: 0x130CAC0
    void InternalDispose();
    // private System.Void InternalFinalize()
    // Offset: 0x130CB6C
    void InternalFinalize();
    // private System.Void DangerousReleaseInternal(System.Boolean dispose)
    // Offset: 0x130CC14
    void DangerousReleaseInternal(bool dispose);
    // protected override System.Void Finalize()
    // Offset: 0x130C9F4
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x130CA94
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Runtime.InteropServices.SafeHandle
  #pragma pack(pop)
  static check_size<sizeof(SafeHandle), 29 + sizeof(bool)> __System_Runtime_InteropServices_SafeHandleSizeCheck;
  static_assert(sizeof(SafeHandle) == 0x1E);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::SafeHandle*, "System.Runtime.InteropServices", "SafeHandle");
