// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.NavigationController/<>c__DisplayClass8_0
  class NavigationController::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Single[] startPositions
    // Offset: 0x10
    ::Array<float>* startPositions;
    // public HMUI.NavigationController <>4__this
    // Offset: 0x18
    HMUI::NavigationController* $$4__this;
    // public HMUI.ViewController viewController
    // Offset: 0x20
    HMUI::ViewController* viewController;
    // public System.Single[] endPositions
    // Offset: 0x28
    ::Array<float>* endPositions;
    // System.Void <PushViewController>g__AnimationLayouter|0(System.Single t, HMUI.ViewController[] viewControllers)
    // Offset: 0x107CC30
    void $PushViewController$g__AnimationLayouter_0(float t, ::Array<HMUI::ViewController*>* viewControllers);
    // public System.Void .ctor()
    // Offset: 0x107C750
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NavigationController::$$c__DisplayClass8_0* New_ctor();
  }; // HMUI.NavigationController/<>c__DisplayClass8_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::NavigationController::$$c__DisplayClass8_0*, "HMUI", "NavigationController/<>c__DisplayClass8_0");
#pragma pack(pop)
