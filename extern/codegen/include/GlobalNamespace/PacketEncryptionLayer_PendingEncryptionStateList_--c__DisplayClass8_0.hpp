// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer/PendingEncryptionStateList
#include "GlobalNamespace/PacketEncryptionLayer_PendingEncryptionStateList.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
  class PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public PacketEncryptionLayer/EncryptionState encryptionState
    // Offset: 0x10
    GlobalNamespace::PacketEncryptionLayer::EncryptionState* encryptionState;
    // Creating conversion operator: operator GlobalNamespace::PacketEncryptionLayer::EncryptionState*
    constexpr operator GlobalNamespace::PacketEncryptionLayer::EncryptionState*() const noexcept {
      return encryptionState;
    }
    // System.Boolean <Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,PacketEncryptionLayer/EncryptionState> kvp)
    // Offset: 0x1E5102C
    bool $Remove$b__0(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*> kvp);
    // public System.Void .ctor()
    // Offset: 0x1E50EF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0* New_ctor();
  }; // PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
#pragma pack(pop)