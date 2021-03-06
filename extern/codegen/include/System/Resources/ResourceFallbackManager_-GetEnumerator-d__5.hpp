// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceFallbackManager
#include "System/Resources/ResourceFallbackManager.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CA8C50
  class ResourceFallbackManager::$GetEnumerator$d__5 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<System::Globalization::CultureInfo*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Globalization.CultureInfo <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::CultureInfo* $$2__current;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // public System.Resources.ResourceFallbackManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    System::Resources::ResourceFallbackManager* $$4__this;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceFallbackManager*) == 0x8);
    // private System.Globalization.CultureInfo <currentCulture>5__1
    // Size: 0x8
    // Offset: 0x28
    System::Globalization::CultureInfo* $currentCulture$5__1;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // private System.Boolean <reachedNeutralResourcesCulture>5__2
    // Size: 0x1
    // Offset: 0x30
    bool $reachedNeutralResourcesCulture$5__2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $GetEnumerator$d__5
    $GetEnumerator$d__5(int $$1__state_ = {}, System::Globalization::CultureInfo* $$2__current_ = {}, System::Resources::ResourceFallbackManager* $$4__this_ = {}, System::Globalization::CultureInfo* $currentCulture$5__1_ = {}, bool $reachedNeutralResourcesCulture$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $currentCulture$5__1{$currentCulture$5__1_}, $reachedNeutralResourcesCulture$5__2{$reachedNeutralResourcesCulture$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Globalization::CultureInfo*>
    operator System::Collections::Generic::IEnumerator_1<System::Globalization::CultureInfo*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Globalization::CultureInfo*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1955A3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceFallbackManager::$GetEnumerator$d__5* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceFallbackManager::$GetEnumerator$d__5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceFallbackManager::$GetEnumerator$d__5*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1955A68
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1955A6C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Globalization.CultureInfo System.Collections.Generic.IEnumerator<System.Globalization.CultureInfo>.get_Current()
    // Offset: 0x1955C90
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    System::Globalization::CultureInfo* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1955C98
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1955CF8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
  #pragma pack(pop)
  static check_size<sizeof(ResourceFallbackManager::$GetEnumerator$d__5), 48 + sizeof(bool)> __System_Resources_ResourceFallbackManager_$GetEnumerator$d__5SizeCheck;
  static_assert(sizeof(ResourceFallbackManager::$GetEnumerator$d__5) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceFallbackManager::$GetEnumerator$d__5*, "System.Resources", "ResourceFallbackManager/<GetEnumerator>d__5");
