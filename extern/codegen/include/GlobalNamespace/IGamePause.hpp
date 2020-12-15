// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IGamePause
  class IGamePause {
    public:
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_willResumeEvent(System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_willResumeEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didResumeEvent(System::Action* value);
    // public System.Void Pause()
    // Offset: 0xFFFFFFFF
    void Pause();
    // public System.Void WillResume()
    // Offset: 0xFFFFFFFF
    void WillResume();
    // public System.Void Resume()
    // Offset: 0xFFFFFFFF
    void Resume();
  }; // IGamePause
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IGamePause*, "", "IGamePause");
#pragma pack(pop)