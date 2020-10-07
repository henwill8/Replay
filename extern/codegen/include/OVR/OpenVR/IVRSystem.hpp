// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem
  struct IVRSystem : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize
    class _GetRecommendedRenderTargetSize;
    // Nested type: OVR::OpenVR::IVRSystem::_GetProjectionMatrix
    class _GetProjectionMatrix;
    // Nested type: OVR::OpenVR::IVRSystem::_GetProjectionRaw
    class _GetProjectionRaw;
    // Nested type: OVR::OpenVR::IVRSystem::_ComputeDistortion
    class _ComputeDistortion;
    // Nested type: OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform
    class _GetEyeToHeadTransform;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync
    class _GetTimeSinceLastVsync;
    // Nested type: OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex
    class _GetD3D9AdapterIndex;
    // Nested type: OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // Nested type: OVR::OpenVR::IVRSystem::_GetOutputDevice
    class _GetOutputDevice;
    // Nested type: OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop
    class _IsDisplayOnDesktop;
    // Nested type: OVR::OpenVR::IVRSystem::_SetDisplayVisibility
    class _SetDisplayVisibility;
    // Nested type: OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose
    class _GetDeviceToAbsoluteTrackingPose;
    // Nested type: OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose
    class _ResetSeatedZeroPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    class _GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose
    class _GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass
    class _GetSortedTrackedDeviceIndicesOfClass;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel
    class _GetTrackedDeviceActivityLevel;
    // Nested type: OVR::OpenVR::IVRSystem::_ApplyTransform
    class _ApplyTransform;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole
    class _GetTrackedDeviceIndexForControllerRole;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex
    class _GetControllerRoleForTrackedDeviceIndex;
    // Nested type: OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass
    class _GetTrackedDeviceClass;
    // Nested type: OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected
    class _IsTrackedDeviceConnected;
    // Nested type: OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty
    class _GetBoolTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty
    class _GetFloatTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty
    class _GetInt32TrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty
    class _GetUint64TrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty
    class _GetMatrix34TrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty
    class _GetArrayTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty
    class _GetStringTrackedDeviceProperty;
    // Nested type: OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum
    class _GetPropErrorNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_PollNextEvent
    class _PollNextEvent;
    // Nested type: OVR::OpenVR::IVRSystem::_PollNextEventWithPose
    class _PollNextEventWithPose;
    // Nested type: OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum
    class _GetEventTypeNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh
    class _GetHiddenAreaMesh;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerState
    class _GetControllerState;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerStateWithPose
    class _GetControllerStateWithPose;
    // Nested type: OVR::OpenVR::IVRSystem::_TriggerHapticPulse
    class _TriggerHapticPulse;
    // Nested type: OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum
    class _GetButtonIdNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum
    class _GetControllerAxisTypeNameFromEnum;
    // Nested type: OVR::OpenVR::IVRSystem::_IsInputAvailable
    class _IsInputAvailable;
    // Nested type: OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers
    class _IsSteamVRDrawingControllers;
    // Nested type: OVR::OpenVR::IVRSystem::_ShouldApplicationPause
    class _ShouldApplicationPause;
    // Nested type: OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork
    class _ShouldApplicationReduceRenderingWork;
    // Nested type: OVR::OpenVR::IVRSystem::_DriverDebugRequest
    class _DriverDebugRequest;
    // Nested type: OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate
    class _PerformFirmwareUpdate;
    // Nested type: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting
    class _AcknowledgeQuit_Exiting;
    // Nested type: OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt
    class _AcknowledgeQuit_UserPrompt;
    // OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize GetRecommendedRenderTargetSize
    // Offset: 0x0
    OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;
    // OVR.OpenVR.IVRSystem/_GetProjectionMatrix GetProjectionMatrix
    // Offset: 0x8
    OVR::OpenVR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix;
    // OVR.OpenVR.IVRSystem/_GetProjectionRaw GetProjectionRaw
    // Offset: 0x10
    OVR::OpenVR::IVRSystem::_GetProjectionRaw* GetProjectionRaw;
    // OVR.OpenVR.IVRSystem/_ComputeDistortion ComputeDistortion
    // Offset: 0x18
    OVR::OpenVR::IVRSystem::_ComputeDistortion* ComputeDistortion;
    // OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform GetEyeToHeadTransform
    // Offset: 0x20
    OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform;
    // OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync GetTimeSinceLastVsync
    // Offset: 0x28
    OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync;
    // OVR.OpenVR.IVRSystem/_GetD3D9AdapterIndex GetD3D9AdapterIndex
    // Offset: 0x30
    OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex;
    // OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo GetDXGIOutputInfo
    // Offset: 0x38
    OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // OVR.OpenVR.IVRSystem/_GetOutputDevice GetOutputDevice
    // Offset: 0x40
    OVR::OpenVR::IVRSystem::_GetOutputDevice* GetOutputDevice;
    // OVR.OpenVR.IVRSystem/_IsDisplayOnDesktop IsDisplayOnDesktop
    // Offset: 0x48
    OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop;
    // OVR.OpenVR.IVRSystem/_SetDisplayVisibility SetDisplayVisibility
    // Offset: 0x50
    OVR::OpenVR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility;
    // OVR.OpenVR.IVRSystem/_GetDeviceToAbsoluteTrackingPose GetDeviceToAbsoluteTrackingPose
    // Offset: 0x58
    OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;
    // OVR.OpenVR.IVRSystem/_ResetSeatedZeroPose ResetSeatedZeroPose
    // Offset: 0x60
    OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose;
    // OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose GetSeatedZeroPoseToStandingAbsoluteTrackingPose
    // Offset: 0x68
    OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    // OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose GetRawZeroPoseToStandingAbsoluteTrackingPose
    // Offset: 0x70
    OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;
    // OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass GetSortedTrackedDeviceIndicesOfClass
    // Offset: 0x78
    OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;
    // OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel GetTrackedDeviceActivityLevel
    // Offset: 0x80
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;
    // OVR.OpenVR.IVRSystem/_ApplyTransform ApplyTransform
    // Offset: 0x88
    OVR::OpenVR::IVRSystem::_ApplyTransform* ApplyTransform;
    // OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole GetTrackedDeviceIndexForControllerRole
    // Offset: 0x90
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;
    // OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex GetControllerRoleForTrackedDeviceIndex
    // Offset: 0x98
    OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;
    // OVR.OpenVR.IVRSystem/_GetTrackedDeviceClass GetTrackedDeviceClass
    // Offset: 0xA0
    OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass;
    // OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected IsTrackedDeviceConnected
    // Offset: 0xA8
    OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected;
    // OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty GetBoolTrackedDeviceProperty
    // Offset: 0xB0
    OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty GetFloatTrackedDeviceProperty
    // Offset: 0xB8
    OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty GetInt32TrackedDeviceProperty
    // Offset: 0xC0
    OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetUint64TrackedDeviceProperty GetUint64TrackedDeviceProperty
    // Offset: 0xC8
    OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty GetMatrix34TrackedDeviceProperty
    // Offset: 0xD0
    OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty GetArrayTrackedDeviceProperty
    // Offset: 0xD8
    OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetStringTrackedDeviceProperty GetStringTrackedDeviceProperty
    // Offset: 0xE0
    OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;
    // OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum GetPropErrorNameFromEnum
    // Offset: 0xE8
    OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;
    // OVR.OpenVR.IVRSystem/_PollNextEvent PollNextEvent
    // Offset: 0xF0
    OVR::OpenVR::IVRSystem::_PollNextEvent* PollNextEvent;
    // OVR.OpenVR.IVRSystem/_PollNextEventWithPose PollNextEventWithPose
    // Offset: 0xF8
    OVR::OpenVR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose;
    // OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum GetEventTypeNameFromEnum
    // Offset: 0x100
    OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;
    // OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh GetHiddenAreaMesh
    // Offset: 0x108
    OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh;
    // OVR.OpenVR.IVRSystem/_GetControllerState GetControllerState
    // Offset: 0x110
    OVR::OpenVR::IVRSystem::_GetControllerState* GetControllerState;
    // OVR.OpenVR.IVRSystem/_GetControllerStateWithPose GetControllerStateWithPose
    // Offset: 0x118
    OVR::OpenVR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose;
    // OVR.OpenVR.IVRSystem/_TriggerHapticPulse TriggerHapticPulse
    // Offset: 0x120
    OVR::OpenVR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse;
    // OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum GetButtonIdNameFromEnum
    // Offset: 0x128
    OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;
    // OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum GetControllerAxisTypeNameFromEnum
    // Offset: 0x130
    OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;
    // OVR.OpenVR.IVRSystem/_IsInputAvailable IsInputAvailable
    // Offset: 0x138
    OVR::OpenVR::IVRSystem::_IsInputAvailable* IsInputAvailable;
    // OVR.OpenVR.IVRSystem/_IsSteamVRDrawingControllers IsSteamVRDrawingControllers
    // Offset: 0x140
    OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers;
    // OVR.OpenVR.IVRSystem/_ShouldApplicationPause ShouldApplicationPause
    // Offset: 0x148
    OVR::OpenVR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause;
    // OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork ShouldApplicationReduceRenderingWork
    // Offset: 0x150
    OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork;
    // OVR.OpenVR.IVRSystem/_DriverDebugRequest DriverDebugRequest
    // Offset: 0x158
    OVR::OpenVR::IVRSystem::_DriverDebugRequest* DriverDebugRequest;
    // OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate PerformFirmwareUpdate
    // Offset: 0x160
    OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate;
    // OVR.OpenVR.IVRSystem/_AcknowledgeQuit_Exiting AcknowledgeQuit_Exiting
    // Offset: 0x168
    OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;
    // OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt AcknowledgeQuit_UserPrompt
    // Offset: 0x170
    OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;
    // Creating value type constructor for type: IVRSystem
    constexpr IVRSystem(OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize_ = {}, OVR::OpenVR::IVRSystem::_GetProjectionMatrix* GetProjectionMatrix_ = {}, OVR::OpenVR::IVRSystem::_GetProjectionRaw* GetProjectionRaw_ = {}, OVR::OpenVR::IVRSystem::_ComputeDistortion* ComputeDistortion_ = {}, OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform* GetEyeToHeadTransform_ = {}, OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync* GetTimeSinceLastVsync_ = {}, OVR::OpenVR::IVRSystem::_GetD3D9AdapterIndex* GetD3D9AdapterIndex_ = {}, OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}, OVR::OpenVR::IVRSystem::_GetOutputDevice* GetOutputDevice_ = {}, OVR::OpenVR::IVRSystem::_IsDisplayOnDesktop* IsDisplayOnDesktop_ = {}, OVR::OpenVR::IVRSystem::_SetDisplayVisibility* SetDisplayVisibility_ = {}, OVR::OpenVR::IVRSystem::_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose_ = {}, OVR::OpenVR::IVRSystem::_ResetSeatedZeroPose* ResetSeatedZeroPose_ = {}, OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose_ = {}, OVR::OpenVR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose_ = {}, OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass_ = {}, OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel_ = {}, OVR::OpenVR::IVRSystem::_ApplyTransform* ApplyTransform_ = {}, OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole_ = {}, OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex_ = {}, OVR::OpenVR::IVRSystem::_GetTrackedDeviceClass* GetTrackedDeviceClass_ = {}, OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected* IsTrackedDeviceConnected_ = {}, OVR::OpenVR::IVRSystem::_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty_ = {}, OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_PollNextEvent* PollNextEvent_ = {}, OVR::OpenVR::IVRSystem::_PollNextEventWithPose* PollNextEventWithPose_ = {}, OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh* GetHiddenAreaMesh_ = {}, OVR::OpenVR::IVRSystem::_GetControllerState* GetControllerState_ = {}, OVR::OpenVR::IVRSystem::_GetControllerStateWithPose* GetControllerStateWithPose_ = {}, OVR::OpenVR::IVRSystem::_TriggerHapticPulse* TriggerHapticPulse_ = {}, OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum_ = {}, OVR::OpenVR::IVRSystem::_IsInputAvailable* IsInputAvailable_ = {}, OVR::OpenVR::IVRSystem::_IsSteamVRDrawingControllers* IsSteamVRDrawingControllers_ = {}, OVR::OpenVR::IVRSystem::_ShouldApplicationPause* ShouldApplicationPause_ = {}, OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork_ = {}, OVR::OpenVR::IVRSystem::_DriverDebugRequest* DriverDebugRequest_ = {}, OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate* PerformFirmwareUpdate_ = {}, OVR::OpenVR::IVRSystem::_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting_ = {}, OVR::OpenVR::IVRSystem::_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt_ = {}) noexcept : GetRecommendedRenderTargetSize{GetRecommendedRenderTargetSize_}, GetProjectionMatrix{GetProjectionMatrix_}, GetProjectionRaw{GetProjectionRaw_}, ComputeDistortion{ComputeDistortion_}, GetEyeToHeadTransform{GetEyeToHeadTransform_}, GetTimeSinceLastVsync{GetTimeSinceLastVsync_}, GetD3D9AdapterIndex{GetD3D9AdapterIndex_}, GetDXGIOutputInfo{GetDXGIOutputInfo_}, GetOutputDevice{GetOutputDevice_}, IsDisplayOnDesktop{IsDisplayOnDesktop_}, SetDisplayVisibility{SetDisplayVisibility_}, GetDeviceToAbsoluteTrackingPose{GetDeviceToAbsoluteTrackingPose_}, ResetSeatedZeroPose{ResetSeatedZeroPose_}, GetSeatedZeroPoseToStandingAbsoluteTrackingPose{GetSeatedZeroPoseToStandingAbsoluteTrackingPose_}, GetRawZeroPoseToStandingAbsoluteTrackingPose{GetRawZeroPoseToStandingAbsoluteTrackingPose_}, GetSortedTrackedDeviceIndicesOfClass{GetSortedTrackedDeviceIndicesOfClass_}, GetTrackedDeviceActivityLevel{GetTrackedDeviceActivityLevel_}, ApplyTransform{ApplyTransform_}, GetTrackedDeviceIndexForControllerRole{GetTrackedDeviceIndexForControllerRole_}, GetControllerRoleForTrackedDeviceIndex{GetControllerRoleForTrackedDeviceIndex_}, GetTrackedDeviceClass{GetTrackedDeviceClass_}, IsTrackedDeviceConnected{IsTrackedDeviceConnected_}, GetBoolTrackedDeviceProperty{GetBoolTrackedDeviceProperty_}, GetFloatTrackedDeviceProperty{GetFloatTrackedDeviceProperty_}, GetInt32TrackedDeviceProperty{GetInt32TrackedDeviceProperty_}, GetUint64TrackedDeviceProperty{GetUint64TrackedDeviceProperty_}, GetMatrix34TrackedDeviceProperty{GetMatrix34TrackedDeviceProperty_}, GetArrayTrackedDeviceProperty{GetArrayTrackedDeviceProperty_}, GetStringTrackedDeviceProperty{GetStringTrackedDeviceProperty_}, GetPropErrorNameFromEnum{GetPropErrorNameFromEnum_}, PollNextEvent{PollNextEvent_}, PollNextEventWithPose{PollNextEventWithPose_}, GetEventTypeNameFromEnum{GetEventTypeNameFromEnum_}, GetHiddenAreaMesh{GetHiddenAreaMesh_}, GetControllerState{GetControllerState_}, GetControllerStateWithPose{GetControllerStateWithPose_}, TriggerHapticPulse{TriggerHapticPulse_}, GetButtonIdNameFromEnum{GetButtonIdNameFromEnum_}, GetControllerAxisTypeNameFromEnum{GetControllerAxisTypeNameFromEnum_}, IsInputAvailable{IsInputAvailable_}, IsSteamVRDrawingControllers{IsSteamVRDrawingControllers_}, ShouldApplicationPause{ShouldApplicationPause_}, ShouldApplicationReduceRenderingWork{ShouldApplicationReduceRenderingWork_}, DriverDebugRequest{DriverDebugRequest_}, PerformFirmwareUpdate{PerformFirmwareUpdate_}, AcknowledgeQuit_Exiting{AcknowledgeQuit_Exiting_}, AcknowledgeQuit_UserPrompt{AcknowledgeQuit_UserPrompt_} {}
  }; // OVR.OpenVR.IVRSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem, "OVR.OpenVR", "IVRSystem");
#pragma pack(pop)
