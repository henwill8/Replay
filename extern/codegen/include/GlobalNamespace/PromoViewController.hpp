// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PromoViewController
  class PromoViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::PromoViewController::ButtonPromoTypePair
    class ButtonPromoTypePair;
    // Nested type: GlobalNamespace::PromoViewController::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // private PromoViewController/ButtonPromoTypePair[] _elements
    // Offset: 0x70
    ::Array<GlobalNamespace::PromoViewController::ButtonPromoTypePair*>* elements;
    // private System.Action`3<PromoViewController,IAnnotatedBeatmapLevelCollection,IPreviewBeatmapLevel> promoButtonWasPressedEvent
    // Offset: 0x78
    System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* promoButtonWasPressedEvent;
    // public System.Void add_promoButtonWasPressedEvent(System.Action`3<PromoViewController,IAnnotatedBeatmapLevelCollection,IPreviewBeatmapLevel> value)
    // Offset: 0xF2DB04
    void add_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_promoButtonWasPressedEvent(System.Action`3<PromoViewController,IAnnotatedBeatmapLevelCollection,IPreviewBeatmapLevel> value)
    // Offset: 0xF2DBA8
    void remove_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF2DC4C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF2DD9C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PromoViewController* New_ctor();
  }; // PromoViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PromoViewController*, "", "PromoViewController");
#pragma pack(pop)
