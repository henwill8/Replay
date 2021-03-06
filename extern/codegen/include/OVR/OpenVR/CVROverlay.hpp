// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: VROverlayFlags
  struct VROverlayFlags;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
  // Forward declaring type: VROverlayTransformType
  struct VROverlayTransformType;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: VROverlayInputMethod
  struct VROverlayInputMethod;
  // Forward declaring type: VROverlayIntersectionParams_t
  struct VROverlayIntersectionParams_t;
  // Forward declaring type: VROverlayIntersectionResults_t
  struct VROverlayIntersectionResults_t;
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
  // Forward declaring type: Texture_t
  struct Texture_t;
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: HmdRect2_t
  struct HmdRect2_t;
  // Forward declaring type: VROverlayIntersectionMaskPrimitive_t
  struct VROverlayIntersectionMaskPrimitive_t;
  // Forward declaring type: VRMessageOverlayResponse
  struct VRMessageOverlayResponse;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x2A0
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVROverlay
  // [] Offset: FFFFFFFF
  class CVROverlay : public ::Il2CppObject {
    public:
    // Nested type: OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked
    class _PollNextOverlayEventPacked;
    // Nested type: OVR::OpenVR::CVROverlay::PollNextOverlayEventUnion
    struct PollNextOverlayEventUnion;
    // private OVR.OpenVR.IVROverlay FnTable
    // Size: 0x290
    // Offset: 0x10
    OVR::OpenVR::IVROverlay FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVROverlay) == 0x290);
    // Creating value type constructor for type: CVROverlay
    CVROverlay(OVR::OpenVR::IVROverlay FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVROverlay
    constexpr operator OVR::OpenVR::IVROverlay() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x14274A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVROverlay* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVROverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVROverlay*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVROverlayError FindOverlay(System.String pchOverlayKey, ref System.UInt64 pOverlayHandle)
    // Offset: 0x14275B8
    OVR::OpenVR::EVROverlayError FindOverlay(::Il2CppString* pchOverlayKey, uint64_t& pOverlayHandle);
    // public OVR.OpenVR.EVROverlayError CreateOverlay(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle)
    // Offset: 0x14275D8
    OVR::OpenVR::EVROverlayError CreateOverlay(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle);
    // public OVR.OpenVR.EVROverlayError DestroyOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x14275F8
    OVR::OpenVR::EVROverlayError DestroyOverlay(uint64_t ulOverlayHandle);
    // public OVR.OpenVR.EVROverlayError SetHighQualityOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x1427614
    OVR::OpenVR::EVROverlayError SetHighQualityOverlay(uint64_t ulOverlayHandle);
    // public System.UInt64 GetHighQualityOverlay()
    // Offset: 0x1427630
    uint64_t GetHighQualityOverlay();
    // public System.UInt32 GetOverlayKey(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.EVROverlayError pError)
    // Offset: 0x142764C
    uint GetOverlayKey(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError);
    // public System.UInt32 GetOverlayName(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.EVROverlayError pError)
    // Offset: 0x1427668
    uint GetOverlayName(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError);
    // public OVR.OpenVR.EVROverlayError SetOverlayName(System.UInt64 ulOverlayHandle, System.String pchName)
    // Offset: 0x1427684
    OVR::OpenVR::EVROverlayError SetOverlayName(uint64_t ulOverlayHandle, ::Il2CppString* pchName);
    // public OVR.OpenVR.EVROverlayError GetOverlayImageData(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unBufferSize, ref System.UInt32 punWidth, ref System.UInt32 punHeight)
    // Offset: 0x14276A0
    OVR::OpenVR::EVROverlayError GetOverlayImageData(uint64_t ulOverlayHandle, System::IntPtr pvBuffer, uint unBufferSize, uint& punWidth, uint& punHeight);
    // public System.String GetOverlayErrorNameFromEnum(OVR.OpenVR.EVROverlayError error)
    // Offset: 0x14276C4
    ::Il2CppString* GetOverlayErrorNameFromEnum(OVR::OpenVR::EVROverlayError error);
    // public OVR.OpenVR.EVROverlayError SetOverlayRenderingPid(System.UInt64 ulOverlayHandle, System.UInt32 unPID)
    // Offset: 0x1427758
    OVR::OpenVR::EVROverlayError SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint unPID);
    // public System.UInt32 GetOverlayRenderingPid(System.UInt64 ulOverlayHandle)
    // Offset: 0x1427774
    uint GetOverlayRenderingPid(uint64_t ulOverlayHandle);
    // public OVR.OpenVR.EVROverlayError SetOverlayFlag(System.UInt64 ulOverlayHandle, OVR.OpenVR.VROverlayFlags eOverlayFlag, System.Boolean bEnabled)
    // Offset: 0x1427790
    OVR::OpenVR::EVROverlayError SetOverlayFlag(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled);
    // public OVR.OpenVR.EVROverlayError GetOverlayFlag(System.UInt64 ulOverlayHandle, OVR.OpenVR.VROverlayFlags eOverlayFlag, ref System.Boolean pbEnabled)
    // Offset: 0x14277B0
    OVR::OpenVR::EVROverlayError GetOverlayFlag(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool& pbEnabled);
    // public OVR.OpenVR.EVROverlayError SetOverlayColor(System.UInt64 ulOverlayHandle, System.Single fRed, System.Single fGreen, System.Single fBlue)
    // Offset: 0x14277D0
    OVR::OpenVR::EVROverlayError SetOverlayColor(uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
    // public OVR.OpenVR.EVROverlayError GetOverlayColor(System.UInt64 ulOverlayHandle, ref System.Single pfRed, ref System.Single pfGreen, ref System.Single pfBlue)
    // Offset: 0x14277EC
    OVR::OpenVR::EVROverlayError GetOverlayColor(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue);
    // public OVR.OpenVR.EVROverlayError SetOverlayAlpha(System.UInt64 ulOverlayHandle, System.Single fAlpha)
    // Offset: 0x1427814
    OVR::OpenVR::EVROverlayError SetOverlayAlpha(uint64_t ulOverlayHandle, float fAlpha);
    // public OVR.OpenVR.EVROverlayError GetOverlayAlpha(System.UInt64 ulOverlayHandle, ref System.Single pfAlpha)
    // Offset: 0x1427830
    OVR::OpenVR::EVROverlayError GetOverlayAlpha(uint64_t ulOverlayHandle, float& pfAlpha);
    // public OVR.OpenVR.EVROverlayError SetOverlayTexelAspect(System.UInt64 ulOverlayHandle, System.Single fTexelAspect)
    // Offset: 0x1427850
    OVR::OpenVR::EVROverlayError SetOverlayTexelAspect(uint64_t ulOverlayHandle, float fTexelAspect);
    // public OVR.OpenVR.EVROverlayError GetOverlayTexelAspect(System.UInt64 ulOverlayHandle, ref System.Single pfTexelAspect)
    // Offset: 0x142786C
    OVR::OpenVR::EVROverlayError GetOverlayTexelAspect(uint64_t ulOverlayHandle, float& pfTexelAspect);
    // public OVR.OpenVR.EVROverlayError SetOverlaySortOrder(System.UInt64 ulOverlayHandle, System.UInt32 unSortOrder)
    // Offset: 0x142788C
    OVR::OpenVR::EVROverlayError SetOverlaySortOrder(uint64_t ulOverlayHandle, uint unSortOrder);
    // public OVR.OpenVR.EVROverlayError GetOverlaySortOrder(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder)
    // Offset: 0x14278A8
    OVR::OpenVR::EVROverlayError GetOverlaySortOrder(uint64_t ulOverlayHandle, uint& punSortOrder);
    // public OVR.OpenVR.EVROverlayError SetOverlayWidthInMeters(System.UInt64 ulOverlayHandle, System.Single fWidthInMeters)
    // Offset: 0x14278C8
    OVR::OpenVR::EVROverlayError SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float fWidthInMeters);
    // public OVR.OpenVR.EVROverlayError GetOverlayWidthInMeters(System.UInt64 ulOverlayHandle, ref System.Single pfWidthInMeters)
    // Offset: 0x14278E4
    OVR::OpenVR::EVROverlayError GetOverlayWidthInMeters(uint64_t ulOverlayHandle, float& pfWidthInMeters);
    // public OVR.OpenVR.EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(System.UInt64 ulOverlayHandle, System.Single fMinDistanceInMeters, System.Single fMaxDistanceInMeters)
    // Offset: 0x1427904
    OVR::OpenVR::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters);
    // public OVR.OpenVR.EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters)
    // Offset: 0x1427920
    OVR::OpenVR::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters);
    // public OVR.OpenVR.EVROverlayError SetOverlayTextureColorSpace(System.UInt64 ulOverlayHandle, OVR.OpenVR.EColorSpace eTextureColorSpace)
    // Offset: 0x1427944
    OVR::OpenVR::EVROverlayError SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace eTextureColorSpace);
    // public OVR.OpenVR.EVROverlayError GetOverlayTextureColorSpace(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.EColorSpace peTextureColorSpace)
    // Offset: 0x1427960
    OVR::OpenVR::EVROverlayError GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace& peTextureColorSpace);
    // public OVR.OpenVR.EVROverlayError SetOverlayTextureBounds(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VRTextureBounds_t pOverlayTextureBounds)
    // Offset: 0x142797C
    OVR::OpenVR::EVROverlayError SetOverlayTextureBounds(uint64_t ulOverlayHandle, OVR::OpenVR::VRTextureBounds_t& pOverlayTextureBounds);
    // public OVR.OpenVR.EVROverlayError GetOverlayTextureBounds(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VRTextureBounds_t pOverlayTextureBounds)
    // Offset: 0x1427998
    OVR::OpenVR::EVROverlayError GetOverlayTextureBounds(uint64_t ulOverlayHandle, OVR::OpenVR::VRTextureBounds_t& pOverlayTextureBounds);
    // public System.UInt32 GetOverlayRenderModel(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.HmdColor_t pColor, ref OVR.OpenVR.EVROverlayError pError)
    // Offset: 0x14279B4
    uint GetOverlayRenderModel(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::HmdColor_t& pColor, OVR::OpenVR::EVROverlayError& pError);
    // public OVR.OpenVR.EVROverlayError SetOverlayRenderModel(System.UInt64 ulOverlayHandle, System.String pchRenderModel, ref OVR.OpenVR.HmdColor_t pColor)
    // Offset: 0x14279D0
    OVR::OpenVR::EVROverlayError SetOverlayRenderModel(uint64_t ulOverlayHandle, ::Il2CppString* pchRenderModel, OVR::OpenVR::HmdColor_t& pColor);
    // public OVR.OpenVR.EVROverlayError GetOverlayTransformType(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayTransformType peTransformType)
    // Offset: 0x14279EC
    OVR::OpenVR::EVROverlayError GetOverlayTransformType(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayTransformType& peTransformType);
    // public OVR.OpenVR.EVROverlayError SetOverlayTransformAbsolute(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform)
    // Offset: 0x1427A08
    OVR::OpenVR::EVROverlayError SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform);
    // public OVR.OpenVR.EVROverlayError GetOverlayTransformAbsolute(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.ETrackingUniverseOrigin peTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform)
    // Offset: 0x1427A24
    OVR::OpenVR::EVROverlayError GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin& peTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform);
    // public OVR.OpenVR.EVROverlayError SetOverlayTransformTrackedDeviceRelative(System.UInt64 ulOverlayHandle, System.UInt32 unTrackedDevice, ref OVR.OpenVR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x1427A40
    OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint unTrackedDevice, OVR::OpenVR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform);
    // public OVR.OpenVR.EVROverlayError GetOverlayTransformTrackedDeviceRelative(System.UInt64 ulOverlayHandle, ref System.UInt32 punTrackedDevice, ref OVR.OpenVR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x1427A5C
    OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint& punTrackedDevice, OVR::OpenVR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform);
    // public OVR.OpenVR.EVROverlayError SetOverlayTransformTrackedDeviceComponent(System.UInt64 ulOverlayHandle, System.UInt32 unDeviceIndex, System.String pchComponentName)
    // Offset: 0x1427A7C
    OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint unDeviceIndex, ::Il2CppString* pchComponentName);
    // public OVR.OpenVR.EVROverlayError GetOverlayTransformTrackedDeviceComponent(System.UInt64 ulOverlayHandle, ref System.UInt32 punDeviceIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameSize)
    // Offset: 0x1427A98
    OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint& punDeviceIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameSize);
    // public OVR.OpenVR.EVROverlayError GetOverlayTransformOverlayRelative(System.UInt64 ulOverlayHandle, ref System.UInt64 ulOverlayHandleParent, ref OVR.OpenVR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x1427AB8
    OVR::OpenVR::EVROverlayError GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t& ulOverlayHandleParent, OVR::OpenVR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public OVR.OpenVR.EVROverlayError SetOverlayTransformOverlayRelative(System.UInt64 ulOverlayHandle, System.UInt64 ulOverlayHandleParent, ref OVR.OpenVR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x1427AD8
    OVR::OpenVR::EVROverlayError SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, OVR::OpenVR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public OVR.OpenVR.EVROverlayError ShowOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x1427AF4
    OVR::OpenVR::EVROverlayError ShowOverlay(uint64_t ulOverlayHandle);
    // public OVR.OpenVR.EVROverlayError HideOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x1427B10
    OVR::OpenVR::EVROverlayError HideOverlay(uint64_t ulOverlayHandle);
    // public System.Boolean IsOverlayVisible(System.UInt64 ulOverlayHandle)
    // Offset: 0x1427B2C
    bool IsOverlayVisible(uint64_t ulOverlayHandle);
    // public OVR.OpenVR.EVROverlayError GetTransformForOverlayCoordinates(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdVector2_t coordinatesInOverlay, ref OVR.OpenVR.HmdMatrix34_t pmatTransform)
    // Offset: 0x1427B48
    OVR::OpenVR::EVROverlayError GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, OVR::OpenVR::HmdMatrix34_t& pmatTransform);
    // public System.Boolean PollNextOverlayEvent(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1427B64
    bool PollNextOverlayEvent(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent);
    // public OVR.OpenVR.EVROverlayError GetOverlayInputMethod(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayInputMethod peInputMethod)
    // Offset: 0x1427FA0
    OVR::OpenVR::EVROverlayError GetOverlayInputMethod(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod& peInputMethod);
    // public OVR.OpenVR.EVROverlayError SetOverlayInputMethod(System.UInt64 ulOverlayHandle, OVR.OpenVR.VROverlayInputMethod eInputMethod)
    // Offset: 0x1427FBC
    OVR::OpenVR::EVROverlayError SetOverlayInputMethod(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod eInputMethod);
    // public OVR.OpenVR.EVROverlayError GetOverlayMouseScale(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.HmdVector2_t pvecMouseScale)
    // Offset: 0x1427FD8
    OVR::OpenVR::EVROverlayError GetOverlayMouseScale(uint64_t ulOverlayHandle, OVR::OpenVR::HmdVector2_t& pvecMouseScale);
    // public OVR.OpenVR.EVROverlayError SetOverlayMouseScale(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.HmdVector2_t pvecMouseScale)
    // Offset: 0x1427FF4
    OVR::OpenVR::EVROverlayError SetOverlayMouseScale(uint64_t ulOverlayHandle, OVR::OpenVR::HmdVector2_t& pvecMouseScale);
    // public System.Boolean ComputeOverlayIntersection(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionParams_t pParams, ref OVR.OpenVR.VROverlayIntersectionResults_t pResults)
    // Offset: 0x1428010
    bool ComputeOverlayIntersection(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionParams_t& pParams, OVR::OpenVR::VROverlayIntersectionResults_t& pResults);
    // public System.Boolean IsHoverTargetOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x142802C
    bool IsHoverTargetOverlay(uint64_t ulOverlayHandle);
    // public System.UInt64 GetGamepadFocusOverlay()
    // Offset: 0x1428048
    uint64_t GetGamepadFocusOverlay();
    // public OVR.OpenVR.EVROverlayError SetGamepadFocusOverlay(System.UInt64 ulNewFocusOverlay)
    // Offset: 0x1428064
    OVR::OpenVR::EVROverlayError SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay);
    // public OVR.OpenVR.EVROverlayError SetOverlayNeighbor(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.UInt64 ulTo)
    // Offset: 0x1428080
    OVR::OpenVR::EVROverlayError SetOverlayNeighbor(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);
    // public OVR.OpenVR.EVROverlayError MoveGamepadFocusToNeighbor(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom)
    // Offset: 0x142809C
    OVR::OpenVR::EVROverlayError MoveGamepadFocusToNeighbor(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);
    // public OVR.OpenVR.EVROverlayError SetOverlayDualAnalogTransform(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius)
    // Offset: 0x14280B8
    OVR::OpenVR::EVROverlayError SetOverlayDualAnalogTransform(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius);
    // public OVR.OpenVR.EVROverlayError GetOverlayDualAnalogTransform(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, ref OVR.OpenVR.HmdVector2_t pvCenter, ref System.Single pfRadius)
    // Offset: 0x14280D4
    OVR::OpenVR::EVROverlayError GetOverlayDualAnalogTransform(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius);
    // public OVR.OpenVR.EVROverlayError SetOverlayTexture(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.Texture_t pTexture)
    // Offset: 0x14280F4
    OVR::OpenVR::EVROverlayError SetOverlayTexture(uint64_t ulOverlayHandle, OVR::OpenVR::Texture_t& pTexture);
    // public OVR.OpenVR.EVROverlayError ClearOverlayTexture(System.UInt64 ulOverlayHandle)
    // Offset: 0x1428110
    OVR::OpenVR::EVROverlayError ClearOverlayTexture(uint64_t ulOverlayHandle);
    // public OVR.OpenVR.EVROverlayError SetOverlayRaw(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unWidth, System.UInt32 unHeight, System.UInt32 unDepth)
    // Offset: 0x142812C
    OVR::OpenVR::EVROverlayError SetOverlayRaw(uint64_t ulOverlayHandle, System::IntPtr pvBuffer, uint unWidth, uint unHeight, uint unDepth);
    // public OVR.OpenVR.EVROverlayError SetOverlayFromFile(System.UInt64 ulOverlayHandle, System.String pchFilePath)
    // Offset: 0x1428148
    OVR::OpenVR::EVROverlayError SetOverlayFromFile(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath);
    // public OVR.OpenVR.EVROverlayError GetOverlayTexture(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x1428164
    OVR::OpenVR::EVROverlayError GetOverlayTexture(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds);
    // public OVR.OpenVR.EVROverlayError ReleaseNativeOverlayHandle(System.UInt64 ulOverlayHandle, System.IntPtr pNativeTextureHandle)
    // Offset: 0x1428198
    OVR::OpenVR::EVROverlayError ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, System::IntPtr pNativeTextureHandle);
    // public OVR.OpenVR.EVROverlayError GetOverlayTextureSize(System.UInt64 ulOverlayHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight)
    // Offset: 0x14281B4
    OVR::OpenVR::EVROverlayError GetOverlayTextureSize(uint64_t ulOverlayHandle, uint& pWidth, uint& pHeight);
    // public OVR.OpenVR.EVROverlayError CreateDashboardOverlay(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle)
    // Offset: 0x14281D8
    OVR::OpenVR::EVROverlayError CreateDashboardOverlay(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayFriendlyName, uint64_t& pMainHandle, uint64_t& pThumbnailHandle);
    // public System.Boolean IsDashboardVisible()
    // Offset: 0x14281FC
    bool IsDashboardVisible();
    // public System.Boolean IsActiveDashboardOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x1428218
    bool IsActiveDashboardOverlay(uint64_t ulOverlayHandle);
    // public OVR.OpenVR.EVROverlayError SetDashboardOverlaySceneProcess(System.UInt64 ulOverlayHandle, System.UInt32 unProcessId)
    // Offset: 0x1428234
    OVR::OpenVR::EVROverlayError SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint unProcessId);
    // public OVR.OpenVR.EVROverlayError GetDashboardOverlaySceneProcess(System.UInt64 ulOverlayHandle, ref System.UInt32 punProcessId)
    // Offset: 0x1428250
    OVR::OpenVR::EVROverlayError GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint& punProcessId);
    // public System.Void ShowDashboard(System.String pchOverlayToShow)
    // Offset: 0x1428270
    void ShowDashboard(::Il2CppString* pchOverlayToShow);
    // public System.UInt32 GetPrimaryDashboardDevice()
    // Offset: 0x142828C
    uint GetPrimaryDashboardDevice();
    // public OVR.OpenVR.EVROverlayError ShowKeyboard(System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x14282A8
    OVR::OpenVR::EVROverlayError ShowKeyboard(int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public OVR.OpenVR.EVROverlayError ShowKeyboardForOverlay(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x14282CC
    OVR::OpenVR::EVROverlayError ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public System.UInt32 GetKeyboardText(System.Text.StringBuilder pchText, System.UInt32 cchText)
    // Offset: 0x14282F4
    uint GetKeyboardText(System::Text::StringBuilder* pchText, uint cchText);
    // public System.Void HideKeyboard()
    // Offset: 0x1428310
    void HideKeyboard();
    // public System.Void SetKeyboardTransformAbsolute(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform)
    // Offset: 0x142832C
    void SetKeyboardTransformAbsolute(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform);
    // public System.Void SetKeyboardPositionForOverlay(System.UInt64 ulOverlayHandle, OVR.OpenVR.HmdRect2_t avoidRect)
    // Offset: 0x1428348
    void SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, OVR::OpenVR::HmdRect2_t avoidRect);
    // public OVR.OpenVR.EVROverlayError SetOverlayIntersectionMask(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize)
    // Offset: 0x1428364
    OVR::OpenVR::EVROverlayError SetOverlayIntersectionMask(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize);
    // public OVR.OpenVR.EVROverlayError GetOverlayFlags(System.UInt64 ulOverlayHandle, ref System.UInt32 pFlags)
    // Offset: 0x1428380
    OVR::OpenVR::EVROverlayError GetOverlayFlags(uint64_t ulOverlayHandle, uint& pFlags);
    // public OVR.OpenVR.VRMessageOverlayResponse ShowMessageOverlay(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text)
    // Offset: 0x14283A0
    OVR::OpenVR::VRMessageOverlayResponse ShowMessageOverlay(::Il2CppString* pchText, ::Il2CppString* pchCaption, ::Il2CppString* pchButton0Text, ::Il2CppString* pchButton1Text, ::Il2CppString* pchButton2Text, ::Il2CppString* pchButton3Text);
    // public System.Void CloseMessageOverlay()
    // Offset: 0x14283BC
    void CloseMessageOverlay();
  }; // OVR.OpenVR.CVROverlay
  #pragma pack(pop)
  static check_size<sizeof(CVROverlay), 16 + sizeof(OVR::OpenVR::IVROverlay)> __OVR_OpenVR_CVROverlaySizeCheck;
  static_assert(sizeof(CVROverlay) == 0x2A0);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVROverlay*, "OVR.OpenVR", "CVROverlay");
