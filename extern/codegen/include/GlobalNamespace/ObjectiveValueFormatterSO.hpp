// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObjectiveValueFormatterSO
  class ObjectiveValueFormatterSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public System.String FormatValue(System.Int32 value)
    // Offset: 0x10022F0
    ::Il2CppString* FormatValue(int value);
    // public System.Void .ctor()
    // Offset: 0x1002318
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObjectiveValueFormatterSO* New_ctor();
  }; // ObjectiveValueFormatterSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObjectiveValueFormatterSO*, "", "ObjectiveValueFormatterSO");
#pragma pack(pop)
