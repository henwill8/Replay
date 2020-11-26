// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.ProBuilder.IHasDefault
#include "UnityEngine/ProBuilder/IHasDefault.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ColorPalette
  class ColorPalette : public UnityEngine::ScriptableObject/*, public UnityEngine::ProBuilder::IHasDefault*/ {
    public:
    // private UnityEngine.Color <current>k__BackingField
    // Offset: 0x18
    UnityEngine::Color current;
    // private System.Collections.Generic.List`1<UnityEngine.Color> m_Colors
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Color>* m_Colors;
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::IHasDefault
    operator UnityEngine::ProBuilder::IHasDefault() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::IHasDefault*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_current()
    // Offset: 0x188AB58
    UnityEngine::Color get_current();
    // public System.Void set_current(UnityEngine.Color value)
    // Offset: 0x188AB64
    void set_current(UnityEngine::Color value);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color> get_colors()
    // Offset: 0x188AB70
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color>* get_colors();
    // public System.Void SetColors(System.Collections.Generic.IEnumerable`1<UnityEngine.Color> colors)
    // Offset: 0x188ABE0
    void SetColors(System::Collections::Generic::IEnumerable_1<UnityEngine::Color>* colors);
    // public UnityEngine.Color get_Item(System.Int32 i)
    // Offset: 0x188B0F8
    UnityEngine::Color get_Item(int i);
    // public System.Void set_Item(System.Int32 i, UnityEngine.Color value)
    // Offset: 0x188B174
    void set_Item(int i, UnityEngine::Color value);
    // public System.Int32 get_Count()
    // Offset: 0x188B20C
    int get_Count();
    // public System.Void SetDefaultValues()
    // Offset: 0x188AC8C
    // Implemented from: UnityEngine.ProBuilder.IHasDefault
    // Base method: System.Void IHasDefault::SetDefaultValues()
    void SetDefaultValues();
    // public System.Void .ctor()
    // Offset: 0x188B25C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorPalette* New_ctor();
  }; // UnityEngine.ProBuilder.ColorPalette
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColorPalette*, "UnityEngine.ProBuilder", "ColorPalette");
#pragma pack(pop)
