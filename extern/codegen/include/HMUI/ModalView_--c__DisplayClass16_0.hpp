// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ModalView
#include "HMUI/ModalView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ModalView/<>c__DisplayClass16_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D18088
  class ModalView::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public HMUI.ModalView <>4__this
    // Size: 0x8
    // Offset: 0x10
    HMUI::ModalView* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::ModalView*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass16_0
    $$c__DisplayClass16_0(HMUI::ModalView* $$4__this_ = {}, System::Action* finishedCallback_ = {}) noexcept : $$4__this{$$4__this_}, finishedCallback{finishedCallback_} {}
    // System.Void <Hide>b__0()
    // Offset: 0x11B7A5C
    void $Hide$b__0();
    // public System.Void .ctor()
    // Offset: 0x11B7090
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModalView::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ModalView::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModalView::$$c__DisplayClass16_0*, creationType>()));
    }
  }; // HMUI.ModalView/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(ModalView::$$c__DisplayClass16_0), 24 + sizeof(System::Action*)> __HMUI_ModalView_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(ModalView::$$c__DisplayClass16_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ModalView::$$c__DisplayClass16_0*, "HMUI", "ModalView/<>c__DisplayClass16_0");
