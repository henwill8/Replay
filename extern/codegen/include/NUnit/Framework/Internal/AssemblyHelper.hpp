// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.AssemblyHelper
  // [] Offset: FFFFFFFF
  class AssemblyHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AssemblyHelper
    AssemblyHelper() noexcept {}
    // static public System.String GetAssemblyPath(System.Reflection.Assembly assembly)
    // Offset: 0x1694D04
    static ::Il2CppString* GetAssemblyPath(System::Reflection::Assembly* assembly);
    // static private System.Boolean IsFileUri(System.String uri)
    // Offset: 0x16A534C
    static bool IsFileUri(::Il2CppString* uri);
    // static public System.String GetAssemblyPathFromCodeBase(System.String codeBase)
    // Offset: 0x16A53E0
    static ::Il2CppString* GetAssemblyPathFromCodeBase(::Il2CppString* codeBase);
  }; // NUnit.Framework.Internal.AssemblyHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::AssemblyHelper*, "NUnit.Framework.Internal", "AssemblyHelper");
