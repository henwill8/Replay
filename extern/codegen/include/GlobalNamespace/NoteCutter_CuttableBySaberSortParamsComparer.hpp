// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteCutter
#include "GlobalNamespace/NoteCutter.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutter/CuttableBySaberSortParamsComparer
  // [] Offset: FFFFFFFF
  class NoteCutter::CuttableBySaberSortParamsComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: CuttableBySaberSortParamsComparer
    CuttableBySaberSortParamsComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // public System.Int32 Compare(System.Object p0, System.Object p1)
    // Offset: 0xF932A0
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object p0, System.Object p1)
    int Compare(::Il2CppObject* p0, ::Il2CppObject* p1);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* p0, ::Il2CppObject* p1);
    // public System.Void .ctor()
    // Offset: 0xF92BC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutter::CuttableBySaberSortParamsComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutter::CuttableBySaberSortParamsComparer*, creationType>()));
    }
  }; // NoteCutter/CuttableBySaberSortParamsComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*, "", "NoteCutter/CuttableBySaberSortParamsComparer");
