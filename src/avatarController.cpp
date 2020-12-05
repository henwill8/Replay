#include "../include/avatarController.hpp"
#include "codegen.hpp"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"

using namespace il2cpp_utils;

void logAvatar(std::string str) {
    Logger::get().info("Replay: (Avatar) "+str);
}

DEFINE_CLASS(Replay::AvatarController);

void Replay::AvatarController::Start() {
    logAvatar("Adding avatar components");
    GlobalNamespace::AvatarPoseController* poseController = this->get_gameObject()->AddComponent<GlobalNamespace::AvatarPoseController*>();
    GlobalNamespace::AvatarVisualController* visualController = this->get_gameObject()->AddComponent<GlobalNamespace::AvatarVisualController*>();
}

void Replay::AvatarController::Update() {
    this->get_transform()->set_position(UnityEngine::Vector3{0, 1.6f, 0});
}