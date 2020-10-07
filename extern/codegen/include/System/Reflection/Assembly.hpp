// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.InteropServices._Assembly
#include "System/Runtime/InteropServices/_Assembly.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: AssemblyNameFlags
  struct AssemblyNameFlags;
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: ManifestResourceInfo
  class ManifestResourceInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Security::Policy
namespace System::Security::Policy {
  // Forward declaring type: Evidence
  class Evidence;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.Assembly
  class Assembly : public ::Il2CppObject, public System::Reflection::ICustomAttributeProvider, public System::Runtime::Serialization::ISerializable, public System::Runtime::InteropServices::_Assembly {
    public:
    // Nested type: System::Reflection::Assembly::ResolveEventHolder
    class ResolveEventHolder;
    // Nested type: System::Reflection::Assembly::UnmanagedMemoryStreamForModule
    class UnmanagedMemoryStreamForModule;
    // System.IntPtr _mono_assembly
    // Offset: 0x10
    System::IntPtr mono_assembly;
    // private System.Reflection.Assembly/ResolveEventHolder resolve_event_holder
    // Offset: 0x18
    System::Reflection::Assembly::ResolveEventHolder* resolve_event_holder;
    // private System.Object _evidence
    // Offset: 0x20
    ::Il2CppObject* evidence;
    // private System.Object _minimum
    // Offset: 0x28
    ::Il2CppObject* minimum;
    // private System.Object _optional
    // Offset: 0x30
    ::Il2CppObject* optional;
    // private System.Object _refuse
    // Offset: 0x38
    ::Il2CppObject* refuse;
    // private System.Object _granted
    // Offset: 0x40
    ::Il2CppObject* granted;
    // private System.Object _denied
    // Offset: 0x48
    ::Il2CppObject* denied;
    // private System.Boolean fromByteArray
    // Offset: 0x50
    bool fromByteArray;
    // private System.String assemblyName
    // Offset: 0x58
    ::Il2CppString* assemblyName;
    // private System.String get_code_base(System.Boolean escaped)
    // Offset: 0x1366F30
    ::Il2CppString* get_code_base(bool escaped);
    // private System.String get_fullname()
    // Offset: 0x1366F38
    ::Il2CppString* get_fullname();
    // private System.String get_location()
    // Offset: 0x1366F3C
    ::Il2CppString* get_location();
    // static System.String GetAotId()
    // Offset: 0x1366F40
    static ::Il2CppString* GetAotId();
    // private System.String GetCodeBase(System.Boolean escaped)
    // Offset: 0x1366F44
    ::Il2CppString* GetCodeBase(bool escaped);
    // public System.String get_CodeBase()
    // Offset: 0x1366F4C
    ::Il2CppString* get_CodeBase();
    // public System.String get_FullName()
    // Offset: 0x1366F54
    ::Il2CppString* get_FullName();
    // public System.String get_Location()
    // Offset: 0x1366F60
    ::Il2CppString* get_Location();
    // System.IntPtr GetManifestResourceInternal(System.String name, out System.Int32 size, out System.Reflection.Module module)
    // Offset: 0x1367128
    System::IntPtr GetManifestResourceInternal(::Il2CppString* name, int& size, System::Reflection::Module*& module);
    // public System.IO.Stream GetManifestResourceStream(System.String name)
    // Offset: 0x136712C
    System::IO::Stream* GetManifestResourceStream(::Il2CppString* name);
    // System.IO.Stream GetManifestResourceStream(System.Type type, System.String name, System.Boolean skipSecurityCheck, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1367504
    System::IO::Stream* GetManifestResourceStream(System::Type* type, ::Il2CppString* name, bool skipSecurityCheck, System::Threading::StackCrawlMark& stackMark);
    // System.IO.Stream GetManifestResourceStream(System.String name, ref System.Threading.StackCrawlMark stackMark, System.Boolean skipSecurityCheck)
    // Offset: 0x1367698
    System::IO::Stream* GetManifestResourceStream(::Il2CppString* name, System::Threading::StackCrawlMark& stackMark, bool skipSecurityCheck);
    // System.String GetSimpleName()
    // Offset: 0x13676A8
    ::Il2CppString* GetSimpleName();
    // System.Byte[] GetPublicKey()
    // Offset: 0x13676D8
    ::Array<uint8_t>* GetPublicKey();
    // System.Version GetVersion()
    // Offset: 0x1367708
    System::Version* GetVersion();
    // private System.Reflection.AssemblyNameFlags GetFlags()
    // Offset: 0x1367738
    System::Reflection::AssemblyNameFlags GetFlags();
    // System.Type[] GetTypes(System.Boolean exportedOnly)
    // Offset: 0x1367768
    ::Array<System::Type*>* GetTypes(bool exportedOnly);
    // public System.Type[] GetTypes()
    // Offset: 0x1367770
    ::Array<System::Type*>* GetTypes();
    // public System.Type GetType(System.String name)
    // Offset: 0x1367784
    System::Type* GetType(::Il2CppString* name);
    // System.Type InternalGetType(System.Reflection.Module module, System.String name, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x136779C
    System::Type* InternalGetType(System::Reflection::Module* module, ::Il2CppString* name, bool throwOnError, bool ignoreCase);
    // public System.Reflection.AssemblyName GetName(System.Boolean copiedName)
    // Offset: 0x13677A8
    System::Reflection::AssemblyName* GetName(bool copiedName);
    // public System.Reflection.AssemblyName GetName()
    // Offset: 0x1367808
    System::Reflection::AssemblyName* GetName();
    // static public System.Reflection.Assembly GetAssembly(System.Type type)
    // Offset: 0x1367860
    static System::Reflection::Assembly* GetAssembly(System::Type* type);
    // System.Reflection.RuntimeAssembly InternalGetSatelliteAssembly(System.String name, System.Globalization.CultureInfo culture, System.Version version, System.Boolean throwOnFileNotFound, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1367928
    System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(::Il2CppString* name, System::Globalization::CultureInfo* culture, System::Version* version, bool throwOnFileNotFound, System::Threading::StackCrawlMark& stackMark);
    // static private System.Reflection.Assembly LoadFrom(System.String assemblyFile, System.Boolean refonly)
    // Offset: 0x1367E28
    static System::Reflection::Assembly* LoadFrom(::Il2CppString* assemblyFile, bool refonly);
    // static public System.Reflection.Assembly LoadFrom(System.String assemblyFile)
    // Offset: 0x1367E20
    static System::Reflection::Assembly* LoadFrom(::Il2CppString* assemblyFile);
    // static public System.Reflection.Assembly Load(System.String assemblyString)
    // Offset: 0x1367E30
    static System::Reflection::Assembly* Load(::Il2CppString* assemblyString);
    // static private System.Reflection.Assembly load_with_partial_name(System.String name, System.Security.Policy.Evidence e)
    // Offset: 0x1367E64
    static System::Reflection::Assembly* load_with_partial_name(::Il2CppString* name, System::Security::Policy::Evidence* e);
    // static public System.Reflection.Assembly LoadWithPartialName(System.String partialName, System.Security.Policy.Evidence securityEvidence)
    // Offset: 0x1367E68
    static System::Reflection::Assembly* LoadWithPartialName(::Il2CppString* partialName, System::Security::Policy::Evidence* securityEvidence);
    // static System.Reflection.Assembly LoadWithPartialName(System.String partialName, System.Security.Policy.Evidence securityEvidence, System.Boolean oldBehavior)
    // Offset: 0x1367E70
    static System::Reflection::Assembly* LoadWithPartialName(::Il2CppString* partialName, System::Security::Policy::Evidence* securityEvidence, bool oldBehavior);
    // System.Reflection.Module[] GetModulesInternal()
    // Offset: 0x1367F20
    ::Array<System::Reflection::Module*>* GetModulesInternal();
    // public System.String[] GetManifestResourceNames()
    // Offset: 0x1367F24
    ::Array<::Il2CppString*>* GetManifestResourceNames();
    // static public System.Reflection.Assembly GetExecutingAssembly()
    // Offset: 0x1367F28
    static System::Reflection::Assembly* GetExecutingAssembly();
    // static public System.Reflection.Assembly GetCallingAssembly()
    // Offset: 0x1367F70
    static System::Reflection::Assembly* GetCallingAssembly();
    // static System.IntPtr InternalGetReferencedAssemblies(System.Reflection.Assembly module)
    // Offset: 0x1367F74
    static System::IntPtr InternalGetReferencedAssemblies(System::Reflection::Assembly* module);
    // static System.Reflection.AssemblyName[] GetReferencedAssemblies(System.Reflection.Assembly module)
    // Offset: 0x1367F78
    static ::Array<System::Reflection::AssemblyName*>* GetReferencedAssemblies(System::Reflection::Assembly* module);
    // private System.Boolean GetManifestResourceInfoInternal(System.String name, System.Reflection.ManifestResourceInfo info)
    // Offset: 0x13684DC
    bool GetManifestResourceInfoInternal(::Il2CppString* name, System::Reflection::ManifestResourceInfo* info);
    // public System.Reflection.ManifestResourceInfo GetManifestResourceInfo(System.String resourceName)
    // Offset: 0x13684E0
    System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::Il2CppString* resourceName);
    // public System.Boolean get_ReflectionOnly()
    // Offset: 0x1368634
    bool get_ReflectionOnly();
    // static private System.Exception CreateNIE()
    // Offset: 0x13686F8
    static System::Exception* CreateNIE();
    // public System.Boolean get_IsFullyTrusted()
    // Offset: 0x1368760
    bool get_IsFullyTrusted();
    // public System.Type GetType(System.String name, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x1368768
    System::Type* GetType(::Il2CppString* name, bool throwOnError, bool ignoreCase);
    // public System.Reflection.Module GetModule(System.String name)
    // Offset: 0x13687AC
    System::Reflection::Module* GetModule(::Il2CppString* name);
    // public System.Reflection.AssemblyName[] GetReferencedAssemblies()
    // Offset: 0x13687F0
    ::Array<System::Reflection::AssemblyName*>* GetReferencedAssemblies();
    // public System.Reflection.Module[] GetModules(System.Boolean getResourceModules)
    // Offset: 0x1368834
    ::Array<System::Reflection::Module*>* GetModules(bool getResourceModules);
    // protected System.Void .ctor()
    // Offset: 0x1366ED0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Assembly* New_ctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1366FC8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1367028
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Boolean ICustomAttributeProvider::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x13670A8
    // Implemented from: System.Reflection.ICustomAttributeProvider
    // Base method: System.Object[] ICustomAttributeProvider::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.String ToString()
    // Offset: 0x136781C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1368638
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x136863C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // System.Reflection.Assembly
  // static public System.Boolean op_Equality(System.Reflection.Assembly left, System.Reflection.Assembly right)
  // Offset: 0x1368878
  bool operator ==(System::Reflection::Assembly* left, System::Reflection::Assembly& right);
  // static public System.Boolean op_Inequality(System.Reflection.Assembly left, System.Reflection.Assembly right)
  // Offset: 0x1367474
  bool operator !=(System::Reflection::Assembly* left, System::Reflection::Assembly& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Assembly*, "System.Reflection", "Assembly");
#pragma pack(pop)
