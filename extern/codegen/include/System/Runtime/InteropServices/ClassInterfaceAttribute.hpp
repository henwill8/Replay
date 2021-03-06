// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.ClassInterfaceType
#include "System/Runtime/InteropServices/ClassInterfaceType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ClassInterfaceAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CAC57C
  // [ComVisibleAttribute] Offset: CAC57C
  class ClassInterfaceAttribute : public System::Attribute {
    public:
    // System.Runtime.InteropServices.ClassInterfaceType _val
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::InteropServices::ClassInterfaceType val;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::ClassInterfaceType) == 0x4);
    // Creating value type constructor for type: ClassInterfaceAttribute
    ClassInterfaceAttribute(System::Runtime::InteropServices::ClassInterfaceType val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator System::Runtime::InteropServices::ClassInterfaceType
    constexpr operator System::Runtime::InteropServices::ClassInterfaceType() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Runtime.InteropServices.ClassInterfaceType classInterfaceType)
    // Offset: 0x130AE14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClassInterfaceAttribute* New_ctor(System::Runtime::InteropServices::ClassInterfaceType classInterfaceType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::ClassInterfaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClassInterfaceAttribute*, creationType>(classInterfaceType)));
    }
  }; // System.Runtime.InteropServices.ClassInterfaceAttribute
  #pragma pack(pop)
  static check_size<sizeof(ClassInterfaceAttribute), 16 + sizeof(System::Runtime::InteropServices::ClassInterfaceType)> __System_Runtime_InteropServices_ClassInterfaceAttributeSizeCheck;
  static_assert(sizeof(ClassInterfaceAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ClassInterfaceAttribute*, "System.Runtime.InteropServices", "ClassInterfaceAttribute");
