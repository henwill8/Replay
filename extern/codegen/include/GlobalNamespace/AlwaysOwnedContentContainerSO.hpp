// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AlwaysOwnedContentSO
  class AlwaysOwnedContentSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AlwaysOwnedContentContainerSO
  // [] Offset: FFFFFFFF
  class AlwaysOwnedContentContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private AlwaysOwnedContentSO _alwaysOwnedContent
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AlwaysOwnedContentSO* alwaysOwnedContent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AlwaysOwnedContentSO*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _alwaysOwnedBeatmapLevelIds
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<::Il2CppString*>* alwaysOwnedBeatmapLevelIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _alwaysOwnedPacksIds
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* alwaysOwnedPacksIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: AlwaysOwnedContentContainerSO
    AlwaysOwnedContentContainerSO(GlobalNamespace::AlwaysOwnedContentSO* alwaysOwnedContent_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* alwaysOwnedBeatmapLevelIds_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* alwaysOwnedPacksIds_ = {}) noexcept : alwaysOwnedContent{alwaysOwnedContent_}, alwaysOwnedBeatmapLevelIds{alwaysOwnedBeatmapLevelIds_}, alwaysOwnedPacksIds{alwaysOwnedPacksIds_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.HashSet`1<System.String> get_alwaysOwnedBeatmapLevelIds()
    // Offset: 0x102AA38
    System::Collections::Generic::HashSet_1<::Il2CppString*>* get_alwaysOwnedBeatmapLevelIds();
    // public System.Collections.Generic.HashSet`1<System.String> get_alwaysOwnedPacksIds()
    // Offset: 0x102ACF4
    System::Collections::Generic::HashSet_1<::Il2CppString*>* get_alwaysOwnedPacksIds();
    // private System.Void InitAlwaysOwnedItems()
    // Offset: 0x102B2D0
    void InitAlwaysOwnedItems();
    // protected override System.Void OnEnable()
    // Offset: 0x102B59C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x102B5C4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlwaysOwnedContentContainerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AlwaysOwnedContentContainerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlwaysOwnedContentContainerSO*, creationType>()));
    }
  }; // AlwaysOwnedContentContainerSO
  #pragma pack(pop)
  static check_size<sizeof(AlwaysOwnedContentContainerSO), 40 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*)> __GlobalNamespace_AlwaysOwnedContentContainerSOSizeCheck;
  static_assert(sizeof(AlwaysOwnedContentContainerSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysOwnedContentContainerSO*, "", "AlwaysOwnedContentContainerSO");
