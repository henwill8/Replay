// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
  // [] Offset: FFFFFFFF
  struct MovedFromAttributeData/*, public System::ValueType*/ {
    public:
    // public System.String className
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* className;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String nameSpace
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* nameSpace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String assembly
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* assembly;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean classHasChanged
    // Size: 0x1
    // Offset: 0x18
    bool classHasChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean nameSpaceHasChanged
    // Size: 0x1
    // Offset: 0x19
    bool nameSpaceHasChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean assemblyHasChanged
    // Size: 0x1
    // Offset: 0x1A
    bool assemblyHasChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean autoUdpateAPI
    // Size: 0x1
    // Offset: 0x1B
    bool autoUdpateAPI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MovedFromAttributeData
    constexpr MovedFromAttributeData(::Il2CppString* className_ = {}, ::Il2CppString* nameSpace_ = {}, ::Il2CppString* assembly_ = {}, bool classHasChanged_ = {}, bool nameSpaceHasChanged_ = {}, bool assemblyHasChanged_ = {}, bool autoUdpateAPI_ = {}) noexcept : className{className_}, nameSpace{nameSpace_}, assembly{assembly_}, classHasChanged{classHasChanged_}, nameSpaceHasChanged{nameSpaceHasChanged_}, assemblyHasChanged{assemblyHasChanged_}, autoUdpateAPI{autoUdpateAPI_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void Set(System.Boolean autoUpdateAPI, System.String sourceNamespace, System.String sourceAssembly, System.String sourceClassName)
    // Offset: 0xE14EE4
    void Set(bool autoUpdateAPI, ::Il2CppString* sourceNamespace, ::Il2CppString* sourceAssembly, ::Il2CppString* sourceClassName);
  }; // UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
  #pragma pack(pop)
  static check_size<sizeof(MovedFromAttributeData), 27 + sizeof(bool)> __UnityEngine_Scripting_APIUpdating_MovedFromAttributeDataSizeCheck;
  static_assert(sizeof(MovedFromAttributeData) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, "UnityEngine.Scripting.APIUpdating", "MovedFromAttributeData");
