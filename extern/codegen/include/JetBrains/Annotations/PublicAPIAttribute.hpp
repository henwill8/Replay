// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.PublicAPIAttribute
  class PublicAPIAttribute : public System::Attribute {
    public:
    // private System.String <Comment>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Comment;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Comment;
    }
    // public System.Void .ctor(System.String comment)
    // Offset: 0x19615CC
    static PublicAPIAttribute* New_ctor(::Il2CppString* comment);
    // public System.String get_Comment()
    // Offset: 0x1961600
    ::Il2CppString* get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x1961608
    void set_Comment(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x19615C4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static PublicAPIAttribute* New_ctor();
  }; // JetBrains.Annotations.PublicAPIAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
#pragma pack(pop)
