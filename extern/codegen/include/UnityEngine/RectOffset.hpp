// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RectOffset
  class RectOffset : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // private readonly System.Object m_SourceStyle
    // Offset: 0x18
    ::Il2CppObject* m_SourceStyle;
    // System.Void .ctor(System.Object sourceStyle, System.IntPtr source)
    // Offset: 0x1738E94
    static RectOffset* New_ctor(::Il2CppObject* sourceStyle, System::IntPtr source);
    // public System.Void .ctor(System.Int32 left, System.Int32 right, System.Int32 top, System.Int32 bottom)
    // Offset: 0x1738FDC
    static RectOffset* New_ctor(int left, int right, int top, int bottom);
    // private System.Void Destroy()
    // Offset: 0x1738F50
    void Destroy();
    // static private System.IntPtr InternalCreate()
    // Offset: 0x1738E60
    static System::IntPtr InternalCreate();
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0x17395A8
    static void InternalDestroy(System::IntPtr ptr);
    // public System.Int32 get_left()
    // Offset: 0x17394A8
    int get_left();
    // public System.Void set_left(System.Int32 value)
    // Offset: 0x17390F4
    void set_left(int value);
    // public System.Int32 get_right()
    // Offset: 0x17394E8
    int get_right();
    // public System.Void set_right(System.Int32 value)
    // Offset: 0x1739144
    void set_right(int value);
    // public System.Int32 get_top()
    // Offset: 0x1739528
    int get_top();
    // public System.Void set_top(System.Int32 value)
    // Offset: 0x1739194
    void set_top(int value);
    // public System.Int32 get_bottom()
    // Offset: 0x1739568
    int get_bottom();
    // public System.Void set_bottom(System.Int32 value)
    // Offset: 0x17391E4
    void set_bottom(int value);
    // public System.Int32 get_horizontal()
    // Offset: 0x17395E8
    int get_horizontal();
    // public System.Int32 get_vertical()
    // Offset: 0x1739628
    int get_vertical();
    // public UnityEngine.Rect Remove(UnityEngine.Rect rect)
    // Offset: 0x1739668
    UnityEngine::Rect Remove(UnityEngine::Rect rect);
    // private System.Void Remove_Injected(ref UnityEngine.Rect rect, out UnityEngine.Rect ret)
    // Offset: 0x17396D0
    void Remove_Injected(UnityEngine::Rect& rect, UnityEngine::Rect& ret);
    // public System.Void .ctor()
    // Offset: 0x1738E14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RectOffset* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1738EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x1739234
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.RectOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectOffset*, "UnityEngine", "RectOffset");
#pragma pack(pop)