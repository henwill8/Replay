// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.InputField/OnValidateInput
  class InputField::OnValidateInput : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FF408
    static InputField::OnValidateInput* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Char Invoke(System.String text, System.Int32 charIndex, System.Char addedChar)
    // Offset: 0x11FF41C
    ::Il2CppChar Invoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar);
    // public System.IAsyncResult BeginInvoke(System.String text, System.Int32 charIndex, System.Char addedChar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FF874
    System::IAsyncResult* BeginInvoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Char EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FF930
    ::Il2CppChar EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.InputField/OnValidateInput
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField::OnValidateInput*, "UnityEngine.UI", "InputField/OnValidateInput");
#pragma pack(pop)
