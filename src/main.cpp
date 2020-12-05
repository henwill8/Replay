#include <dlfcn.h>
#include "main.hpp"
#include "codegen.hpp"
#include "UI.hpp"
#include "cameraReplace.hpp"
#include "avatarController.hpp"
#include "../extern/beatsaber-hook/shared/utils/utils.h"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"
#include "../extern/modloader/shared/modloader.hpp"
#include "../extern/beatsaber-hook/shared/utils/typedefs.h"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "../extern/beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "../extern/beatsaber-hook/shared/config/config-utils.hpp"
#include "../extern/questui/shared/QuestUI.hpp"
#include "../extern/questui/shared/BeatSaberUI.hpp"
#include "../extern/bs-utils/shared/utils.hpp"
#include "../extern/custom-types/shared/register.hpp"

#include <sstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <list>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <math.h> 
#include <fstream>

using namespace il2cpp_utils;
using namespace QuestUI;
// using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;

Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}

void log(std::string str) {
    Logger::get().info("Replay: " + str);
}

int clip(int n, int lower, int upper) {
    return std::max(lower, std::min(n, upper));
}

struct replayKeyFrame {
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

    void Write(std::ofstream& writer) const {
        writer.write(reinterpret_cast<const char*>(&rightSaberPosX), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rightSaberPosY), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rightSaberPosZ), sizeof(float));
        
        writer.write(reinterpret_cast<const char*>(&rightSaberRotX), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rightSaberRotY), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rightSaberRotZ), sizeof(float));
        
        writer.write(reinterpret_cast<const char*>(&leftSaberPosX), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&leftSaberPosY), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&leftSaberPosZ), sizeof(float));
        
        writer.write(reinterpret_cast<const char*>(&leftSaberRotX), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&leftSaberRotY), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&leftSaberRotZ), sizeof(float));
        
        writer.write(reinterpret_cast<const char*>(&headPosX), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&headPosY), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&headPosZ), sizeof(float));
        
        writer.write(reinterpret_cast<const char*>(&headRotX), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&headRotY), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&headRotZ), sizeof(float));
        
        writer.write(reinterpret_cast<const char*>(&score), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&percent), sizeof(float));
        writer.write(reinterpret_cast<const char*>(&rank), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&combo), sizeof(int));
        writer.write(reinterpret_cast<const char*>(&time), sizeof(float));
    }
};

Il2CppObject* playButton = nullptr;
Il2CppObject* restartButton = nullptr;

std::string cameraToggleString = "hmd";

Button* replayButton = nullptr;
Button* cameraToggle = nullptr;
Button* failedReplayButton = nullptr;
Button* failedCameraToggle = nullptr;
Toggle* speedToggle = nullptr;

int replayButtonCount = 0;

TMPro::TextMeshProUGUI* replayText;

bool speedToggleBool = true;

bool recording = true;

bool inSong = false;
bool inSongOrResults = false;

bool failedReplay;

std::vector<replayKeyFrame> dataToSave;

std::vector<replayKeyFrame> replayData;

void replayButtonOnClick() {
    if(playButton != nullptr) {
        recording = false;
        log("Pressed replay button");
        failedReplay = false;
        RunMethod(playButton, "Press");
    }
}

void failedReplayButtonOnClick() {
    if(restartButton != nullptr) {
        replayData = dataToSave;
        recording = false;
        failedReplay = true;
        RunMethod(restartButton, "Press");
        log("Pressed failed replay button");
    }
}

void cameraToggleOnClick() {
    TMPro::TextMeshProUGUI* buttonTMP = cameraToggle->get_gameObject()->GetComponentInChildren<TMPro::TextMeshProUGUI*>();
    if(buttonTMP != nullptr) {
        buttonTMP->get_gameObject()->SetActive(true);
        if(cameraToggleString == "hmd") {
            log("setting text to smooth camera");
            cameraToggleString = "smooth";
            buttonTMP->set_text(createcsstr("Smooth Camera"));
        } else if(cameraToggleString == "smooth") {
            log("setting text to third person");
            cameraToggleString = "thirdPerson";
            buttonTMP->set_text(createcsstr("Third Person"));
            // buttonTMP->set_fontSize(6);
        } else if(cameraToggleString == "thirdPerson") {
            log("setting text to normal");
            cameraToggleString = "hmd";
            buttonTMP->set_text(createcsstr("Normal"));
            // buttonTMP->set_fontSize(11);
        }
    }
}

void failedCameraToggleOnClick() {
    TMPro::TextMeshProUGUI* buttonTMP = failedCameraToggle->get_gameObject()->GetComponentInChildren<TMPro::TextMeshProUGUI*>();
    if(buttonTMP != nullptr) {
        buttonTMP->get_gameObject()->SetActive(true);
        if(cameraToggleString == "hmd") {
            log("setting text to smooth camera");
            cameraToggleString = "smooth";
            buttonTMP->set_text(createcsstr("Smooth Camera"));
        } else if(cameraToggleString == "smooth") {
            log("setting text to third person");
            cameraToggleString = "thirdPerson";
            buttonTMP->set_text(createcsstr("Third Person"));
        } else if(cameraToggleString == "thirdPerson") {
            log("setting text to normal");
            cameraToggleString = "hmd";
            buttonTMP->set_text(createcsstr("Normal"));
        }
    }
}

void speedToggleOnClick(bool newValue) {
    speedToggleBool = newValue;
}

float songTime = 0.0f;

int score;
int highScore;
float percent;
int rank;
float scoreMultiplier = 1.0f;

int combo = 0;

int indexNum = 0;

std::string songHash;

std::string replayDirectory = "sdcard/Android/data/com.beatgames.beatsaber/files/replays/";

bool batteryEnergy = false;
bool disappearingArrows = false;
bool noObstacles = false;
bool noBombs = false;
bool noArrows = false;
bool slowerSong = false;
bool noFail = false;
bool instafail = false;
bool ghostNotes = false;
bool fasterSong = false;
bool leftHanded = false;

int triggerNode;
float rTriggerVal;
float lTriggerVal;

bool inPauseMenu = false;

int amountPerLine = 23;

float replaySpeed = 1.0f;

std::string songName = "";

Quaternion smoothCameraRotation;
Vector3 smoothCameraPosition;

UnityEngine::Vector3 smoothHeadPosition;
UnityEngine::Quaternion smoothHeadRotation;

float positionSmooth;
float rotationSmooth;

Vector3 smoothPositionOffset;

Vector3 thirdPersonCamPos;
Quaternion thirdPersonCamRot;
Vector3 newThirdPersonCamPos;
Quaternion newThirdPersonCamRot;
Vector3 basePrevPos;
Quaternion basePrevRot;
bool pressedThirdPersonMoveButton = false;

int maxRawScore;

Vector3 rightSaberPos;
Vector3 rightSaberRot;
Vector3 leftSaberPos;
Vector3 leftSaberRot;

UnityEngine::Transform* leftSaberTransformCache = nullptr;
UnityEngine::Transform* rightSaberTransformCache = nullptr;

UnityEngine::GameObject* customAvatar = nullptr;

int offset = 0;

bool installedQosmeticsHook = false;

std::string fileExtensionName = ".questReplayFileForQuestDontTryOnPcAlsoPinkEraAndLillieAreCuteBtwWilliamGay";

void SaveConfig() {
    if(!getConfig().config.HasMember("ThirdPersonCircularMovement")) {
        log("Creating config");
        getConfig().config.RemoveAllMembers();
        getConfig().config.SetObject();
        rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
        getConfig().config.AddMember("PositionSmooth", 2.0f, allocator);
        getConfig().config.AddMember("RotationSmooth", 2.0f, allocator);

        rapidjson::Value SmoothCameraObject(rapidjson::kObjectType);
        SmoothCameraObject.AddMember("x", 0, allocator);
        SmoothCameraObject.AddMember("y", 0, allocator);
        SmoothCameraObject.AddMember("z", -0.75f, allocator);
        getConfig().config.AddMember("SmoothCameraOffset", SmoothCameraObject, allocator);
        
        rapidjson::Value ThirdPersonPosObject(rapidjson::kObjectType);
        ThirdPersonPosObject.AddMember("x", -3, allocator);
        ThirdPersonPosObject.AddMember("y", 1.6f, allocator);
        ThirdPersonPosObject.AddMember("z", -5, allocator);
        getConfig().config.AddMember("ThirdPersonCameraPos", ThirdPersonPosObject, allocator);

        rapidjson::Value ThirdPersonRotObject(rapidjson::kObjectType);
        ThirdPersonRotObject.AddMember("x", 0, allocator);
        ThirdPersonRotObject.AddMember("y", 45, allocator);
        ThirdPersonRotObject.AddMember("z", 0, allocator);
        getConfig().config.AddMember("ThirdPersonCameraRot", ThirdPersonRotObject, allocator);
        
        getConfig().config.AddMember("ThirdPersonCircularMovement", false, allocator);

        getConfig().config.AddMember("FullComboOverwrites", false, allocator);
        getConfig().config.AddMember("DisableVibration", true, allocator);

        getConfig().Write();
    } else {
        log("Not creating config");
        getConfig().Load();
    }
}

void createReplayFile(std::string songHashID) {
    std::ofstream output(replayDirectory+songHashID+fileExtensionName, std::ios::binary);
    if(output.is_open()) {

        output.write(reinterpret_cast<const char*>(&instafail), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&batteryEnergy), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&ghostNotes), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&disappearingArrows), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&fasterSong), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&noFail), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&noBombs), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&noObstacles), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&noArrows), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&slowerSong), sizeof(bool));
        output.write(reinterpret_cast<const char*>(&leftHanded), sizeof(bool));

        for(const auto& item : dataToSave) {
            item.Write(output);
        }
        output.close();
    }
}

void getReplayValues(std::string songHashID) {
    replayData.clear();

    log("Getting replay data...");
    std::ifstream input(replayDirectory+songHashID+fileExtensionName, std::ios::binary);

    if(input.is_open()) {
        log("Successfully opened replay file at: "+replayDirectory+songHashID+fileExtensionName);

        replayKeyFrame keyFrameData;

        input.read(reinterpret_cast<char*>(&instafail), sizeof(bool));
        input.read(reinterpret_cast<char*>(&batteryEnergy), sizeof(bool));
        input.read(reinterpret_cast<char*>(&ghostNotes), sizeof(bool));
        input.read(reinterpret_cast<char*>(&disappearingArrows), sizeof(bool));
        input.read(reinterpret_cast<char*>(&fasterSong), sizeof(bool));
        input.read(reinterpret_cast<char*>(&noFail), sizeof(bool));
        input.read(reinterpret_cast<char*>(&noBombs), sizeof(bool));
        input.read(reinterpret_cast<char*>(&noObstacles), sizeof(bool));
        input.read(reinterpret_cast<char*>(&noArrows), sizeof(bool));
        input.read(reinterpret_cast<char*>(&slowerSong), sizeof(bool));
        input.read(reinterpret_cast<char*>(&leftHanded), sizeof(bool));

        while(input.read(reinterpret_cast<char*>(&keyFrameData), sizeof(replayKeyFrame))) {
            replayData.push_back(keyFrameData);            
        }
        
        input.close();
        log("Successfully closed the replay file");
    }
    log("Finished getting replay data!");
}

bool hasFakeMiss() {
    int amountCheckingEachSide = 2;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        if(replayData[clip(indexNum+i, 0, replayData.size()-1)].combo <= 1) {
            return false;
        }
    }

    return true;
}

Vector3 addVector3(Vector3 a, Vector3 b) {
    return Vector3{a.x + b.x, a.y + b.y, a.z + b.z};
}

Vector3 subtractVector3(Vector3 a, Vector3 b) {
    return Vector3{a.x - b.x, a.y - b.y, a.z - b.z};
}

Vector3 divideVector3ByFloat(Vector3 a, float b) {
    return Vector3{a.x / b, a.y / b, a.z / b};
}

Quaternion addQuaternion(Quaternion a, Quaternion b) {
    return Quaternion{a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w};
}

Quaternion eulerToQuaternion(Vector3 euler) {
    Quaternion tempQuaternion = {0, 0, 0, 0};
    tempQuaternion.x = sin(euler.x/2) * cos(euler.y/2) * cos(euler.z/2) - cos(euler.x/2) * sin(euler.y/2) * sin(euler.z/2);
    tempQuaternion.y = cos(euler.x/2) * sin(euler.y/2) * cos(euler.z/2) + sin(euler.x/2) * cos(euler.y/2) * sin(euler.z/2);
    tempQuaternion.z = cos(euler.x/2) * cos(euler.y/2) * sin(euler.z/2) - sin(euler.x/2) * sin(euler.y/2) * cos(euler.z/2);
    tempQuaternion.w = cos(euler.x/2) * cos(euler.y/2) * cos(euler.z/2) + sin(euler.x/2) * sin(euler.y/2) * sin(euler.z/2);
    return tempQuaternion;
}

MAKE_HOOK_OFFSETLESS(QosmeticsTrail_Update, void, Il2CppObject* self) {

    int offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
    int nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

    int lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
    int lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

    float lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);

    if(leftSaberTransformCache != nullptr) {
        UnityEngine::Vector3 lerpedPosition = UnityEngine::Vector3::Lerp(UnityEngine::Vector3{replayData[offsetIndex].leftSaberPosX, replayData[offsetIndex].leftSaberPosY, replayData[offsetIndex].leftSaberPosZ}, UnityEngine::Vector3{replayData[nextOffsetIndex].leftSaberPosX, replayData[nextOffsetIndex].leftSaberPosY, replayData[nextOffsetIndex].leftSaberPosZ}, lerpAmount);
        leftSaberTransformCache->set_position(lerpedPosition);

        UnityEngine::Quaternion lerpedRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].leftSaberRotX, replayData[offsetIndex].leftSaberRotY, replayData[offsetIndex].leftSaberRotZ), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].leftSaberRotX, replayData[nextOffsetIndex].leftSaberRotY, replayData[nextOffsetIndex].leftSaberRotZ), lerpAmount);
        leftSaberTransformCache->set_rotation(lerpedRotation);
    }
    if(rightSaberTransformCache != nullptr) {
        UnityEngine::Vector3 lerpedPosition = UnityEngine::Vector3::Lerp(UnityEngine::Vector3{replayData[offsetIndex].rightSaberPosX, replayData[offsetIndex].rightSaberPosY, replayData[offsetIndex].rightSaberPosZ}, UnityEngine::Vector3{replayData[nextOffsetIndex].rightSaberPosX, replayData[nextOffsetIndex].rightSaberPosY, replayData[nextOffsetIndex].rightSaberPosZ}, lerpAmount);
        rightSaberTransformCache->set_position(lerpedPosition);

        UnityEngine::Quaternion lerpedRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].rightSaberRotX, replayData[offsetIndex].rightSaberRotY, replayData[offsetIndex].rightSaberRotZ), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].rightSaberRotX, replayData[nextOffsetIndex].rightSaberRotY, replayData[nextOffsetIndex].rightSaberRotZ), lerpAmount);
        rightSaberTransformCache->set_rotation(lerpedRotation);
    }

    QosmeticsTrail_Update(self);
}

MAKE_HOOK_OFFSETLESS(PlayerController_Update, void, GlobalNamespace::PlayerTransforms* self) {

    // log("PlayerControllerUpdate");
    
    if(recording) {
        Vector3 headPos = *GetFieldValue<Vector3>(self, "_headPos");
        Vector3 headRot = *GetFieldValue<Vector3>(self, "_headRot");
        
        CRASH_UNLESS(SetFieldValue(self, "_overrideHeadPos", false));

        dataToSave.push_back({
            rightSaberPos.x, rightSaberPos.y, rightSaberPos.z,
            rightSaberRot.x, rightSaberRot.y, rightSaberRot.z,

            leftSaberPos.x, leftSaberPos.y, leftSaberPos.z,
            leftSaberRot.x, leftSaberRot.y, leftSaberRot.z,

            headPos.x, headPos.y, headPos.z,
            headRot.x, headRot.y, headRot.z,

            score, percent, rank, combo, songTime
        });
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
        
        if(customAvatar != nullptr) {
            customAvatar->get_transform()->SetParent(self->get_transform());
            customAvatar->get_transform()->set_position(UnityEngine::Vector3{0, 0, 0});
            customAvatar->get_transform()->set_localScale(UnityEngine::Vector3{1, 1, 1});
            customAvatar->SetActive(true);
            GlobalNamespace::AvatarPoseController* poseController = customAvatar->GetComponent<GlobalNamespace::AvatarPoseController*>();

            float deltaTime = *RunMethod<float>("UnityEngine", "Time", "get_deltaTime");

            smoothHeadPosition = UnityEngine::Vector3::Lerp(smoothHeadPosition, UnityEngine::Vector3{replayData[indexNum].headPosX, replayData[indexNum].headPosY, replayData[indexNum].headPosZ}, deltaTime * 12);
            smoothHeadRotation = UnityEngine::Quaternion::Slerp(smoothHeadRotation, UnityEngine::Quaternion::Euler(replayData[indexNum].headRotX*90, replayData[indexNum].headRotY*90, replayData[indexNum].headRotZ*90), deltaTime * 12);
            log(std::to_string(replayData[indexNum].headRotX*90)+" "+std::to_string(replayData[indexNum].headRotY*90)+" "+std::to_string(replayData[indexNum].headRotZ*90));
            poseController->UpdateTransforms(
                smoothHeadPosition, 
                UnityEngine::Vector3{replayData[indexNum].leftSaberPosX, replayData[indexNum].leftSaberPosY, replayData[indexNum].leftSaberPosZ},
                UnityEngine::Vector3{replayData[indexNum].rightSaberPosX, replayData[indexNum].rightSaberPosY, replayData[indexNum].rightSaberPosZ},
                smoothHeadRotation,
                UnityEngine::Quaternion::Euler(replayData[indexNum].leftSaberRotX, replayData[indexNum].leftSaberRotY, replayData[indexNum].leftSaberRotZ),
                UnityEngine::Quaternion::Euler(replayData[indexNum].rightSaberRotX, replayData[indexNum].rightSaberRotY, replayData[indexNum].rightSaberRotZ)
            );
        }

        CRASH_UNLESS(SetFieldValue(self, "_overrideHeadPos", true));
        SetFieldValue(self, "_overridenHeadPos", UnityEngine::Vector3{replayData[indexNum].headPosX, replayData[indexNum].headPosY, replayData[indexNum].headPosZ});
        SetFieldValue(self, "_headPos", UnityEngine::Vector3{replayData[indexNum].headPosX, replayData[indexNum].headPosY, replayData[indexNum].headPosZ});
        RunMethod(*GetFieldValue<Il2CppObject*>(self, "_headTransform"), "set_localPosition", Vector3{replayData[indexNum].headPosX, replayData[indexNum].headPosY, replayData[indexNum].headPosZ});
    }

    PlayerController_Update(self);
}

MAKE_HOOK_OFFSETLESS(Saber_ManualUpdate, void, GlobalNamespace::Saber* self) {

    // log("Saber_ManualUpdate");
    
    int saberType = *RunMethod<int>(self, "get_saberType");
    
    if(recording) {
        if(saberType == 0) {
            Il2CppObject* leftSaberTransform = self->get_transform();
            leftSaberPos = *RunMethod<Vector3>(leftSaberTransform, "get_position");
            leftSaberRot = *RunMethod<Vector3>(leftSaberTransform, "get_eulerAngles");
        } else {
            Il2CppObject* rightSaberTransform = self->get_transform();
            rightSaberPos = *RunMethod<Vector3>(rightSaberTransform, "get_position");
            rightSaberRot = *RunMethod<Vector3>(rightSaberTransform, "get_eulerAngles");
        }
    } else {
        if(il2cpp_utils::FindMethodUnsafe("Qosmetics", "QosmeticsTrail", "Update", 0) && !installedQosmeticsHook) {
            log("Installing Qosmetics hook");
            INSTALL_HOOK_OFFSETLESS(QosmeticsTrail_Update, il2cpp_utils::FindMethodUnsafe("Qosmetics", "QosmeticsTrail", "Update", 0));
            installedQosmeticsHook = true;
        }
        int offsetIndex = clip(indexNum+offset, 0, replayData.size()-1);
        int nextOffsetIndex = clip(indexNum+offset+1, 0, replayData.size()-1);

        int lerpOffsetIndex = clip(indexNum-1, 0, replayData.size()-1);
        int lerpNextOffsetIndex = clip(indexNum, 0, replayData.size()-1);

        float lerpAmount = (songTime - replayData[lerpOffsetIndex].time) / (replayData[lerpNextOffsetIndex].time - replayData[lerpOffsetIndex].time);

        if(saberType == 0) {
            UnityEngine::Vector3 lerpedPosition = UnityEngine::Vector3::Lerp(UnityEngine::Vector3{replayData[offsetIndex].leftSaberPosX, replayData[offsetIndex].leftSaberPosY, replayData[offsetIndex].leftSaberPosZ}, UnityEngine::Vector3{replayData[nextOffsetIndex].leftSaberPosX, replayData[nextOffsetIndex].leftSaberPosY, replayData[nextOffsetIndex].leftSaberPosZ}, lerpAmount);
            self->get_transform()->set_position(lerpedPosition);

            UnityEngine::Quaternion lerpedRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].leftSaberRotX, replayData[offsetIndex].leftSaberRotY, replayData[offsetIndex].leftSaberRotZ), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].leftSaberRotX, replayData[nextOffsetIndex].leftSaberRotY, replayData[nextOffsetIndex].leftSaberRotZ), lerpAmount);
            self->get_transform()->set_rotation(lerpedRotation);

            leftSaberTransformCache = self->get_transform();
        } else {
            UnityEngine::Vector3 lerpedPosition = UnityEngine::Vector3::Lerp(UnityEngine::Vector3{replayData[offsetIndex].rightSaberPosX, replayData[offsetIndex].rightSaberPosY, replayData[offsetIndex].rightSaberPosZ}, UnityEngine::Vector3{replayData[nextOffsetIndex].rightSaberPosX, replayData[nextOffsetIndex].rightSaberPosY, replayData[nextOffsetIndex].rightSaberPosZ}, lerpAmount);
            self->get_transform()->set_position(lerpedPosition);

            UnityEngine::Quaternion lerpedRotation = UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion::Euler(replayData[offsetIndex].rightSaberRotX, replayData[offsetIndex].rightSaberRotY, replayData[offsetIndex].rightSaberRotZ), UnityEngine::Quaternion::Euler(replayData[nextOffsetIndex].rightSaberRotX, replayData[nextOffsetIndex].rightSaberRotY, replayData[nextOffsetIndex].rightSaberRotZ), lerpAmount);
            self->get_transform()->set_rotation(lerpedRotation);

            rightSaberTransformCache = self->get_transform();
        }
    }

    Saber_ManualUpdate(self);
}

MAKE_HOOK_OFFSETLESS(SongUpdate, void, Il2CppObject* self) {
    
    // log("SongUpdate");

    if(!recording && !speedToggleBool) {
        replaySpeed+=rTriggerVal/500;
        replaySpeed-=lTriggerVal/500;

        if(replaySpeed < 0.01f) {
            replaySpeed = 0.01f;
        }
        
        if(!inPauseMenu) {
            float roundedReplaySpeed = (float(int(replaySpeed*100)))/100;

            // log("Rounded replay speed is "+std::to_string(roundedReplaySpeed));

            SetFieldValue(self, "_timeScale", (float(int(replaySpeed*100)))/100);
            Il2CppObject* audioSource = *GetFieldValue(self, "_audioSource");
            RunMethod(audioSource, "set_pitch", (float(int(replaySpeed*100)))/100);
        }
    }
    // log("Song Update, in song or results is "+std::to_string(inSongOrResults));
    if(!inSongOrResults && !inPauseMenu) inSongOrResults = true;

    SongUpdate(self);

    songTime = *il2cpp_utils::GetFieldValue<float>(self, "_songTime");
}

MAKE_HOOK_OFFSETLESS(SongStart, void, Il2CppObject* self, Il2CppString* gameMode, Il2CppObject* difficultyBeatmap, Il2CppObject* overrideEnvironmentSettings, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, Il2CppObject* practiceSettings, Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {

    log("Song Start "+std::to_string(inSongOrResults));

    inSong = true;
    indexNum = 0;
    replaySpeed = 1.0f;
    score = 0;

    leftSaberTransformCache = nullptr;
    rightSaberTransformCache = nullptr;
    
    if(recording) {
        dataToSave.clear();

        disappearingArrows = *RunMethod<bool>(gameplayModifiers, "get_disappearingArrows");
        ghostNotes = *RunMethod<bool>(gameplayModifiers, "get_ghostNotes");
        instafail = *RunMethod<bool>(gameplayModifiers, "get_instaFail");
        noArrows = *RunMethod<bool>(gameplayModifiers, "get_noArrows");
        noBombs = *RunMethod<bool>(gameplayModifiers, "get_noBombs");
        noFail = *RunMethod<bool>(gameplayModifiers, "get_noFail");
        leftHanded = *RunMethod<bool>(playerSpecificSettings, "get_leftHanded");

        int songSpeedLevel = *RunMethod<int>(gameplayModifiers, "get_songSpeed");
        slowerSong = false;
        fasterSong = false;
        if(songSpeedLevel == 1) {
            fasterSong = true;
        } else if(songSpeedLevel == 2) {
            slowerSong = true;
        }

        int obstacleNum = *RunMethod<int>(gameplayModifiers, "get_enabledObstacleType");
        if(obstacleNum == 2) {
            noObstacles = true;
        } else {
            noObstacles = false;
        }

        int energyNum = *RunMethod<int>(gameplayModifiers, "get_energyType");
        log(std::to_string(energyNum));
        if(energyNum == 1) {
            batteryEnergy = true;
        } else {
            batteryEnergy = false;
        }
        log(std::to_string(batteryEnergy)+" "+std::to_string(disappearingArrows)+" "+std::to_string(ghostNotes)+" "+std::to_string(instafail)+" "+std::to_string(noArrows)+" "+std::to_string(noBombs)+" "+std::to_string(noFail)+" "+std::to_string(noObstacles)+" "+std::to_string(leftHanded)+" "+std::to_string(fasterSong)+" "+std::to_string(slowerSong));
    } else {
        if(!failedReplay) {
            getReplayValues(songHash);
        }

        log(std::to_string(batteryEnergy)+" "+std::to_string(disappearingArrows)+" "+std::to_string(ghostNotes)+" "+std::to_string(instafail)+" "+std::to_string(noArrows)+" "+std::to_string(noBombs)+" "+std::to_string(noFail)+" "+std::to_string(noObstacles)+" "+std::to_string(leftHanded)+" "+std::to_string(fasterSong)+" "+std::to_string(slowerSong));
        
        SetFieldValue(gameplayModifiers, "_disappearingArrows", disappearingArrows);
        SetFieldValue(gameplayModifiers, "_ghostNotes", ghostNotes);
        SetFieldValue(gameplayModifiers, "_instaFail", instafail);
        SetFieldValue(gameplayModifiers, "_noArrows", noArrows);
        SetFieldValue(gameplayModifiers, "_noBombs", noBombs);
        SetFieldValue(gameplayModifiers, "_noFail", noFail);
        SetFieldValue(playerSpecificSettings, "_leftHanded", leftHanded);

        if(batteryEnergy) {
            SetFieldValue(gameplayModifiers, "_energyType", 1);
        } else {
            SetFieldValue(gameplayModifiers, "_energyType", 0);
        }

        if(noObstacles) {
            SetFieldValue(gameplayModifiers, "_enabledObstacleType", 2);
        } else {
            SetFieldValue(gameplayModifiers, "_enabledObstacleType", 0);
        }

        if(fasterSong) {
            SetFieldValue(gameplayModifiers, "_songSpeed", 1);
        } else if(slowerSong) {
            SetFieldValue(gameplayModifiers, "_songSpeed", 2);
        } else {
            SetFieldValue(gameplayModifiers, "_songSpeed", 0);
        }
    }

    inPauseMenu = false;

    SongStart(self, gameMode, difficultyBeatmap, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);
}

MAKE_HOOK_OFFSETLESS(ScoreChanged, void, Il2CppObject* self, int rawScore, int modifiedScore) {

    // log("Score Changed");
    
    if(!recording && maxRawScore != 0) {
        rawScore = replayData[indexNum].score;
        modifiedScore = rawScore * scoreMultiplier;
    }
 
    ScoreChanged(self, rawScore, modifiedScore);
}

MAKE_HOOK_OFFSETLESS(StandardLevelDetailView_RefreshContent, void, Il2CppObject* self) {
    
    log("Refreshing Content, in song or results is "+std::to_string(inSongOrResults));

    StandardLevelDetailView_RefreshContent(self);

    playButton = *GetFieldValue(self, "_actionButton");

    if(!inSongOrResults) {
        recording = true;
    }

    Il2CppObject* Level = CRASH_UNLESS(*GetFieldValue(self, "_level"));
    Il2CppString* LevelID = CRASH_UNLESS(*GetPropertyValue<Il2CppString*>(Level, "levelID"));

    Il2CppObject* SelectedBeatmapDifficulty = CRASH_UNLESS(*GetFieldValue(self, "_selectedDifficultyBeatmap"));
    int Difficulty = *GetPropertyValue<int>(SelectedBeatmapDifficulty, "difficulty");
    Il2CppObject* beatMapData = CRASH_UNLESS(*GetPropertyValue(SelectedBeatmapDifficulty, "beatmapData"));
    Il2CppObject* parentDifficultyBeatmapSet = CRASH_UNLESS(*GetPropertyValue(SelectedBeatmapDifficulty, "parentDifficultyBeatmapSet"));
    Il2CppObject* beatmapCharacteristic = CRASH_UNLESS(*GetPropertyValue(parentDifficultyBeatmapSet, "beatmapCharacteristic"));
    std::string modeName = to_utf8(csstrtostr(*GetFieldValue<Il2CppString*>(beatmapCharacteristic, "_compoundIdPartName")));
    log("Mode name is "+modeName);

    Il2CppObject* PlayerData = CRASH_UNLESS(*GetFieldValue(self, "_playerData"));
    Il2CppObject* playerLevelStatsData = CRASH_UNLESS(*RunMethod(PlayerData, "GetPlayerLevelStatsData", LevelID, Difficulty, beatmapCharacteristic));
    highScore = *GetPropertyValue<int>(playerLevelStatsData, "highScore");
    log("Highscore is "+std::to_string(highScore));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;

    if(cameraToggle != nullptr) {
        log("Destroying camera toggle");
        UnityEngine::GameObject::Destroy(cameraToggle->get_gameObject());
        cameraToggle = nullptr;
    }
    if(replayButton != nullptr) {
        log("Destroying replay button");
        UnityEngine::GameObject::Destroy(replayButton->get_gameObject());
        replayButton = nullptr;
    }

    if(fileexists(replayDirectory+songHash+fileExtensionName)) {
        log("Making Replay button");
        UnityEngine::Vector2 buttonsPosition = {-3.5f, -32};
        float buttonsScale = 0.8f;
        UnityEngine::Transform* playButtonTransform = *RunMethod<UnityEngine::Transform*>(playButton, "get_transform");

        UnityEngine::RectTransform* rectTransform = playButtonTransform->GetParent()->GetParent()->GetParent()->get_gameObject()->GetComponent<UnityEngine::RectTransform*>();
        // rectTransform->set_localPosition(UnityEngine::Vector3(39.5f, -10.0f, 0.0f));
        rectTransform->set_offsetMin(UnityEngine::Vector2(4.5f, -48.0f));
        rectTransform->set_offsetMax(UnityEngine::Vector2(74.5f, 28.0f));

        std::string tempString;
        if(cameraToggleString == "hmd") {
            tempString = "Normal";
        } else if(cameraToggleString == "smooth") {
            tempString = "Smooth Camera";
        } else if(cameraToggleString == "thirdPerson") {
            tempString = "Third Person";
        }
        cameraToggle = BeatSaberUI::CreateUIButton(
            playButtonTransform->GetParent()->GetParent(), 
            tempString, 
            UnityEngine::Vector2{buttonsPosition.x-13, buttonsPosition.y}, 
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, cameraToggleOnClick)
        );
        cameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        cameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 10});

        replayButton = BeatSaberUI::CreateUIButton(
            playButtonTransform->GetParent()->GetParent(), 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{buttonsPosition.x+13, buttonsPosition.y-4}, 
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, replayButtonOnClick)
        );
        replayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        replayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{30, 10});
    } else {
        log("Not making Replay button");
    }

    Il2CppObject* songNameText = *GetFieldValue(*GetFieldValue(self, "_levelBar"), "_songNameText");
    songName = to_utf8(csstrtostr(*RunMethod<Il2CppString*>(songNameText, "get_text")));
    log("Song name is "+songName);
}

MAKE_HOOK_OFFSETLESS(HandleLevelFailed, void, Il2CppObject* self) {
    
    log("HandleLevelFailed");

    if(!recording && !failedReplay) {
        return;
    }

    HandleLevelFailed(self);
}

MAKE_HOOK_OFFSETLESS(ScoreControllerLateUpdate, void, Il2CppObject* self) {

    // log("ScoreControllerLateUpdate");

    ScoreControllerLateUpdate(self);

    scoreMultiplier = *GetFieldValue<float>(self, "_gameplayModifiersScoreMultiplier");

    if(indexNum > 2 && !recording) {
        SetFieldValue(self, "_baseRawScore", replayData[indexNum].score);
        SetFieldValue(self, "_combo", replayData[indexNum].combo);
        maxRawScore = *GetFieldValue<int>(self, "_immediateMaxPossibleRawScore");
    }
    if(recording) {
        score = *GetFieldValue<int>(self, "_baseRawScore");
        combo = *GetFieldValue<int>(self, "_combo");
    }
}

MAKE_HOOK_OFFSETLESS(RefreshRank, void, Il2CppObject* self) {

    // log("RefreshRank");

    Il2CppObject* percentAndRankCounter = *GetFieldValue(self, "_relativeScoreAndImmediateRankCounter");

    if(!recording) {
        RunMethod(percentAndRankCounter, "set_immediateRank", replayData[indexNum].rank);
        RunMethod(percentAndRankCounter, "set_relativeScore", replayData[indexNum].percent);
    } else {
        percent = *RunMethod<float>(percentAndRankCounter, "get_relativeScore");
        rank = *RunMethod<int>(percentAndRankCounter, "get_immediateRank");
    }
    
    RefreshRank(self);
}

MAKE_HOOK_OFFSETLESS(Triggers, void, Il2CppObject* self, int node) {

    // log("Triggers");

    if(inSong) {
        triggerNode = node;
    }

    Triggers(self, node);
}

MAKE_HOOK_OFFSETLESS(ControllerUpdate, void, Il2CppObject* self) {

    // log("ControllerUpdate");

    if(inSong) {
        float trigger = *RunMethod<float>(self, "get_triggerValue");

        if (triggerNode == 4) {
            lTriggerVal = trigger;
        }
        if (triggerNode == 5) {
            rTriggerVal = trigger;
        }
    }

    ControllerUpdate(self);
}

MAKE_HOOK_OFFSETLESS(ProgressUpdate, void, GlobalNamespace::SongProgressUIController* self) {
    
    // log("Progress update");

    if(!recording) {
        std::string tempString = std::to_string(replaySpeed);
        tempString.erase(4, tempString.length()-1);
        std::string textToSetTo = "Watching "+songName+" at "+tempString+"x speed";
        if(speedToggle && tempString == "1.00") {
            textToSetTo = "Watching a Replay of "+songName;
        }

        if(!inSong) {
            Il2CppObject* slider = *il2cpp_utils::GetFieldValue(self, "_slider");
            UnityEngine::Transform* sliderTransform = *il2cpp_utils::RunMethod<UnityEngine::Transform*>(slider, "get_transform");

            // replayText = QuestUI::BeatSaberUI::CreateText(self->slider->get_transform(), textToSetTo, UnityEngine::Vector2{0, 0}, UnityEngine::Vector2{0, 0});
        }

        // if(replayText.gameObj == nullptr && inSong) {
        //     log("Making replayText");
        //     Il2CppObject* slider = *il2cpp_utils::GetFieldValue(self, "_slider");
        //     Il2CppObject* sliderTransform = *il2cpp_utils::RunMethod(slider, "get_transform");
        //     Il2CppObject* sliderParent = *il2cpp_utils::RunMethod(sliderTransform, "GetParent");
    
        //     replayText.text = textToSetTo;
        //     replayText.fontSize = 12.0f;
        //     replayText.parentTransform = sliderParent;
        //     replayText.sizeDelta = {-400, 100};
        //     replayText.anchoredPosition = {-400, 100};
        //     replayText.create();
        // } else {
        //     if(inSong) {
        //         replayText.set(textToSetTo);
        //     }
        // }
    }
 
    ProgressUpdate(self);
}

MAKE_HOOK_OFFSETLESS(PauseStart, void, Il2CppObject* self) {

    log("PauseStart");

    PauseStart(self);

    inPauseMenu = true;

    if(!recording) {
        log("Creating speed toggle");

        Il2CppObject* continueButton = *GetFieldValue<Button*>(self, "_continueButton");
        UnityEngine::Transform* continueButtonTransform = *RunMethod<UnityEngine::Transform*>(continueButton, "get_transform");

        speedToggle = BeatSaberUI::CreateToggle(
            continueButtonTransform->GetParent()->GetParent(),
            "Lock Speed",
            speedToggleBool,
            UnityEngine::Vector2{28.5f, -25},
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), (Il2CppObject*)nullptr, speedToggleOnClick)
        );
        UnityEngine::Vector2 sizeDeltaThing = speedToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->get_sizeDelta();
        log(std::to_string(sizeDeltaThing.x)+" "+std::to_string(sizeDeltaThing.y));
        log("test");
        speedToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{147, sizeDeltaThing.y});
    }
}

MAKE_HOOK_OFFSETLESS(PauseFinish, void, Il2CppObject* self) {

    log("PauseFinish");

    PauseFinish(self);

    inPauseMenu = false;
    
    if(!recording) {
        UnityEngine::GameObject::Destroy(speedToggle->get_gameObject());
        speedToggle = nullptr;
    }
}

MAKE_HOOK_OFFSETLESS(PauseMenuManager_MenuButtonPressed, void, Il2CppObject* self) {

    log("MenuButtonPressed");

    PauseMenuManager_MenuButtonPressed(self);

    inSongOrResults = false;
    inSong = false;
    recording = true;
    failedReplay = false;

    log("Set inSongOrResults to false 1 "+std::to_string(inSongOrResults));

}

MAKE_HOOK_OFFSETLESS(ResultsScreenEnd, void, Il2CppObject* self, bool removedFromHierarchy, bool screenSystemDisabling) {

    log("ResultsScreenEnd");

    inSongOrResults = false;

    log("Set inSongOrResults to false 0");

    ResultsScreenEnd(self, removedFromHierarchy, screenSystemDisabling);
}

MAKE_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, void, Il2CppObject* self) {

    // log("LightManager_OnWillRenderObject");

    if(inSong && !recording && !inPauseMenu) {
        Il2CppObject* mainCamera = CRASH_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Camera", "get_main"));
        
        UnityEngine::GameObject* cameraGO = *RunMethod<UnityEngine::GameObject*>(mainCamera, "get_gameObject");
        if(!cameraGO->GetComponent<Replay::CameraReplace*>()) {
            log("adding custom script");
            cameraGO->AddComponent<Replay::CameraReplace*>();
        }

        Il2CppObject* mainCameraTransform = CRASH_UNLESS(RunMethod(mainCamera, "get_transform"));

        Vector3 prevPos = *RunMethod<Vector3>(mainCameraTransform, "get_position");
        Quaternion prevRot = *RunMethod<Quaternion>(mainCameraTransform, "get_rotation");

        RunMethod(RunMethod(mainCamera, "get_gameObject"), "SetActive", false);

        if(cameraToggleString == "smooth") {
            float deltaTime = *RunMethod<float>("UnityEngine", "Time", "get_deltaTime");

            smoothCameraPosition = *RunMethod<Vector3>("UnityEngine", "Vector3", "Lerp", smoothCameraPosition, UnityEngine::Vector3{replayData[indexNum].headPosX, replayData[indexNum].headPosY, replayData[indexNum].headPosZ}, deltaTime * positionSmooth);
            smoothCameraRotation = *RunMethod<Quaternion>("UnityEngine", "Quaternion", "Slerp", smoothCameraRotation, eulerToQuaternion(Vector3{replayData[indexNum].headRotX, replayData[indexNum].headRotY, replayData[indexNum].headRotZ}), deltaTime * rotationSmooth);

            RunMethod(mainCameraTransform, "SetPositionAndRotation", addVector3(smoothCameraPosition, smoothPositionOffset), smoothCameraRotation);
        } else if(cameraToggleString == "thirdPerson") {
            if(getConfig().config["ThirdPersonCircularMovement"].GetBool()) {
                float camX = sin(songTime/5)*6;
                float camY = 2.5f;
                float camZ = cos(songTime/2.5f)*-2-2.5f;
                RunMethod(mainCameraTransform, "set_position", UnityEngine::Vector3{camX, 2.5f, camZ});
                UnityEngine::Transform* newTransform = UnityEngine::GameObject::New_ctor()->get_transform();
                newTransform->set_position(UnityEngine::Vector3{0, 1.6f, 0});

                RunMethod(mainCameraTransform, "LookAt", newTransform);
            } else {
                bool aButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::One, GlobalNamespace::OVRInput::Controller::RTouch);
                bool bButtonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::Two, GlobalNamespace::OVRInput::Controller::RTouch);

                if(aButtonValue || bButtonValue) {
                    pressedThirdPersonMoveButton = true;

                    newThirdPersonCamRot = *RunMethod<Quaternion>("UnityEngine", "Quaternion", "op_Multiply", *RunMethod<Quaternion>("UnityEngine", "Quaternion", "op_Multiply", prevRot, *RunMethod<Quaternion>("UnityEngine", "Quaternion", "Inverse", basePrevRot)), thirdPersonCamRot);
                    
                    RunMethod(mainCameraTransform, "SetPositionAndRotation", newThirdPersonCamPos, newThirdPersonCamRot);

                    if(aButtonValue) {
                        RunMethod(mainCameraTransform, "Translate", divideVector3ByFloat(subtractVector3(prevPos, basePrevPos), 1.5));
                    }

                    newThirdPersonCamPos = *RunMethod<Vector3>(mainCameraTransform, "get_position");
                } else {
                    if(pressedThirdPersonMoveButton) {
                        thirdPersonCamPos = newThirdPersonCamPos;
                        thirdPersonCamRot = newThirdPersonCamRot;
                    }
                    RunMethod(mainCameraTransform, "SetPositionAndRotation", thirdPersonCamPos, thirdPersonCamRot);
                    
                    basePrevPos = prevPos;
                    basePrevRot = prevRot;
                }
            }
        }
    }

    LightManager_OnWillRenderObject(self);
}

MAKE_HOOK_OFFSETLESS(HapticFeedbackController_Rumble, void, Il2CppObject* self, int node, Il2CppObject* hapticPreset) {

    // log("HapticFeedbackController_Rumble "+std::to_string(recording));

    if(!recording && inSong && getConfig().config["DisableVibration"].GetBool()) {
        return;
    }

    HapticFeedbackController_Rumble(self, node, hapticPreset);
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_SetDataToUI, void, Il2CppObject* self) {
    
    log("ResultsViewController_SetDataToUI");

    ResultsViewController_SetDataToUI(self);

    int levelEndState = *GetFieldValue<int>(*GetFieldValue(self, "_levelCompletionResults"), "levelEndStateType");

    if(failedReplayButton != nullptr) {
        RunMethod("UnityEngine", "Object", "Destroy", failedReplayButton->get_gameObject());
        failedReplayButton = nullptr;
    }

    if(failedCameraToggle != nullptr) {
        UnityEngine::GameObject::Destroy(failedCameraToggle->get_gameObject());
        failedCameraToggle = nullptr;
    }

    if(levelEndState == 2 && (recording || failedReplay)) {
        log("Creating failed replay buttons");

        recording = true;
        failedReplay = false;

        float buttonsScale = 0.8f;

        restartButton = *GetFieldValue(self, "_restartButton");
        UnityEngine::Transform* restartButtonTransform = *RunMethod<UnityEngine::Transform*>(restartButton, "get_transform");

        failedReplayButton = BeatSaberUI::CreateUIButton(
            restartButtonTransform->GetParent()->GetParent()->GetParent(), 
            "Replay", 
            "OkButton", 
            UnityEngine::Vector2{17.25f, -32.5f},
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, failedReplayButtonOnClick)
        );
        failedReplayButton->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedReplayButton->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});
        
        std::string tempString;
        if(cameraToggleString == "hmd") {
            tempString = "Normal";
        } else if(cameraToggleString == "smooth") {
            tempString = "Smooth Camera";
        } else if(cameraToggleString == "thirdPerson") {
            tempString = "Third Person";
        }
        failedCameraToggle = BeatSaberUI::CreateUIButton(
            restartButtonTransform->GetParent()->GetParent()->GetParent(),
            tempString, 
            UnityEngine::Vector2{-20.75f, -28.5f},
            il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), (Il2CppObject*)nullptr, failedCameraToggleOnClick)
        );
        failedCameraToggle->get_transform()->set_localScale(UnityEngine::Vector3{buttonsScale, buttonsScale, buttonsScale});
        failedCameraToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{45, 10});
    }
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_Init, void, Il2CppObject* self, GlobalNamespace::LevelCompletionResults* levelCompletionResults, Il2CppObject* difficultyBeatmap, bool practice, bool newHighScore) {
    
    log("ResultsViewController_Init");

    if(recording) {
        bs_utils::Submission::enable(modInfo);
    } else {
        bs_utils::Submission::disable(modInfo);
    }

    inSong = false;

    if(recording && levelCompletionResults->levelEndStateType == 1 && !practice) {
        if((score > highScore || !fileexists(replayDirectory+songHash+fileExtensionName)) || ((*RunMethod<bool>(levelCompletionResults, "get_fullCombo") && getConfig().config["FullComboOverwrites"].GetBool()))) {
            createReplayFile(songHash);
        } else {
            getReplayValues(songHash);
            if(score > replayData[replayData.size()-1].score) {
                createReplayFile(songHash);
            }
        }
    }

    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);
}

MAKE_HOOK_OFFSETLESS(NoteWasMissed, void, Il2CppObject* self) {

    if(!recording && hasFakeMiss()) {
        return;
    }

    NoteWasMissed(self);
}

MAKE_HOOK_OFFSETLESS(NoteWasCut, void, Il2CppObject* self, Il2CppObject* noteCutInfo) {

    bool allIsOk = *RunMethod<bool>(noteCutInfo, "get_allIsOK");

    if(!recording && !allIsOk && hasFakeMiss()) {
        return;
    }

    NoteWasCut(self, noteCutInfo);
}

MAKE_HOOK_OFFSETLESS(EditAvatarFlowCoordinator_DidActivate, void, GlobalNamespace::EditAvatarFlowCoordinator* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {

    log("EditAvatarFlowCoordinator_DidActivate");

    EditAvatarFlowCoordinator_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    if(customAvatar == nullptr) {
        log("Creating copy of avatar");
        customAvatar = UnityEngine::Object::Instantiate(UnityEngine::GameObject::Find(createcsstr("PlayerAvatar")));
        // avatarthing->get_transform()->set_position(UnityEngine::Vector3{0, 1.6f, 0});
        // avatarthing->SetActive(true);
        // customAvatar = UnityEngine::Object::Instantiate(UnityEngine::GameObject::Find(createcsstr("PlayerAvatar")));
        // customAvatar->GetComponentsFromChildren
        UnityEngine::Object::DontDestroyOnLoad(customAvatar);
        log(to_utf8(csstrtostr(customAvatar->get_name())));
    }
}

extern "C" void setup(ModInfo& info) {
    info.id = "Replay";
    info.version = "0.3.0";
    modInfo = info;
    // Create logger
    static std::unique_ptr<const Logger> ptr(new Logger(info));
    Logger::get().info("Completed setup!");
    // We can even check information specific to the modloader!
    Logger::get().info("Modloader name: %s", Modloader::getInfo().name.c_str());
    
    getConfig().Load();
    SaveConfig();
}

extern "C" void load() {

    QuestUI::Init();
    
    custom_types::Register::RegisterType<Replay::CameraReplace>();

    custom_types::Register::RegisterType<Replay::AvatarController>();

    custom_types::Register::RegisterType<Replay::UIController>();
    QuestUI::Register::RegisterModSettingsViewController<Replay::UIController*>(modInfo, "Replay");

    Logger::get().info("Installing hooks...");
    INSTALL_HOOK_OFFSETLESS(SongUpdate, il2cpp_utils::FindMethodUnsafe("", "AudioTimeSyncController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(SongStart, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 9));
    INSTALL_HOOK_OFFSETLESS(PlayerController_Update, il2cpp_utils::FindMethodUnsafe("", "PlayerTransforms", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(Saber_ManualUpdate, il2cpp_utils::FindMethodUnsafe("", "Saber", "ManualUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(ScoreChanged, il2cpp_utils::FindMethodUnsafe("", "ScoreUIController", "UpdateScore", 2));
    INSTALL_HOOK_OFFSETLESS(StandardLevelDetailView_RefreshContent, il2cpp_utils::FindMethodUnsafe("", "StandardLevelDetailView", "RefreshContent", 0));
    INSTALL_HOOK_OFFSETLESS(HandleLevelFailed, il2cpp_utils::FindMethodUnsafe("", "StandardLevelFailedController", "HandleLevelFailed", 0));
    INSTALL_HOOK_OFFSETLESS(ScoreControllerLateUpdate, il2cpp_utils::FindMethodUnsafe("", "ScoreController", "LateUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(RefreshRank, il2cpp_utils::FindMethodUnsafe("", "ImmediateRankUIPanel", "RefreshUI", 0));
    INSTALL_HOOK_OFFSETLESS(Triggers, il2cpp_utils::FindMethodUnsafe("", "VRControllersInputManager", "TriggerValue", 1));
    INSTALL_HOOK_OFFSETLESS(ControllerUpdate, il2cpp_utils::FindMethodUnsafe("", "VRController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(ProgressUpdate, il2cpp_utils::FindMethodUnsafe("", "SongProgressUIController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(PauseStart, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "ShowMenu", 0));
    INSTALL_HOOK_OFFSETLESS(PauseFinish, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "StartResumeAnimation", 0));
    INSTALL_HOOK_OFFSETLESS(PauseMenuManager_MenuButtonPressed, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "MenuButtonPressed", 0));
    INSTALL_HOOK_OFFSETLESS(ResultsScreenEnd, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "DidDeactivate", 2));
    INSTALL_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, il2cpp_utils::FindMethodUnsafe("", "LightManager", "OnWillRenderObject", 0));
    INSTALL_HOOK_OFFSETLESS(HapticFeedbackController_Rumble, il2cpp_utils::FindMethodUnsafe("", "HapticFeedbackController", "PlayHapticFeedback", 2));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_SetDataToUI, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "SetDataToUI", 0));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_Init, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "Init", 4));
    INSTALL_HOOK_OFFSETLESS(NoteWasMissed, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasMissedEvent", 0));
    INSTALL_HOOK_OFFSETLESS(NoteWasCut, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasCutEvent", 1));
    INSTALL_HOOK_OFFSETLESS(EditAvatarFlowCoordinator_DidActivate, il2cpp_utils::FindMethodUnsafe("", "EditAvatarFlowCoordinator", "DidActivate", 3));
    Logger::get().info("Installed all hooks!");
    il2cpp_functions::Init();

    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();

    smoothPositionOffset = {getConfig().config["SmoothCameraOffset"]["x"].GetFloat(), getConfig().config["SmoothCameraOffset"]["y"].GetFloat(), getConfig().config["SmoothCameraOffset"]["z"].GetFloat()};

    thirdPersonCamPos = {getConfig().config["ThirdPersonCameraPos"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat()};
    thirdPersonCamRot = *RunMethod<Quaternion>("UnityEngine", "Quaternion", "Euler", getConfig().config["ThirdPersonCameraRot"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["z"].GetFloat());

    std::string path = replayDirectory;
    mkpath(const_cast<char*>(path.c_str()));
}