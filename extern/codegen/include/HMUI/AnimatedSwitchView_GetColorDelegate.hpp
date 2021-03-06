// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.AnimatedSwitchView
#include "HMUI/AnimatedSwitchView.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AnimatedSwitchView/GetColorDelegate
  // [] Offset: FFFFFFFF
  class AnimatedSwitchView::GetColorDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetColorDelegate
    GetColorDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11F7558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedSwitchView::GetColorDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AnimatedSwitchView::GetColorDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedSwitchView::GetColorDelegate*, creationType>(object, method)));
    }
    // public UnityEngine.Color Invoke(HMUI.AnimatedSwitchView/ColorBlock colorBlock)
    // Offset: 0x11F7738
    UnityEngine::Color Invoke(HMUI::AnimatedSwitchView::ColorBlock* colorBlock);
    // public System.IAsyncResult BeginInvoke(HMUI.AnimatedSwitchView/ColorBlock colorBlock, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11F7DE4
    System::IAsyncResult* BeginInvoke(HMUI::AnimatedSwitchView::ColorBlock* colorBlock, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Color EndInvoke(System.IAsyncResult result)
    // Offset: 0x11F7E08
    UnityEngine::Color EndInvoke(System::IAsyncResult* result);
  }; // HMUI.AnimatedSwitchView/GetColorDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::GetColorDelegate*, "HMUI", "AnimatedSwitchView/GetColorDelegate");
