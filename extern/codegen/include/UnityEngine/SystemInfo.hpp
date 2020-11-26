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
  // Forward declaring type: OperatingSystemFamily
  struct OperatingSystemFamily;
  // Forward declaring type: DeviceType
  struct DeviceType;
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: GraphicsDeviceType
  struct GraphicsDeviceType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
  // Forward declaring type: FormatUsage
  struct FormatUsage;
  // Forward declaring type: DefaultFormat
  struct DefaultFormat;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SystemInfo
  class SystemInfo : public ::Il2CppObject {
    public:
    // static public UnityEngine.OperatingSystemFamily get_operatingSystemFamily()
    // Offset: 0x16C2E44
    static UnityEngine::OperatingSystemFamily get_operatingSystemFamily();
    // static public UnityEngine.DeviceType get_deviceType()
    // Offset: 0x16C2EAC
    static UnityEngine::DeviceType get_deviceType();
    // static public UnityEngine.Rendering.GraphicsDeviceType get_graphicsDeviceType()
    // Offset: 0x16C2F14
    static UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();
    // static public System.String get_graphicsDeviceVersion()
    // Offset: 0x16C2F7C
    static ::Il2CppString* get_graphicsDeviceVersion();
    // static public System.Boolean get_supportsInstancing()
    // Offset: 0x16C2FE4
    static bool get_supportsInstancing();
    // static private System.Boolean IsValidEnumValue(System.Enum value)
    // Offset: 0x16C304C
    static bool IsValidEnumValue(System::Enum* value);
    // static public System.Boolean SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat format)
    // Offset: 0x16C30D4
    static bool SupportsRenderTextureFormat(UnityEngine::RenderTextureFormat format);
    // static public System.Boolean SupportsTextureFormat(UnityEngine.TextureFormat format)
    // Offset: 0x16C31E4
    static bool SupportsTextureFormat(UnityEngine::TextureFormat format);
    // static private UnityEngine.OperatingSystemFamily GetOperatingSystemFamily()
    // Offset: 0x16C2E78
    static UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();
    // static private UnityEngine.DeviceType GetDeviceType()
    // Offset: 0x16C2EE0
    static UnityEngine::DeviceType GetDeviceType();
    // static private UnityEngine.Rendering.GraphicsDeviceType GetGraphicsDeviceType()
    // Offset: 0x16C2F48
    static UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();
    // static private System.String GetGraphicsDeviceVersion()
    // Offset: 0x16C2FB0
    static ::Il2CppString* GetGraphicsDeviceVersion();
    // static private System.Boolean SupportsInstancing()
    // Offset: 0x16C3018
    static bool SupportsInstancing();
    // static private System.Boolean HasRenderTextureNative(UnityEngine.RenderTextureFormat format)
    // Offset: 0x16C31A4
    static bool HasRenderTextureNative(UnityEngine::RenderTextureFormat format);
    // static private System.Boolean SupportsTextureFormatNative(UnityEngine.TextureFormat format)
    // Offset: 0x16C32B4
    static bool SupportsTextureFormatNative(UnityEngine::TextureFormat format);
    // static public System.Boolean IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
    // Offset: 0x16C32F4
    static bool IsFormatSupported(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
    // Offset: 0x16C3344
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat format)
    // Offset: 0x16C3394
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::Experimental::Rendering::DefaultFormat format);
  }; // UnityEngine.SystemInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
#pragma pack(pop)
