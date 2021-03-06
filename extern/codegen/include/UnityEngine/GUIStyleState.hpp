// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GUIStyleState
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CD75C8
  class GUIStyleState : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private readonly UnityEngine.GUIStyle m_SourceStyle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GUIStyle* m_SourceStyle;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // Creating value type constructor for type: GUIStyleState
    GUIStyleState(System::IntPtr m_Ptr_ = {}, UnityEngine::GUIStyle* m_SourceStyle_ = {}) noexcept : m_Ptr{m_Ptr_}, m_SourceStyle{m_SourceStyle_} {}
    // public System.Void set_textColor(UnityEngine.Color value)
    // Offset: 0x198CC2C
    void set_textColor(UnityEngine::Color value);
    // static private System.IntPtr Init()
    // Offset: 0x198EF48
    static System::IntPtr Init();
    // private System.Void Cleanup()
    // Offset: 0x198EF7C
    void Cleanup();
    // private System.Void .ctor(UnityEngine.GUIStyle sourceStyle, System.IntPtr source)
    // Offset: 0x198F008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIStyleState* New_ctor(UnityEngine::GUIStyle* sourceStyle, System::IntPtr source) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIStyleState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIStyleState*, creationType>(sourceStyle, source)));
    }
    // static UnityEngine.GUIStyleState GetGUIStyleState(UnityEngine.GUIStyle sourceStyle, System.IntPtr source)
    // Offset: 0x198E394
    static UnityEngine::GUIStyleState* GetGUIStyleState(UnityEngine::GUIStyle* sourceStyle, System::IntPtr source);
    // private System.Void set_textColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x198EEF8
    void set_textColor_Injected(UnityEngine::Color& value);
    // public System.Void .ctor()
    // Offset: 0x198EFBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIStyleState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIStyleState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIStyleState*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x198F050
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.GUIStyleState
  #pragma pack(pop)
  static check_size<sizeof(GUIStyleState), 24 + sizeof(UnityEngine::GUIStyle*)> __UnityEngine_GUIStyleStateSizeCheck;
  static_assert(sizeof(GUIStyleState) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStyleState*, "UnityEngine", "GUIStyleState");
