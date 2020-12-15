// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenSystem
  class ScreenSystem;
  // Forward declaring type: NavigationController
  class NavigationController;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseInputModule
  class BaseInputModule;
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.FlowCoordinator
  class FlowCoordinator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass35_0
    class $$c__DisplayClass35_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass37_0
    class $$c__DisplayClass37_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass38_0
    class $$c__DisplayClass38_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass38_1
    class $$c__DisplayClass38_1;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass39_0
    class $$c__DisplayClass39_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass41_0
    class $$c__DisplayClass41_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass42_0
    class $$c__DisplayClass42_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass45_0
    class $$c__DisplayClass45_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass46_0
    class $$c__DisplayClass46_0;
    // private readonly UnityEngine.EventSystems.BaseInputModule _baseInputModule
    // Offset: 0x18
    UnityEngine::EventSystems::BaseInputModule* baseInputModule;
    // private HMUI.ScreenSystem _screenSystem
    // Offset: 0x20
    HMUI::ScreenSystem* screenSystem;
    // private HMUI.FlowCoordinator _parentFlowCoordinator
    // Offset: 0x28
    HMUI::FlowCoordinator* parentFlowCoordinator;
    // private HMUI.FlowCoordinator _childFlowCoordinator
    // Offset: 0x30
    HMUI::FlowCoordinator* childFlowCoordinator;
    // private System.Collections.Generic.List`1<HMUI.ViewController> _mainScreenViewControllers
    // Offset: 0x38
    System::Collections::Generic::List_1<HMUI::ViewController*>* mainScreenViewControllers;
    // private HMUI.ViewController _leftScreenViewController
    // Offset: 0x40
    HMUI::ViewController* leftScreenViewController;
    // private HMUI.ViewController _rightScreenViewController
    // Offset: 0x48
    HMUI::ViewController* rightScreenViewController;
    // private HMUI.ViewController _bottomScreenViewController
    // Offset: 0x50
    HMUI::ViewController* bottomScreenViewController;
    // private HMUI.ViewController _topScreenViewController
    // Offset: 0x58
    HMUI::ViewController* topScreenViewController;
    // private System.Boolean _wasActivatedBefore
    // Offset: 0x60
    bool wasActivatedBefore;
    // private System.String _title
    // Offset: 0x68
    ::Il2CppString* title;
    // private HMUI.ViewController _providedMainViewController
    // Offset: 0x70
    HMUI::ViewController* providedMainViewController;
    // private HMUI.ViewController _providedLeftScreenViewController
    // Offset: 0x78
    HMUI::ViewController* providedLeftScreenViewController;
    // private HMUI.ViewController _providedRightScreenViewController
    // Offset: 0x80
    HMUI::ViewController* providedRightScreenViewController;
    // private HMUI.ViewController _providedBottomScreenViewController
    // Offset: 0x88
    HMUI::ViewController* providedBottomScreenViewController;
    // private HMUI.ViewController _providedTopScreenViewController
    // Offset: 0x90
    HMUI::ViewController* providedTopScreenViewController;
    // private System.Boolean _viewControllersWereProvided
    // Offset: 0x98
    bool viewControllersWereProvided;
    // private System.Boolean _isInDidActivatePhase
    // Offset: 0x99
    bool isInDidActivatePhase;
    // private System.Boolean _isActivated
    // Offset: 0x9A
    bool isActivated;
    // private System.Boolean _isInTransition
    // Offset: 0x9B
    bool isInTransition;
    // private System.Boolean _showBackButton
    // Offset: 0x9C
    bool showBackButton;
    // private UnityEngine.EventSystems.EventSystem _prevEventSystem
    // Offset: 0xA0
    UnityEngine::EventSystems::EventSystem* prevEventSystem;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public HMUI.ViewController get_topViewController()
    // Offset: 0x10ADADC
    HMUI::ViewController* get_topViewController();
    // public HMUI.FlowCoordinator get_childFlowCoordinator()
    // Offset: 0x10ADB48
    HMUI::FlowCoordinator* get_childFlowCoordinator();
    // public System.Boolean get_isActivated()
    // Offset: 0x10ADB50
    bool get_isActivated();
    // protected System.String get_title()
    // Offset: 0x10ADB58
    ::Il2CppString* get_title();
    // protected System.Void SetTitle(System.String value, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10ADB60
    void SetTitle(::Il2CppString* value, HMUI::ViewController::AnimationType animationType);
    // protected System.Void set_showBackButton(System.Boolean value)
    // Offset: 0x10ADD04
    void set_showBackButton(bool value);
    // protected System.Boolean get_showBackButton()
    // Offset: 0x10ADD10
    bool get_showBackButton();
    // public System.Void __StartOnScreenSystem(HMUI.ScreenSystem screenSystem)
    // Offset: 0x10ADD18
    void __StartOnScreenSystem(HMUI::ScreenSystem* screenSystem);
    // protected System.Void PresentFlowCoordinator(HMUI.FlowCoordinator flowCoordinator, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately, System.Boolean replaceTopViewController)
    // Offset: 0x10AE6D4
    void PresentFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately, bool replaceTopViewController);
    // protected System.Void DismissFlowCoordinator(HMUI.FlowCoordinator flowCoordinator, HMUI.ViewController/AnimationDirection animationDirection, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x10AED68
    void DismissFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator, HMUI::ViewController::AnimationDirection animationDirection, System::Action* finishedCallback, bool immediately);
    // protected System.Void ReplaceChildFlowCoordinator(HMUI.FlowCoordinator flowCoordinator, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x10AF0DC
    void ReplaceChildFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // protected System.Void PresentViewController(HMUI.ViewController viewController, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x10AE374
    void PresentViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // protected System.Void DismissViewController(HMUI.ViewController viewController, HMUI.ViewController/AnimationDirection animationDirection, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x10AF458
    void DismissViewController(HMUI::ViewController* viewController, HMUI::ViewController::AnimationDirection animationDirection, System::Action* finishedCallback, bool immediately);
    // protected System.Void ReplaceTopViewController(HMUI.ViewController viewController, System.Action finishedCallback, HMUI.ViewController/AnimationType animationType, HMUI.ViewController/AnimationDirection animationDirection)
    // Offset: 0x10AF634
    void ReplaceTopViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, HMUI::ViewController::AnimationType animationType, HMUI::ViewController::AnimationDirection animationDirection);
    // private System.Void ReplaceTopViewController(HMUI.ViewController viewController, HMUI.FlowCoordinator originalOwnerFlowCoordinator, HMUI.FlowCoordinator newOwnerFlowCoordinator, System.Action finishedCallback, HMUI.ViewController/AnimationType animationType, HMUI.ViewController/AnimationDirection animationDirection)
    // Offset: 0x10AEBA8
    void ReplaceTopViewController(HMUI::ViewController* viewController, HMUI::FlowCoordinator* originalOwnerFlowCoordinator, HMUI::FlowCoordinator* newOwnerFlowCoordinator, System::Action* finishedCallback, HMUI::ViewController::AnimationType animationType, HMUI::ViewController::AnimationDirection animationDirection);
    // protected System.Void PushViewControllerToNavigationController(HMUI.NavigationController navigationController, HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x10AF720
    void PushViewControllerToNavigationController(HMUI::NavigationController* navigationController, HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately);
    // protected System.Void SetViewControllersToNavigationController(HMUI.NavigationController navigationController, params HMUI.ViewController[] viewControllers)
    // Offset: 0x10AF874
    void SetViewControllersToNavigationController(HMUI::NavigationController* navigationController, ::Array<HMUI::ViewController*>* viewControllers);
    // Creating initializer_list -> params proxy for: System.Void SetViewControllersToNavigationController(HMUI.NavigationController navigationController, params HMUI.ViewController[] viewControllers)
    void SetViewControllersToNavigationController(HMUI::NavigationController* navigationController, std::initializer_list<HMUI::ViewController*> viewControllers);
    // Creating TArgs -> initializer_list proxy for: System.Void SetViewControllersToNavigationController(HMUI.NavigationController navigationController, params HMUI.ViewController[] viewControllers)
    template<class ...TParams>
    void SetViewControllersToNavigationController(HMUI::NavigationController* navigationController, TParams&&... viewControllers) {
      SetViewControllersToNavigationController(navigationController, {viewControllers...});
    }
    // protected System.Void SetViewControllerToNavigationController(HMUI.NavigationController navigationController, HMUI.ViewController viewController)
    // Offset: 0x10AF890
    void SetViewControllerToNavigationController(HMUI::NavigationController* navigationController, HMUI::ViewController* viewController);
    // protected System.Void PopViewControllerFromNavigationController(HMUI.NavigationController navigationController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x10AF8AC
    void PopViewControllerFromNavigationController(HMUI::NavigationController* navigationController, System::Action* finishedCallback, bool immediately);
    // protected System.Void PopViewControllersFromNavigationController(HMUI.NavigationController navigationController, System.Int32 numberOfControllers, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x10AF9F8
    void PopViewControllersFromNavigationController(HMUI::NavigationController* navigationController, int numberOfControllers, System::Action* finishedCallback, bool immediately);
    // protected System.Void SetLeftScreenViewController(HMUI.ViewController viewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10ADF34
    void SetLeftScreenViewController(HMUI::ViewController* viewController, HMUI::ViewController::AnimationType animationType);
    // protected System.Void SetRightScreenViewController(HMUI.ViewController viewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10AE044
    void SetRightScreenViewController(HMUI::ViewController* viewController, HMUI::ViewController::AnimationType animationType);
    // protected System.Void SetBottomScreenViewController(HMUI.ViewController viewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10AE154
    void SetBottomScreenViewController(HMUI::ViewController* viewController, HMUI::ViewController::AnimationType animationType);
    // protected System.Void SetTopScreenViewController(HMUI.ViewController viewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10AE264
    void SetTopScreenViewController(HMUI::ViewController* viewController, HMUI::ViewController::AnimationType animationType);
    // private System.Void PresentTitle(System.String title, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10ADC88
    void PresentTitle(::Il2CppString* title, HMUI::ViewController::AnimationType animationType);
    // public System.Boolean IsFlowCoordinatorInHierarchy(HMUI.FlowCoordinator flowCoordinator)
    // Offset: 0x10ADBC4
    bool IsFlowCoordinatorInHierarchy(HMUI::FlowCoordinator* flowCoordinator);
    // public HMUI.FlowCoordinator YoungestChildFlowCoordinatorOrSelf()
    // Offset: 0x10AFB4C
    HMUI::FlowCoordinator* YoungestChildFlowCoordinatorOrSelf();
    // protected System.Void ProvideInitialViewControllers(HMUI.ViewController mainViewController, HMUI.ViewController leftScreenViewController, HMUI.ViewController rightScreenViewController, HMUI.ViewController bottomScreenViewController, HMUI.ViewController topScreenViewController)
    // Offset: 0x10AFBE0
    void ProvideInitialViewControllers(HMUI::ViewController* mainViewController, HMUI::ViewController* leftScreenViewController, HMUI::ViewController* rightScreenViewController, HMUI::ViewController* bottomScreenViewController, HMUI::ViewController* topScreenViewController);
    // private System.Void Activate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10ADE70
    void Activate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // private System.Void Deactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10AEAF0
    void Deactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void __ExternalActivate()
    // Offset: 0x10AFC70
    void __ExternalActivate();
    // public System.Void __ExternalDeactivate()
    // Offset: 0x10AFEA4
    void __ExternalDeactivate();
    // private System.Void HandleScreenSystemBackButtonWasPressed()
    // Offset: 0x10B00E8
    void HandleScreenSystemBackButtonWasPressed();
    // protected System.Void SetGlobalUserInteraction(System.Boolean value)
    // Offset: 0x10AF0BC
    void SetGlobalUserInteraction(bool value);
    // protected System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xFFFFFFFF
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10B0118
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected System.Void TransitionDidStart()
    // Offset: 0x10B011C
    void TransitionDidStart();
    // protected System.Void TransitionDidFinish()
    // Offset: 0x10B0128
    void TransitionDidFinish();
    // protected System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10B0130
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected System.Void InitialViewControllerWasPresented()
    // Offset: 0x10B0134
    void InitialViewControllerWasPresented();
    // protected System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x10B0138
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // static private System.Void Log(System.String message)
    // Offset: 0x10B013C
    static void Log(::Il2CppString* message);
    // protected System.Void .ctor()
    // Offset: 0x10B01A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlowCoordinator* New_ctor();
  }; // HMUI.FlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator*, "HMUI", "FlowCoordinator");
#pragma pack(pop)