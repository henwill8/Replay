// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RaycastHit2D
  struct RaycastHit2D;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
  class ReflectionMethodsCache::GetRayIntersectionAllCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12096A8
    static ReflectionMethodsCache::GetRayIntersectionAllCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public UnityEngine.RaycastHit2D[] Invoke(UnityEngine.Ray r, System.Single f, System.Int32 i)
    // Offset: 0x12096BC
    ::Array<UnityEngine::RaycastHit2D>* Invoke(UnityEngine::Ray r, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1209A24
    System::IAsyncResult* BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.RaycastHit2D[] EndInvoke(System.IAsyncResult result)
    // Offset: 0x1209AF8
    ::Array<UnityEngine::RaycastHit2D>* EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
#pragma pack(pop)
