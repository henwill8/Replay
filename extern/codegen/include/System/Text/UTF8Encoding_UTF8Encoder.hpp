// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF8Encoding
#include "System/Text/UTF8Encoding.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF8Encoding/UTF8Encoder
  // [] Offset: FFFFFFFF
  class UTF8Encoding::UTF8Encoder : public System::Text::EncoderNLS {
    public:
    // System.Int32 surrogateChar
    // Size: 0x4
    // Offset: 0x38
    int surrogateChar;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UTF8Encoder
    UTF8Encoder(int surrogateChar_ = {}) noexcept : surrogateChar{surrogateChar_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return surrogateChar;
    }
    // public System.Void .ctor(System.Text.UTF8Encoding encoding)
    // Offset: 0x1A74EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding::UTF8Encoder* New_ctor(System::Text::UTF8Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF8Encoding::UTF8Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding::UTF8Encoder*, creationType>(encoding)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A75720
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding::UTF8Encoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF8Encoding::UTF8Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding::UTF8Encoder*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A759F8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Reset()
    // Offset: 0x1A75B14
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x1A75B34
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Boolean EncoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UTF8Encoding/UTF8Encoder
  #pragma pack(pop)
  static check_size<sizeof(UTF8Encoding::UTF8Encoder), 56 + sizeof(int)> __System_Text_UTF8Encoding_UTF8EncoderSizeCheck;
  static_assert(sizeof(UTF8Encoding::UTF8Encoder) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF8Encoding::UTF8Encoder*, "System.Text", "UTF8Encoding/UTF8Encoder");
