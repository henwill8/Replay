#include "../include/cameraReplace.hpp"
#include "codegen.hpp"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"

using namespace il2cpp_utils;

void logCamera(std::string str) {
    Logger::get().info("Replay: (Camera) "+str);
}

DEFINE_CLASS(Replay::CameraReplace);

UnityEngine::Camera* mainCam = nullptr;

void Replay::CameraReplace::Start() {
    mainCam = UnityEngine::Camera::get_main();

    UnityEngine::RenderTexture* newRT = *New<UnityEngine::RenderTexture*>(GetClassFromName("UnityEngine", "RenderTexture"));
    // newRT->set_height(10);
    // newRT->set_width(10);

    // cam->set_useOcclusionCulling(false);
    // cam->set_fieldOfView(180);

    // mainCam->set_targetTexture(newRT);
    logCamera("test1");
    logCamera(std::to_string(mainCam->get_fieldOfView()));

    // UnityEngine::Graphics::Blit(newRT, cam->get_targetTexture());
}

void Replay::CameraReplace::Update() {
    if(mainCam != nullptr) {
        Il2CppObject* cam = *RunMethod("UnityEngine", "Camera", "get_main");
        // SetPropertyValue(cam, "velocity", Vector3{0, 0, 0});
    }
}