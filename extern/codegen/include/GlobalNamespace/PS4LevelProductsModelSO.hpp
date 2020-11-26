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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PS4LevelProductsModelSO
  class PS4LevelProductsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PS4LevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    // private PS4LevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Offset: 0x18
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* levelPackProductsData;
    // private System.Collections.Generic.Dictionary`2<System.String,PS4LevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // private System.Collections.Generic.Dictionary`2<System.String,PS4LevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public PS4LevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0xF02CB0
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*>* get_levelPackProductsData();
    // public PS4LevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0xF02E10
    GlobalNamespace::PS4LevelProductsModelSO::LevelProductData* GetLevelProductData(::Il2CppString* levelId);
    // public PS4LevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0xF02E90
    GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::Il2CppString* levelPackId);
    // protected override System.Void OnEnable()
    // Offset: 0xF02CB8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xF02F10
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PS4LevelProductsModelSO* New_ctor();
  }; // PS4LevelProductsModelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LevelProductsModelSO*, "", "PS4LevelProductsModelSO");
#pragma pack(pop)
