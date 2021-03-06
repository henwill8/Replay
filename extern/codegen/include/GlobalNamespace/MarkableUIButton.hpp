// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MarkableUIButton
  // [] Offset: FFFFFFFF
  class MarkableUIButton : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private System.Boolean _marked
    // Size: 0x1
    // Offset: 0x20
    bool marked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: marked and: markedTriggerId
    char __padding1[0x3] = {};
    // private System.Int32 _markedTriggerId
    // Size: 0x4
    // Offset: 0x24
    int markedTriggerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MarkableUIButton
    MarkableUIButton(UnityEngine::Animator* animator_ = {}, bool marked_ = {}, int markedTriggerId_ = {}) noexcept : animator{animator_}, marked{marked_}, markedTriggerId{markedTriggerId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_marked()
    // Offset: 0x111122C
    bool get_marked();
    // public System.Void set_marked(System.Boolean value)
    // Offset: 0x1111234
    void set_marked(bool value);
    // protected System.Void Awake()
    // Offset: 0x1111260
    void Awake();
    // public System.Void ToggleMarked()
    // Offset: 0x11112B8
    void ToggleMarked();
    // public System.Void .ctor()
    // Offset: 0x11112C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarkableUIButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MarkableUIButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarkableUIButton*, creationType>()));
    }
  }; // MarkableUIButton
  #pragma pack(pop)
  static check_size<sizeof(MarkableUIButton), 36 + sizeof(int)> __GlobalNamespace_MarkableUIButtonSizeCheck;
  static_assert(sizeof(MarkableUIButton) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MarkableUIButton*, "", "MarkableUIButton");
