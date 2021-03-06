// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector2Int
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CBE92C
  // [UsedByNativeCodeAttribute] Offset: CBE92C
  struct Vector2Int/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Vector2Int>*/ {
    public:
    // private System.Int32 m_X
    // Size: 0x4
    // Offset: 0x0
    int m_X;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Y
    // Size: 0x4
    // Offset: 0x4
    int m_Y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Vector2Int
    constexpr Vector2Int(int m_X_ = {}, int m_Y_ = {}) noexcept : m_X{m_X_}, m_Y{m_Y_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Vector2Int>
    operator System::IEquatable_1<UnityEngine::Vector2Int>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Vector2Int>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector2Int s_Zero
    static UnityEngine::Vector2Int _get_s_Zero();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Zero
    static void _set_s_Zero(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_One
    static UnityEngine::Vector2Int _get_s_One();
    // Set static field: static private readonly UnityEngine.Vector2Int s_One
    static void _set_s_One(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Up
    static UnityEngine::Vector2Int _get_s_Up();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Up
    static void _set_s_Up(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Down
    static UnityEngine::Vector2Int _get_s_Down();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Down
    static void _set_s_Down(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Left
    static UnityEngine::Vector2Int _get_s_Left();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Left
    static void _set_s_Left(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Right
    static UnityEngine::Vector2Int _get_s_Right();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Right
    static void _set_s_Right(UnityEngine::Vector2Int value);
    // public System.Int32 get_x()
    // Offset: 0xE15128
    int get_x();
    // public System.Int32 get_y()
    // Offset: 0xE15130
    int get_y();
    // public System.Void .ctor(System.Int32 x, System.Int32 y)
    // Offset: 0xE15138
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector2Int(int x, int y)
    // static private System.Void .cctor()
    // Offset: 0x1ABD260
    static void _cctor();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE15140
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Vector2Int other)
    // Offset: 0xE15148
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Vector2Int other)
    bool Equals(UnityEngine::Vector2Int other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE15150
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE15158
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Vector2Int
  #pragma pack(pop)
  static check_size<sizeof(Vector2Int), 4 + sizeof(int)> __UnityEngine_Vector2IntSizeCheck;
  static_assert(sizeof(Vector2Int) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
