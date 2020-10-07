// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UnicodeEncoding
#include "System/Text/UnicodeEncoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.UnicodeEncoding/Decoder
  class UnicodeEncoding::Decoder : public System::Text::DecoderNLS {
    public:
    // System.Int32 lastByte
    // Offset: 0x30
    int lastByte;
    // System.Char lastChar
    // Offset: 0x34
    ::Il2CppChar lastChar;
    // public System.Void .ctor(System.Text.UnicodeEncoding encoding)
    // Offset: 0x13D9608
    static UnicodeEncoding::Decoder* New_ctor(System::Text::UnicodeEncoding* encoding);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13D9BA4
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static UnicodeEncoding::Decoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13D9F98
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Reset()
    // Offset: 0x13DA0F0
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x13DA118
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UnicodeEncoding/Decoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding::Decoder*, "System.Text", "UnicodeEncoding/Decoder");
#pragma pack(pop)
