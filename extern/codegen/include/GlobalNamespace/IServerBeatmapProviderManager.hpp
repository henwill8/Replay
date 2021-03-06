// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IServerBeatmapProviderManager
  // [] Offset: FFFFFFFF
  class IServerBeatmapProviderManager/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IServerBeatmapProviderManager
    IServerBeatmapProviderManager() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public IServerBeatmapProvider GetServerBeatmapProvider()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IServerBeatmapProvider* GetServerBeatmapProvider();
    // public System.Threading.Tasks.Task RefreshAsync()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task* RefreshAsync();
  }; // IServerBeatmapProviderManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerBeatmapProviderManager*, "", "IServerBeatmapProviderManager");
