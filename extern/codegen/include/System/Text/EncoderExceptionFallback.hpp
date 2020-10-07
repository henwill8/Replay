// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallback
#include "System/Text/EncoderFallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.EncoderExceptionFallback
  class EncoderExceptionFallback : public System::Text::EncoderFallback {
    public:
    // public System.Void .ctor()
    // Offset: 0x12F2DC4
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Void EncoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    static EncoderExceptionFallback* New_ctor();
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x12F2DD4
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x12F2E38
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x12F2E40
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12F2EA4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.EncoderExceptionFallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderExceptionFallback*, "System.Text", "EncoderExceptionFallback");
#pragma pack(pop)
