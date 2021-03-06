// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FogSwitchEventEffect
#include "GlobalNamespace/FogSwitchEventEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: FogSwitchEventEffect/<AnimateToFogCoroutine>d__8
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D312A0
  class FogSwitchEventEffect::$AnimateToFogCoroutine$d__8 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public FogSwitchEventEffect <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FogSwitchEventEffect* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FogSwitchEventEffect*) == 0x8);
    // public System.Single value
    // Size: 0x4
    // Offset: 0x28
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x2C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <startTransition>5__2
    // Size: 0x4
    // Offset: 0x30
    float $startTransition$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <endTransition>5__3
    // Size: 0x4
    // Offset: 0x34
    float $endTransition$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__4
    // Size: 0x4
    // Offset: 0x38
    float $elapsedTime$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $AnimateToFogCoroutine$d__8
    $AnimateToFogCoroutine$d__8(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::FogSwitchEventEffect* $$4__this_ = {}, float value_ = {}, float duration_ = {}, float $startTransition$5__2_ = {}, float $endTransition$5__3_ = {}, float $elapsedTime$5__4_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, value{value_}, duration{duration_}, $startTransition$5__2{$startTransition$5__2_}, $endTransition$5__3{$endTransition$5__3_}, $elapsedTime$5__4{$elapsedTime$5__4_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF30570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FogSwitchEventEffect::$AnimateToFogCoroutine$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FogSwitchEventEffect::$AnimateToFogCoroutine$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FogSwitchEventEffect::$AnimateToFogCoroutine$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF305A4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF305A8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF306EC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF306F4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF30754
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // FogSwitchEventEffect/<AnimateToFogCoroutine>d__8
  #pragma pack(pop)
  static check_size<sizeof(FogSwitchEventEffect::$AnimateToFogCoroutine$d__8), 56 + sizeof(float)> __GlobalNamespace_FogSwitchEventEffect_$AnimateToFogCoroutine$d__8SizeCheck;
  static_assert(sizeof(FogSwitchEventEffect::$AnimateToFogCoroutine$d__8) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FogSwitchEventEffect::$AnimateToFogCoroutine$d__8*, "", "FogSwitchEventEffect/<AnimateToFogCoroutine>d__8");
