// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.XYZColor
  // [] Offset: FFFFFFFF
  class XYZColor : public ::Il2CppObject {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x10
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x14
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x18
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: XYZColor
    XYZColor(float x_ = {}, float y_ = {}, float z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0x21DC86C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XYZColor* New_ctor(float x, float y, float z) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::XYZColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XYZColor*, creationType>(x, y, z)));
    }
    // static public UnityEngine.ProBuilder.XYZColor FromRGB(UnityEngine.Color col)
    // Offset: 0x21DC8B4
    static UnityEngine::ProBuilder::XYZColor* FromRGB(UnityEngine::Color col);
    // static public UnityEngine.ProBuilder.XYZColor FromRGB(System.Single R, System.Single G, System.Single B)
    // Offset: 0x21DC944
    static UnityEngine::ProBuilder::XYZColor* FromRGB(float R, float G, float B);
    // public override System.String ToString()
    // Offset: 0x21DC9CC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.XYZColor
  #pragma pack(pop)
  static check_size<sizeof(XYZColor), 24 + sizeof(float)> __UnityEngine_ProBuilder_XYZColorSizeCheck;
  static_assert(sizeof(XYZColor) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::XYZColor*, "UnityEngine.ProBuilder", "XYZColor");
