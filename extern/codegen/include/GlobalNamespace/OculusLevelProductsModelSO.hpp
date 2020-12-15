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
  // Autogenerated type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::OculusLevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    // private OculusLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Offset: 0x18
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>* levelPackProductsData;
    // private System.Collections.Generic.Dictionary`2<System.String,OculusLevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // private System.Collections.Generic.Dictionary`2<System.String,OculusLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> _assetFileToSku
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* assetFileToSku;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public OculusLevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0x100A9A8
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>* get_levelPackProductsData();
    // public OculusLevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0x1006D00
    GlobalNamespace::OculusLevelProductsModelSO::LevelProductData* GetLevelProductData(::Il2CppString* levelId);
    // public OculusLevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0x100AB30
    GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::Il2CppString* levelPackId);
    // public System.String GetLevelSku(System.String assetFile)
    // Offset: 0x100ABB0
    ::Il2CppString* GetLevelSku(::Il2CppString* assetFile);
    // protected override System.Void OnEnable()
    // Offset: 0x100A9B0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x100AC30
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OculusLevelProductsModelSO* New_ctor();
  }; // OculusLevelProductsModelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO*, "", "OculusLevelProductsModelSO");
#pragma pack(pop)