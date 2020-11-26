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
  // Autogenerated type: JetBrains.Annotations.MacroAttribute
  class MacroAttribute : public System::Attribute {
    public:
    // private System.String <Expression>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Expression;
    // private System.Int32 <Editable>k__BackingField
    // Offset: 0x18
    int Editable;
    // private System.String <Target>k__BackingField
    // Offset: 0x20
    ::Il2CppString* Target;
    // public System.String get_Expression()
    // Offset: 0x19EE61C
    ::Il2CppString* get_Expression();
    // public System.Void set_Expression(System.String value)
    // Offset: 0x19EE624
    void set_Expression(::Il2CppString* value);
    // public System.Int32 get_Editable()
    // Offset: 0x19EE62C
    int get_Editable();
    // public System.Void set_Editable(System.Int32 value)
    // Offset: 0x19EE634
    void set_Editable(int value);
    // public System.String get_Target()
    // Offset: 0x19EE63C
    ::Il2CppString* get_Target();
    // public System.Void set_Target(System.String value)
    // Offset: 0x19EE644
    void set_Target(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x19EE64C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static MacroAttribute* New_ctor();
  }; // JetBrains.Annotations.MacroAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
#pragma pack(pop)
