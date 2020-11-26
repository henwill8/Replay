// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
  class UnsafeNativeMethods::ManifestEtw::EtwEnableCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x151761C
    static UnsafeNativeMethods::ManifestEtw::EtwEnableCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(in System.Guid sourceId, in System.Int32 isEnabled, in System.Byte level, in System.Int64 matchAnyKeywords, in System.Int64 matchAllKeywords, in Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, in System.Void* callbackContext)
    // Offset: 0x1517630
    void Invoke(System::Guid& sourceId, int& isEnabled, uint8_t& level, int64_t& matchAnyKeywords, int64_t& matchAllKeywords, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR*& filterData, void*& callbackContext);
    // public System.IAsyncResult BeginInvoke(in System.Guid sourceId, in System.Int32 isEnabled, in System.Byte level, in System.Int64 matchAnyKeywords, in System.Int64 matchAllKeywords, in Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, in System.Void* callbackContext, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15178FC
    System::IAsyncResult* BeginInvoke(System::Guid& sourceId, int& isEnabled, uint8_t& level, int64_t& matchAnyKeywords, int64_t& matchAllKeywords, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR*& filterData, void*& callbackContext, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(in System.Guid sourceId, System.IAsyncResult result)
    // Offset: 0x1517A14
    void EndInvoke(System::Guid& sourceId, System::IAsyncResult* result);
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EtwEnableCallback*, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EtwEnableCallback");
#pragma pack(pop)
