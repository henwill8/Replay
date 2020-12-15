#include "../include/cameraReplace.hpp"
#include "codegen.hpp"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"

using namespace il2cpp_utils;

void logCamera(std::string str) {
    Logger::get().info("Replay: (Camera) "+str);
}

DEFINE_CLASS(Replay::CameraReplace);

UnityEngine::Camera* mainCam = nullptr;
UnityEngine::RenderTexture* newRT = nullptr;

void Replay::CameraReplace::Start() {
    newRT = UnityEngine::RenderTexture::New_ctor(UnityEngine::RenderTextureDescriptor(1920, 1080, UnityEngine::RenderTextureFormat::ARGB32));
    UnityEngine::GameObject* mainCamGO = UnityEngine::GameObject::New_ctor(createcsstr("ReplayCamera"));
    mainCamGO->AddComponent<UnityEngine::Camera*>();
    mainCam = mainCamGO->GetComponent<UnityEngine::Camera*>();
    mainCam->get_transform()->SetParent(this->get_transform());
    mainCam->get_transform()->set_localPosition(UnityEngine::Vector3::get_zero());

    UnityEngine::GameObject* canvasGO = UnityEngine::GameObject::New_ctor(createcsstr("ReplayCanvas"));
    canvasGO->AddComponent<UnityEngine::Canvas*>();
    UnityEngine::Canvas* canvas = canvasGO->GetComponent<UnityEngine::Canvas*>();
    canvas->get_transform()->SetParent(this->get_transform());
    canvas->set_renderMode(UnityEngine::RenderMode::ScreenSpaceOverlay);

    UnityEngine::GameObject* imageGO = UnityEngine::GameObject::New_ctor(createcsstr("ReplayImage"));
    imageGO->AddComponent<UnityEngine::UI::Image*>();
    UnityEngine::UI::Image* image = imageGO->GetComponent<UnityEngine::UI::Image*>();
    image->get_rectTransform()->set_anchorMin(UnityEngine::Vector2::get_zero());
    image->get_rectTransform()->set_anchorMax(UnityEngine::Vector2::get_one());
    image->get_rectTransform()->set_offsetMin(UnityEngine::Vector2::get_zero());
    image->get_rectTransform()->set_offsetMax(UnityEngine::Vector2::get_zero());

    mainCam->set_targetTexture(newRT);

    UnityEngine::Material* material = UnityEngine::Material::New_ctor(UnityEngine::Shader::Find(createcsstr("Unlit/Texture")));
    material->SetTexture(createcsstr("_MainTex"), newRT);
    image->set_material(material);
    image->set_sprite(nullptr);
}

void Replay::CameraReplace::Update() {

}