// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextReader/SyncTextReader
  // [] Offset: FFFFFFFF
  class TextReader::SyncTextReader : public System::IO::TextReader {
    public:
    // System.IO.TextReader _in
    // Size: 0x8
    // Offset: 0x18
    System::IO::TextReader* in;
    // Field size check
    static_assert(sizeof(System::IO::TextReader*) == 0x8);
    // Creating value type constructor for type: SyncTextReader
    SyncTextReader(System::IO::TextReader* in_ = {}) noexcept : in{in_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.IO.TextReader t)
    // Offset: 0x164D9E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader::SyncTextReader* New_ctor(System::IO::TextReader* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::SyncTextReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader::SyncTextReader*, creationType>(t)));
    }
    // public override System.Void Close()
    // Offset: 0x164DDDC
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x164DDFC
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x164DECC
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x164DEEC
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x164DF0C
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x164DF2C
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0x164DF50
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
  }; // System.IO.TextReader/SyncTextReader
  #pragma pack(pop)
  static check_size<sizeof(TextReader::SyncTextReader), 24 + sizeof(System::IO::TextReader*)> __System_IO_TextReader_SyncTextReaderSizeCheck;
  static_assert(sizeof(TextReader::SyncTextReader) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader::SyncTextReader*, "System.IO", "TextReader/SyncTextReader");
