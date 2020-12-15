// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetDataReader
  class NetDataReader : public ::Il2CppObject {
    public:
    // protected System.Byte[] _data
    // Offset: 0x10
    ::Array<uint8_t>* data;
    // protected System.Int32 _position
    // Offset: 0x18
    int position;
    // protected System.Int32 _dataSize
    // Offset: 0x1C
    int dataSize;
    // private System.Int32 _offset
    // Offset: 0x20
    int offset;
    // public System.Byte[] get_RawData()
    // Offset: 0x1DD2DE8
    ::Array<uint8_t>* get_RawData();
    // public System.Int32 get_RawDataSize()
    // Offset: 0x1DD2DF0
    int get_RawDataSize();
    // public System.Int32 get_UserDataOffset()
    // Offset: 0x1DD2DF8
    int get_UserDataOffset();
    // public System.Int32 get_UserDataSize()
    // Offset: 0x1DD2E00
    int get_UserDataSize();
    // public System.Boolean get_IsNull()
    // Offset: 0x1DC8B18
    bool get_IsNull();
    // public System.Int32 get_Position()
    // Offset: 0x1DD2E0C
    int get_Position();
    // public System.Boolean get_EndOfData()
    // Offset: 0x1DD2E14
    bool get_EndOfData();
    // public System.Int32 get_AvailableBytes()
    // Offset: 0x1DD2E24
    int get_AvailableBytes();
    // public System.Void SkipBytes(System.Int32 count)
    // Offset: 0x1DD2E30
    void SkipBytes(int count);
    // public System.Void SetSource(LiteNetLib.Utils.NetDataWriter dataWriter)
    // Offset: 0x1DD2E40
    void SetSource(LiteNetLib::Utils::NetDataWriter* dataWriter);
    // public System.Void SetSource(System.Byte[] source)
    // Offset: 0x1DD2E88
    void SetSource(::Array<uint8_t>* source);
    // public System.Void SetSource(System.Byte[] source, System.Int32 offset)
    // Offset: 0x1DD2ED8
    void SetSource(::Array<uint8_t>* source, int offset);
    // public System.Void SetSource(System.Byte[] source, System.Int32 offset, System.Int32 maxSize)
    // Offset: 0x1DC4DB4
    void SetSource(::Array<uint8_t>* source, int offset, int maxSize);
    // public System.Void .ctor(System.Byte[] source)
    // Offset: 0x1DD2F2C
    static NetDataReader* New_ctor(::Array<uint8_t>* source);
    // public System.Void .ctor(System.Byte[] source, System.Int32 offset)
    // Offset: 0x1DD2F5C
    static NetDataReader* New_ctor(::Array<uint8_t>* source, int offset);
    // public System.Void .ctor(System.Byte[] source, System.Int32 offset, System.Int32 maxSize)
    // Offset: 0x1DC64FC
    static NetDataReader* New_ctor(::Array<uint8_t>* source, int offset, int maxSize);
    // public System.Net.IPEndPoint GetNetEndPoint()
    // Offset: 0x1DD2F9C
    System::Net::IPEndPoint* GetNetEndPoint();
    // public System.Byte GetByte()
    // Offset: 0x1DD319C
    uint8_t GetByte();
    // public System.SByte GetSByte()
    // Offset: 0x1DD31E8
    int8_t GetSByte();
    // public System.Boolean[] GetBoolArray()
    // Offset: 0x1DD3234
    ::Array<bool>* GetBoolArray();
    // public System.UInt16[] GetUShortArray()
    // Offset: 0x1DD3314
    ::Array<uint16_t>* GetUShortArray();
    // public System.Int16[] GetShortArray()
    // Offset: 0x1DD33F0
    ::Array<int16_t>* GetShortArray();
    // public System.Int64[] GetLongArray()
    // Offset: 0x1DD34CC
    ::Array<int64_t>* GetLongArray();
    // public System.UInt64[] GetULongArray()
    // Offset: 0x1DD35A8
    ::Array<uint64_t>* GetULongArray();
    // public System.Int32[] GetIntArray()
    // Offset: 0x1DD3684
    ::Array<int>* GetIntArray();
    // public System.UInt32[] GetUIntArray()
    // Offset: 0x1DD3760
    ::Array<uint>* GetUIntArray();
    // public System.Single[] GetFloatArray()
    // Offset: 0x1DD383C
    ::Array<float>* GetFloatArray();
    // public System.Double[] GetDoubleArray()
    // Offset: 0x1DD3918
    ::Array<double>* GetDoubleArray();
    // public System.String[] GetStringArray()
    // Offset: 0x1DD39F4
    ::Array<::Il2CppString*>* GetStringArray();
    // public System.String[] GetStringArray(System.Int32 maxStringLength)
    // Offset: 0x1DD3B3C
    ::Array<::Il2CppString*>* GetStringArray(int maxStringLength);
    // public System.Boolean GetBool()
    // Offset: 0x1DD3C8C
    bool GetBool();
    // public System.Char GetChar()
    // Offset: 0x1DD3CE0
    ::Il2CppChar GetChar();
    // public System.UInt16 GetUShort()
    // Offset: 0x1DD3D6C
    uint16_t GetUShort();
    // public System.Int16 GetShort()
    // Offset: 0x1DD3DF8
    int16_t GetShort();
    // public System.Int64 GetLong()
    // Offset: 0x1DD3E84
    int64_t GetLong();
    // public System.UInt64 GetULong()
    // Offset: 0x1DD3F10
    uint64_t GetULong();
    // public System.Int32 GetInt()
    // Offset: 0x1DD3110
    int GetInt();
    // public System.UInt32 GetUInt()
    // Offset: 0x1DD3F9C
    uint GetUInt();
    // public System.Single GetFloat()
    // Offset: 0x1DD4028
    float GetFloat();
    // public System.Double GetDouble()
    // Offset: 0x1DD40B4
    double GetDouble();
    // public System.String GetString(System.Int32 maxLength)
    // Offset: 0x1DD3024
    ::Il2CppString* GetString(int maxLength);
    // public System.String GetString()
    // Offset: 0x1DBFCE8
    ::Il2CppString* GetString();
    // public System.ArraySegment`1<System.Byte> GetRemainingBytesSegment()
    // Offset: 0x1DD4140
    System::ArraySegment_1<uint8_t> GetRemainingBytesSegment();
    // public T Get()
    // Offset: 0xFFFFFFFF
    template<class T>
    T Get() {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "Get", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Byte[] GetRemainingBytes()
    // Offset: 0x1DD41C4
    ::Array<uint8_t>* GetRemainingBytes();
    // public System.Void GetBytes(System.Byte[] destination, System.Int32 start, System.Int32 count)
    // Offset: 0x1DD4254
    void GetBytes(::Array<uint8_t>* destination, int start, int count);
    // public System.Void GetBytes(System.Byte[] destination, System.Int32 count)
    // Offset: 0x1DD42A0
    void GetBytes(::Array<uint8_t>* destination, int count);
    // public System.SByte[] GetSBytesWithLength()
    // Offset: 0x1DD42EC
    ::Array<int8_t>* GetSBytesWithLength();
    // public System.Byte[] GetBytesWithLength()
    // Offset: 0x1DD438C
    ::Array<uint8_t>* GetBytesWithLength();
    // public System.Byte PeekByte()
    // Offset: 0x1DD442C
    uint8_t PeekByte();
    // public System.SByte PeekSByte()
    // Offset: 0x1DD446C
    int8_t PeekSByte();
    // public System.Boolean PeekBool()
    // Offset: 0x1DD44AC
    bool PeekBool();
    // public System.Char PeekChar()
    // Offset: 0x1DD44F4
    ::Il2CppChar PeekChar();
    // public System.UInt16 PeekUShort()
    // Offset: 0x1DD4568
    uint16_t PeekUShort();
    // public System.Int16 PeekShort()
    // Offset: 0x1DD45DC
    int16_t PeekShort();
    // public System.Int64 PeekLong()
    // Offset: 0x1DD4650
    int64_t PeekLong();
    // public System.UInt64 PeekULong()
    // Offset: 0x1DD46C4
    uint64_t PeekULong();
    // public System.Int32 PeekInt()
    // Offset: 0x1DD4738
    int PeekInt();
    // public System.UInt32 PeekUInt()
    // Offset: 0x1DD47AC
    uint PeekUInt();
    // public System.Single PeekFloat()
    // Offset: 0x1DD4820
    float PeekFloat();
    // public System.Double PeekDouble()
    // Offset: 0x1DD4894
    double PeekDouble();
    // public System.String PeekString(System.Int32 maxLength)
    // Offset: 0x1DD4908
    ::Il2CppString* PeekString(int maxLength);
    // public System.String PeekString()
    // Offset: 0x1DD4A28
    ::Il2CppString* PeekString();
    // public System.Boolean TryGetByte(out System.Byte result)
    // Offset: 0x1DD4B04
    bool TryGetByte(uint8_t& result);
    // public System.Boolean TryGetSByte(out System.SByte result)
    // Offset: 0x1DD4B4C
    bool TryGetSByte(int8_t& result);
    // public System.Boolean TryGetBool(out System.Boolean result)
    // Offset: 0x1DD4B94
    bool TryGetBool(bool& result);
    // public System.Boolean TryGetChar(out System.Char result)
    // Offset: 0x1DD4BDC
    bool TryGetChar(::Il2CppChar& result);
    // public System.Boolean TryGetShort(out System.Int16 result)
    // Offset: 0x1DD4C24
    bool TryGetShort(int16_t& result);
    // public System.Boolean TryGetUShort(out System.UInt16 result)
    // Offset: 0x1DD4C6C
    bool TryGetUShort(uint16_t& result);
    // public System.Boolean TryGetInt(out System.Int32 result)
    // Offset: 0x1DD4CB4
    bool TryGetInt(int& result);
    // public System.Boolean TryGetUInt(out System.UInt32 result)
    // Offset: 0x1DD4CFC
    bool TryGetUInt(uint& result);
    // public System.Boolean TryGetLong(out System.Int64 result)
    // Offset: 0x1DD4D44
    bool TryGetLong(int64_t& result);
    // public System.Boolean TryGetULong(out System.UInt64 result)
    // Offset: 0x1DD4D8C
    bool TryGetULong(uint64_t& result);
    // public System.Boolean TryGetFloat(out System.Single result)
    // Offset: 0x1DD4DD4
    bool TryGetFloat(float& result);
    // public System.Boolean TryGetDouble(out System.Double result)
    // Offset: 0x1DD4E18
    bool TryGetDouble(double& result);
    // public System.Boolean TryGetString(out System.String result)
    // Offset: 0x1DD4E5C
    bool TryGetString(::Il2CppString*& result);
    // public System.Boolean TryGetStringArray(out System.String[] result)
    // Offset: 0x1DD4ED8
    bool TryGetStringArray(::Array<::Il2CppString*>*& result);
    // public System.Boolean TryGetBytesWithLength(out System.Byte[] result)
    // Offset: 0x1DD4FE4
    bool TryGetBytesWithLength(::Array<uint8_t>*& result);
    // public System.Void Clear()
    // Offset: 0x1DCD828
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1DC4CA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NetDataReader* New_ctor();
  }; // LiteNetLib.Utils.NetDataReader
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataReader*, "LiteNetLib.Utils", "NetDataReader");
#pragma pack(pop)