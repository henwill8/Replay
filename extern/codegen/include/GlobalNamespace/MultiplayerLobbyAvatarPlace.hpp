// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLobbyAvatarPlace
  class MultiplayerLobbyAvatarPlace : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLobbyAvatarPlace::Pool
    class Pool;
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 worldPos, UnityEngine.Quaternion rotation)
    // Offset: 0xFB94A0
    void SetPositionAndRotation(UnityEngine::Vector3 worldPos, UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0xFB951C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLobbyAvatarPlace* New_ctor();
  }; // MultiplayerLobbyAvatarPlace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarPlace*, "", "MultiplayerLobbyAvatarPlace");
#pragma pack(pop)
