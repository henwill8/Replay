// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
  // [] Offset: FFFFFFFF
  class ReflectionMethodsCache::GetRayIntersectionAllCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetRayIntersectionAllCallback
    GetRayIntersectionAllCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18EB7DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMethodsCache::GetRayIntersectionAllCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMethodsCache::GetRayIntersectionAllCallback*, creationType>(object, method)));
    }
    // public UnityEngine.RaycastHit2D[] Invoke(UnityEngine.Ray r, System.Single f, System.Int32 i)
    // Offset: 0x18EB7F0
    ::Array<UnityEngine::RaycastHit2D>* Invoke(UnityEngine::Ray r, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18EBB58
    System::IAsyncResult* BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.RaycastHit2D[] EndInvoke(System.IAsyncResult result)
    // Offset: 0x18EBC2C
    ::Array<UnityEngine::RaycastHit2D>* EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
