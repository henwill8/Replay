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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.DesignerAttribute
  class DesignerAttribute : public System::Attribute {
    public:
    // private readonly System.String designerTypeName
    // Offset: 0x10
    ::Il2CppString* designerTypeName;
    // private readonly System.String designerBaseTypeName
    // Offset: 0x18
    ::Il2CppString* designerBaseTypeName;
    // public System.Void .ctor(System.String designerTypeName)
    // Offset: 0x1481070
    static DesignerAttribute* New_ctor(::Il2CppString* designerTypeName);
    // public System.Void .ctor(System.String designerTypeName, System.Type designerBaseType)
    // Offset: 0x1481170
    static DesignerAttribute* New_ctor(::Il2CppString* designerTypeName, System::Type* designerBaseType);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1481240
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14812F8
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerAttribute*, "System.ComponentModel", "DesignerAttribute");
#pragma pack(pop)
