// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EnvironmentShaderWarmup
#include "GlobalNamespace/EnvironmentShaderWarmup.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentShaderWarmup/<HideAfterFrames>d__6
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D308D0
  class EnvironmentShaderWarmup::$HideAfterFrames$d__6 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Int32 numberOfFrames
    // Size: 0x4
    // Offset: 0x20
    int numberOfFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfFrames and: $$4__this
    char __padding2[0x4] = {};
    // public EnvironmentShaderWarmup <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentShaderWarmup* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentShaderWarmup*) == 0x8);
    // Creating value type constructor for type: $HideAfterFrames$d__6
    $HideAfterFrames$d__6(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int numberOfFrames_ = {}, GlobalNamespace::EnvironmentShaderWarmup* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, numberOfFrames{numberOfFrames_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF2817C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentShaderWarmup::$HideAfterFrames$d__6* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentShaderWarmup::$HideAfterFrames$d__6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentShaderWarmup::$HideAfterFrames$d__6*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF281B0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF281B4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF2828C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF28294
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF282F4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // EnvironmentShaderWarmup/<HideAfterFrames>d__6
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentShaderWarmup::$HideAfterFrames$d__6), 40 + sizeof(GlobalNamespace::EnvironmentShaderWarmup*)> __GlobalNamespace_EnvironmentShaderWarmup_$HideAfterFrames$d__6SizeCheck;
  static_assert(sizeof(EnvironmentShaderWarmup::$HideAfterFrames$d__6) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentShaderWarmup::$HideAfterFrames$d__6*, "", "EnvironmentShaderWarmup/<HideAfterFrames>d__6");
