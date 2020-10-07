// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.UnmanagedMemoryStream
#include "System/IO/UnmanagedMemoryStream.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.PinnedBufferMemoryStream
  class PinnedBufferMemoryStream : public System::IO::UnmanagedMemoryStream {
    public:
    // private System.Byte[] _array
    // Offset: 0x60
    ::Array<uint8_t>* array;
    // private System.Runtime.InteropServices.GCHandle _pinningHandle
    // Offset: 0x68
    System::Runtime::InteropServices::GCHandle pinningHandle;
    // System.Void .ctor(System.Byte[] array)
    // Offset: 0x1008DFC
    static PinnedBufferMemoryStream* New_ctor(::Array<uint8_t>* array);
    // protected override System.Void Finalize()
    // Offset: 0x10091C0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1009238
    // Implemented from: System.IO.UnmanagedMemoryStream
    // Base method: System.Void UnmanagedMemoryStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.IO.PinnedBufferMemoryStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::PinnedBufferMemoryStream*, "System.IO", "PinnedBufferMemoryStream");
#pragma pack(pop)
