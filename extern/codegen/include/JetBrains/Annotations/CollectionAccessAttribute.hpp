// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.CollectionAccessType
#include "JetBrains/Annotations/CollectionAccessType.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.CollectionAccessAttribute
  class CollectionAccessAttribute : public System::Attribute {
    public:
    // private JetBrains.Annotations.CollectionAccessType <CollectionAccessType>k__BackingField
    // Offset: 0x10
    JetBrains::Annotations::CollectionAccessType CollectionAccessType;
    // Creating conversion operator: operator JetBrains::Annotations::CollectionAccessType
    constexpr operator JetBrains::Annotations::CollectionAccessType() const noexcept {
      return CollectionAccessType;
    }
    // public System.Void .ctor(JetBrains.Annotations.CollectionAccessType collectionAccessType)
    // Offset: 0x19EE40C
    static CollectionAccessAttribute* New_ctor(JetBrains::Annotations::CollectionAccessType collectionAccessType);
    // public JetBrains.Annotations.CollectionAccessType get_CollectionAccessType()
    // Offset: 0x19EE438
    JetBrains::Annotations::CollectionAccessType get_CollectionAccessType();
    // private System.Void set_CollectionAccessType(JetBrains.Annotations.CollectionAccessType value)
    // Offset: 0x19EE440
    void set_CollectionAccessType(JetBrains::Annotations::CollectionAccessType value);
  }; // JetBrains.Annotations.CollectionAccessAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CollectionAccessAttribute*, "JetBrains.Annotations", "CollectionAccessAttribute");
#pragma pack(pop)