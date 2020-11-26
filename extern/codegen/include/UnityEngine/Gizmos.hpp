// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Gizmos
  class Gizmos : public ::Il2CppObject {
    public:
    // static public System.Void DrawLine(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x168B1B4
    static void DrawLine(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // static public System.Void DrawWireSphere(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x168B260
    static void DrawWireSphere(UnityEngine::Vector3 center, float radius);
    // static public System.Void DrawSphere(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x168B310
    static void DrawSphere(UnityEngine::Vector3 center, float radius);
    // static public System.Void DrawWireCube(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0x168B3C0
    static void DrawWireCube(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // static public System.Void DrawCube(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0x168B46C
    static void DrawCube(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // static public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x168B518
    static void set_color(UnityEngine::Color value);
    // static public System.Void set_matrix(UnityEngine.Matrix4x4 value)
    // Offset: 0x168B5A8
    static void set_matrix(UnityEngine::Matrix4x4 value);
    // static public System.Void DrawRay(UnityEngine.Vector3 from, UnityEngine.Vector3 direction)
    // Offset: 0x168B628
    static void DrawRay(UnityEngine::Vector3 from, UnityEngine::Vector3 direction);
    // static private System.Void DrawLine_Injected(ref UnityEngine.Vector3 from, ref UnityEngine.Vector3 to)
    // Offset: 0x168B210
    static void DrawLine_Injected(UnityEngine::Vector3& from, UnityEngine::Vector3& to);
    // static private System.Void DrawWireSphere_Injected(ref UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x168B2C0
    static void DrawWireSphere_Injected(UnityEngine::Vector3& center, float radius);
    // static private System.Void DrawSphere_Injected(ref UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x168B370
    static void DrawSphere_Injected(UnityEngine::Vector3& center, float radius);
    // static private System.Void DrawWireCube_Injected(ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 size)
    // Offset: 0x168B41C
    static void DrawWireCube_Injected(UnityEngine::Vector3& center, UnityEngine::Vector3& size);
    // static private System.Void DrawCube_Injected(ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 size)
    // Offset: 0x168B4C8
    static void DrawCube_Injected(UnityEngine::Vector3& center, UnityEngine::Vector3& size);
    // static private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x168B568
    static void set_color_Injected(UnityEngine::Color& value);
    // static private System.Void set_matrix_Injected(ref UnityEngine.Matrix4x4 value)
    // Offset: 0x168B5E8
    static void set_matrix_Injected(UnityEngine::Matrix4x4& value);
  }; // UnityEngine.Gizmos
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
#pragma pack(pop)
