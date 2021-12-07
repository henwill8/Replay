#include <dlfcn.h>
#include "main.hpp"
#include "TrickSaber/TrickSaberAPI.hpp"
#include "codegen.hpp"
#include "UI.hpp"
#include "hollywood/audio_recorder.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "beatsaber-hook/shared/config/config-utils.hpp"
#include "questui/shared/QuestUI.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "bs-utils/shared/utils.hpp"
#include "custom-types/shared/register.hpp"

#include "MathUtils.hpp"

#include "CustomTypes/CameraCapture.hpp"

#include <sstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <list>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <filesystem>
#include <experimental/coroutine>
#include "custom-types/shared/coroutine.hpp"
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

using namespace System::Threading;
using namespace il2cpp_utils;
using namespace QuestUI;
using namespace GlobalNamespace;
// using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;

Logger& loggingFunction() {
    static auto logging = new Logger(modInfo, LoggerOptions(false, true));
    return *logging;
}

Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}

int clip(int n, int lower, int upper) {
    return std::max(lower, std::min(n, upper));
}

std::string csstr(Il2CppString* str) {
    return to_utf8(csstrtostr(str));
}

struct eulerAngleTransform {
    UnityEngine::Vector3 pos;
    UnityEngine::Vector3 rot;
};

struct playerTransformData {
    eulerAngleTransform rightSaber;

    eulerAngleTransform leftSaber;
    
    eulerAngleTransform head;

    void Write(std::ofstream& writer) const {
        writer.write(reinterpret_cast<const char*>(&rightSaber), sizeof(eulerAngleTransform));
        writer.write(reinterpret_cast<const char*>(&leftSaber), sizeof(eulerAngleTransform));
        writer.write(reinterpret_cast<const char*>(&head), sizeof(eulerAngleTransform));
    }
};

struct v1replayKeyFrame {
    float rightSaberPosX;
    float rightSaberPosY;
    float rightSaberPosZ;

    float rightSaberRotX;
    float rightSaberRotY;
    float rightSaberRotZ;

    float leftSaberPosX;
    float leftSaberPosY;
    float leftSaberPosZ;
    
    float leftSaberRotX;
    float leftSaberRotY;
    float leftSaberRotZ;
    
    float headPosX;
    float headPosY;
    float headPosZ;

    float headRotX;
    float headRotY;
    float headRotZ;

    int score;
    float percent;
    int rank;
    int combo;
    float time;
};

struct v4replayKeyFrame {
    playerTransformData playerData;

    int score;
    float percent;
    int rank;
    int combo;
    float time;
    float jumpYOffset;
};

struct ReplayKeyFrame {
    playerTransformData playerData;

    int score;
    float percent;
    int rank;
    int combo;
    float time;
    float jumpYOffset;
    float energy;

    void Write(std::ofstream& writer) const {
        playerData.Write(writer);
        
        writer.write(reinterpret_cast<const char*>(&score), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&percent), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rank), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&combo), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&jumpYOffset), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&energy), sizeof(float));
    }
};

struct v1replayBools {
    bool batteryEnergy;
    bool disappearingArrows;
    bool noObstacles;
    bool noBombs;
    bool noArrows;
    bool slowerSong;
    bool noFail;
    bool instafail;
    bool ghostNotes;
    bool fasterSong;
    bool leftHanded;
};

struct v6replayBools {
    bool disappearingArrows;
    bool noObstacles;
    bool noBombs;
    bool noArrows;
    bool slowerSong;
    bool noFail;
    bool oneLife;
    bool fourLives;
    bool ghostNotes;
    bool fasterSong;
    bool leftHanded;
    bool strictAngles;
    bool proMode;
    bool smallNotes;
    bool superFastSong;

    void Write(std::ofstream& writer) const {
        writer.write(reinterpret_cast<const char*>(&oneLife), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&fourLives), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&strictAngles), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&proMode), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&smallNotes), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&ghostNotes), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&disappearingArrows), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&fasterSong), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&superFastSong), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noFail), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noBombs), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noObstacles), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&noArrows), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&slowerSong), sizeof(bool));
        writer.write(reinterpret_cast<const char*>(&leftHanded), sizeof(bool));
    }
};


static float InitialRefreshRate;

/// Sets the refresh rate of the screen
/// If null-opt, it will be set to the initial value
/// This is what happens when Qraphics+ doesn't want to maintain a very simple
/// to understand and maintain API

// OVR doesn't seem to apply our refresh rate, do we need to force the game to restart the menu?
static void setRefreshRate(std::optional<float> refreshRate) noexcept {
    float oldRefreshRate = GlobalNamespace::OVRPlugin::get_systemDisplayFrequency();
    float newRefreshRate = refreshRate ? refreshRate.value() : InitialRefreshRate;

    auto systemDisplayFrequenciesAvailable = OVRPlugin::get_systemDisplayFrequenciesAvailable();
    for (int i = 0; i < systemDisplayFrequenciesAvailable->Length(); i++)
    {
        if (areApproximate(systemDisplayFrequenciesAvailable->values[i], newRefreshRate))
        {
            newRefreshRate = systemDisplayFrequenciesAvailable->values[i];
            break;
        }
    }
    log("Going to try set refresh rate to %f", newRefreshRate);


    GlobalNamespace::OVRPlugin::set_systemDisplayFrequency(newRefreshRate);


    // Attempt to force refresh rate
    auto ovrManager = GlobalNamespace::OVRManager::get_instance();
    ovrManager->UpdateHMDEvents();
    auto ovrDisplay = GlobalNamespace::OVRManager::get_display();
    if (ovrDisplay) {
        ovrDisplay->RecenterPose();
    }

    auto refreshRateChangedAction = GlobalNamespace::OVRManager::_get_DisplayRefreshRateChanged();
    if (refreshRateChangedAction)
        refreshRateChangedAction->Invoke(oldRefreshRate, newRefreshRate);

    log("Display refresh rate is now %f", GlobalNamespace::OVRPlugin::get_systemDisplayFrequency());
}

enum cameraAngles {
    HEADSET,
    SMOOTH,
    THIRDPERSON
};

UnityEngine::UI::Button* playButton = nullptr;
UnityEngine::UI::Button* restartButton = nullptr;

cameraAngles cameraAngle = HEADSET;

Button* replayButton = nullptr;
UnityEngine::GameObject* replayButtonGO = nullptr;
Button* cameraToggle = nullptr;
UnityEngine::GameObject* cameraToggleGO = nullptr;
Button* failedReplayButton = nullptr;
Button* failedCameraToggle = nullptr;
Toggle* speedToggle = nullptr;

int replayButtonCount = 0;

TMPro::TextMeshProUGUI* replayText = nullptr;
std::string replayTextCurrent;

TMPro::TextMeshProUGUI* warningText = nullptr;
UnityEngine::GameObject* warningTextGO = nullptr;
TMPro::TextMeshProUGUI* failedTimeText = nullptr;
UnityEngine::GameObject* failedTimeTextGO = nullptr;

UnityEngine::GameObject* failedTimeSlider = nullptr;
UnityEngine::GameObject* latencySlider = nullptr;

Button* continueButton = nullptr;

bool speedToggleBool = true;

bool recording = true;

bool inSong = false;
bool inSongOrResults = false;

bool failedReplay;
bool deathReplay;

float songTime = 0.0f;
float failedSongTime;
bool failedInReplay;

std::vector<ReplayKeyFrame> dataToSave;
std::vector<ReplayKeyFrame> replayData;

bool setSongTime = false;
float oldSliderTime;

void replayButtonOnClick() {
    if(playButton != nullptr) {
        recording = false;
        log("Pressed replay button");
        deathReplay = false;
        setSongTime = false;
        playButton->Press();
    }
}

void failedReplayButtonOnClick() {
    log("Pressed failed replay button");
    if(restartButton != nullptr) {
        recording = false;
        failedReplay = false;
        deathReplay = true;
        log("Setting replay data to dataToSave");
        replayData = dataToSave;
        restartButton->Press();
    }
}

void cameraToggleOnClick() {
    auto* buttonTMP = cameraToggle->get_gameObject()->GetComponentInChildren<TMPro::TextMeshProUGUI*>();
    if(buttonTMP != nullptr) {
        warningText->get_gameObject()->SetActive(true);
        switch(cameraAngle) {
            case HEADSET:
                log("Setting button text to smooth camera");

                cameraAngle = SMOOTH;
                buttonTMP->set_text(createcsstr("Smooth Camera"));
                break;

            case SMOOTH:
                log("Setting button text to third person");

                cameraAngle = THIRDPERSON;
                buttonTMP->set_text(createcsstr("Third Person"));
                break;

            case THIRDPERSON:
                log("Setting button text to normal");

                cameraAngle = HEADSET;
                buttonTMP->set_text(createcsstr("Normal"));
                warningText->get_gameObject()->SetActive(false);
                break;
        }
    }
}

void failedCameraToggleOnClick() {
    auto* buttonTMP = failedCameraToggle->get_gameObject()->GetComponentInChildren<TMPro::TextMeshProUGUI*>();
    if(buttonTMP != nullptr) {
        switch(cameraAngle) {
            case HEADSET:
                log("Setting button text to smooth camera");

                cameraAngle = SMOOTH;
                buttonTMP->set_text(createcsstr("Smooth Camera"));
                break;

            case SMOOTH:
                log("Setting button text to third person");

                cameraAngle = THIRDPERSON;
                buttonTMP->set_text(createcsstr("Third Person"));
                break;

            case THIRDPERSON:
                log("Setting button text to normal");

                cameraAngle = HEADSET;
                buttonTMP->set_text(createcsstr("Normal"));
                break;
        }
    }
}

void speedToggleOnClick(bool newValue) {
    speedToggleBool = newValue;
}

int score;
int maxRawScore;
float percent;
int rank;
float scoreMultiplier = 1.0f;
int combo = 0;
float energy;

int indexNum = 0;

v6replayBools replaySaveBools;
bool didReach0Energy;
float reached0Time;
bool zenMode;

float jumpYOffset;
bool gotJumpYOffset = false;

bool reduceDebris = false;

int triggerNode;
float rTriggerVal;
float lTriggerVal;

bool inPauseMenu = false;
bool inResumeAnimation = false;

bool inMulti = false;

float replaySpeed = 1.0f;

UnityEngine::Quaternion smoothCameraRotation;
UnityEngine::Vector3 smoothCameraPosition;

UnityEngine::Vector3 smoothHeadPosition;
UnityEngine::Quaternion smoothHeadRotation;

float positionSmooth;
float rotationSmooth;

UnityEngine::Vector3 smoothPositionOffset;

UnityEngine::Vector3 thirdPersonCamPos;
UnityEngine::Quaternion thirdPersonCamRot;
UnityEngine::Vector3 newThirdPersonCamPos;
UnityEngine::Quaternion newThirdPersonCamRot;
UnityEngine::Vector3 basePrevPos;
UnityEngine::Vector3 basePrevRot;
bool pressedThirdPersonMoveButton = false;

UnityEngine::Vector3 rightSaberPos;
UnityEngine::Vector3 rightSaberRot;
UnityEngine::Vector3 leftSaberPos;
UnityEngine::Vector3 leftSaberRot;

UnityEngine::Vector3 lerpedRightHandPosition;
UnityEngine::Quaternion lerpedRightHandRotation;
UnityEngine::Vector3 lerpedLeftHandPosition;
UnityEngine::Quaternion lerpedLeftHandRotation;

UnityEngine::GameObject* customAvatar = nullptr;
UnityEngine::GameObject* playerAvatar = nullptr;

int offset = 0;

bool letChangeSpeed = false;

UnityEngine::Transform* headFollowTransform;

GameplayModifiersModelSO* modifiersModel = nullptr;

v6replayBools oldModifiers;
bool resetModifiers = false;

FPSCounter* fpsCounter = nullptr;
int gameFPS;

float songStartTime;
float practiceStartTime;
float maxSongTime;

bool levelFailedTextEffect;

bool firstTimeInPause;

bool doneFailedEffect;

bool foundComboPanel;
bool createText;

float modifierSpeed;

GameEnergyUIPanel* gameEnergyUIPanel;
GameEnergyUIPanel* failedEnergyEffect;
float failedEffectTimer;

std::string songHash;
std::string songName;
std::string replayDirectory;
std::string fileExtensionName = ".reqlay";
unsigned char fileHeader[3] = {
    0xa1, 0xd2, 0x45
};
int fileVersion = 6;
int openedFileVersion;

#define AppendMember(config, name, value, allocator) if(!config.HasMember(name)) config.AddMember(name, value, allocator)

void SaveConfig() {
    if(!getConfig().config.HasMember("FOV")) {
        log("Creating config");
        getConfig().config.SetObject();
        rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
        AppendMember(getConfig().config, "PositionSmooth", 2.0f, allocator);
        AppendMember(getConfig().config, "RotationSmooth", 2.0f, allocator);

        rapidjson::Value SmoothCameraObject(rapidjson::kObjectType);
        SmoothCameraObject.AddMember("x", 0, allocator);
        SmoothCameraObject.AddMember("y", 0, allocator);
        SmoothCameraObject.AddMember("z", -0.7f, allocator);
        AppendMember(getConfig().config, "SmoothCameraOffset", SmoothCameraObject, allocator);
        
        rapidjson::Value ThirdPersonPosObject(rapidjson::kObjectType);
        ThirdPersonPosObject.AddMember("x", -3, allocator);
        ThirdPersonPosObject.AddMember("y", 1.6f, allocator);
        ThirdPersonPosObject.AddMember("z", -3, allocator);
        AppendMember(getConfig().config, "ThirdPersonCameraPos", ThirdPersonPosObject, allocator);

        rapidjson::Value ThirdPersonRotObject(rapidjson::kObjectType);
        ThirdPersonRotObject.AddMember("x", 0, allocator);
        ThirdPersonRotObject.AddMember("y", 45, allocator);
        ThirdPersonRotObject.AddMember("z", 0, allocator);
        AppendMember(getConfig().config, "ThirdPersonCameraRot", ThirdPersonRotObject, allocator);
        
        AppendMember(getConfig().config, "ThirdPersonCircularMovement", false, allocator);

        AppendMember(getConfig().config, "FullComboOverwrites", false, allocator);
        AppendMember(getConfig().config, "DisableVibration", true, allocator);
        AppendMember(getConfig().config, "Avatars", true, allocator);
        AppendMember(getConfig().config, "OverwriteNFPlays", true, allocator);

        AppendMember(getConfig().config, "FOV", 90, allocator);
        AppendMember(getConfig().config, "FPS", 45, allocator);
        AppendMember(getConfig().config, "Width", 1920, allocator);
        AppendMember(getConfig().config, "Height", 1080, allocator);
        AppendMember(getConfig().config, "Bitrate", 5000, allocator);

        getConfig().Write();
    } else {
        log("Not creating config");
        getConfig().Load();
    }
}

template<class T>
UnityEngine::GameObject* FindObject(const std::string& name, bool byParent = false, bool getLastIndex = false, int index = 0) {
    log("Finding GameObject of name %s", name.c_str());
    Array<T>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<T>();
    log("There are %i GameObjects", (int) trs->Length());
    for(int i = 0; i < trs->Length(); i++) {
        if(i != trs->Length()-1 && getLastIndex && index == 0) continue;
        if(i < index && (getLastIndex && index != 0)) continue;
        UnityEngine::GameObject* go = trs->values[i]->get_gameObject();
        if(byParent) {
            go = go->get_transform()->GetParent()->get_gameObject();
        }
        // log(to_utf8(csstrtostr(UnityEngine::Transform::GetName(trs->values[i]))));
        if(go->m_CachedPtr.m_value == nullptr) continue;
        if(to_utf8(csstrtostr(UnityEngine::Transform::GetName(go))) == name){
            log("Found GameObject");
            return go;
        }
    }
    log("Could not find GameObject");
    return nullptr;
}

template<class T>
UnityEngine::GameObject* FindObjectByIndex(std::string name, bool byParent = false, int index = 0) {
    return FindObject<T>(name, byParent, true, index);
}

template<class T>
T GetFirstEnabledComponent() {
    Array<T>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<T>();
    if (!trs) return nullptr;

    for(int i = 0; i < trs->Length(); i++) {
        auto item = trs->values[i];
        if (!item)
            continue;

        UnityEngine::GameObject* go = item->get_gameObject();
        // log(to_utf8(csstrtostr(UnityEngine::Transform::GetName(trs->values[i]))));
        if(go && go->get_activeInHierarchy()){
            return item;
        }
    }
    return nullptr;
}

UnityEngine::Matrix4x4 MatrixTranslate(UnityEngine::Vector3 vector) {
	UnityEngine::Matrix4x4 result;
	result.m00 = 1;
	result.m01 = 0;
	result.m02 = 0;
	result.m03 = vector.x;
	result.m10 = 0;
	result.m11 = 1;
	result.m12 = 0;
	result.m13 = vector.y;
	result.m20 = 0;
	result.m21 = 0;
	result.m22 = 1;
	result.m23 = vector.z;
	result.m30 = 0;
	result.m31 = 0;
	result.m32 = 0;
	result.m33 = 1;
	return result;
}

void SetActiveAllChildren(UnityEngine::Transform* transform, bool value) {
    // log("Setting all children to active, child count is "+std::to_string(transform->get_childCount()));
    for(int i = 0; i < transform->get_childCount(); i++) {
        UnityEngine::Transform* child = transform->GetChild(i);
        child->get_gameObject()->SetActive(value);
        SetActiveAllChildren(child, value);
    }
}

bool HasFakeMiss() {
    if((failedReplay || deathReplay) && songTime > failedSongTime-1) {
        return false;
    }

    int amountCheckingEachSide = 2;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        if(replayData[clip(indexNum+i, 0, replayData.size()-1)].combo <= 1) {
            return false;
        }
    }

    return true;
}

float ClosestRealOffset() {
    int amountCheckingEachSide = 10;
    float offset = -1;
    int distance = 100;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        int clippedIndex = clip(indexNum+i, 0, replayData.size()-1);
        if(replayData[clippedIndex].jumpYOffset != -1 && i < distance) {
            offset = replayData[clippedIndex].jumpYOffset;
            distance = i;
        }
    }
    
    return offset;
}

void LoadAvatarData() {
    log("Setting visual avatar data");
    Array<AvatarDataModel*>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<AvatarDataModel*>();
    log("There are %i AvatarDataModels", (int) trs->Length());

    AvatarData* data = trs->values[0]->get_avatarData();
    AvatarPartsModel* partsModel = trs->values[0]->avatarPartsModel;
    auto* visualController = customAvatar->GetComponent<GlobalNamespace::AvatarVisualController*>();

    //Changing Avatar Visuals (Meshes and Sprites)
    AvatarMeshPartSO* avatarMeshPartSO = partsModel->get_headTopCollection()->GetById(data->get_headTopId()) != nullptr ? partsModel->get_headTopCollection()->GetById(data->get_headTopId()) : partsModel->get_headTopCollection()->GetDefault();
    visualController->headTopMeshFilter->set_mesh(avatarMeshPartSO->get_mesh());
    AvatarMeshPartSO* avatarMeshPartSO2 = partsModel->get_glassesCollection()->GetById(data->glassesId) != nullptr ? partsModel->get_glassesCollection()->GetById(data->glassesId) : partsModel->get_glassesCollection()->GetDefault();
	visualController->glassesMeshFilter->set_mesh(avatarMeshPartSO2->get_mesh());
	AvatarMeshPartSO* avatarMeshPartSO3 = partsModel->get_facialHairCollection()->GetById(data->facialHairId) != nullptr ? partsModel->get_facialHairCollection()->GetById(data->facialHairId) : partsModel->get_facialHairCollection()->GetDefault();
	visualController->facialHairMeshFilter->set_mesh(avatarMeshPartSO3->get_mesh());
	AvatarMeshPartSO* avatarMeshPartSO4 = partsModel->get_handsCollection()->GetById(data->handsId) != nullptr ? partsModel->get_handsCollection()->GetById(data->handsId) : partsModel->get_handsCollection()->GetDefault();
	visualController->leftHandsHairMeshFilter->set_mesh(avatarMeshPartSO4->get_mesh());
	visualController->rightHandsHairMeshFilter->set_mesh(avatarMeshPartSO4->get_mesh());
	AvatarMeshPartSO* avatarMeshPartSO5 = partsModel->get_clothesCollection()->GetById(data->clothesId) != nullptr ? partsModel->get_clothesCollection()->GetById(data->clothesId) : partsModel->get_clothesCollection()->GetDefault();
	visualController->bodyMeshFilter->set_mesh(avatarMeshPartSO5->get_mesh());
	AvatarSpritePartSO* avatarSpritePartSO = partsModel->get_eyesCollection()->GetById(data->eyesId) != nullptr ? partsModel->get_eyesCollection()->GetById(data->eyesId) : partsModel->get_eyesCollection()->GetDefault();
	visualController->eyesSprite->set_sprite(avatarSpritePartSO->get_sprite());
	AvatarSpritePartSO* avatarSpritePartSO2 = partsModel->get_mouthCollection()->GetById(data->mouthId) != nullptr ? partsModel->get_mouthCollection()->GetById(data->mouthId) : partsModel->get_mouthCollection()->GetDefault();
	visualController->mouthSprite->set_sprite(avatarSpritePartSO2->get_sprite());
    
    log("Successfully set all avatar meshes");

    //Changing Avatar Color
    UnityEngine::Color color = partsModel->GetSkinColorById(data->skinColorId)->color;
	visualController->headTopPropertyBlockColorSetter->SetColors(Array<UnityEngine::Color>::New(
        data->headTopPrimaryColor,
        data->headTopSecondaryColor
    ));
	visualController->glassesPropertyBlockColorSetter->SetColor(data->glassesColor);
	visualController->facialHairPropertyBlockColorSetter->SetColor(color);
	visualController->clothesPropertyBlockSetter->SetColors(Array<UnityEngine::Color>::New(
		data->clothesPrimaryColor,
		data->clothesSecondaryColor,
		data->clothesDetailColor
    ));
	visualController->skinPropertyBlockColorSetter->SetColor(color);
	UnityEngine::Color color2 = data->handsColor;
	visualController->leftHandPropertyBlockSetter->SetColors(Array<UnityEngine::Color>::New(
		color,
		color2
    ));
	visualController->rightHandPropertyBlockSetter->SetColors(Array<UnityEngine::Color>::New(
		color,
		color2
    ));

    log("Successfully set all avatar colors");
}

void CreateReplayFile(const std::string& songHashID) {
    std::ofstream output(replayDirectory+songHashID+fileExtensionName, std::ios::binary);
    if(output.is_open()) {
        log("Writing replay file at %s",(replayDirectory+songHashID+fileExtensionName).c_str());

        log("Writing magic bytes");
        for(unsigned char & i : fileHeader) {
            output.write(reinterpret_cast<const char*>(&i), sizeof(unsigned char));
        }

        log("Writing version number");
        output.write(reinterpret_cast<const char*>(&fileVersion), sizeof(int));
        
        log("Failed in replay is %i, failed song time is %f", failedInReplay, failedSongTime);
        output.write(reinterpret_cast<const char*>(&failedInReplay), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&failedSongTime), sizeof(float));

        output.write(reinterpret_cast<const char*>(&replaySaveBools), sizeof(v6replayBools));
        output.write(reinterpret_cast<const char*>(&didReach0Energy), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&reached0Time), sizeof(float));

        for(const auto& item : dataToSave) {
            item.Write(output);
        }

        output.close();
        log("Successfully wrote file");
    }
}

// Returns the std::thread so you can decide if you want to
// .join (syncronous, dont do this) or detach the thread.
// This decision is mandatory
void CreateReplayFileAsync(const std::string& songHashID) {
    std::thread(CreateReplayFile, songHashID).detach();
}

void GetReplayValues(const std::string& songHashID) {
    replayData.clear();

    log("Getting replay data...");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    if(input.is_open()) {
        log("Successfully opened replay file at: %s", (replayDirectory+songHashID+fileExtensionName).c_str());

        bool isCorrectHeader = true;
        unsigned char headerBytes[3];
        for(int i = 0; i < 3; i++) {
            input.read(reinterpret_cast<char*>(&headerBytes[i]), sizeof(unsigned char));
            if(headerBytes[i] != fileHeader[i]) {
                isCorrectHeader = false;
                openedFileVersion = 1;
            }
        }

        if(isCorrectHeader) {
            input.read(reinterpret_cast<char*>(&openedFileVersion), sizeof(int));
        }

        log("File version is %i", openedFileVersion);

        ReplayKeyFrame keyFrameData;

        v1replayBools v1bools;
        
        if(openedFileVersion == 1) {
            gotJumpYOffset = false;
            replaySaveBools.oneLife = headerBytes[0];
            replaySaveBools.fourLives = headerBytes[1];
            replaySaveBools.ghostNotes = headerBytes[2];
            input.read(reinterpret_cast<char*>(&replaySaveBools.disappearingArrows), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.fasterSong), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noFail), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noBombs), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noObstacles), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.noArrows), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.slowerSong), sizeof(bool));
            input.read(reinterpret_cast<char*>(&replaySaveBools.leftHanded), sizeof(bool));
            didReach0Energy = replaySaveBools.noFail;
            reached0Time = 0;

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v1replayKeyFrame))) {
                keyFrameData.jumpYOffset = 0;
                keyFrameData.playerData.head.rot.x*=90;
                keyFrameData.playerData.head.rot.y*=90;
                keyFrameData.playerData.head.rot.z*=90;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 2) {
            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&v1bools), sizeof(v1replayBools));
            didReach0Energy = replaySaveBools.noFail;
            reached0Time = 0;

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v4replayKeyFrame))) {
                keyFrameData.energy = -1;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 3) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&v1bools), sizeof(v1replayBools));
            didReach0Energy = replaySaveBools.noFail;
            reached0Time = 0;

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v4replayKeyFrame))) {
                keyFrameData.energy = -1;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 4) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&v1bools), sizeof(v1replayBools));
            input.read(reinterpret_cast<char*>(&didReach0Energy), sizeof(bool));
            input.read(reinterpret_cast<char*>(&reached0Time), sizeof(float));

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(v4replayKeyFrame))) {
                keyFrameData.energy = -1;
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 5) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&v1bools), sizeof(v1replayBools));
            input.read(reinterpret_cast<char*>(&didReach0Energy), sizeof(bool));
            input.read(reinterpret_cast<char*>(&reached0Time), sizeof(float));

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(ReplayKeyFrame))) {
                replayData.push_back(keyFrameData);
            }
        } else if(openedFileVersion == 6) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));

            gotJumpYOffset = true;
            input.read(reinterpret_cast<char*>(&replaySaveBools), sizeof(v6replayBools));
            input.read(reinterpret_cast<char*>(&didReach0Energy), sizeof(bool));
            input.read(reinterpret_cast<char*>(&reached0Time), sizeof(float));

            while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(ReplayKeyFrame))) {
                replayData.push_back(keyFrameData);
            }
        } else {
            log("Could not find way to use file version");
        }

        if(openedFileVersion <= 5 && openedFileVersion >= 2) {
            replaySaveBools.disappearingArrows = v1bools.disappearingArrows;
            replaySaveBools.noObstacles = v1bools.noObstacles;
            replaySaveBools.noBombs = v1bools.noBombs;
            replaySaveBools.slowerSong = v1bools.slowerSong;
            replaySaveBools.noArrows = v1bools.noArrows;
            replaySaveBools.noFail = v1bools.noFail;
            replaySaveBools.oneLife = v1bools.instafail;
            replaySaveBools.fourLives = v1bools.batteryEnergy;
            replaySaveBools.ghostNotes = v1bools.ghostNotes;
            replaySaveBools.fasterSong = v1bools.fasterSong;
            replaySaveBools.leftHanded = v1bools.leftHanded;
            replaySaveBools.strictAngles = false;
            replaySaveBools.proMode = false;
            replaySaveBools.smallNotes = false;
            replaySaveBools.superFastSong = false;
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
    log("Finished getting replay data!");
}

void GetFailedReplayTime(const std::string& songHashID) {
    log("Getting failed replay time");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    if(input.is_open()) {
        log("Successfully opened replay file at: %s", (replayDirectory+songHashID+fileExtensionName).c_str());

        bool isCorrectHeader = true;
        unsigned char headerBytes[3];
        for(int i = 0; i < 3; i++) {
            input.read(reinterpret_cast<char*>(&headerBytes[i]), sizeof(unsigned char));
            if(headerBytes[i] != fileHeader[i]) {
                isCorrectHeader = false;
                openedFileVersion = 1;
            }
        }

        if(isCorrectHeader) {
            input.read(reinterpret_cast<char*>(&openedFileVersion), sizeof(int));
        }

        log("File version is %i", openedFileVersion);

        if(openedFileVersion >= 3) {
            input.read(reinterpret_cast<char*>(&failedInReplay), sizeof(bool));
            input.read(reinterpret_cast<char*>(&failedSongTime), sizeof(float));
            log("Failed replay time is %f", failedSongTime);
        } else {
            failedInReplay = false;
            failedSongTime = 0;
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
}

bool GetNoFail(const std::string& songHashID) {
    log("Checking if replay uses no fail");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    bool usesNoFail;
    if(input.is_open()) {
        log("Successfully opened replay file at: %s",(replayDirectory+songHashID+fileExtensionName).c_str());

        bool isCorrectHeader = true;
        unsigned char headerBytes[3];
        for(int i = 0; i < 3; i++) {
            input.read(reinterpret_cast<char*>(&headerBytes[i]), sizeof(unsigned char));
            if(headerBytes[i] != fileHeader[i]) {
                isCorrectHeader = false;
                openedFileVersion = 1;
            }
        }

        if(isCorrectHeader) {
            input.read(reinterpret_cast<char*>(&openedFileVersion), sizeof(int));
        }

        log("File version is %i", openedFileVersion);

        if(openedFileVersion >= 3 && openedFileVersion <= 5) {
            float tempFloat;
            bool tempBool;
            v1replayBools tempReplayBools{};
            input.read(reinterpret_cast<char*>(&tempBool), sizeof(bool));
            input.read(reinterpret_cast<char*>(&tempFloat), sizeof(float));
            input.read(reinterpret_cast<char*>(&tempReplayBools), sizeof(v1replayBools));
            usesNoFail = tempReplayBools.noFail;
        } else if(openedFileVersion > 5) {
            float tempFloat;
            bool tempBool;
            v6replayBools tempReplayBools{};
            input.read(reinterpret_cast<char*>(&tempBool), sizeof(bool));
            input.read(reinterpret_cast<char*>(&tempFloat), sizeof(float));
            input.read(reinterpret_cast<char*>(&tempReplayBools), sizeof(v6replayBools));
            usesNoFail = tempReplayBools.noFail;
        } else {
            usesNoFail = false;
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
    log("Replay uses no fail is %i", usesNoFail);
    return usesNoFail;
}

void SaveRecording(LevelCompletionResults* levelCompletionResults, bool practice) {
    GlobalNamespace::HMTask::New_ctor(il2cpp_utils::MakeDelegate<System::Action*>(classof(System::Action*),
                                                                 (std::function<void()>)[=] {
         if(recording && !practice && !zenMode) {
             if(levelCompletionResults->levelEndStateType == 1) {
                 log("Level finished, trying to create replay file");
                 float storedFailedSongTime = failedSongTime;
                 bool storedFailedInReplay = failedInReplay;
                 if(fileexists(replayDirectory+songHash+fileExtensionName)) {
                     GetFailedReplayTime(songHash);
                 }
                 if((!fileexists(replayDirectory+songHash+fileExtensionName)) || (levelCompletionResults->fullCombo && getConfig().config["FullComboOverwrites"].GetBool()) || (fileexists(replayDirectory+songHash+fileExtensionName) && failedInReplay)) {
                     if(replaySaveBools.noFail && getConfig().config["OverwriteNFPlays"].GetBool() && fileexists(replayDirectory+songHash+fileExtensionName)) {
                         log("Old play does not use no fail and this play does, not overwriting");
                         return; // false
                     }
                     log("Creating replay as there are no existing replays");
                     failedSongTime = -1;
                     failedInReplay = false;
                     CreateReplayFileAsync(songHash);
                     return; //true
                 } else {
                     failedSongTime = storedFailedSongTime;
                     failedInReplay = storedFailedInReplay;
                     if(GetNoFail(songHash) && getConfig().config["OverwriteNFPlays"].GetBool()) {
                         log("Previous replay uses no fail, overwriting");
                         CreateReplayFileAsync(songHash);
                         return; // true
                     }

                     if(replaySaveBools.noFail && getConfig().config["OverwriteNFPlays"].GetBool()) {
                         log("Old play does not use no fail and this play does, not overwriting");
                         return; // false
                     }

                     log("Checking if this is a higher score than previous");
                     v6replayBools tempBools = replaySaveBools;

                     GetReplayValues(songHash);

                     log("Getting energy type");
                     int energy = 0;
                     if(replaySaveBools.fourLives) {
                         energy = 1;
                     }

                     log("Getting obstacle type");
                     int obstacles = 0;
                     if(replaySaveBools.noObstacles) {
                         obstacles = 2;
                     }

                     log("Getting song speed");
                     int speed = 0;
                     if(replaySaveBools.fasterSong) {
                         speed = 1;
                     } else if(replaySaveBools.slowerSong) {
                         speed = 2;
                     } else if(replaySaveBools.superFastSong) {
                         speed = 3;
                     }

                     log("Getting old score modifiers");
                     GameplayModifiers* oldScoreModifiers = GameplayModifiers::New_ctor(false, false, energy, replaySaveBools.noFail, replaySaveBools.oneLife, false, obstacles, replaySaveBools.noBombs, false, replaySaveBools.strictAngles, replaySaveBools.disappearingArrows, speed, replaySaveBools.noArrows, replaySaveBools.ghostNotes, replaySaveBools.proMode, false, replaySaveBools.smallNotes);
                     log("Getting old modified score");
                     int oldModifiedScore = modifiersModel->GetModifiedScoreForGameplayModifiers(replayData[replayData.size()-1].score, modifiersModel->CreateModifierParamsList(oldScoreModifiers), didReach0Energy ? 0 : 1);
                     log("Getting new modified score");
                     int newModifiedScore = std::floor(float(score) * scoreMultiplier);
                     log("Old score is %i, new score is %i", oldModifiedScore, newModifiedScore);
                     if(newModifiedScore > oldModifiedScore) {
                         replaySaveBools = tempBools;
                         CreateReplayFileAsync(songHash);
                         return; // true
                     } else {
                         return; // false
                     }
                 }
             } else if(levelCompletionResults->levelEndStateType == 2) {
                 log("Trying to create failed replay");
                 if(!fileexists(replayDirectory+songHash+fileExtensionName)) {
                     log("Creating replay as there are no existing replays");
                     failedInReplay = true;
                     CreateReplayFileAsync(songHash);
                     return; // true
                 } else {
                     if(GetNoFail(songHash) && getConfig().config["OverwriteNFPlays"].GetBool()) {
                         log("Previous replay uses no fail, overwriting");
                         failedInReplay = true;
                         CreateReplayFileAsync(songHash);
                         return; // true
                     }
                     float storedTime = failedSongTime;
                     GetFailedReplayTime(songHash);
                     if(!failedInReplay) {
                         log("There is already a successful replay, not creating failed replay");
                         failedSongTime = storedTime;
                         failedInReplay = true;
                         return; // false
                     } else if(songTime <= failedSongTime) {
                         failedSongTime = storedTime;
                         failedInReplay = true;
                         log("Existing failed replay lasted longer than current failed replay, not overwriting replay file, time is %f, old time is %f", songTime, failedSongTime);
                         return; // false
                     } else {
                         failedSongTime = storedTime;
                         failedInReplay = true;
                         log("All requirenments are met, creating failed replay");
                         CreateReplayFileAsync(songHash);
                     }
                 }
             }
         }
         // false
        }
    ), nullptr)->Run();
}

void GetModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, int value = 0) {
    log("Getting modifiers and player settings");

    v6replayBools temp{};

    temp.disappearingArrows = gameplayModifiers->disappearingArrows;
    temp.ghostNotes = gameplayModifiers->ghostNotes;
    temp.oneLife = gameplayModifiers->instaFail;
    temp.noArrows = gameplayModifiers->noArrows;
    temp.noBombs = gameplayModifiers->noBombs;
    temp.noFail = gameplayModifiers->noFailOn0Energy;
    temp.smallNotes = gameplayModifiers->smallCubes;
    temp.proMode = gameplayModifiers->proMode;
    temp.strictAngles = gameplayModifiers->strictAngles;
    temp.leftHanded = playerSpecificSettings->leftHanded;

    zenMode = gameplayModifiers->zenMode;

    int songSpeedLevel = gameplayModifiers->songSpeed;
    temp.slowerSong = false;
    temp.fasterSong = false;
    temp.superFastSong = false;
    if(songSpeedLevel == 1) {
        temp.fasterSong = true;
    } else if(songSpeedLevel == 2) {
        temp.slowerSong = true;
    } else if(songSpeedLevel == 3) {
        temp.superFastSong = true;
    }

    int obstacleNum = gameplayModifiers->enabledObstacleType;
    if(obstacleNum == 2) {
        temp.noObstacles = true;
    } else {
        temp.noObstacles = false;
    }

    int energyNum = gameplayModifiers->energyType;
    if(energyNum == 1) {
        temp.fourLives = true;
    } else {
        temp.fourLives = false;
    }

    // log("Modifiers are "+std::to_string(temp.oneLife)+" "+std::to_string(temp.disappearingArrows)+" "+std::to_string(temp.ghostNotes)+" "+std::to_string(temp.instafail)+" "+std::to_string(temp.noArrows)+" "+std::to_string(temp.noBombs)+" "+std::to_string(temp.noFail)+" "+std::to_string(temp.noObstacles)+" "+std::to_string(temp.leftHanded)+" "+std::to_string(temp.fasterSong)+" "+std::to_string(temp.slowerSong));

    if(value == 0) {
        replaySaveBools = temp;
        log("Saved modifiers to replaySaveBools");
    } else {
        oldModifiers = temp;
        log("Saved modifiers to oldModifiers");
    }
}

void ResetVariables() {
    log("Resetting variables");
    inSong = true;

    indexNum = 0;
    replaySpeed = 1.0f;
    score = 0;
    rank = 6;
    percent = 1;
    energy = 0.5f;
    jumpYOffset = 0;

    fpsCounter = nullptr;
    levelFailedTextEffect = false;
    failedEffectTimer = 10;

    foundComboPanel = false;
    createText = true;
    firstTimeInPause = true;
    didReach0Energy = false;
    resetModifiers = true;
    modifiersModel = nullptr;
    songTime = 0;

    gameEnergyUIPanel = GetFirstEnabledComponent<GameEnergyUIPanel*>();

    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();
    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    smoothPositionOffset.y = getConfig().config["SmoothCameraOffset"]["y"].GetFloat();
    smoothPositionOffset.z = getConfig().config["SmoothCameraOffset"]["z"].GetFloat();
    log("Finished resetting variables");
}

void SetSongTimeTo(AudioTimeSyncController* audioSync, float time) {
    audioSync->songTime = time;
    float num = audioSync->songTime + audioSync->songTimeOffset;
    bool flag = num >= 0;
    audioSync->audioSource->set_time(std::max(0.0f, std::min(num, audioSync->get_songLength() - 0.01f)));
    if(audioSync->state == AudioTimeSyncController::State::Playing) {
        if(flag && !audioSync->audioStarted) {
            audioSync->audioSource->Play();
        }
        if(!flag && audioSync->audioStarted) {
            audioSync->audioSource->Stop();
        }
    }
    audioSync->audioStarted = flag;
    audioSync->audioStartTimeOffsetSinceStart = audioSync->get_timeSinceStart() - num;
    audioSync->fixingAudioSyncError = false;
    audioSync->prevAudioSamplePos = (int)((float)audioSync->initData->audioClip->get_frequency() * num);
    audioSync->dspTimeOffset = UnityEngine::AudioSettings::get_dspTime() - (double)num;
}

void SetEnergyState(float newTime) {
    if(!didReach0Energy || reached0Time == 0 || !replaySaveBools.noFail) return;

    UnityEngine::Transform* energyPanel = gameEnergyUIPanel->get_transform();
    SetActiveAllChildren(energyPanel, true);
    energyPanel->Find(createcsstr("Laser"))->get_gameObject()->SetActive(false);
    log("Song time is %f, reached 0 time is %f", newTime, reached0Time);
    if(newTime > reached0Time) {
        log("Setting energy state to failed");
        energyPanel->Find(createcsstr("EnergyBarWrapper"))->get_gameObject()->SetActive(false);
        energyPanel->Find(createcsstr("EnergyIconEmpty"))->get_gameObject()->SetActive(false);
        energyPanel->Find(createcsstr("EnergyIconFull"))->get_gameObject()->SetActive(false);
        energyPanel->Find(createcsstr("BarBG"))->get_gameObject()->SetActive(false);
    } else {
        log("Setting energy state to alive");
        energyPanel->Find(createcsstr("FailIcon"))->get_gameObject()->SetActive(false);
    }
}

MAKE_HOOK_MATCH(PlayerController_Update, &PlayerTransforms::Update, void, GlobalNamespace::PlayerTransforms* self) {

    // log("PlayerControllerUpdate");

    if(fpsCounter == nullptr) {
        fpsCounter =self->get_gameObject()->AddComponent<FPSCounter*>();
    } else if((fpsCounter->get_currentFPS() < gameFPS-4 || fpsCounter->get_currentFPS() > gameFPS+4) && songTime > 5 && !inPauseMenu) {
        gameFPS = fpsCounter->get_currentFPS();
        log("fps is %i", gameFPS);
    }
    
    if(recording) {
        auto* headTransform = self->headTransform;
        UnityEngine::Vector3 headPos = headTransform->get_position();
        UnityEngine::Vector3 headRot = headTransform->get_eulerAngles();

        playerTransformData playerTransform {
            eulerAngleTransform {
                rightSaberPos,
                rightSaberRot
            },
            eulerAngleTransform {
                leftSaberPos,
                leftSaberRot,
            },
            eulerAngleTransform {
                headPos,
                headRot
            }
        };

        dataToSave.push_back({
            playerTransform, score, percent, rank, combo, songTime, jumpYOffset, energy
        });
        jumpYOffset = -1;
    } else {
        bool foundCorrectIndex = false;
        while(!foundCorrectIndex) {
            if(indexNum < replayData.size()-1) {
                if(replayData[indexNum].time > songTime) {
                    foundCorrectIndex = true;
                } else if(indexNum < replayData.size()-1) {
                    indexNum++;
                }
            } else {
                foundCorrectIndex = true;
            }
        }

        self->headTransform->set_position(replayData[indexNum].playerData.head.pos);
    }

    PlayerController_Update(self);
}

MAKE_HOOK_MATCH(Saber_ManualUpdate, &Saber::ManualUpdate, void, GlobalNamespace::Saber* self) {

    // log("Saber_ManualUpdate %s", to_utf8(csstrtostr(self->get_gameObject()->get_name())).c_str());
    
    int saberType = int(self->get_saberType());
    
    if(recording) {
        std::optional<UnityEngine::GameObject*> saberGameObject = TrickSaber::TrickSaberAPI::getActiveSaber(saberType);
        if(!saberGameObject) saberGameObject.emplace(self->get_gameObject());

        UnityEngine::Transform* saberTransform = saberGameObject.value()->get_transform();

        if(saberType == 0) {
            leftSaberPos = saberTransform->get_position();
            leftSaberRot = saberTransform->get_eulerAngles();
        } else {
            rightSaberPos = saberTransform->get_position();
            rightSaberRot = saberTransform->get_eulerAngles();
        }
    } else {
        int offsetIndex;
        int nextOffsetIndex;

        int lerpOffsetIndex;
        int lerpNextOffsetIndex;

        float lerpAmount;

        offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
        nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

        lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
        lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

        lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);

        if(saberType == 0) {
            lerpedLeftHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.leftSaber.rot.x, replayData[offsetIndex].playerData.leftSaber.rot.y, replayData[offsetIndex].playerData.leftSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.leftSaber.rot.x, replayData[nextOffsetIndex].playerData.leftSaber.rot.y, replayData[nextOffsetIndex].playerData.leftSaber.rot.z), lerpAmount);
            lerpedLeftHandPosition = Lerp(replayData[offsetIndex].playerData.leftSaber.pos, replayData[nextOffsetIndex].playerData.leftSaber.pos, lerpAmount);
            
            self->get_transform()->set_position(lerpedLeftHandPosition);
            self->get_transform()->set_rotation(lerpedLeftHandRotation);
        } else {
            lerpedRightHandPosition = Lerp(replayData[offsetIndex].playerData.rightSaber.pos, replayData[nextOffsetIndex].playerData.rightSaber.pos, lerpAmount);
            lerpedRightHandRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].playerData.rightSaber.rot.x, replayData[offsetIndex].playerData.rightSaber.rot.y, replayData[offsetIndex].playerData.rightSaber.rot.z), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].playerData.rightSaber.rot.x, replayData[nextOffsetIndex].playerData.rightSaber.rot.y, replayData[nextOffsetIndex].playerData.rightSaber.rot.z), lerpAmount);
            
            self->get_transform()->set_position(lerpedRightHandPosition);
            self->get_transform()->set_rotation(lerpedRightHandRotation);
        }
        if(customAvatar != nullptr && getConfig().config["Avatars"].GetBool() && !inPauseMenu && cameraAngle != SMOOTH) {
            customAvatar->get_transform()->SetParent(self->get_transform()->GetParent()->GetParent()->GetParent());
            customAvatar->get_transform()->set_position(UnityEngine::Vector3{0, 0, 0});
            customAvatar->get_transform()->set_localScale(UnityEngine::Vector3{1, 1, 1});
            customAvatar->SetActive(true);
            auto* poseController = customAvatar->GetComponent<GlobalNamespace::AvatarPoseController*>();

            float deltaTime = UnityEngine::Time::get_deltaTime();

            smoothHeadPosition = Lerp(smoothHeadPosition, UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z}, deltaTime * 12);
            smoothHeadRotation = Slerp(smoothHeadRotation, UnityEngine::Quaternion::Euler(replayData[indexNum].playerData.head.rot.x, replayData[indexNum].playerData.head.rot.y, replayData[indexNum].playerData.head.rot.z), deltaTime * 12);
            
            poseController->UpdateTransforms(
                smoothHeadPosition, 
                lerpedLeftHandPosition,
                lerpedRightHandPosition,
                smoothHeadRotation,
                lerpedLeftHandRotation,
                lerpedRightHandRotation
            );
        }
    }

    Saber_ManualUpdate(self);
}

MAKE_HOOK_MATCH(BeatmapObjectSpawnMovementData_Update, &BeatmapObjectSpawnMovementData::Update, void, BeatmapObjectSpawnMovementData* self, float bpm, float jumpOffsetY) {
    
    // log("BeatmapObjectSpawnMovementData_Update");

    if(recording) {
        jumpYOffset = jumpOffsetY;
    } else if(gotJumpYOffset) {
        float temp = ClosestRealOffset();
        if(temp != -1) {
            jumpOffsetY = temp;
        }
    }
    // log("Jump Y offset is "+std::to_string(jumpOffsetY));

    BeatmapObjectSpawnMovementData_Update(self, bpm, jumpOffsetY);
}

MAKE_HOOK_MATCH(SongUpdate, &AudioTimeSyncController::Update, void, AudioTimeSyncController* self) {
    
    // log("SongUpdate");

    UnityEngine::AudioSource* audio = self->audioSource;

    if(!speedToggleBool) {
        letChangeSpeed = true;
    }

    if(speedToggle != nullptr && continueButton != nullptr && inPauseMenu && !recording) {
        if(speedToggle->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Highlighted || continueButton->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Highlighted || failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"))->get_gameObject()->GetComponent<HMUI::TimeSlider*>()->get_currentSelectionState() == UnityEngine::UI::Selectable::SelectionState::Pressed) {
            letChangeSpeed = false;
        }
    }

    if(!recording) {
        if(!speedToggleBool && letChangeSpeed && !inResumeAnimation && !levelFailedTextEffect) {
            if(rTriggerVal > 0.2f) {
                replaySpeed+=rTriggerVal/500;
            }
            if(lTriggerVal > 0.2f) {
                replaySpeed-=lTriggerVal/500;
            }

            if(replaySpeed < 0.01f) {
                replaySpeed = 0.01f;
            }
        }

        if(!inPauseMenu) {
            float roundedReplaySpeed = float(int((replaySpeed * modifierSpeed)*100))/100;

            // log("Rounded replay speed is "+std::to_string(roundedReplaySpeed));

            self->timeScale = roundedReplaySpeed;
            audio->set_pitch(roundedReplaySpeed);
        }
    }

    // log("Song Update, in song or results is "+std::to_string(inSongOrResults));
    if(!inSongOrResults && !inPauseMenu) inSongOrResults = true;

    // #ifdef DO_FPS_RECORD
    // if(!recording && cameraAngle != HEADSET) {
    //     return;
    //     // self->timeScale = UnityEngine::Time::get_timeScale();
    //     // log("Time scale is %f", UnityEngine::Time::get_timeScale());
    // }
    // #endif

    SongUpdate(self);

    if(!inPauseMenu) {
        songTime = *GetFieldValue<float>(self, "_songTime");
        if(((!failedReplay && !deathReplay) || recording) && songTime != 0 && !levelFailedTextEffect) failedSongTime = songTime;
        if(practiceStartTime == -1 && songTime != 0 && recording) {
            practiceStartTime = songTime;
        }
        if(!recording && replaySaveBools.noFail && didReach0Energy) {
            if(failedEffectTimer <= 0) {
                failedEffectTimer = 10;
                UnityEngine::Object::Destroy(failedEnergyEffect->get_gameObject());
            } else if(failedEffectTimer < 5) {
                failedEffectTimer -= UnityEngine::Time::get_deltaTime();
            }
        }

        if(!recording && resetModifiers) {
            resetModifiers = false;
            log("Getting player settings panel");
            auto* playerSettingsPanel = FindObject<PlayerSettingsPanelController*>("PlayerOptions")->GetComponent<PlayerSettingsPanelController*>();

            log("Setting left handed");
            PlayerSpecificSettings* playerSettings = playerSettingsPanel->get_playerSpecificSettings();
            playerSettings->leftHanded = oldModifiers.leftHanded;
            playerSettingsPanel->SetData(playerSettings);

            log("Getting energy type");
            int energy = 0;
            if(oldModifiers.fourLives) {
                energy = 1;
            }

            log("Getting obstacle type");
            int obstacles = 0;
            if(oldModifiers.noObstacles) {
                obstacles = 2;
            }

            log("Getting song speed");
            int speed = 0;
            if(oldModifiers.fasterSong) {
                speed = 1;
            } else if(oldModifiers.slowerSong) {
                speed = 2;
            } else if(oldModifiers.superFastSong) {
                speed = 3;
            }

            auto* modifiersPanel = FindObject<GameplayModifiersPanelController*>("GameplayModifiers")->GetComponent<GameplayModifiersPanelController*>();

            log("Getting old score modifiers");
            GameplayModifiers* prevModifiers = GameplayModifiers::New_ctor(false, false, energy, replaySaveBools.noFail, replaySaveBools.oneLife, false, obstacles, replaySaveBools.noBombs, false, replaySaveBools.strictAngles, replaySaveBools.disappearingArrows, speed, replaySaveBools.noArrows, replaySaveBools.ghostNotes, replaySaveBools.proMode, false, replaySaveBools.smallNotes);
            modifiersPanel->SetData(prevModifiers);
            modifiersPanel->RefreshTotalMultiplierAndRankUI();
        }
    }
}

MAKE_HOOK_MATCH(SongStart, &StandardLevelScenesTransitionSetupDataSO::Init, void, StandardLevelScenesTransitionSetupDataSO* self, Il2CppString* gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {

    log("Song Start %d", inSongOrResults);

    ResetVariables();

    if(recording) {
        failedInReplay = false;
        failedReplay = false;
        deathReplay = false;
        practiceStartTime = -1;

        bs_utils::Submission::enable(modInfo);
        setenv("ViewingReplay", "false", 1);

        dataToSave.clear();

        GetModifiers(gameplayModifiers, playerSpecificSettings);
        resetModifiers = false;
    } else {
        log("Entering a replay, camera mode is %i", cameraAngle);

        bs_utils::Submission::disable(modInfo);
        setenv("ViewingReplay", "true", 1);

        GetModifiers(gameplayModifiers, playerSpecificSettings, 1);

        if(!deathReplay) {
            log("Getting replay values");
            GetReplayValues(songHash);
            if(failedInReplay) {
                failedReplay = true;
            }
        }

        log("Setting modifiers to saved values");
        gameplayModifiers->disappearingArrows = replaySaveBools.disappearingArrows;
        gameplayModifiers->ghostNotes = replaySaveBools.ghostNotes;
        gameplayModifiers->instaFail = replaySaveBools.oneLife;
        gameplayModifiers->noArrows = replaySaveBools.noArrows;
        gameplayModifiers->noBombs = replaySaveBools.noBombs;
        gameplayModifiers->noFailOn0Energy = replaySaveBools.noFail;
        gameplayModifiers->zenMode = false;
        gameplayModifiers->proMode = replaySaveBools.proMode;
        gameplayModifiers->strictAngles = replaySaveBools.strictAngles;
        gameplayModifiers->smallCubes = replaySaveBools.smallNotes;
        playerSpecificSettings->leftHanded = replaySaveBools.leftHanded;
        
        reduceDebris = playerSpecificSettings->reduceDebris;

        if(replaySaveBools.fourLives) {
            log("Turning on Four Lives");
            gameplayModifiers->energyType = 1;
        } else {
            gameplayModifiers->energyType = 0;
        }

        if(replaySaveBools.noObstacles) {
            log("Turning on No Obstacles");
            gameplayModifiers->enabledObstacleType = 2;
        } else {
            gameplayModifiers->enabledObstacleType = 0;
        }

        if(replaySaveBools.fasterSong) {
            log("Setting to faster speed");
            gameplayModifiers->songSpeed = (int)GameplayModifiers::SongSpeed::Faster;
        } else if(replaySaveBools.slowerSong) {
            log("Setting to slower speed");
            gameplayModifiers->songSpeed = (int)GameplayModifiers::SongSpeed::Slower;
        } else if(replaySaveBools.superFastSong) {
            log("Setting to super speed");
            gameplayModifiers->songSpeed = (int)GameplayModifiers::SongSpeed::SuperFast;
        } else {
            log("Setting to normal speed");
            gameplayModifiers->songSpeed = (int)GameplayModifiers::SongSpeed::Normal;
        }
        modifierSpeed = gameplayModifiers->get_songSpeedMul();
    
        replayText = nullptr;
        speedToggle = nullptr;
        continueButton = nullptr;

        if(getConfig().config["Avatars"].GetBool()) {
            log("Instantiating customAvatar");
            customAvatar = UnityEngine::Object::Instantiate(playerAvatar);
            customAvatar->SetActive(false);
            UnityEngine::GameObject::SetName(customAvatar, createcsstr("CustomAvatar"));
            LoadAvatarData();
        }
    }

    inPauseMenu = false;

    SongStart(self, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);

    log("Finished song setup");
}

MAKE_HOOK_MATCH(ScoreChanged, &ScoreUIController::UpdateScore, void, ScoreUIController* self, int rawScore, int modifiedScore) {

    // log("Score Changed");
    
    if(!recording && maxRawScore != 0) {
        rawScore = replayData[indexNum].score;
        modifiedScore =(int) ((float) rawScore * scoreMultiplier);
    }
 
    ScoreChanged(self, rawScore, modifiedScore);
}

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {

    StandardLevelDetailView_RefreshContent(self);

    log("Refreshing Content, in song or results is %d", inSongOrResults);

    if(!inSongOrResults) {
        recording = true;
    }

    log("Getting play button transform");
    playButton = self->actionButton;
    UnityEngine::Transform* playButtonTransform = playButton->get_transform();
    
    log("Getting songHash");
    auto* Level = reinterpret_cast<BeatmapLevelSO*>(self->level);
    if(Level == nullptr) {
        log("Beatmap Level is null, not adding buttons");
        return;
    }
    Il2CppString* LevelID = Level->get_levelID();

    log("Getting difficulty and mode");
    auto* SelectedBeatmapDifficulty = self->selectedDifficultyBeatmap;
    int Difficulty = SelectedBeatmapDifficulty->get_difficulty();
    auto* beatMapData = SelectedBeatmapDifficulty->get_beatmapData();
    auto* parentDifficultyBeatmapSet = SelectedBeatmapDifficulty->get_parentDifficultyBeatmapSet();
    auto* beatmapCharacteristic = parentDifficultyBeatmapSet->get_beatmapCharacteristic();
    std::string modeName = to_utf8(csstrtostr(beatmapCharacteristic->compoundIdPartName));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;
    if(songHash.find("custom_level_") != std::string::npos) {
        songHash.erase(songHash.begin(), songHash.begin()+13);
        transform(songHash.begin(), songHash.end(), songHash.begin(), ::tolower);
    }
    log("Song Hash is %s",songHash.c_str());
    
    std::string oldExtension = ".questReplayFileForQuestDontTryOnPcAlsoPinkEraAndLillieAreCuteBtwWilliamGay";
    if(fileexists(replayDirectory+"custom_level_"+songHash+oldExtension)) {
        log("Renaming old custom_level_ replay file");
        rename(std::string(replayDirectory+"custom_level_"+songHash+oldExtension).c_str(), std::string(replayDirectory+songHash+fileExtensionName).c_str());
    } else if(fileexists(replayDirectory+songHash+oldExtension)) {
        log("Renaming old file extension");
        rename(std::string(replayDirectory+songHash+oldExtension).c_str(), std::string(replayDirectory+songHash+fileExtensionName).c_str());
    }

    log("Attempting to delete previous buttons");
    if(warningTextGO != nullptr) {
        log("Deleting warning text");
        UnityEngine::GameObject::Destroy(warningTextGO);
        warningTextGO = nullptr;
    }
    if(failedTimeTextGO != nullptr) {
        log("Deleting failed time text");
        UnityEngine::GameObject::Destroy(failedTimeTextGO);
        failedTimeTextGO = nullptr;
    }
    if(cameraToggleGO != nullptr) {
        log("Deleting camera toggle button");
        UnityEngine::GameObject::Destroy(cameraToggleGO);
        cameraToggleGO = nullptr;
    }
    if(replayButtonGO != nullptr) {
        log("Deleting replay button");
        UnityEngine::GameObject::Destroy(replayButtonGO);
        replayButtonGO = nullptr;
    }
    log("Successfully attempted to delete previous buttons");

    if(fileexists(replayDirectory+songHash+fileExtensionName) && !inMulti && playButton->get_interactable()) {
        log("Making Replay button");
        UnityEngine::Vector2 buttonsPosition = {-3.5f, -27};
        float buttonsScale = 0.8f;
        UnityEngine::Transform* parent = playButtonTransform->GetParent()->GetParent();

        playButtonTransform->GetParent()->set_localPosition(UnityEngine::Vector3{-1.8f, -52, 0});

        float storedTime = failedSongTime;
        bool storedDidFail = failedInReplay;
        GetFailedReplayTime(songHash);
        if(failedInReplay) {
            log("Creating failed replay text");
            int minutes = (int) std::floor(failedSongTime / 60.0f);
            int seconds = (int) std::floor(failedSongTime - (float(minutes) * 60.0f));

            std::string minutesString = std::to_string(minutes);
            std::string secondsString = std::to_string(seconds);
            if(seconds < 10) {
                secondsString = "0"+std::to_string(seconds);
            }
            
            std::string failedTimeString = minutesString+":"+secondsString;
            log("Failed at %s",failedTimeString.c_str());
            failedTimeText = QuestUI::BeatSaberUI::CreateText(parent, " Died at\n"+failedTimeString, true, UnityEngine::Vector2{buttonsPosition.x+55.5f, buttonsPosition.y-0.3f});
            failedTimeText->set_alignment(TMPro::TextAlignmentOptions::Left);
            failedTimeText->set_fontSize(3.4f);
            failedTimeText->set_lineSpacing(-45);
            failedTimeTextGO = failedTimeText->get_gameObject();
        }
        failedSongTime = storedTime;
        failedInReplay = storedDidFail;

        warningText = QuestUI::BeatSaberUI::CreateText(parent, "Warning: fixed camera view;\nsitting is recommended", true, UnityEngine::Vector2{buttonsPosition.x-4.0f, buttonsPosition.y-4.0f});
        warningText->set_alignment(TMPro::TextAlignmentOptions::Center);
        warningText->set_color(UnityEngine::Color{1, 0.1f, 0.05f, 1});
        warningText->set_fontSize(4);
        warningText->set_lineSpacing(-40);
        warningText->get_transform()->set_localEulerAngles(UnityEngine::Vector3{50, 1, 0});
        UnityEngine::Vector3 pos = warningText->get_transform()->get_position();
        pos.z -= 0.45f;
        warningText->get_transform()->set_position(pos);
        warningTextGO = warningText->get_gameObject();

        std::string tempString;
        switch(cameraAngle) {
            case HEADSET:
                tempString = "Normal";
                warningText->get_gameObject()->SetActive(false);
                break;
            case SMOOTH:
                tempString = "Smooth Camera";
                break;
            case THIRDPERSON:
                tempString = "Third Person";
                break;
        }
        cameraToggle = BeatSaberUI::CreateUIButton(
            parent, 
            tempString, 
            UnityEngine::Vector2{buttonsPosition.x-12.85f, buttonsPosition.y}, 
            []() { cameraToggleOnClick(); }
        );
        cameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        cameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 9});
        cameraToggleGO = cameraToggle->get_gameObject();

        replayButton = BeatSaberUI::CreateUIButton(
            parent, 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{buttonsPosition.x+13.2f, buttonsPosition.y}, 
            []() { replayButtonOnClick(); }
        );
        replayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        replayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 9});
        replayButtonGO = replayButton->get_gameObject();
    } else {
        log("Not making Replay button");
        playButtonTransform->GetParent()->set_localPosition(UnityEngine::Vector3{-1.8f, -55, 0});
    }

    auto* songNameText = self->levelBar->songNameText;
    songName = to_utf8(csstrtostr(songNameText->get_text()));
    log("Song name is %s", songName.c_str());
}

MAKE_HOOK_MATCH(StandardLevelDetailViewController_DidActivate, &StandardLevelDetailViewController::DidActivate, void, StandardLevelDetailViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    
    log("View Controller did activate");

    StandardLevelDetailViewController_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    playButton = self->standardLevelDetailView->actionButton;
    
    UnityEngine::Transform* playButtonTransform = playButton->get_transform();
     
    if(!inMulti) {
        auto* rectTransform = playButtonTransform->GetParent()->GetParent()->GetParent()->get_gameObject()->GetComponent<UnityEngine::RectTransform*>();
        rectTransform->set_localScale(UnityEngine::Vector3{1, 2, 1});
        playButtonTransform->GetParent()->GetParent()->set_localScale(UnityEngine::Vector3{1, 0.5f, 1});
        playButtonTransform->GetParent()->GetParent()->set_localPosition(UnityEngine::Vector3{0, 13.7f, 0});
    }
}

MAKE_HOOK_MATCH(GameEnergyCounter_AddEnergy, &GameEnergyCounter::ProcessEnergyChange, void, GameEnergyCounter* self, float value) {
    
    // log("GameEnergyCounter_AddEnergy");

    if(!recording) {
        if(self->get_energy()+value < 0.01f && !replaySaveBools.noFail) {
            if((!failedReplay && !deathReplay) || (songTime < failedSongTime-1 && !(!failedReplay && !deathReplay))) {
                log("Stopping energy from being added to stop fail");
                return;
            }
        }
        
        if(replayData[indexNum].energy != -1) {
            self->set_energy(replayData[indexNum+3].energy-value);
        }
    } else {
        energy = self->get_energy()+value;
    }

    GameEnergyCounter_AddEnergy(self, value);

    if(recording && !didReach0Energy && self->didReach0Energy) {
        didReach0Energy = self->didReach0Energy;
        reached0Time = songTime;
    }
}

MAKE_HOOK_MATCH(ScoreControllerLateUpdate, &ScoreController::LateUpdate, void, ScoreController* self) {

    // log("ScoreControllerLateUpdate");

    ScoreControllerLateUpdate(self);

    scoreMultiplier = self->gameplayModifiersScoreMultiplier;

    if(modifiersModel == nullptr) modifiersModel = self->gameplayModifiersModel;

    if(indexNum > 2 && !recording) {
        self->baseRawScore = replayData[indexNum+5].score;
        self->combo = replayData[indexNum+5].combo;
        maxRawScore = self->immediateMaxPossibleRawScore;
    }
    if(recording) {
        score = self->baseRawScore;
        combo = self->combo;
    }
}

MAKE_HOOK_MATCH(RefreshRank,&ImmediateRankUIPanel::RefreshUI, void, ImmediateRankUIPanel* self) {

    // log("RefreshRank");

    auto * percentAndRankCounter = self->relativeScoreAndImmediateRankCounter;

    if(!recording) {
        percentAndRankCounter->set_immediateRank(replayData[indexNum].rank);
        percentAndRankCounter->set_relativeScore(replayData[indexNum].percent);
    }
    
    RefreshRank(self);
}

MAKE_HOOK_MATCH(RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank, &RelativeScoreAndImmediateRankCounter::UpdateRelativeScoreAndImmediateRank, void, RelativeScoreAndImmediateRankCounter* self, int score, int modifiedScore, int maxPossibleScore, int maxPossibleModifiedScore) {

    // log("Score Changed");
 
    RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank(self, score, modifiedScore, maxPossibleScore, maxPossibleModifiedScore);
    
    if(!recording) {
        self->set_immediateRank(replayData[indexNum].rank);
        self->set_relativeScore(replayData[indexNum].percent);
    } else {
        percent = self->get_relativeScore();
        rank = self->get_immediateRank();
    }
}

MAKE_HOOK_MATCH(Triggers, &VRControllersInputManager::TriggerValue, float, VRControllersInputManager* self, UnityEngine::XR::XRNode node) {

    // log("Triggers");

    if(inSong) {
        triggerNode = node;
    }

    return Triggers(self, node);
}

MAKE_HOOK_MATCH(ControllerUpdate, &VRController::Update, void, VRController* self) {

    // log("ControllerUpdate");

    if(inSong) {
        float trigger = self->get_triggerValue();

        if (triggerNode == 4) {
            lTriggerVal = trigger;
        }
        if (triggerNode == 5) {
            rTriggerVal = trigger;
        }
    }

    ControllerUpdate(self);
}

MAKE_HOOK_MATCH(ProgressUpdate, &SongProgressUIController::Update, void, GlobalNamespace::SongProgressUIController* self) {
    
    // log("Progress update");

    if(!recording) {
        std::string tempString = std::to_string(replaySpeed);
        tempString.erase(4, tempString.length()-1);
        std::string textToSetTo = tempString+"x Speed";
        if(speedToggleBool && float(int(replaySpeed*100))/100 == 1.00f && replayText != nullptr) {
            if(replayText->get_gameObject()->get_activeInHierarchy()) {
                log("Setting replay text to inactive");
                replayText->get_gameObject()->SetActive(false);
            }
        }

        if(inSong && replayText == nullptr && createText) {
            log("Creating replay text");

            bool getLastIndex = false;
            if(FindObject<MultiplayerController*>("MultiplayerController", false) == nullptr) {
                getLastIndex = true;
            }
            log("Get last index is %i", getLastIndex);
            
            UnityEngine::GameObject* comboPanel = FindObject<ComboUIController*>("ComboPanel", false, getLastIndex);
            
            if(comboPanel != nullptr) {
                foundComboPanel = true;
                replayText = QuestUI::BeatSaberUI::CreateText(comboPanel->get_transform(), textToSetTo, false, UnityEngine::Vector2{0, 110});
                replayTextCurrent = textToSetTo;
                replayText->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>()->set_fontSize(25);
                replayText->get_gameObject()->SetActive(true);
                replayText->set_alignment(TMPro::TextAlignmentOptions::Center);
                UnityEngine::Vector3 currentPosition = replayText->get_transform()->get_position();
                currentPosition.x = 0;
                replayText->get_transform()->set_position(currentPosition);
                log("Finished creating replay text");
            } else {
                createText = false;
            }
        } else if(((inSong && replayTextCurrent != textToSetTo) || (inPauseMenu && !speedToggleBool)) && replayText != nullptr && foundComboPanel) {
            replayText->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>()->set_text(createcsstr(textToSetTo));
            replayTextCurrent = textToSetTo;
            replayText->get_gameObject()->SetActive(true);
        }
    }
 
    ProgressUpdate(self);
}

MAKE_HOOK_MATCH(PauseController_get_canPause, &PauseController::get_canPause, bool, PauseController* self) {
    #ifdef DO_FPS_RECORD
    Replay::CameraCapture* cameraCapture = GetFirstEnabledComponent<Replay::CameraCapture*>();
    if(cameraCapture != nullptr) {
        return false;
    }
    #endif

    return PauseController_get_canPause(self);
}

MAKE_HOOK_MATCH(PauseStart, &PauseMenuManager::ShowMenu, void, PauseMenuManager* self) {

    log("PauseStart");

    PauseStart(self);

    inPauseMenu = true;
    setSongTime = true;

    if(!recording) {
        if(failedTimeSlider != nullptr) {
            UnityEngine::Object::Destroy(*RunMethod<UnityEngine::GameObject*>(failedTimeSlider, "get_gameObject"));
            failedTimeSlider = nullptr;
        }

        continueButton = self->continueButton;
        UnityEngine::Transform* continueButtonTransform = continueButton->get_transform();
        UnityEngine::Transform* parent = continueButtonTransform->GetParent()->GetParent();

        if(firstTimeInPause) {
            log("Creating speed toggle");
            speedToggle = BeatSaberUI::CreateToggle(
                parent,
                "Lock Speed",
                speedToggleBool,
                UnityEngine::Vector2{28.5f, -35},
                [](bool newValue) { speedToggleOnClick(newValue); }
            );
            UnityEngine::Object::DontDestroyOnLoad(speedToggle);
            auto* rts = speedToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>();
            UnityEngine::Vector2 currentSizeDelta = rts->get_sizeDelta();
            rts->set_sizeDelta(UnityEngine::Vector2{147, currentSizeDelta.y});
        }

        log("Creating time slider, practice start time is %f, failedSongTime is %f", practiceStartTime, failedSongTime);

        failedTimeSlider = UnityEngine::Object::Instantiate(latencySlider);
        failedTimeSlider->SetActive(true);
        failedTimeSlider->get_transform()->set_parent(parent);
        failedTimeSlider->get_transform()->set_localPosition(UnityEngine::Vector3{-4.55f, -19.5f, 0});
        failedTimeSlider->get_transform()->set_localScale(UnityEngine::Vector3{1.062f, 1.062f, 1.062f});

        failedTimeSlider->get_transform()->Find(createcsstr("VisualMetronome"))->get_gameObject()->SetActive(false);
        UnityEngine::GameObject* sliderText = failedTimeSlider->get_transform()->Find(createcsstr("Text"))->get_gameObject();
        sliderText->GetComponent<TMPro::TextMeshProUGUI*>()->SetText(createcsstr("Song Time"));
        sliderText->get_transform()->set_localPosition(UnityEngine::Vector3{0.8f, 7.2f, 0});

        UnityEngine::Transform* sliderTransform = failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"));
        sliderTransform->set_localScale(UnityEngine::Vector3{1, 0.75f, 1});
        sliderTransform->set_localPosition(UnityEngine::Vector3{0, 3.6f, 0});
        sliderTransform->Find(createcsstr("SlidingArea"))->Find(createcsstr("Value"))->set_localScale(UnityEngine::Vector3{0.9f, 0.9f/0.75f, 0.9f});
        auto* slider = sliderTransform->get_gameObject()->GetComponent<HMUI::TimeSlider*>();

        slider->timeType = HMUI::TimeSlider::TimeType::Default;
        int flooredTime = std::floor(songTime);
        slider->set_minValue(std::floor(std::max(0.0f, practiceStartTime)));
        if(failedReplay || deathReplay) {
            slider->set_maxValue(std::max(0.0f, std::floor(failedSongTime-5)));
            slider->set_numberOfSteps(std::max(0.0f, failedSongTime-std::floor(std::max(0.0f, practiceStartTime))-4));
        } else {
            slider->set_maxValue(std::floor(maxSongTime));
            slider->set_numberOfSteps(std::floor(maxSongTime));
        }
        slider->set_value(flooredTime);

        oldSliderTime = slider->get_value();

        if(customAvatar != nullptr && cameraAngle == THIRDPERSON) customAvatar->SetActive(false);

        GetFirstEnabledComponent<AudioTimeSyncController*>()->Pause();
    }

    firstTimeInPause = false;
}

MAKE_HOOK_MATCH(PauseFinish, &PauseMenuManager::StartResumeAnimation, void, PauseMenuManager* self) {

    log("PauseFinish");

    PauseFinish(self);

    inPauseMenu = false;
    inResumeAnimation = true;
}

MAKE_HOOK_MATCH(PauseAnimationFinish, &PauseMenuManager::HandleResumeFromPauseAnimationDidFinish, void, PauseMenuManager* self) {

    log("PauseAnimationFinish");

    PauseAnimationFinish(self);

    inResumeAnimation = false;
}

MAKE_HOOK_MATCH(PauseMenuManager_MenuButtonPressed,&PauseMenuManager::MenuButtonPressed, void, PauseMenuManager* self) {

    log("MenuButtonPressed");

    PauseMenuManager_MenuButtonPressed(self);

    inSongOrResults = false;
    inSong = false;
    recording = true;
    failedReplay = false;
    deathReplay = false;

    log("Set inSongOrResults to false 1 %d", inSongOrResults);
}

MAKE_HOOK_MATCH(ResultsScreenEnd, &ResultsViewController::DidDeactivate, void, ResultsViewController* self, bool removedFromHierarchy, bool screenSystemDisabling) {

    log("ResultsScreenEnd");

    inSongOrResults = false;

    log("Set inSongOrResults to false 0");

    ResultsScreenEnd(self, removedFromHierarchy, screenSystemDisabling);
}

UnityEngine::RenderTexture* texture;

MAKE_HOOK_MATCH(LightManager_OnWillRenderObject, &LightManager::OnWillRenderObject, void, LightManager* self) {

    // log("LightManager_OnWillRenderObject");

    if(inSong && !inPauseMenu && !recording) {
        UnityEngine::GameObject* cameraGO = UnityEngine::Camera::get_main()->get_gameObject();
        
<<<<<<< Updated upstream
        int width = 3840;
        int height = 2160;
=======
        int width = getConfig().config["Width"].GetInt();
        int height = getConfig().config["Height"].GetInt();
>>>>>>> Stashed changes

        #ifdef DO_FPS_RECORD
        if(to_utf8(csstrtostr(cameraGO->get_name())) == "MainCamera" && cameraAngle == HEADSET) {
            Replay::AudioCapture* audioCapture = GetFirstEnabledComponent<Replay::AudioCapture*>();
            if(audioCapture == nullptr || audioCapture->get_gameObject() == nullptr) {
                log("Adding Audio Capture component to the AudioListener");
                audioCapture = GetFirstEnabledComponent<UnityEngine::AudioListener*>()->get_gameObject()->AddComponent<Replay::AudioCapture*>();
                audioCapture->OpenFile("sdcard/audio.wav");
            }
        }
        #endif

        if(to_utf8(csstrtostr(cameraGO->get_name())) == "MainCamera" && cameraAngle != HEADSET) {

            static UnityEngine::GameObject* cameraGameObject = nullptr;
            UnityEngine::Camera* camera = nullptr;

            #ifdef DO_FPS_RECORD
            // log("getting camera");
            if(!cameraGameObject) {
                // Set to 60 hz
                // setRefreshRate(std::make_optional(60.0f));

                auto mainCamera = UnityEngine::Camera::get_main();

                mainCamera->set_stereoTargetEye(UnityEngine::StereoTargetEyeMask::None);

                // Idk what this does
                mainCamera->set_orthographic(false);

                mainCamera->set_fieldOfView(getConfig().config["FOV"].GetFloat());

                // Force it to render into texture
                mainCamera->set_forceIntoRenderTexture(true);

                cameraGameObject = UnityEngine::Object::Instantiate(mainCamera->get_gameObject());
                camera = cameraGameObject->GetComponent<UnityEngine::Camera*>();
                UnityEngine::Object::DontDestroyOnLoad(cameraGameObject);
                while (cameraGameObject->get_transform()->get_childCount() > 0) UnityEngine::Object::DestroyImmediate(cameraGameObject->get_transform()->GetChild(0)->get_gameObject());
                UnityEngine::Object::DestroyImmediate(cameraGameObject->GetComponent(il2cpp_utils::newcsstr("CameraRenderCallbacksManager")));
                UnityEngine::Object::DestroyImmediate(cameraGameObject->GetComponent(il2cpp_utils::newcsstr("AudioListener")));
                UnityEngine::Object::DestroyImmediate(cameraGameObject->GetComponent(il2cpp_utils::newcsstr("MeshCollider")));

//                camera->set_fieldOfView(mainCamera->get_fieldOfView());
                camera->set_clearFlags(mainCamera->get_clearFlags());
                camera->set_nearClipPlane(mainCamera->get_nearClipPlane());
                camera->set_farClipPlane(mainCamera->get_farClipPlane());
                camera->set_cullingMask(mainCamera->get_cullingMask());
                // Makes the camera render before the main
                camera->set_depth(mainCamera->get_depth() - 1);
                camera->set_backgroundColor(mainCamera->get_backgroundColor());
                camera->set_hideFlags(mainCamera->get_hideFlags());
                camera->set_depthTextureMode(mainCamera->get_depthTextureMode());

                // Set aspect ratio accordingly
                camera->set_aspect(float(width) / float(height));

                typedef function_ptr_t<void, UnityEngine::Camera*, UnityEngine::Rect&> setPixelRectType;
                auto set_cullingMatrix = *reinterpret_cast<setPixelRectType>(il2cpp_functions::resolve_icall("UnityEngine.Camera::set_pixelRect_Injected"));

                auto pixelRect = UnityEngine::Rect(0,0, (float) width, (float) height);
                set_cullingMatrix(camera, pixelRect);

                camera->set_projectionMatrix(mainCamera->get_projectionMatrix());
                
                cameraGameObject->get_transform()->set_eulerAngles(UnityEngine::Vector3(0.0f, 0.0f, 0.0f));
                cameraGameObject->get_transform()->set_position(UnityEngine::Vector3(0.0f, 2.0f, 0.0f));
                texture = UnityEngine::RenderTexture::New_ctor(width, height, 24, (UnityEngine::RenderTextureFormat)UnityEngine::RenderTextureFormat::Default, (UnityEngine::RenderTextureReadWrite)UnityEngine::RenderTextureReadWrite::Default);
                texture->set_wrapMode(UnityEngine::TextureWrapMode::Clamp);
                texture->set_filterMode(UnityEngine::FilterMode::Bilinear);
                texture->Create();
                UnityEngine::RenderTexture::set_active(texture);
                UnityEngine::Object::DontDestroyOnLoad(texture);
                cameraGameObject->AddComponent<Replay::CameraCapture*>();
            }
            #endif

            camera = cameraGO->GetComponent<UnityEngine::Camera*>();

            #ifdef DO_FPS_RECORD
            if(texture->m_CachedPtr.m_value == nullptr) {
                texture = UnityEngine::RenderTexture::New_ctor(width, height, 24, (UnityEngine::RenderTextureFormat)UnityEngine::RenderTextureFormat::Default, (UnityEngine::RenderTextureReadWrite)UnityEngine::RenderTextureReadWrite::Default);
                texture->set_wrapMode(UnityEngine::TextureWrapMode::Clamp);
                texture->set_filterMode(UnityEngine::FilterMode::Bilinear);
                texture->Create();
                log("Texture was null, remade it");
            }
            camera->set_targetTexture(texture);
            camera->set_aspect(float(width) / float(height));
            #endif
            
            UnityEngine::Vector3 prevPos = cameraGO->get_transform()->get_localPosition();
            UnityEngine::Vector3 prevRot = cameraGO->get_transform()->get_localEulerAngles();
            
            if(cameraAngle == SMOOTH) {
                float deltaTime = UnityEngine::Time::get_deltaTime();

                smoothCameraPosition = EaseLerp(smoothCameraPosition, UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, replayData[indexNum].playerData.head.pos.z}, UnityEngine::Time::get_time(), deltaTime * positionSmooth);
                smoothCameraRotation = Slerp(smoothCameraRotation, UnityEngine::Quaternion::Euler(replayData[indexNum].playerData.head.rot.x, replayData[indexNum].playerData.head.rot.y, replayData[indexNum].playerData.head.rot.z), deltaTime * rotationSmooth);

                UnityEngine::Vector3 cameraRotation = smoothCameraRotation.get_eulerAngles();

                headFollowTransform->SetPositionAndRotation(smoothCameraPosition, UnityEngine::Quaternion::Euler(cameraRotation.x, 0, cameraRotation.z));
                
                cameraGO->get_transform()->SetPositionAndRotation(smoothCameraPosition, headFollowTransform->get_rotation());
                cameraGO->get_transform()->Translate(smoothPositionOffset, UnityEngine::Space::Self);
                cameraGO->get_transform()->set_rotation(smoothCameraRotation);
            } else {
                if(getConfig().config["ThirdPersonCircularMovement"].GetBool()) {
                    float camX = sin((songTime/2)/5)*9;
                    float camY = 2.5f;
                    float camZ = cos((songTime/2)/2.5f)*-3-2.5f;
                    cameraGO->get_transform()->set_position(UnityEngine::Vector3{camX, camY, camZ});

                    headFollowTransform->set_position(UnityEngine::Vector3{replayData[indexNum].playerData.head.pos.x, replayData[indexNum].playerData.head.pos.y, 1.6f});

                    cameraGO->get_transform()->LookAt(headFollowTransform);
                } else {
                    bool aButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::One, GlobalNamespace::OVRInput::Controller::RTouch);
                    bool bButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::Two, GlobalNamespace::OVRInput::Controller::RTouch);

                    if(aButtonValue || bButtonValue) {
                        pressedThirdPersonMoveButton = true;

                        UnityEngine::Vector3 camRotEuler = prevRot - basePrevRot;

                        cameraGO->get_transform()->set_localRotation(thirdPersonCamRot);
                        cameraGO->get_transform()->Rotate(camRotEuler);

                        cameraGO->get_transform()->set_position(newThirdPersonCamPos);
                        if(aButtonValue) {
                            UnityEngine::Vector3 translation = (prevPos - basePrevPos) * 18  * UnityEngine::Time::get_deltaTime();
                            cameraGO->get_transform()->Translate(UnityEngine::Quaternion::Euler(0, -prevRot.y, 0) * translation, UnityEngine::Space::Self);
                        }

                        newThirdPersonCamPos = cameraGO->get_transform()->get_position();
                        newThirdPersonCamRot = cameraGO->get_transform()->get_rotation();
                    } else {
                        if(pressedThirdPersonMoveButton) {
                            thirdPersonCamPos = newThirdPersonCamPos;
                            thirdPersonCamRot = newThirdPersonCamRot;
                        }
                        cameraGO->get_transform()->SetPositionAndRotation(thirdPersonCamPos, thirdPersonCamRot);
                        
                        basePrevPos = prevPos;
                        basePrevRot = prevRot;

                        newThirdPersonCamPos = cameraGO->get_transform()->get_position();
                    }
                }
            }
            
            typedef function_ptr_t<void, UnityEngine::Camera*, UnityEngine::Matrix4x4> cullingMatrixType;
            auto set_cullingMatrix = *reinterpret_cast<cullingMatrixType>(il2cpp_functions::resolve_icall("UnityEngine.Camera::set_cullingMatrix_Injected"));

            set_cullingMatrix(camera, UnityEngine::Matrix4x4::Ortho(-99999, 99999, -99999, 99999, 0.001f, 99999) * MatrixTranslate(UnityEngine::Vector3::get_forward() * -99999 / 2) * camera->get_worldToCameraMatrix());
        }
    }
    
    LightManager_OnWillRenderObject(self);
}

MAKE_HOOK_MATCH(HapticFeedbackController_Rumble, &HapticFeedbackController::PlayHapticFeedback, void, HapticFeedbackController* self, UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {

    // log("HapticFeedbackController_Rumble "+std::to_string(recording));

    if(!recording && inSong && getConfig().config["DisableVibration"].GetBool()) {
        return;
    }

    HapticFeedbackController_Rumble(self, node, hapticPreset);
}

MAKE_HOOK_MATCH(ResultsViewController_SetDataToUI, &ResultsViewController::SetDataToUI, void, GlobalNamespace::ResultsViewController* self) {
    
    log("ResultsViewController_SetDataToUI");

    ResultsViewController_SetDataToUI(self);

    int levelEndState = self->levelCompletionResults->levelEndStateType;

    if(failedReplayButton != nullptr) {
        log("Destroying failed replay button");
        UnityEngine::Object::Destroy(*RunMethod<UnityEngine::GameObject*>(failedReplayButton, "get_gameObject"));
        failedReplayButton = nullptr;
    }

    if(failedCameraToggle != nullptr) {
        log("Destroying failed camera toggle");
        UnityEngine::GameObject::Destroy(*RunMethod<UnityEngine::GameObject*>(failedCameraToggle, "get_gameObject"));
        failedCameraToggle = nullptr;
    }
    
    if(failedTimeSlider != nullptr) {
        log("Destroying failed time slider");
        UnityEngine::Object::Destroy(*RunMethod<UnityEngine::GameObject*>(failedTimeSlider, "get_gameObject"));
        failedTimeSlider = nullptr;
    }

    if(levelEndState == 2 && (recording || deathReplay)) {
        log("Creating failed replay buttons");

        recording = true;
        failedReplay = false;
        deathReplay = false;

        float buttonsScale = 0.8f;

        restartButton = self->restartButton;
        UnityEngine::Transform* restartButtonTransform = restartButton->get_transform();
        UnityEngine::Transform* parent = restartButtonTransform->GetParent()->GetParent()->GetParent();

        failedReplayButton = BeatSaberUI::CreateUIButton(
            parent, 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{17.25f, -28},
            [] { failedReplayButtonOnClick(); }
        );
        failedReplayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedReplayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});
        
        std::string tempString;
        switch(cameraAngle) {
            case HEADSET:
                tempString = "Normal";
                break;
            case SMOOTH:
                tempString = "Smooth Camera";
                break;
            case THIRDPERSON:
                tempString = "Third Person";
                break;
        }
        failedCameraToggle = BeatSaberUI::CreateUIButton(
            parent,
            tempString, 
            UnityEngine::Vector2{-20.75f, -28},
            [] { failedCameraToggleOnClick(); }
        );
        failedCameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedCameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});

        if(failedSongTime-practiceStartTime > 10) {
            log("Creating song start slider, failedSongTime is %f", failedSongTime);
            failedTimeSlider = UnityEngine::Object::Instantiate(latencySlider);
            failedTimeSlider->SetActive(true);
            failedTimeSlider->get_transform()->set_parent(parent);
            failedTimeSlider->get_transform()->set_localPosition(UnityEngine::Vector3{-3.5f, -38, 0});
            failedTimeSlider->get_transform()->set_localScale(UnityEngine::Vector3{0.825f, 0.825f, 0.825f});

            failedTimeSlider->get_transform()->Find(createcsstr("VisualMetronome"))->get_gameObject()->SetActive(false);
            UnityEngine::GameObject* sliderText = failedTimeSlider->get_transform()->Find(createcsstr("Text"))->get_gameObject();
            sliderText->GetComponent<TMPro::TextMeshProUGUI*>()->SetText(createcsstr("Song Start Time"));
            sliderText->get_transform()->set_localPosition(UnityEngine::Vector3{0.8f, 7.2f, 0});

            UnityEngine::Transform* sliderTransform = failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"));
            sliderTransform->set_localScale(UnityEngine::Vector3{1, 0.75f, 1});
            sliderTransform->set_localPosition(UnityEngine::Vector3{0, 3.6f, 0});
            sliderTransform->Find(createcsstr("SlidingArea"))->Find(createcsstr("Value"))->set_localScale(UnityEngine::Vector3{0.9f, 0.9f/0.75f, 0.9f});
            auto* slider = sliderTransform->get_gameObject()->GetComponent<HMUI::TimeSlider*>();

            slider->timeType = HMUI::TimeSlider::TimeType::Default;
            float flooredTime = std::floor(failedSongTime);
            slider->set_minValue(std::floor(practiceStartTime));
            slider->set_maxValue(flooredTime-5.0f);
            slider->set_numberOfSteps((int) (flooredTime-std::floor(practiceStartTime)-4.0f));
            slider->set_value(flooredTime-10.0f);
            setSongTime = true;
        }
    }
}

MAKE_HOOK_MATCH(ResultsViewController_Init, &ResultsViewController::Init,void, ResultsViewController* self, GlobalNamespace::LevelCompletionResults* levelCompletionResults, IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore) {
    
    log("ResultsViewController_Init");

    inSong = false;

    SaveRecording(levelCompletionResults, practice);

    Replay::AudioCapture* audioCapture = GetFirstEnabledComponent<Replay::AudioCapture*>();
    if(audioCapture != nullptr) UnityEngine::Object::Destroy(audioCapture);

    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);
}

MAKE_HOOK_MATCH(ResultsViewController_ContinueButtonPressed, &ResultsViewController::ContinueButtonPressed, void, ResultsViewController* self) {
    
    log("ResultsViewController_ContinueButtonPressed");

    ResultsViewController_ContinueButtonPressed(self);

    recording = true;
}

MAKE_HOOK_MATCH(NoteController_NoteWasMissed, &NoteController::SendNoteWasMissedEvent, void, NoteController* self) {

    if(!recording && HasFakeMiss()) {
        return;
    }
    
    if((deathReplay || failedReplay) && songTime < songStartTime+0.2f) {
        return;
    }

    NoteController_NoteWasMissed(self);
}

MAKE_HOOK_MATCH(NoteController_NoteWasCut, &NoteController::SendNoteWasCutEvent, void, NoteController* self, ByRef<NoteCutInfo> noteCutInfo) {

    if(!recording) {
        bool allIsOk = noteCutInfo.heldRef.get_allIsOK();

        if(!allIsOk && (((deathReplay || failedReplay) && songTime < songStartTime+0.2f) || HasFakeMiss())) {
            return;
        }
    }

    NoteController_NoteWasCut(self, noteCutInfo);
}

MAKE_HOOK_MATCH(NoteDebrisSpawner_SpawnDebris, &NoteDebrisSpawner::SpawnDebris, void, NoteDebrisSpawner* self, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, GlobalNamespace::ColorType colorType, float timeToNextColorNote, UnityEngine::Vector3 moveVec) {

    if(!recording && reduceDebris) {
        return;
    }

    NoteDebrisSpawner_SpawnDebris(self, cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, noteScale, colorType, timeToNextColorNote, moveVec);
}

MAKE_HOOK_MATCH(MainFlowCoordinator_DidActivate, &MainFlowCoordinator::DidActivate, void, GlobalNamespace::MainFlowCoordinator* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {

    MainFlowCoordinator_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    if(firstActivation) {
        log("Main Flow Coordinator First Activation");
        std::string oldPath = "sdcard/Android/data/com.beatgames.beatsaber/files/replays/";
        replayDirectory = bs_utils::getDataDir(modInfo) + "replays/";
        log("Replay Directory is %s", replayDirectory.c_str());
        if(System::IO::Directory::Exists(createcsstr(oldPath))) {
            log("Moving old replay files to new location");
            mkpath(const_cast<char*>(replayDirectory.c_str()));
            rename(oldPath.c_str(), replayDirectory.c_str());
        } else if(!System::IO::Directory::Exists(createcsstr(replayDirectory))) {
            log("Creating replay folder");
            mkpath(const_cast<char*>(replayDirectory.c_str()));
        }

        headFollowTransform = UnityEngine::GameObject::New_ctor()->get_transform();
        playerAvatar = FindObject<AvatarPoseController*>("PlayerAvatar", false);
        latencySlider = FindObject<HMUI::TimeSlider*>("Latency", true);
    }

    inMulti = false;
}

MAKE_HOOK_MATCH(MultiplayerLobbyController_ActivateMultiplayerLobby, &MultiplayerLobbyController::ActivateMultiplayerLobby, void, MultiplayerLobbyController* self) {

    MultiplayerLobbyController_ActivateMultiplayerLobby(self);

    log("In multiplayer lobby");

    inMulti = true;
}

MAKE_HOOK_MATCH(MultiplayerSongStart, &MultiplayerLevelScenesTransitionSetupDataSO::Init, void, MultiplayerLevelScenesTransitionSetupDataSO* self,::Il2CppString* gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects) {

    log("Multiplayer Song Start %d", inSongOrResults);

    ResetVariables();

    bs_utils::Submission::enable(modInfo);
    
    dataToSave.clear();

    GetModifiers(gameplayModifiers, playerSpecificSettings);
    log("Finished getting modifiers in multiplayer");

    inPauseMenu = false;

    log("Getting level id");
    Il2CppString* LevelID = previewBeatmapLevel->get_levelID();
    log("Getting song difficulty");
    int Difficulty = int(difficultyBeatmap->get_difficulty());
    log("Getting mode name");
    std::string modeName = to_utf8(csstrtostr(beatmapCharacteristic->get_compoundIdPartName()));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;
    if(songHash.find("custom_level_") != std::string::npos) {
        log("Erasing custom_level_");
        songHash.erase(songHash.begin(), songHash.begin()+13);
    }
    log("Song hash is %s", songHash.c_str());

    MultiplayerSongStart(self, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects);
    log("Finished song setup");
}

MAKE_HOOK_MATCH(MultiplayerLevelFinishedController_HandlePlayerDidFinish, &MultiplayerLevelFinishedController::HandlePlayerDidFinish, void, MultiplayerLevelFinishedController* self, MultiplayerLevelCompletionResults* levelCompletionResults) {

    log("Multiplayer song finished");

    inSong = false;
    inSongOrResults = true;

    // This cast might be bad
    SaveRecording((LevelCompletionResults*) levelCompletionResults, false);

    MultiplayerLevelFinishedController_HandlePlayerDidFinish(self, levelCompletionResults);
}

MAKE_HOOK_MATCH(LevelFailedTextEffect_ShowEffect, &LevelFailedTextEffect::ShowEffect, void, LevelFailedTextEffect* self) {

    levelFailedTextEffect = true;

    LevelFailedTextEffect_ShowEffect(self);
}

MAKE_HOOK_MATCH(GameSongController_LateUpdate, &GameSongController::LateUpdate, void, GameSongController* self) {

    // log("GameSongController_LateUpdate");

    GameSongController_LateUpdate(self);

    maxSongTime = self->get_songLength();

    if(failedTimeSlider != nullptr && !inPauseMenu && !inResumeAnimation && !recording && setSongTime && songTime > 0.1f && failedTimeSlider->m_CachedPtr.m_value != nullptr) {
        log("Checking to set song time");
        float sliderValue = failedTimeSlider->get_transform()->Find(createcsstr("LatencySlider"))->get_gameObject()->GetComponent<HMUI::TimeSlider*>()->get_value();

        if(sliderValue == std::floor(oldSliderTime)) {
            setSongTime = false;
        }

        log("Slider is %f, old slider is %f", sliderValue, oldSliderTime);

        if(setSongTime) {
            setSongTime = false;
            float previousSongTime = self->audioTimeSyncController->songTime;

            if(sliderValue < songTime) {
                BeatmapObjectManager* objectManager = GetFirstEnabledComponent<ScoreController*>()->beatmapObjectManager;

                Array<NoteController*>* noteTRS = UnityEngine::Resources::FindObjectsOfTypeAll<NoteController*>();
                for(int i = 0; i < noteTRS->Length(); i++) {
                    UnityEngine::GameObject* go = noteTRS->values[i]->get_gameObject();
                    if(go->get_activeInHierarchy()){
                        objectManager->Despawn(noteTRS->values[i]);
                    }
                }

                Array<ObstacleController*>* obstacleTRS = UnityEngine::Resources::FindObjectsOfTypeAll<ObstacleController*>();
                for(int i = 0; i < obstacleTRS->Length(); i++) {
                    UnityEngine::GameObject* go = obstacleTRS->values[i]->get_gameObject();
                    if(go->get_activeInHierarchy()){
                        objectManager->Despawn(obstacleTRS->values[i]);
                    }
                }
            }
            
            log("Getting objects after skip time");
            BeatmapObjectCallbackController* spawnController = reinterpret_cast<BeatmapObjectCallbackController*>(self->beatmapObjectCallbackController);

            auto beatmapLinesData = spawnController->initData->beatmapData->get_beatmapLinesData();
            auto linesCount = il2cpp_utils::RunMethod<int>(beatmapLinesData, "System.Collections.ICollection.get_Count").value();
            for (int i = 0; i < linesCount; i++) {
                auto lineData = il2cpp_utils::RunMethod<GlobalNamespace::IReadonlyBeatmapLineData*>(beatmapLinesData, "System.Collections.Generic.IReadOnlyList`1.get_Item", i).value();
                auto beatmapObjectsInLine = lineData->get_beatmapObjectsData();
                for (int j = 0; j < reinterpret_cast<System::Collections::Generic::List_1<BeatmapObjectData*>*>(beatmapObjectsInLine)->get_Count(); j++) {
                    if (beatmapObjectsInLine->get_Item(j)->time >= sliderValue) {
                        for (int k = 0; k < spawnController->beatmapObjectCallbackData->get_Count(); k++) {
                            spawnController->beatmapObjectCallbackData->get_Item(k)->nextObjectIndexInLine->values[i] = j;
                        }
                        break;
                    }
                }
            }

            log("Getting events after skip time");
            auto events = spawnController->initData->beatmapData->get_beatmapEventsData();
            for (int i = 0; i < reinterpret_cast<System::Collections::Generic::List_1<BeatmapEventData*>*>(events)->get_Count(); i++) {
                auto event = events->get_Item(i);
                if (event->time >= sliderValue) {
                    for (int j = 0; j < spawnController->beatmapEventCallbackData->get_Count(); j++) {
                        spawnController->beatmapEventCallbackData->get_Item(j)->nextEventIndex = i;
                    }
                    spawnController->nextEventIndex = i;
                    break;
                }
            }

            log("Setting song time to skip time");
            SetSongTimeTo(self->audioTimeSyncController, sliderValue);
            self->audioTimeSyncController->audioSource->Play();
            log("Successfully set time to skip time");

            for(int i = 0; i < replayData.size(); i++) {
                if(sliderValue < replayData[0].time) {
                    indexNum = 0;
                    break;
                }
                float keyFrameTime = replayData[i].time;
                float nextKeyFrameTime = replayData[std::min(float(i+1), float(replayData.size()-1))].time;
                if(keyFrameTime <= sliderValue && nextKeyFrameTime > sliderValue) {
                    indexNum = i;
                    break;
                }
            }

            log("Setting energy level");
            if(replayData[indexNum].energy != -1) {
                gameEnergyUIPanel = GetFirstEnabledComponent<GameEnergyUIPanel*>();
                auto* comboUIController = GetFirstEnabledComponent<ComboUIController*>();
                if((!didReach0Energy || (didReach0Energy && sliderValue < reached0Time)) && previousSongTime > 0.5f) {
                    gameEnergyUIPanel->RefreshEnergyUI(replayData[indexNum].energy);
                    comboUIController->HandleComboDidChange(replayData[indexNum+5].combo);
                }
                SetEnergyState(sliderValue);
            }

            // Array<NoteCutSoundEffect*>* trs = UnityEngine::Resources::FindObjectsOfTypeAll<NoteCutSoundEffect*>();
            // for(int i = 0; i < trs->Length(); i++) {
            //     // trs->values[i]->set_enabled(true);
            //     bool value = true;
            //     // if(trs->values[i]->get_time() >= sliderValue) {
            //     //     value = true;
            //     // }
            //     trs->values[i]->noteWasCut = !value;
            //     trs->values[i]->set_enabled(value);
            // }
        }
    }
}

MAKE_HOOK_MATCH(GameEnergyUIPanel_RefreshEnergyUI, &GameEnergyUIPanel::RefreshEnergyUI, void, GameEnergyUIPanel* self, float energy) {
    if(!recording && didReach0Energy && replaySaveBools.noFail) {
        if(songTime < reached0Time) {
            doneFailedEffect = false;
            energy = replayData[indexNum].energy;
        } else if(!doneFailedEffect && songTime < reached0Time+3) {
            log("Simulating a real no fail bail out");
            UnityEngine::GameObject* tempGO = FindObject<GameEnergyUIPanel*>("EnergyPanel");
            if(tempGO != nullptr) {
                gameEnergyUIPanel = tempGO->GetComponent<GameEnergyUIPanel*>();
                SetEnergyState(songTime);
                failedEnergyEffect = UnityEngine::Object::Instantiate(gameEnergyUIPanel);
                failedEnergyEffect->get_transform()->Find(createcsstr("BG"))->get_gameObject()->SetActive(false);
                failedEnergyEffect->playableDirector->Play();
                failedEffectTimer = 4;
                doneFailedEffect = true;
            }
        }
        if(energy < 0.01f) {
            energy = 0.01f;
        }
    }
    
    GameEnergyUIPanel_RefreshEnergyUI(self, energy);
}

//Temporary probably
MAKE_HOOK_MATCH(MainSettingsModel_Load, &GlobalNamespace::MainSettingsModelSO::Load, void, GlobalNamespace::MainSettingsModelSO* instance, bool forced)
{
    MainSettingsModel_Load(instance, forced);
    BoolSO* distortionsEnabled = (BoolSO*)UnityEngine::ScriptableObject::CreateInstance(csTypeOf(BoolSO*));
    distortionsEnabled ->value = true;
    instance->screenDisplacementEffectsEnabled = distortionsEnabled ;
}

extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;
    modInfo = info;
    
    getConfig().Load();
    SaveConfig();
}

extern "C" void load() {
    il2cpp_functions::Init();

    QuestUI::Init();

    InitialRefreshRate = GlobalNamespace::OVRPlugin::get_systemDisplayFrequency();

    custom_types::Register::AutoRegister();
    QuestUI::Register::RegisterModSettingsViewController<Replay::UIController*>(modInfo, "Replay");

    log("Installing hooks...");
    INSTALL_HOOK(loggingFunction(), SongUpdate);
    INSTALL_HOOK(loggingFunction(), SongStart);
    INSTALL_HOOK(loggingFunction(), BeatmapObjectSpawnMovementData_Update);
    INSTALL_HOOK(loggingFunction(), PlayerController_Update);
    INSTALL_HOOK(loggingFunction(), Saber_ManualUpdate);
    INSTALL_HOOK(loggingFunction(), ScoreChanged);
    INSTALL_HOOK(loggingFunction(), StandardLevelDetailView_RefreshContent);
    INSTALL_HOOK(loggingFunction(), StandardLevelDetailViewController_DidActivate);
    INSTALL_HOOK(loggingFunction(), GameEnergyCounter_AddEnergy);
    INSTALL_HOOK(loggingFunction(), ScoreControllerLateUpdate);
    INSTALL_HOOK(loggingFunction(), RefreshRank);
    INSTALL_HOOK(loggingFunction(), RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank);
    INSTALL_HOOK(loggingFunction(), Triggers);
    INSTALL_HOOK(loggingFunction(), ControllerUpdate);
    INSTALL_HOOK(loggingFunction(), ProgressUpdate);
    INSTALL_HOOK(loggingFunction(), PauseController_get_canPause);
    INSTALL_HOOK(loggingFunction(), PauseStart);
    INSTALL_HOOK(loggingFunction(), PauseFinish);
    INSTALL_HOOK(loggingFunction(), PauseAnimationFinish);
    INSTALL_HOOK(loggingFunction(), PauseMenuManager_MenuButtonPressed);
    INSTALL_HOOK(loggingFunction(), ResultsScreenEnd);
    INSTALL_HOOK(loggingFunction(), LightManager_OnWillRenderObject);
    INSTALL_HOOK(loggingFunction(), HapticFeedbackController_Rumble);
    INSTALL_HOOK(loggingFunction(), ResultsViewController_SetDataToUI);
    INSTALL_HOOK(loggingFunction(), ResultsViewController_Init);
    INSTALL_HOOK(loggingFunction(), ResultsViewController_ContinueButtonPressed);
    INSTALL_HOOK(loggingFunction(), NoteController_NoteWasMissed);
    INSTALL_HOOK(loggingFunction(), NoteController_NoteWasCut);
    INSTALL_HOOK(loggingFunction(), NoteDebrisSpawner_SpawnDebris);
    INSTALL_HOOK(loggingFunction(), MainFlowCoordinator_DidActivate);
    INSTALL_HOOK(loggingFunction(), MultiplayerLobbyController_ActivateMultiplayerLobby);
    INSTALL_HOOK(loggingFunction(), MultiplayerSongStart);
    INSTALL_HOOK(loggingFunction(), MultiplayerLevelFinishedController_HandlePlayerDidFinish);
    INSTALL_HOOK(loggingFunction(), LevelFailedTextEffect_ShowEffect);
    INSTALL_HOOK(loggingFunction(), GameSongController_LateUpdate);
    INSTALL_HOOK(loggingFunction(), GameEnergyUIPanel_RefreshEnergyUI);
    // INSTALL_HOOK(loggingFunction(), MainSettingsModel_Load);
    log("Installed all hooks!");

    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();

    smoothPositionOffset = UnityEngine::Vector3{getConfig().config["SmoothCameraOffset"]["x"].GetFloat(), getConfig().config["SmoothCameraOffset"]["y"].GetFloat(), getConfig().config["SmoothCameraOffset"]["z"].GetFloat()};

    if(getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat() == -5 && getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat() == 45) {
        getConfig().config["ThirdPersonCameraPos"]["z"].SetFloat(-4);
        getConfig().config["ThirdPersonCameraRot"]["y"].SetFloat(53);
        getConfig().Write();
    }

    thirdPersonCamPos = {getConfig().config["ThirdPersonCameraPos"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat()};
    thirdPersonCamRot = UnityEngine::Quaternion::Euler(getConfig().config["ThirdPersonCameraRot"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["z"].GetFloat());
}
