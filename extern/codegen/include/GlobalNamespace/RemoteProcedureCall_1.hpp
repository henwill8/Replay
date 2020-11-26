// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
// Including type: RemoteProcedureCall/TypeWrapper`1
#include "GlobalNamespace/RemoteProcedureCall_TypeWrapper_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: IRemoteProcedureCall because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RemoteProcedureCall`1
  template<typename T0>
  class RemoteProcedureCall_1 : public GlobalNamespace::RemoteProcedureCall {
    public:
    // private RemoteProcedureCall/TypeWrapper`1<T0> _value0
    // Offset: 0x0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0> value0;
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // public T0 get_value0()
    // Offset: 0xFFFFFFFF
    T0 get_value0() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T0>(this, "get_value0"));
    }
    // public System.Void set_value0(T0 value)
    // Offset: 0xFFFFFFFF
    void set_value0(T0 value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_value0", value));
    }
    // public IRemoteProcedureCall Init(System.Single syncTime, T0 value0)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IRemoteProcedureCall* Init(float syncTime, T0 value0) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IRemoteProcedureCall*>(this, "Init", syncTime, value0));
    }
    // protected override System.Void SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    void SerializeData(LiteNetLib::Utils::NetDataWriter* writer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "SerializeData", writer));
    }
    // protected override System.Void DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    void DeserializeData(LiteNetLib::Utils::NetDataReader* reader) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "DeserializeData", reader));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static RemoteProcedureCall_1<T0>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<RemoteProcedureCall_1<T0>*>());
    }
  }; // RemoteProcedureCall`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteProcedureCall_1, "", "RemoteProcedureCall`1");
#pragma pack(pop)
