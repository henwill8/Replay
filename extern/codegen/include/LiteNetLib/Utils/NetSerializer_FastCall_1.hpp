// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/FastCall`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class NetSerializer::FastCall_1 : public ::Il2CppObject {
    public:
    // public System.Boolean IsArray
    // Size: 0x1
    // Offset: 0x0
    bool IsArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FastCall_1
    FastCall_1(bool IsArray_ = {}) noexcept : IsArray{IsArray_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IsArray;
    }
    // public System.Void Init(System.Reflection.MethodInfo getMethod, System.Reflection.MethodInfo setMethod, System.Boolean isArray)
    // Offset: 0xFFFFFFFF
    void Init(System::Reflection::MethodInfo* getMethod, System::Reflection::MethodInfo* setMethod, bool isArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCall_1::Init");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(getMethod, setMethod, isArray)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, getMethod, setMethod, isArray);
    }
    // public System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    void Read(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCall_1::Read");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    void Write(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCall_1::Write");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
    // public System.Void ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    void ReadArray(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCall_1::ReadArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public System.Void WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCall_1::WriteArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::FastCall_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::FastCall_1<T>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetSerializer/FastCall`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/FastCall`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::FastCall_1, "LiteNetLib.Utils", "NetSerializer/FastCall`1");
