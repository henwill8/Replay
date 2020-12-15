// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.TernaryTreeReadOnly
  class TernaryTreeReadOnly : public ::Il2CppObject {
    public:
    // private System.Byte[] nodeBuffer
    // Offset: 0x10
    ::Array<uint8_t>* nodeBuffer;
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return nodeBuffer;
    }
    // public System.Void .ctor(System.Byte[] nodeBuffer)
    // Offset: 0x14E1E34
    static TernaryTreeReadOnly* New_ctor(::Array<uint8_t>* nodeBuffer);
    // public System.Byte FindCaseInsensitiveString(System.String stringToFind)
    // Offset: 0x14E04F4
    uint8_t FindCaseInsensitiveString(::Il2CppString* stringToFind);
  }; // System.Xml.TernaryTreeReadOnly
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::TernaryTreeReadOnly*, "System.Xml", "TernaryTreeReadOnly");
#pragma pack(pop)