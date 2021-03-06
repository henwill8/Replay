// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapIdentifierNetSerializable
  // [] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: D15560
  class BeatmapIdentifierNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD15630
    // private System.String <levelID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD15640
    // private System.String <beatmapCharacteristicSerializedName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* beatmapCharacteristicSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD15650
    // private BeatmapDifficulty <difficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: BeatmapIdentifierNetSerializable
    BeatmapIdentifierNetSerializable(::Il2CppString* levelID_ = {}, ::Il2CppString* beatmapCharacteristicSerializedName_ = {}, GlobalNamespace::BeatmapDifficulty difficulty_ = {}) noexcept : levelID{levelID_}, beatmapCharacteristicSerializedName{beatmapCharacteristicSerializedName_}, difficulty{difficulty_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>
    operator System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable*>*>(this);
    }
    // public System.String get_levelID()
    // Offset: 0x226A270
    ::Il2CppString* get_levelID();
    // private System.Void set_levelID(System.String value)
    // Offset: 0x226A278
    void set_levelID(::Il2CppString* value);
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0x226A280
    ::Il2CppString* get_beatmapCharacteristicSerializedName();
    // private System.Void set_beatmapCharacteristicSerializedName(System.String value)
    // Offset: 0x226A288
    void set_beatmapCharacteristicSerializedName(::Il2CppString* value);
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x226A290
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // private System.Void set_difficulty(BeatmapDifficulty value)
    // Offset: 0x226A298
    void set_difficulty(GlobalNamespace::BeatmapDifficulty value);
    // public System.Void .ctor(System.String levelID, System.String beatmapCharacteristicSerializedName, BeatmapDifficulty difficulty)
    // Offset: 0x226A2A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapIdentifierNetSerializable* New_ctor(::Il2CppString* levelID, ::Il2CppString* beatmapCharacteristicSerializedName, GlobalNamespace::BeatmapDifficulty difficulty) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapIdentifierNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapIdentifierNetSerializable*, creationType>(levelID, beatmapCharacteristicSerializedName, difficulty)));
    }
    // public System.Void .ctor()
    // Offset: 0x226A2A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapIdentifierNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapIdentifierNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapIdentifierNetSerializable*, creationType>()));
    }
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x226A304
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x226A384
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Boolean Equals(BeatmapIdentifierNetSerializable other)
    // Offset: 0x226A3DC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(BeatmapIdentifierNetSerializable other)
    bool Equals(GlobalNamespace::BeatmapIdentifierNetSerializable* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x226A450
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x226A560
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x226A5C8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // BeatmapIdentifierNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(BeatmapIdentifierNetSerializable), 32 + sizeof(GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_BeatmapIdentifierNetSerializableSizeCheck;
  static_assert(sizeof(BeatmapIdentifierNetSerializable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapIdentifierNetSerializable*, "", "BeatmapIdentifierNetSerializable");
