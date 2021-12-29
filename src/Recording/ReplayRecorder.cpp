#include "Recording/ReplayRecorder.hpp"

using namespace rapidjson;

void Replay::ReplayRecorder::Init() {
    log("Setting up Replay Recorder");
    playerRecorder = Replay::PlayerRecorder();
    noteEventRecorder = Replay::NoteEventRecorder();
    obstacleEventRecorder = Replay::ObstacleEventRecorder();
}

void Replay::ReplayRecorder::CreateClearedSpecificMetadata(GlobalNamespace::LevelCompletionResults* results, rapidjson::Document::AllocatorType& allocator) {
    Value clearedInfo(kObjectType);

    std::vector<std::string> modifierStrings = ReplayUtils::ModifiersToStrings(results->gameplayModifiers);
    if(!modifierStrings.empty()) {
        Value modifiers(kArrayType);
        for(std::string modifierName : modifierStrings) {
            modifiers.PushBack(rapidjson::Value{}.SetString(modifierName.c_str(), modifierName.length(), allocator), allocator);
        }
        clearedInfo.AddMember("Modifiers", modifiers, allocator);
    }

    clearedInfo.AddMember("RawScore", results->rawScore, allocator);
    clearedInfo.AddMember("ModifiedScore", results->modifiedScore, allocator);
    
    metadata.AddMember("ClearedInfo", clearedInfo, allocator);
}

void Replay::ReplayRecorder::CreateFailedSpecificMetadata(GlobalNamespace::LevelCompletionResults* results, rapidjson::Document::AllocatorType& allocator) {
    Value failedInfo(kObjectType);
    failedInfo.AddMember("FailedTime", results->endSongTime, allocator);
    metadata.AddMember("FailedInfo", failedInfo, allocator);
}

void Replay::ReplayRecorder::CreateMetadata(GlobalNamespace::LevelCompletionResults* results) {
    metadata.SetObject();

    rapidjson::Document::AllocatorType& allocator = metadata.GetAllocator();

    GlobalNamespace::PlayerSpecificSettings* settings = SongUtils::playerSpecificSettings;

    Value playerOptions(kObjectType);
    playerOptions.AddMember("LeftHanded", settings->leftHanded, allocator);
    playerOptions.AddMember("AutoHeight", settings->automaticPlayerHeight, allocator);
    playerOptions.AddMember("Height", settings->playerHeight, allocator);
    metadata.AddMember("PlayerOptions", playerOptions, allocator);

    Value info(kObjectType);
    info.AddMember("AverageCutScore", noteEventRecorder.GetAverageCutScore(), allocator);
    info.AddMember("GoodCuts", results->goodCutsCount, allocator);
    info.AddMember("MissedNotes", results->badCutsCount + results->missedCount, allocator);
    info.AddMember("MaxCombo", results->maxCombo, allocator);
    metadata.AddMember("Info", info, allocator);

    if(results->levelEndStateType == LevelCompletionResults::LevelEndStateType::Cleared) {
        CreateClearedSpecificMetadata(results, allocator);
    } else if(results->levelEndStateType == LevelCompletionResults::LevelEndStateType::Failed) {
        CreateFailedSpecificMetadata(results, allocator);
    }
}

void Replay::ReplayRecorder::CheckToWriteFile() {
    log("Stopping recording");

    WriteReplayFile(ReplayUtils::GetReplayFilePath()); // TODO: Check to make sure file should be written
}

void Replay::ReplayRecorder::WriteReplayFile(std::string path) {
    log("Writing Replay file at %s", path.c_str());
    std::filesystem::create_directories(Replay::ReplayUtils::GetReplaysDirectory());

    std::ofstream output = std::ofstream(path, std::ios::binary);

    int magicBytes = replayMagicBytes;
    output.write(reinterpret_cast<const char*>(&magicBytes), sizeof(int));

    byte version = fileVersion;
    output.write(reinterpret_cast<const char*>(&version), sizeof(byte));

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    writer.SetMaxDecimalPlaces(2);
    metadata.Accept(writer);
    const char* metadataString = buffer.GetString();

    unsigned int metadataLength = (int) strlen(metadataString);
    output.write(reinterpret_cast<const char*>(&metadataLength), sizeof(unsigned int));

    output.write(metadataString, strlen(metadataString));

    playerRecorder.WriteEvents(output);

    noteEventRecorder.WriteCutEvents(output);
    noteEventRecorder.WriteMissEvents(output);

    obstacleEventRecorder.WriteEvents(output);
}