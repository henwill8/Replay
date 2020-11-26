// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.FileBasedResourceGroveler
  class FileBasedResourceGroveler : public ::Il2CppObject/*, public System::Resources::IResourceGroveler*/ {
    public:
    // private System.Resources.ResourceManager/ResourceManagerMediator _mediator
    // Offset: 0x10
    System::Resources::ResourceManager::ResourceManagerMediator* mediator;
    // Creating interface conversion operator: operator System::Resources::IResourceGroveler
    operator System::Resources::IResourceGroveler() noexcept {
      return *reinterpret_cast<System::Resources::IResourceGroveler*>(this);
    }
    // Creating conversion operator: operator System::Resources::ResourceManager::ResourceManagerMediator*
    constexpr operator System::Resources::ResourceManager::ResourceManagerMediator*() const noexcept {
      return mediator;
    }
    // public System.Void .ctor(System.Resources.ResourceManager/ResourceManagerMediator mediator)
    // Offset: 0x15D2DB8
    static FileBasedResourceGroveler* New_ctor(System::Resources::ResourceManager::ResourceManagerMediator* mediator);
    // private System.String FindResourceFile(System.Globalization.CultureInfo culture, System.String fileName)
    // Offset: 0x15D31AC
    ::Il2CppString* FindResourceFile(System::Globalization::CultureInfo* culture, ::Il2CppString* fileName);
    // private System.Resources.ResourceSet CreateResourceSet(System.String file)
    // Offset: 0x15D32DC
    System::Resources::ResourceSet* CreateResourceSet(::Il2CppString* file);
    // public System.Resources.ResourceSet GrovelForResourceSet(System.Globalization.CultureInfo culture, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.Boolean tryParents, System.Boolean createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x15D2DEC
    // Implemented from: System.Resources.IResourceGroveler
    // Base method: System.Resources.ResourceSet IResourceGroveler::GrovelForResourceSet(System.Globalization.CultureInfo culture, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.Boolean tryParents, System.Boolean createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
    System::Resources::ResourceSet* GrovelForResourceSet(System::Globalization::CultureInfo* culture, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* localResourceSets, bool tryParents, bool createIfNotExists, System::Threading::StackCrawlMark& stackMark);
  }; // System.Resources.FileBasedResourceGroveler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::FileBasedResourceGroveler*, "System.Resources", "FileBasedResourceGroveler");
#pragma pack(pop)
