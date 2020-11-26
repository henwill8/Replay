// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerSyncState`3
#include "GlobalNamespace/MultiplayerSyncState_3.hpp"
// Including type: StateBuffer`3
#include "GlobalNamespace/StateBuffer_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStateTable`2<TType, TState>
  template<typename TType, typename TState>
  class IStateTable_2;
  // Skipping declaration: IEquatableByReference`1 because it is already included!
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: RemoteStateBuffer`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class RemoteStateBuffer_3;
  // Forward declaring type: ISyncStateSerializable`1<T>
  template<typename T>
  class ISyncStateSerializable_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Forward declaring type: IConvertible
  class IConvertible;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RemoteMultiplayerSyncState`3
  template<typename TStateTable, typename TType, typename TState>
  class RemoteMultiplayerSyncState_3 : public GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState> {
    public:
    // private readonly IConnectedPlayer _player
    // Offset: 0x0
    GlobalNamespace::IConnectedPlayer* player;
    // private readonly RemoteStateBuffer`3<TStateTable,TType,TState> _stateBuffer
    // Offset: 0x0
    GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* stateBuffer;
    // public System.Void UpdateState(T serializable)
    // Offset: 0xFFFFFFFF
    template<class T>
    void UpdateState(T serializable) {
      static_assert(std::is_base_of_v<GlobalNamespace::ISyncStateSerializable_1<TStateTable>, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "UpdateState", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, serializable));
    }
    // public System.Void .ctor(IConnectedPlayer player, System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    static RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* New_ctor(GlobalNamespace::IConnectedPlayer* player, int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      return THROW_UNLESS((il2cpp_utils::New<RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(player, size, interpolator, smoother)));
    }
    // protected override StateBuffer`3<TStateTable,TType,TState> get_stateBuffer()
    // Offset: 0xFFFFFFFF
    // Implemented from: MultiplayerSyncState`3
    // Base method: StateBuffer`3<TStateTable,TType,TState> MultiplayerSyncState_3::get_stateBuffer()
    GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(this, "get_stateBuffer")));
    }
    // public override IConnectedPlayer get_player()
    // Offset: 0xFFFFFFFF
    // Implemented from: MultiplayerSyncState`3
    // Base method: IConnectedPlayer MultiplayerSyncState_3::get_player()
    GlobalNamespace::IConnectedPlayer* get_player() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IConnectedPlayer*>(this, "get_player"));
    }
  }; // RemoteMultiplayerSyncState`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteMultiplayerSyncState_3, "", "RemoteMultiplayerSyncState`3");
#pragma pack(pop)
