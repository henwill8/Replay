// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MasterServerEndPoint
  class MasterServerEndPoint : public ::Il2CppObject/*, public System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>*/ {
    public:
    // public readonly System.String hostName
    // Offset: 0x10
    ::Il2CppString* hostName;
    // public readonly System.Int32 port
    // Offset: 0x18
    int port;
    // private System.Threading.Tasks.Task`1<System.Net.IPEndPoint> _getEndPointTask
    // Offset: 0x20
    System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* getEndPointTask;
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>
    operator System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>*>(this);
    }
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0x1AE0F10
    System::Net::IPEndPoint* get_endPoint();
    // public System.Void .ctor(System.String hostName, System.Int32 port)
    // Offset: 0x1AE71FC
    static MasterServerEndPoint* New_ctor(::Il2CppString* hostName, int port);
    // public System.Threading.Tasks.Task`1<System.Net.IPEndPoint> GetEndPointAsync()
    // Offset: 0x1AE7244
    System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* GetEndPointAsync();
    // public System.Net.IPEndPoint GetEndPoint()
    // Offset: 0x1AE7300
    System::Net::IPEndPoint* GetEndPoint();
    // private System.Net.IPEndPoint GetEndPointInternal()
    // Offset: 0x1AE73A4
    System::Net::IPEndPoint* GetEndPointInternal();
    // public override System.String ToString()
    // Offset: 0x1AE7468
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1AE74F0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(MasterServerEndPoint other)
    // Offset: 0x1AE5A04
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(MasterServerEndPoint other)
    bool Equals(GlobalNamespace::MasterServerEndPoint* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1AE75A0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // MasterServerEndPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerEndPoint*, "", "MasterServerEndPoint");
#pragma pack(pop)
