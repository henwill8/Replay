// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NetEase::Docker
namespace NetEase::Docker {
  // Forward declaring type: IDock
  class IDock;
  // Forward declaring type: UploadScoreData
  struct UploadScoreData;
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.VivaDocker
  class VivaDocker : public ::Il2CppObject {
    public:
    // Get static field: static private NetEase.Docker.IDock _activeDock
    static NetEase::Docker::IDock* _get__activeDock();
    // Set static field: static private NetEase.Docker.IDock _activeDock
    static void _set__activeDock(NetEase::Docker::IDock* value);
    // static public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x1A04F34
    static void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // static public System.Void Initialize()
    // Offset: 0x1A05010
    static void Initialize();
    // static public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x1A050E8
    static void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // static public System.Void Login()
    // Offset: 0x1A051C8
    static void Login();
    // static public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x1A052A0
    static void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // static public System.Void Logout()
    // Offset: 0x1A05380
    static void Logout();
    // static public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x1A05458
    static void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // static public System.Boolean WillProvideHighscore()
    // Offset: 0x1A05578
    static bool WillProvideHighscore();
    // static public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x1A05650
    static void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // static public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x1A05730
    static void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // static public System.Void UpdateLoop()
    // Offset: 0x1A05820
    static void UpdateLoop();
    // static private System.Void .cctor()
    // Offset: 0x1A058F8
    static void _cctor();
  }; // NetEase.Docker.VivaDocker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::VivaDocker*, "NetEase.Docker", "VivaDocker");
#pragma pack(pop)