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
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
  class ReflectionMethodsCache::Raycast3DCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x120A8A0
    static ReflectionMethodsCache::Raycast3DCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(UnityEngine.Ray r, out UnityEngine.RaycastHit hit, System.Single f, System.Int32 i)
    // Offset: 0x120A8B4
    bool Invoke(UnityEngine::Ray r, UnityEngine::RaycastHit& hit, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, out UnityEngine.RaycastHit hit, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x120AC38
    System::IAsyncResult* BeginInvoke(UnityEngine::Ray r, UnityEngine::RaycastHit& hit, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(out UnityEngine.RaycastHit hit, System.IAsyncResult result)
    // Offset: 0x120AD2C
    bool EndInvoke(UnityEngine::RaycastHit& hit, System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::Raycast3DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast3DCallback");
#pragma pack(pop)
