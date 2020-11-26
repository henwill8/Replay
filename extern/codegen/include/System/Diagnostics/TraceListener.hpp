// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.TraceListener
  class TraceListener : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // private System.Int32 indentLevel
    // Offset: 0x18
    int indentLevel;
    // private System.Int32 indentSize
    // Offset: 0x1C
    int indentSize;
    // private System.Boolean needIndent
    // Offset: 0x20
    bool needIndent;
    // private System.String listenerName
    // Offset: 0x28
    ::Il2CppString* listenerName;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // protected System.Void .ctor(System.String name)
    // Offset: 0x1483760
    static TraceListener* New_ctor(::Il2CppString* name);
    // public System.Boolean get_IsThreadSafe()
    // Offset: 0x1487014
    bool get_IsThreadSafe();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1487098
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x148709C
    void Flush();
    // public System.Void set_IndentLevel(System.Int32 value)
    // Offset: 0x1486404
    void set_IndentLevel(int value);
    // public System.Void set_IndentSize(System.Int32 value)
    // Offset: 0x1486420
    void set_IndentSize(int value);
    // protected System.Boolean get_NeedIndent()
    // Offset: 0x14870A0
    bool get_NeedIndent();
    // protected System.Void set_NeedIndent(System.Boolean value)
    // Offset: 0x14870A8
    void set_NeedIndent(bool value);
    // public System.Void Fail(System.String message)
    // Offset: 0x14837BC
    void Fail(::Il2CppString* message);
    // public System.Void Fail(System.String message, System.String detailMessage)
    // Offset: 0x1483874
    void Fail(::Il2CppString* message, ::Il2CppString* detailMessage);
    // public System.Void Write(System.String message)
    // Offset: 0xFFFFFFFF
    void Write(::Il2CppString* message);
    // protected System.Void WriteIndent()
    // Offset: 0x14870B4
    void WriteIndent();
    // public System.Void WriteLine(System.String message)
    // Offset: 0xFFFFFFFF
    void WriteLine(::Il2CppString* message);
    // public System.Void Dispose()
    // Offset: 0x148701C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Diagnostics.TraceListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceListener*, "System.Diagnostics", "TraceListener");
#pragma pack(pop)
