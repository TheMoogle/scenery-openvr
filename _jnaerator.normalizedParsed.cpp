
typedef char;
typedef bool;
/** OpenVR Constants */
static const unsigned int k_unMaxDriverDebugResponseSize = 32768;
static const unsigned int k_unTrackedDeviceIndex_Hmd = 0;
static const unsigned int k_unMaxTrackedDeviceCount = 16;
static const unsigned int k_unTrackedDeviceIndexOther = 4294967294;
static const unsigned int k_unTrackedDeviceIndexInvalid = 4294967295;
static const unsigned int k_unMaxPropertyStringSize = 32768;
static const unsigned int k_unControllerStateAxisCount = 5;
static const unsigned long k_ulOverlayHandleInvalid = 0;
static const unsigned int k_unScreenshotHandleInvalid = 0;
static const char* IVRSystem_Version = "IVRSystem_015";
static const char* IVRExtendedDisplay_Version = "IVRExtendedDisplay_001";
static const char* IVRTrackedCamera_Version = "IVRTrackedCamera_003";
static const unsigned int k_unMaxApplicationKeyLength = 128;
static const char* k_pch_MimeType_HomeApp = "vr/home";
static const char* k_pch_MimeType_GameTheater = "vr/game_theater";
static const char* IVRApplications_Version = "IVRApplications_006";
static const char* IVRChaperone_Version = "IVRChaperone_003";
static const char* IVRChaperoneSetup_Version = "IVRChaperoneSetup_005";
static const char* IVRCompositor_Version = "IVRCompositor_019";
static const unsigned int k_unVROverlayMaxKeyLength = 128;
static const unsigned int k_unVROverlayMaxNameLength = 128;
static const unsigned int k_unMaxOverlayCount = 64;
static const unsigned int k_unMaxOverlayIntersectionMaskPrimitivesCount = 32;
static const char* IVROverlay_Version = "IVROverlay_014";
static const char* k_pch_Controller_Component_GDC2015 = "gdc2015";
static const char* k_pch_Controller_Component_Base = "base";
static const char* k_pch_Controller_Component_Tip = "tip";
static const char* k_pch_Controller_Component_HandGrip = "handgrip";
static const char* k_pch_Controller_Component_Status = "status";
static const char* IVRRenderModels_Version = "IVRRenderModels_005";
static const unsigned int k_unNotificationTextMaxSize = 256;
static const char* IVRNotifications_Version = "IVRNotifications_002";
static const unsigned int k_unMaxSettingsKeyLength = 128;
static const char* IVRSettings_Version = "IVRSettings_002";
static const char* k_pch_SteamVR_Section = "steamvr";
static const char* k_pch_SteamVR_RequireHmd_String = "requireHmd";
static const char* k_pch_SteamVR_ForcedDriverKey_String = "forcedDriver";
static const char* k_pch_SteamVR_ForcedHmdKey_String = "forcedHmd";
static const char* k_pch_SteamVR_DisplayDebug_Bool = "displayDebug";
static const char* k_pch_SteamVR_DebugProcessPipe_String = "debugProcessPipe";
static const char* k_pch_SteamVR_EnableDistortion_Bool = "enableDistortion";
static const char* k_pch_SteamVR_DisplayDebugX_Int32 = "displayDebugX";
static const char* k_pch_SteamVR_DisplayDebugY_Int32 = "displayDebugY";
static const char* k_pch_SteamVR_SendSystemButtonToAllApps_Bool = "sendSystemButtonToAllApps";
static const char* k_pch_SteamVR_LogLevel_Int32 = "loglevel";
static const char* k_pch_SteamVR_IPD_Float = "ipd";
static const char* k_pch_SteamVR_Background_String = "background";
static const char* k_pch_SteamVR_BackgroundUseDomeProjection_Bool = "backgroundUseDomeProjection";
static const char* k_pch_SteamVR_BackgroundCameraHeight_Float = "backgroundCameraHeight";
static const char* k_pch_SteamVR_BackgroundDomeRadius_Float = "backgroundDomeRadius";
static const char* k_pch_SteamVR_GridColor_String = "gridColor";
static const char* k_pch_SteamVR_PlayAreaColor_String = "playAreaColor";
static const char* k_pch_SteamVR_ShowStage_Bool = "showStage";
static const char* k_pch_SteamVR_ActivateMultipleDrivers_Bool = "activateMultipleDrivers";
static const char* k_pch_SteamVR_DirectMode_Bool = "directMode";
static const char* k_pch_SteamVR_DirectModeEdidVid_Int32 = "directModeEdidVid";
static const char* k_pch_SteamVR_DirectModeEdidPid_Int32 = "directModeEdidPid";
static const char* k_pch_SteamVR_UsingSpeakers_Bool = "usingSpeakers";
static const char* k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float = "speakersForwardYawOffsetDegrees";
static const char* k_pch_SteamVR_BaseStationPowerManagement_Bool = "basestationPowerManagement";
static const char* k_pch_SteamVR_NeverKillProcesses_Bool = "neverKillProcesses";
static const char* k_pch_SteamVR_RenderTargetMultiplier_Float = "renderTargetMultiplier";
static const char* k_pch_SteamVR_AllowAsyncReprojection_Bool = "allowAsyncReprojection";
static const char* k_pch_SteamVR_AllowReprojection_Bool = "allowInterleavedReprojection";
static const char* k_pch_SteamVR_ForceReprojection_Bool = "forceReprojection";
static const char* k_pch_SteamVR_ForceFadeOnBadTracking_Bool = "forceFadeOnBadTracking";
static const char* k_pch_SteamVR_DefaultMirrorView_Int32 = "defaultMirrorView";
static const char* k_pch_SteamVR_ShowMirrorView_Bool = "showMirrorView";
static const char* k_pch_SteamVR_MirrorViewGeometry_String = "mirrorViewGeometry";
static const char* k_pch_SteamVR_StartMonitorFromAppLaunch = "startMonitorFromAppLaunch";
static const char* k_pch_SteamVR_StartCompositorFromAppLaunch_Bool = "startCompositorFromAppLaunch";
static const char* k_pch_SteamVR_StartDashboardFromAppLaunch_Bool = "startDashboardFromAppLaunch";
static const char* k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool = "startOverlayAppsFromDashboard";
static const char* k_pch_SteamVR_EnableHomeApp = "enableHomeApp";
static const char* k_pch_SteamVR_SetInitialDefaultHomeApp = "setInitialDefaultHomeApp";
static const char* k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 = "CycleBackgroundImageTimeSec";
static const char* k_pch_SteamVR_RetailDemo_Bool = "retailDemo";
static const char* k_pch_SteamVR_IpdOffset_Float = "ipdOffset";
static const char* k_pch_Lighthouse_Section = "driver_lighthouse";
static const char* k_pch_Lighthouse_DisableIMU_Bool = "disableimu";
static const char* k_pch_Lighthouse_UseDisambiguation_String = "usedisambiguation";
static const char* k_pch_Lighthouse_DisambiguationDebug_Int32 = "disambiguationdebug";
static const char* k_pch_Lighthouse_PrimaryBasestation_Int32 = "primarybasestation";
static const char* k_pch_Lighthouse_DBHistory_Bool = "dbhistory";
static const char* k_pch_Null_Section = "driver_null";
static const char* k_pch_Null_EnableNullDriver_Bool = "enable";
static const char* k_pch_Null_SerialNumber_String = "serialNumber";
static const char* k_pch_Null_ModelNumber_String = "modelNumber";
static const char* k_pch_Null_WindowX_Int32 = "windowX";
static const char* k_pch_Null_WindowY_Int32 = "windowY";
static const char* k_pch_Null_WindowWidth_Int32 = "windowWidth";
static const char* k_pch_Null_WindowHeight_Int32 = "windowHeight";
static const char* k_pch_Null_RenderWidth_Int32 = "renderWidth";
static const char* k_pch_Null_RenderHeight_Int32 = "renderHeight";
static const char* k_pch_Null_SecondsFromVsyncToPhotons_Float = "secondsFromVsyncToPhotons";
static const char* k_pch_Null_DisplayFrequency_Float = "displayFrequency";
static const char* k_pch_UserInterface_Section = "userinterface";
static const char* k_pch_UserInterface_StatusAlwaysOnTop_Bool = "StatusAlwaysOnTop";
static const char* k_pch_UserInterface_MinimizeToTray_Bool = "MinimizeToTray";
static const char* k_pch_UserInterface_Screenshots_Bool = "screenshots";
static const char* k_pch_UserInterface_ScreenshotType_Int = "screenshotType";
static const char* k_pch_Notifications_Section = "notifications";
static const char* k_pch_Notifications_DoNotDisturb_Bool = "DoNotDisturb";
static const char* k_pch_Keyboard_Section = "keyboard";
static const char* k_pch_Keyboard_TutorialCompletions = "TutorialCompletions";
static const char* k_pch_Keyboard_ScaleX = "ScaleX";
static const char* k_pch_Keyboard_ScaleY = "ScaleY";
static const char* k_pch_Keyboard_OffsetLeftX = "OffsetLeftX";
static const char* k_pch_Keyboard_OffsetRightX = "OffsetRightX";
static const char* k_pch_Keyboard_OffsetY = "OffsetY";
static const char* k_pch_Keyboard_Smoothing = "Smoothing";
static const char* k_pch_Perf_Section = "perfcheck";
static const char* k_pch_Perf_HeuristicActive_Bool = "heuristicActive";
static const char* k_pch_Perf_NotifyInHMD_Bool = "warnInHMD";
static const char* k_pch_Perf_NotifyOnlyOnce_Bool = "warnOnlyOnce";
static const char* k_pch_Perf_AllowTimingStore_Bool = "allowTimingStore";
static const char* k_pch_Perf_SaveTimingsOnExit_Bool = "saveTimingsOnExit";
static const char* k_pch_Perf_TestData_Float = "perfTestData";
static const char* k_pch_CollisionBounds_Section = "collisionBounds";
static const char* k_pch_CollisionBounds_Style_Int32 = "CollisionBoundsStyle";
static const char* k_pch_CollisionBounds_GroundPerimeterOn_Bool = "CollisionBoundsGroundPerimeterOn";
static const char* k_pch_CollisionBounds_CenterMarkerOn_Bool = "CollisionBoundsCenterMarkerOn";
static const char* k_pch_CollisionBounds_PlaySpaceOn_Bool = "CollisionBoundsPlaySpaceOn";
static const char* k_pch_CollisionBounds_FadeDistance_Float = "CollisionBoundsFadeDistance";
static const char* k_pch_CollisionBounds_ColorGammaR_Int32 = "CollisionBoundsColorGammaR";
static const char* k_pch_CollisionBounds_ColorGammaG_Int32 = "CollisionBoundsColorGammaG";
static const char* k_pch_CollisionBounds_ColorGammaB_Int32 = "CollisionBoundsColorGammaB";
static const char* k_pch_CollisionBounds_ColorGammaA_Int32 = "CollisionBoundsColorGammaA";
static const char* k_pch_Camera_Section = "camera";
static const char* k_pch_Camera_EnableCamera_Bool = "enableCamera";
static const char* k_pch_Camera_EnableCameraInDashboard_Bool = "enableCameraInDashboard";
static const char* k_pch_Camera_EnableCameraForCollisionBounds_Bool = "enableCameraForCollisionBounds";
static const char* k_pch_Camera_EnableCameraForRoomView_Bool = "enableCameraForRoomView";
static const char* k_pch_Camera_BoundsColorGammaR_Int32 = "cameraBoundsColorGammaR";
static const char* k_pch_Camera_BoundsColorGammaG_Int32 = "cameraBoundsColorGammaG";
static const char* k_pch_Camera_BoundsColorGammaB_Int32 = "cameraBoundsColorGammaB";
static const char* k_pch_Camera_BoundsColorGammaA_Int32 = "cameraBoundsColorGammaA";
static const char* k_pch_Camera_BoundsStrength_Int32 = "cameraBoundsStrength";
static const char* k_pch_audio_Section = "audio";
static const char* k_pch_audio_OnPlaybackDevice_String = "onPlaybackDevice";
static const char* k_pch_audio_OnRecordDevice_String = "onRecordDevice";
static const char* k_pch_audio_OnPlaybackMirrorDevice_String = "onPlaybackMirrorDevice";
static const char* k_pch_audio_OffPlaybackDevice_String = "offPlaybackDevice";
static const char* k_pch_audio_OffRecordDevice_String = "offRecordDevice";
static const char* k_pch_audio_VIVEHDMIGain = "viveHDMIGain";
static const char* k_pch_Power_Section = "power";
static const char* k_pch_Power_PowerOffOnExit_Bool = "powerOffOnExit";
static const char* k_pch_Power_TurnOffScreensTimeout_Float = "turnOffScreensTimeout";
static const char* k_pch_Power_TurnOffControllersTimeout_Float = "turnOffControllersTimeout";
static const char* k_pch_Power_ReturnToWatchdogTimeout_Float = "returnToWatchdogTimeout";
static const char* k_pch_Power_AutoLaunchSteamVROnButtonPress = "autoLaunchSteamVROnButtonPress";
static const char* k_pch_Dashboard_Section = "dashboard";
static const char* k_pch_Dashboard_EnableDashboard_Bool = "enableDashboard";
static const char* k_pch_Dashboard_ArcadeMode_Bool = "arcadeMode";
static const char* k_pch_modelskin_Section = "modelskins";
static const char* IVRScreenshots_Version = "IVRScreenshots_001";
static const char* IVRResources_Version = "IVRResources_001";
/** OpenVR Enums */
typedef enum EVREye {
	EVREye_Eye_Left = 0,
	EVREye_Eye_Right = 1
} EVREye;
typedef enum ETextureType {
	ETextureType_TextureType_DirectX = 0,
	ETextureType_TextureType_OpenGL = 1,
	ETextureType_TextureType_Vulkan = 2
} ETextureType;
typedef enum EColorSpace {
	EColorSpace_ColorSpace_Auto = 0,
	EColorSpace_ColorSpace_Gamma = 1,
	EColorSpace_ColorSpace_Linear = 2
} EColorSpace;
typedef enum ETrackingResult {
	ETrackingResult_TrackingResult_Uninitialized = 1,
	ETrackingResult_TrackingResult_Calibrating_InProgress = 100,
	ETrackingResult_TrackingResult_Calibrating_OutOfRange = 101,
	ETrackingResult_TrackingResult_Running_OK = 200,
	ETrackingResult_TrackingResult_Running_OutOfRange = 201
} ETrackingResult;
typedef enum ETrackedDeviceClass {
	ETrackedDeviceClass_TrackedDeviceClass_Invalid = 0,
	ETrackedDeviceClass_TrackedDeviceClass_HMD = 1,
	ETrackedDeviceClass_TrackedDeviceClass_Controller = 2,
	ETrackedDeviceClass_TrackedDeviceClass_GenericTracker = 3,
	ETrackedDeviceClass_TrackedDeviceClass_TrackingReference = 4
} ETrackedDeviceClass;
typedef enum ETrackedControllerRole {
	ETrackedControllerRole_TrackedControllerRole_Invalid = 0,
	ETrackedControllerRole_TrackedControllerRole_LeftHand = 1,
	ETrackedControllerRole_TrackedControllerRole_RightHand = 2
} ETrackedControllerRole;
typedef enum ETrackingUniverseOrigin {
	ETrackingUniverseOrigin_TrackingUniverseSeated = 0,
	ETrackingUniverseOrigin_TrackingUniverseStanding = 1,
	ETrackingUniverseOrigin_TrackingUniverseRawAndUncalibrated = 2
} ETrackingUniverseOrigin;
typedef enum ETrackedDeviceProperty {
	ETrackedDeviceProperty_Prop_Invalid = 0,
	ETrackedDeviceProperty_Prop_TrackingSystemName_String = 1000,
	ETrackedDeviceProperty_Prop_ModelNumber_String = 1001,
	ETrackedDeviceProperty_Prop_SerialNumber_String = 1002,
	ETrackedDeviceProperty_Prop_RenderModelName_String = 1003,
	ETrackedDeviceProperty_Prop_WillDriftInYaw_Bool = 1004,
	ETrackedDeviceProperty_Prop_ManufacturerName_String = 1005,
	ETrackedDeviceProperty_Prop_TrackingFirmwareVersion_String = 1006,
	ETrackedDeviceProperty_Prop_HardwareRevision_String = 1007,
	ETrackedDeviceProperty_Prop_AllWirelessDongleDescriptions_String = 1008,
	ETrackedDeviceProperty_Prop_ConnectedWirelessDongle_String = 1009,
	ETrackedDeviceProperty_Prop_DeviceIsWireless_Bool = 1010,
	ETrackedDeviceProperty_Prop_DeviceIsCharging_Bool = 1011,
	ETrackedDeviceProperty_Prop_DeviceBatteryPercentage_Float = 1012,
	ETrackedDeviceProperty_Prop_StatusDisplayTransform_Matrix34 = 1013,
	ETrackedDeviceProperty_Prop_Firmware_UpdateAvailable_Bool = 1014,
	ETrackedDeviceProperty_Prop_Firmware_ManualUpdate_Bool = 1015,
	ETrackedDeviceProperty_Prop_Firmware_ManualUpdateURL_String = 1016,
	ETrackedDeviceProperty_Prop_HardwareRevision_Uint64 = 1017,
	ETrackedDeviceProperty_Prop_FirmwareVersion_Uint64 = 1018,
	ETrackedDeviceProperty_Prop_FPGAVersion_Uint64 = 1019,
	ETrackedDeviceProperty_Prop_VRCVersion_Uint64 = 1020,
	ETrackedDeviceProperty_Prop_RadioVersion_Uint64 = 1021,
	ETrackedDeviceProperty_Prop_DongleVersion_Uint64 = 1022,
	ETrackedDeviceProperty_Prop_BlockServerShutdown_Bool = 1023,
	ETrackedDeviceProperty_Prop_CanUnifyCoordinateSystemWithHmd_Bool = 1024,
	ETrackedDeviceProperty_Prop_ContainsProximitySensor_Bool = 1025,
	ETrackedDeviceProperty_Prop_DeviceProvidesBatteryStatus_Bool = 1026,
	ETrackedDeviceProperty_Prop_DeviceCanPowerOff_Bool = 1027,
	ETrackedDeviceProperty_Prop_Firmware_ProgrammingTarget_String = 1028,
	ETrackedDeviceProperty_Prop_DeviceClass_Int32 = 1029,
	ETrackedDeviceProperty_Prop_HasCamera_Bool = 1030,
	ETrackedDeviceProperty_Prop_DriverVersion_String = 1031,
	ETrackedDeviceProperty_Prop_Firmware_ForceUpdateRequired_Bool = 1032,
	ETrackedDeviceProperty_Prop_ViveSystemButtonFixRequired_Bool = 1033,
	ETrackedDeviceProperty_Prop_ReportsTimeSinceVSync_Bool = 2000,
	ETrackedDeviceProperty_Prop_SecondsFromVsyncToPhotons_Float = 2001,
	ETrackedDeviceProperty_Prop_DisplayFrequency_Float = 2002,
	ETrackedDeviceProperty_Prop_UserIpdMeters_Float = 2003,
	ETrackedDeviceProperty_Prop_CurrentUniverseId_Uint64 = 2004,
	ETrackedDeviceProperty_Prop_PreviousUniverseId_Uint64 = 2005,
	ETrackedDeviceProperty_Prop_DisplayFirmwareVersion_Uint64 = 2006,
	ETrackedDeviceProperty_Prop_IsOnDesktop_Bool = 2007,
	ETrackedDeviceProperty_Prop_DisplayMCType_Int32 = 2008,
	ETrackedDeviceProperty_Prop_DisplayMCOffset_Float = 2009,
	ETrackedDeviceProperty_Prop_DisplayMCScale_Float = 2010,
	ETrackedDeviceProperty_Prop_EdidVendorID_Int32 = 2011,
	ETrackedDeviceProperty_Prop_DisplayMCImageLeft_String = 2012,
	ETrackedDeviceProperty_Prop_DisplayMCImageRight_String = 2013,
	ETrackedDeviceProperty_Prop_DisplayGCBlackClamp_Float = 2014,
	ETrackedDeviceProperty_Prop_EdidProductID_Int32 = 2015,
	ETrackedDeviceProperty_Prop_CameraToHeadTransform_Matrix34 = 2016,
	ETrackedDeviceProperty_Prop_DisplayGCType_Int32 = 2017,
	ETrackedDeviceProperty_Prop_DisplayGCOffset_Float = 2018,
	ETrackedDeviceProperty_Prop_DisplayGCScale_Float = 2019,
	ETrackedDeviceProperty_Prop_DisplayGCPrescale_Float = 2020,
	ETrackedDeviceProperty_Prop_DisplayGCImage_String = 2021,
	ETrackedDeviceProperty_Prop_LensCenterLeftU_Float = 2022,
	ETrackedDeviceProperty_Prop_LensCenterLeftV_Float = 2023,
	ETrackedDeviceProperty_Prop_LensCenterRightU_Float = 2024,
	ETrackedDeviceProperty_Prop_LensCenterRightV_Float = 2025,
	ETrackedDeviceProperty_Prop_UserHeadToEyeDepthMeters_Float = 2026,
	ETrackedDeviceProperty_Prop_CameraFirmwareVersion_Uint64 = 2027,
	ETrackedDeviceProperty_Prop_CameraFirmwareDescription_String = 2028,
	ETrackedDeviceProperty_Prop_DisplayFPGAVersion_Uint64 = 2029,
	ETrackedDeviceProperty_Prop_DisplayBootloaderVersion_Uint64 = 2030,
	ETrackedDeviceProperty_Prop_DisplayHardwareVersion_Uint64 = 2031,
	ETrackedDeviceProperty_Prop_AudioFirmwareVersion_Uint64 = 2032,
	ETrackedDeviceProperty_Prop_CameraCompatibilityMode_Int32 = 2033,
	ETrackedDeviceProperty_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 2034,
	ETrackedDeviceProperty_Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 2035,
	ETrackedDeviceProperty_Prop_DisplaySuppressed_Bool = 2036,
	ETrackedDeviceProperty_Prop_DisplayAllowNightMode_Bool = 2037,
	ETrackedDeviceProperty_Prop_AttachedDeviceId_String = 3000,
	ETrackedDeviceProperty_Prop_SupportedButtons_Uint64 = 3001,
	ETrackedDeviceProperty_Prop_Axis0Type_Int32 = 3002,
	ETrackedDeviceProperty_Prop_Axis1Type_Int32 = 3003,
	ETrackedDeviceProperty_Prop_Axis2Type_Int32 = 3004,
	ETrackedDeviceProperty_Prop_Axis3Type_Int32 = 3005,
	ETrackedDeviceProperty_Prop_Axis4Type_Int32 = 3006,
	ETrackedDeviceProperty_Prop_ControllerRoleHint_Int32 = 3007,
	ETrackedDeviceProperty_Prop_FieldOfViewLeftDegrees_Float = 4000,
	ETrackedDeviceProperty_Prop_FieldOfViewRightDegrees_Float = 4001,
	ETrackedDeviceProperty_Prop_FieldOfViewTopDegrees_Float = 4002,
	ETrackedDeviceProperty_Prop_FieldOfViewBottomDegrees_Float = 4003,
	ETrackedDeviceProperty_Prop_TrackingRangeMinimumMeters_Float = 4004,
	ETrackedDeviceProperty_Prop_TrackingRangeMaximumMeters_Float = 4005,
	ETrackedDeviceProperty_Prop_ModeLabel_String = 4006,
	ETrackedDeviceProperty_Prop_IconPathName_String = 5000,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceOff_String = 5001,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceSearching_String = 5002,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceSearchingAlert_String = 5003,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceReady_String = 5004,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceReadyAlert_String = 5005,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceNotReady_String = 5006,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceStandby_String = 5007,
	ETrackedDeviceProperty_Prop_NamedIconPathDeviceAlertLow_String = 5008,
	ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_Start = 10000,
	ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_End = 10999
} ETrackedDeviceProperty;
typedef enum ETrackedPropertyError {
	ETrackedPropertyError_TrackedProp_Success = 0,
	ETrackedPropertyError_TrackedProp_WrongDataType = 1,
	ETrackedPropertyError_TrackedProp_WrongDeviceClass = 2,
	ETrackedPropertyError_TrackedProp_BufferTooSmall = 3,
	ETrackedPropertyError_TrackedProp_UnknownProperty = 4,
	ETrackedPropertyError_TrackedProp_InvalidDevice = 5,
	ETrackedPropertyError_TrackedProp_CouldNotContactServer = 6,
	ETrackedPropertyError_TrackedProp_ValueNotProvidedByDevice = 7,
	ETrackedPropertyError_TrackedProp_StringExceedsMaximumLength = 8,
	ETrackedPropertyError_TrackedProp_NotYetAvailable = 9,
	ETrackedPropertyError_TrackedProp_PermissionDenied = 10
} ETrackedPropertyError;
typedef enum EVRSubmitFlags {
	EVRSubmitFlags_Submit_Default = 0,
	EVRSubmitFlags_Submit_LensDistortionAlreadyApplied = 1,
	EVRSubmitFlags_Submit_GlRenderBuffer = 2,
	EVRSubmitFlags_Submit_Reserved = 4
} EVRSubmitFlags;
typedef enum EVRState {
	EVRState_VRState_Undefined = -1,
	EVRState_VRState_Off = 0,
	EVRState_VRState_Searching = 1,
	EVRState_VRState_Searching_Alert = 2,
	EVRState_VRState_Ready = 3,
	EVRState_VRState_Ready_Alert = 4,
	EVRState_VRState_NotReady = 5,
	EVRState_VRState_Standby = 6,
	EVRState_VRState_Ready_Alert_Low = 7
} EVRState;
typedef enum EVREventType {
	EVREventType_VREvent_None = 0,
	EVREventType_VREvent_TrackedDeviceActivated = 100,
	EVREventType_VREvent_TrackedDeviceDeactivated = 101,
	EVREventType_VREvent_TrackedDeviceUpdated = 102,
	EVREventType_VREvent_TrackedDeviceUserInteractionStarted = 103,
	EVREventType_VREvent_TrackedDeviceUserInteractionEnded = 104,
	EVREventType_VREvent_IpdChanged = 105,
	EVREventType_VREvent_EnterStandbyMode = 106,
	EVREventType_VREvent_LeaveStandbyMode = 107,
	EVREventType_VREvent_TrackedDeviceRoleChanged = 108,
	EVREventType_VREvent_WatchdogWakeUpRequested = 109,
	EVREventType_VREvent_LensDistortionChanged = 110,
	EVREventType_VREvent_ButtonPress = 200,
	EVREventType_VREvent_ButtonUnpress = 201,
	EVREventType_VREvent_ButtonTouch = 202,
	EVREventType_VREvent_ButtonUntouch = 203,
	EVREventType_VREvent_MouseMove = 300,
	EVREventType_VREvent_MouseButtonDown = 301,
	EVREventType_VREvent_MouseButtonUp = 302,
	EVREventType_VREvent_FocusEnter = 303,
	EVREventType_VREvent_FocusLeave = 304,
	EVREventType_VREvent_Scroll = 305,
	EVREventType_VREvent_TouchPadMove = 306,
	EVREventType_VREvent_OverlayFocusChanged = 307,
	EVREventType_VREvent_InputFocusCaptured = 400,
	EVREventType_VREvent_InputFocusReleased = 401,
	EVREventType_VREvent_SceneFocusLost = 402,
	EVREventType_VREvent_SceneFocusGained = 403,
	EVREventType_VREvent_SceneApplicationChanged = 404,
	EVREventType_VREvent_SceneFocusChanged = 405,
	EVREventType_VREvent_InputFocusChanged = 406,
	EVREventType_VREvent_SceneApplicationSecondaryRenderingStarted = 407,
	EVREventType_VREvent_HideRenderModels = 410,
	EVREventType_VREvent_ShowRenderModels = 411,
	EVREventType_VREvent_OverlayShown = 500,
	EVREventType_VREvent_OverlayHidden = 501,
	EVREventType_VREvent_DashboardActivated = 502,
	EVREventType_VREvent_DashboardDeactivated = 503,
	EVREventType_VREvent_DashboardThumbSelected = 504,
	EVREventType_VREvent_DashboardRequested = 505,
	EVREventType_VREvent_ResetDashboard = 506,
	EVREventType_VREvent_RenderToast = 507,
	EVREventType_VREvent_ImageLoaded = 508,
	EVREventType_VREvent_ShowKeyboard = 509,
	EVREventType_VREvent_HideKeyboard = 510,
	EVREventType_VREvent_OverlayGamepadFocusGained = 511,
	EVREventType_VREvent_OverlayGamepadFocusLost = 512,
	EVREventType_VREvent_OverlaySharedTextureChanged = 513,
	EVREventType_VREvent_DashboardGuideButtonDown = 514,
	EVREventType_VREvent_DashboardGuideButtonUp = 515,
	EVREventType_VREvent_ScreenshotTriggered = 516,
	EVREventType_VREvent_ImageFailed = 517,
	EVREventType_VREvent_DashboardOverlayCreated = 518,
	EVREventType_VREvent_RequestScreenshot = 520,
	EVREventType_VREvent_ScreenshotTaken = 521,
	EVREventType_VREvent_ScreenshotFailed = 522,
	EVREventType_VREvent_SubmitScreenshotToDashboard = 523,
	EVREventType_VREvent_ScreenshotProgressToDashboard = 524,
	EVREventType_VREvent_Notification_Shown = 600,
	EVREventType_VREvent_Notification_Hidden = 601,
	EVREventType_VREvent_Notification_BeginInteraction = 602,
	EVREventType_VREvent_Notification_Destroyed = 603,
	EVREventType_VREvent_Quit = 700,
	EVREventType_VREvent_ProcessQuit = 701,
	EVREventType_VREvent_QuitAborted_UserPrompt = 702,
	EVREventType_VREvent_QuitAcknowledged = 703,
	EVREventType_VREvent_DriverRequestedQuit = 704,
	EVREventType_VREvent_ChaperoneDataHasChanged = 800,
	EVREventType_VREvent_ChaperoneUniverseHasChanged = 801,
	EVREventType_VREvent_ChaperoneTempDataHasChanged = 802,
	EVREventType_VREvent_ChaperoneSettingsHaveChanged = 803,
	EVREventType_VREvent_SeatedZeroPoseReset = 804,
	EVREventType_VREvent_AudioSettingsHaveChanged = 820,
	EVREventType_VREvent_BackgroundSettingHasChanged = 850,
	EVREventType_VREvent_CameraSettingsHaveChanged = 851,
	EVREventType_VREvent_ReprojectionSettingHasChanged = 852,
	EVREventType_VREvent_ModelSkinSettingsHaveChanged = 853,
	EVREventType_VREvent_EnvironmentSettingsHaveChanged = 854,
	EVREventType_VREvent_PowerSettingsHaveChanged = 855,
	EVREventType_VREvent_StatusUpdate = 900,
	EVREventType_VREvent_MCImageUpdated = 1000,
	EVREventType_VREvent_FirmwareUpdateStarted = 1100,
	EVREventType_VREvent_FirmwareUpdateFinished = 1101,
	EVREventType_VREvent_KeyboardClosed = 1200,
	EVREventType_VREvent_KeyboardCharInput = 1201,
	EVREventType_VREvent_KeyboardDone = 1202,
	EVREventType_VREvent_ApplicationTransitionStarted = 1300,
	EVREventType_VREvent_ApplicationTransitionAborted = 1301,
	EVREventType_VREvent_ApplicationTransitionNewAppStarted = 1302,
	EVREventType_VREvent_ApplicationListUpdated = 1303,
	EVREventType_VREvent_ApplicationMimeTypeLoad = 1304,
	EVREventType_VREvent_Compositor_MirrorWindowShown = 1400,
	EVREventType_VREvent_Compositor_MirrorWindowHidden = 1401,
	EVREventType_VREvent_Compositor_ChaperoneBoundsShown = 1410,
	EVREventType_VREvent_Compositor_ChaperoneBoundsHidden = 1411,
	EVREventType_VREvent_TrackedCamera_StartVideoStream = 1500,
	EVREventType_VREvent_TrackedCamera_StopVideoStream = 1501,
	EVREventType_VREvent_TrackedCamera_PauseVideoStream = 1502,
	EVREventType_VREvent_TrackedCamera_ResumeVideoStream = 1503,
	EVREventType_VREvent_TrackedCamera_EditingSurface = 1550,
	EVREventType_VREvent_PerformanceTest_EnableCapture = 1600,
	EVREventType_VREvent_PerformanceTest_DisableCapture = 1601,
	EVREventType_VREvent_PerformanceTest_FidelityLevel = 1602,
	EVREventType_VREvent_MessageOverlay_Closed = 1650,
	EVREventType_VREvent_VendorSpecific_Reserved_Start = 10000,
	EVREventType_VREvent_VendorSpecific_Reserved_End = 19999
} EVREventType;
typedef enum EDeviceActivityLevel {
	EDeviceActivityLevel_k_EDeviceActivityLevel_Unknown = -1,
	EDeviceActivityLevel_k_EDeviceActivityLevel_Idle = 0,
	EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction = 1,
	EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction_Timeout = 2,
	EDeviceActivityLevel_k_EDeviceActivityLevel_Standby = 3
} EDeviceActivityLevel;
typedef enum EVRButtonId {
	EVRButtonId_k_EButton_System = 0,
	EVRButtonId_k_EButton_ApplicationMenu = 1,
	EVRButtonId_k_EButton_Grip = 2,
	EVRButtonId_k_EButton_DPad_Left = 3,
	EVRButtonId_k_EButton_DPad_Up = 4,
	EVRButtonId_k_EButton_DPad_Right = 5,
	EVRButtonId_k_EButton_DPad_Down = 6,
	EVRButtonId_k_EButton_A = 7,
	EVRButtonId_k_EButton_ProximitySensor = 31,
	EVRButtonId_k_EButton_Axis0 = 32,
	EVRButtonId_k_EButton_Axis1 = 33,
	EVRButtonId_k_EButton_Axis2 = 34,
	EVRButtonId_k_EButton_Axis3 = 35,
	EVRButtonId_k_EButton_Axis4 = 36,
	EVRButtonId_k_EButton_SteamVR_Touchpad = 32,
	EVRButtonId_k_EButton_SteamVR_Trigger = 33,
	EVRButtonId_k_EButton_Dashboard_Back = 2,
	EVRButtonId_k_EButton_Max = 64
} EVRButtonId;
typedef enum EVRMouseButton {
	EVRMouseButton_VRMouseButton_Left = 1,
	EVRMouseButton_VRMouseButton_Right = 2,
	EVRMouseButton_VRMouseButton_Middle = 4
} EVRMouseButton;
typedef enum EHiddenAreaMeshType {
	EHiddenAreaMeshType_k_eHiddenAreaMesh_Standard = 0,
	EHiddenAreaMeshType_k_eHiddenAreaMesh_Inverse = 1,
	EHiddenAreaMeshType_k_eHiddenAreaMesh_LineLoop = 2
} EHiddenAreaMeshType;
typedef enum EVRControllerAxisType {
	EVRControllerAxisType_k_eControllerAxis_None = 0,
	EVRControllerAxisType_k_eControllerAxis_TrackPad = 1,
	EVRControllerAxisType_k_eControllerAxis_Joystick = 2,
	EVRControllerAxisType_k_eControllerAxis_Trigger = 3
} EVRControllerAxisType;
typedef enum EVRControllerEventOutputType {
	EVRControllerEventOutputType_ControllerEventOutput_OSEvents = 0,
	EVRControllerEventOutputType_ControllerEventOutput_VREvents = 1
} EVRControllerEventOutputType;
typedef enum ECollisionBoundsStyle {
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_BEGINNER = 0,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_SQUARES = 2,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_ADVANCED = 3,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_NONE = 4,
	ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_COUNT = 5
} ECollisionBoundsStyle;
typedef enum EVROverlayError {
	EVROverlayError_VROverlayError_None = 0,
	EVROverlayError_VROverlayError_UnknownOverlay = 10,
	EVROverlayError_VROverlayError_InvalidHandle = 11,
	EVROverlayError_VROverlayError_PermissionDenied = 12,
	EVROverlayError_VROverlayError_OverlayLimitExceeded = 13,
	EVROverlayError_VROverlayError_WrongVisibilityType = 14,
	EVROverlayError_VROverlayError_KeyTooLong = 15,
	EVROverlayError_VROverlayError_NameTooLong = 16,
	EVROverlayError_VROverlayError_KeyInUse = 17,
	EVROverlayError_VROverlayError_WrongTransformType = 18,
	EVROverlayError_VROverlayError_InvalidTrackedDevice = 19,
	EVROverlayError_VROverlayError_InvalidParameter = 20,
	EVROverlayError_VROverlayError_ThumbnailCantBeDestroyed = 21,
	EVROverlayError_VROverlayError_ArrayTooSmall = 22,
	EVROverlayError_VROverlayError_RequestFailed = 23,
	EVROverlayError_VROverlayError_InvalidTexture = 24,
	EVROverlayError_VROverlayError_UnableToLoadFile = 25,
	EVROverlayError_VROverlayError_KeyboardAlreadyInUse = 26,
	EVROverlayError_VROverlayError_NoNeighbor = 27,
	EVROverlayError_VROverlayError_TooManyMaskPrimitives = 29,
	EVROverlayError_VROverlayError_BadMaskPrimitive = 30
} EVROverlayError;
typedef enum EVRApplicationType {
	EVRApplicationType_VRApplication_Other = 0,
	EVRApplicationType_VRApplication_Scene = 1,
	EVRApplicationType_VRApplication_Overlay = 2,
	EVRApplicationType_VRApplication_Background = 3,
	EVRApplicationType_VRApplication_Utility = 4,
	EVRApplicationType_VRApplication_VRMonitor = 5,
	EVRApplicationType_VRApplication_SteamWatchdog = 6,
	EVRApplicationType_VRApplication_Max = 7
} EVRApplicationType;
typedef enum EVRFirmwareError {
	EVRFirmwareError_VRFirmwareError_None = 0,
	EVRFirmwareError_VRFirmwareError_Success = 1,
	EVRFirmwareError_VRFirmwareError_Fail = 2
} EVRFirmwareError;
typedef enum EVRNotificationError {
	EVRNotificationError_VRNotificationError_OK = 0,
	EVRNotificationError_VRNotificationError_InvalidNotificationId = 100,
	EVRNotificationError_VRNotificationError_NotificationQueueFull = 101,
	EVRNotificationError_VRNotificationError_InvalidOverlayHandle = 102,
	EVRNotificationError_VRNotificationError_SystemWithUserValueAlreadyExists = 103
} EVRNotificationError;
typedef enum EVRInitError {
	EVRInitError_VRInitError_None = 0,
	EVRInitError_VRInitError_Unknown = 1,
	EVRInitError_VRInitError_Init_InstallationNotFound = 100,
	EVRInitError_VRInitError_Init_InstallationCorrupt = 101,
	EVRInitError_VRInitError_Init_VRClientDLLNotFound = 102,
	EVRInitError_VRInitError_Init_FileNotFound = 103,
	EVRInitError_VRInitError_Init_FactoryNotFound = 104,
	EVRInitError_VRInitError_Init_InterfaceNotFound = 105,
	EVRInitError_VRInitError_Init_InvalidInterface = 106,
	EVRInitError_VRInitError_Init_UserConfigDirectoryInvalid = 107,
	EVRInitError_VRInitError_Init_HmdNotFound = 108,
	EVRInitError_VRInitError_Init_NotInitialized = 109,
	EVRInitError_VRInitError_Init_PathRegistryNotFound = 110,
	EVRInitError_VRInitError_Init_NoConfigPath = 111,
	EVRInitError_VRInitError_Init_NoLogPath = 112,
	EVRInitError_VRInitError_Init_PathRegistryNotWritable = 113,
	EVRInitError_VRInitError_Init_AppInfoInitFailed = 114,
	EVRInitError_VRInitError_Init_Retry = 115,
	EVRInitError_VRInitError_Init_InitCanceledByUser = 116,
	EVRInitError_VRInitError_Init_AnotherAppLaunching = 117,
	EVRInitError_VRInitError_Init_SettingsInitFailed = 118,
	EVRInitError_VRInitError_Init_ShuttingDown = 119,
	EVRInitError_VRInitError_Init_TooManyObjects = 120,
	EVRInitError_VRInitError_Init_NoServerForBackgroundApp = 121,
	EVRInitError_VRInitError_Init_NotSupportedWithCompositor = 122,
	EVRInitError_VRInitError_Init_NotAvailableToUtilityApps = 123,
	EVRInitError_VRInitError_Init_Internal = 124,
	EVRInitError_VRInitError_Init_HmdDriverIdIsNone = 125,
	EVRInitError_VRInitError_Init_HmdNotFoundPresenceFailed = 126,
	EVRInitError_VRInitError_Init_VRMonitorNotFound = 127,
	EVRInitError_VRInitError_Init_VRMonitorStartupFailed = 128,
	EVRInitError_VRInitError_Init_LowPowerWatchdogNotSupported = 129,
	EVRInitError_VRInitError_Init_InvalidApplicationType = 130,
	EVRInitError_VRInitError_Init_NotAvailableToWatchdogApps = 131,
	EVRInitError_VRInitError_Init_WatchdogDisabledInSettings = 132,
	EVRInitError_VRInitError_Init_VRDashboardNotFound = 133,
	EVRInitError_VRInitError_Init_VRDashboardStartupFailed = 134,
	EVRInitError_VRInitError_Driver_Failed = 200,
	EVRInitError_VRInitError_Driver_Unknown = 201,
	EVRInitError_VRInitError_Driver_HmdUnknown = 202,
	EVRInitError_VRInitError_Driver_NotLoaded = 203,
	EVRInitError_VRInitError_Driver_RuntimeOutOfDate = 204,
	EVRInitError_VRInitError_Driver_HmdInUse = 205,
	EVRInitError_VRInitError_Driver_NotCalibrated = 206,
	EVRInitError_VRInitError_Driver_CalibrationInvalid = 207,
	EVRInitError_VRInitError_Driver_HmdDisplayNotFound = 208,
	EVRInitError_VRInitError_Driver_TrackedDeviceInterfaceUnknown = 209,
	EVRInitError_VRInitError_Driver_HmdDriverIdOutOfBounds = 211,
	EVRInitError_VRInitError_Driver_HmdDisplayMirrored = 212,
	EVRInitError_VRInitError_IPC_ServerInitFailed = 300,
	EVRInitError_VRInitError_IPC_ConnectFailed = 301,
	EVRInitError_VRInitError_IPC_SharedStateInitFailed = 302,
	EVRInitError_VRInitError_IPC_CompositorInitFailed = 303,
	EVRInitError_VRInitError_IPC_MutexInitFailed = 304,
	EVRInitError_VRInitError_IPC_Failed = 305,
	EVRInitError_VRInitError_IPC_CompositorConnectFailed = 306,
	EVRInitError_VRInitError_IPC_CompositorInvalidConnectResponse = 307,
	EVRInitError_VRInitError_IPC_ConnectFailedAfterMultipleAttempts = 308,
	EVRInitError_VRInitError_Compositor_Failed = 400,
	EVRInitError_VRInitError_Compositor_D3D11HardwareRequired = 401,
	EVRInitError_VRInitError_Compositor_FirmwareRequiresUpdate = 402,
	EVRInitError_VRInitError_Compositor_OverlayInitFailed = 403,
	EVRInitError_VRInitError_Compositor_ScreenshotsInitFailed = 404,
	EVRInitError_VRInitError_VendorSpecific_UnableToConnectToOculusRuntime = 1000,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_CantOpenDevice = 1101,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart = 1102,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_NoStoredConfig = 1103,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooBig = 1104,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooSmall = 1105,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToInitZLib = 1106,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion = 1107,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart = 1108,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart = 1109,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext = 1110,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataAddressRange = 1111,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataError = 1112,
	EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck = 1113,
	EVRInitError_VRInitError_Steam_SteamInstallationNotFound = 2000
} EVRInitError;
typedef enum EVRScreenshotType {
	EVRScreenshotType_VRScreenshotType_None = 0,
	EVRScreenshotType_VRScreenshotType_Mono = 1,
	EVRScreenshotType_VRScreenshotType_Stereo = 2,
	EVRScreenshotType_VRScreenshotType_Cubemap = 3,
	EVRScreenshotType_VRScreenshotType_MonoPanorama = 4,
	EVRScreenshotType_VRScreenshotType_StereoPanorama = 5
} EVRScreenshotType;
typedef enum EVRScreenshotPropertyFilenames {
	EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_Preview = 0,
	EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_VR = 1
} EVRScreenshotPropertyFilenames;
typedef enum EVRTrackedCameraError {
	EVRTrackedCameraError_VRTrackedCameraError_None = 0,
	EVRTrackedCameraError_VRTrackedCameraError_OperationFailed = 100,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidHandle = 101,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameHeaderVersion = 102,
	EVRTrackedCameraError_VRTrackedCameraError_OutOfHandles = 103,
	EVRTrackedCameraError_VRTrackedCameraError_IPCFailure = 104,
	EVRTrackedCameraError_VRTrackedCameraError_NotSupportedForThisDevice = 105,
	EVRTrackedCameraError_VRTrackedCameraError_SharedMemoryFailure = 106,
	EVRTrackedCameraError_VRTrackedCameraError_FrameBufferingFailure = 107,
	EVRTrackedCameraError_VRTrackedCameraError_StreamSetupFailure = 108,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidGLTextureId = 109,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidSharedTextureHandle = 110,
	EVRTrackedCameraError_VRTrackedCameraError_FailedToGetGLTextureId = 111,
	EVRTrackedCameraError_VRTrackedCameraError_SharedTextureFailure = 112,
	EVRTrackedCameraError_VRTrackedCameraError_NoFrameAvailable = 113,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidArgument = 114,
	EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameBufferSize = 115
} EVRTrackedCameraError;
typedef enum EVRTrackedCameraFrameType {
	EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Distorted = 0,
	EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Undistorted = 1,
	EVRTrackedCameraFrameType_VRTrackedCameraFrameType_MaximumUndistorted = 2,
	EVRTrackedCameraFrameType_MAX_CAMERA_FRAME_TYPES = 3
} EVRTrackedCameraFrameType;
typedef enum EVRApplicationError {
	EVRApplicationError_VRApplicationError_None = 0,
	EVRApplicationError_VRApplicationError_AppKeyAlreadyExists = 100,
	EVRApplicationError_VRApplicationError_NoManifest = 101,
	EVRApplicationError_VRApplicationError_NoApplication = 102,
	EVRApplicationError_VRApplicationError_InvalidIndex = 103,
	EVRApplicationError_VRApplicationError_UnknownApplication = 104,
	EVRApplicationError_VRApplicationError_IPCFailed = 105,
	EVRApplicationError_VRApplicationError_ApplicationAlreadyRunning = 106,
	EVRApplicationError_VRApplicationError_InvalidManifest = 107,
	EVRApplicationError_VRApplicationError_InvalidApplication = 108,
	EVRApplicationError_VRApplicationError_LaunchFailed = 109,
	EVRApplicationError_VRApplicationError_ApplicationAlreadyStarting = 110,
	EVRApplicationError_VRApplicationError_LaunchInProgress = 111,
	EVRApplicationError_VRApplicationError_OldApplicationQuitting = 112,
	EVRApplicationError_VRApplicationError_TransitionAborted = 113,
	EVRApplicationError_VRApplicationError_IsTemplate = 114,
	EVRApplicationError_VRApplicationError_BufferTooSmall = 200,
	EVRApplicationError_VRApplicationError_PropertyNotSet = 201,
	EVRApplicationError_VRApplicationError_UnknownProperty = 202,
	EVRApplicationError_VRApplicationError_InvalidParameter = 203
} EVRApplicationError;
typedef enum EVRApplicationProperty {
	EVRApplicationProperty_VRApplicationProperty_Name_String = 0,
	EVRApplicationProperty_VRApplicationProperty_LaunchType_String = 11,
	EVRApplicationProperty_VRApplicationProperty_WorkingDirectory_String = 12,
	EVRApplicationProperty_VRApplicationProperty_BinaryPath_String = 13,
	EVRApplicationProperty_VRApplicationProperty_Arguments_String = 14,
	EVRApplicationProperty_VRApplicationProperty_URL_String = 15,
	EVRApplicationProperty_VRApplicationProperty_Description_String = 50,
	EVRApplicationProperty_VRApplicationProperty_NewsURL_String = 51,
	EVRApplicationProperty_VRApplicationProperty_ImagePath_String = 52,
	EVRApplicationProperty_VRApplicationProperty_Source_String = 53,
	EVRApplicationProperty_VRApplicationProperty_IsDashboardOverlay_Bool = 60,
	EVRApplicationProperty_VRApplicationProperty_IsTemplate_Bool = 61,
	EVRApplicationProperty_VRApplicationProperty_IsInstanced_Bool = 62,
	EVRApplicationProperty_VRApplicationProperty_LastLaunchTime_Uint64 = 70
} EVRApplicationProperty;
typedef enum EVRApplicationTransitionState {
	EVRApplicationTransitionState_VRApplicationTransition_None = 0,
	EVRApplicationTransitionState_VRApplicationTransition_OldAppQuitSent = 10,
	EVRApplicationTransitionState_VRApplicationTransition_WaitingForExternalLaunch = 11,
	EVRApplicationTransitionState_VRApplicationTransition_NewAppLaunched = 20
} EVRApplicationTransitionState;
typedef enum ChaperoneCalibrationState {
	ChaperoneCalibrationState_OK = 1,
	ChaperoneCalibrationState_Warning = 100,
	ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved = 101,
	ChaperoneCalibrationState_Warning_BaseStationRemoved = 102,
	ChaperoneCalibrationState_Warning_SeatedBoundsInvalid = 103,
	ChaperoneCalibrationState_Error = 200,
	ChaperoneCalibrationState_Error_BaseStationUninitialized = 201,
	ChaperoneCalibrationState_Error_BaseStationConflict = 202,
	ChaperoneCalibrationState_Error_PlayAreaInvalid = 203,
	ChaperoneCalibrationState_Error_CollisionBoundsInvalid = 204
} ChaperoneCalibrationState;
typedef enum EChaperoneConfigFile {
	EChaperoneConfigFile_Live = 1,
	EChaperoneConfigFile_Temp = 2
} EChaperoneConfigFile;
typedef enum EChaperoneImportFlags {
	EChaperoneImportFlags_EChaperoneImport_BoundsOnly = 1
} EChaperoneImportFlags;
typedef enum EVRCompositorError {
	EVRCompositorError_VRCompositorError_None = 0,
	EVRCompositorError_VRCompositorError_RequestFailed = 1,
	EVRCompositorError_VRCompositorError_IncompatibleVersion = 100,
	EVRCompositorError_VRCompositorError_DoNotHaveFocus = 101,
	EVRCompositorError_VRCompositorError_InvalidTexture = 102,
	EVRCompositorError_VRCompositorError_IsNotSceneApplication = 103,
	EVRCompositorError_VRCompositorError_TextureIsOnWrongDevice = 104,
	EVRCompositorError_VRCompositorError_TextureUsesUnsupportedFormat = 105,
	EVRCompositorError_VRCompositorError_SharedTexturesNotSupported = 106,
	EVRCompositorError_VRCompositorError_IndexOutOfRange = 107,
	EVRCompositorError_VRCompositorError_AlreadySubmitted = 108
} EVRCompositorError;
typedef enum VROverlayInputMethod {
	VROverlayInputMethod_None = 0,
	VROverlayInputMethod_Mouse = 1
} VROverlayInputMethod;
typedef enum VROverlayTransformType {
	VROverlayTransformType_VROverlayTransform_Absolute = 0,
	VROverlayTransformType_VROverlayTransform_TrackedDeviceRelative = 1,
	VROverlayTransformType_VROverlayTransform_SystemOverlay = 2,
	VROverlayTransformType_VROverlayTransform_TrackedComponent = 3
} VROverlayTransformType;
typedef enum VROverlayFlags {
	VROverlayFlags_None = 0,
	VROverlayFlags_Curved = 1,
	VROverlayFlags_RGSS4X = 2,
	VROverlayFlags_NoDashboardTab = 3,
	VROverlayFlags_AcceptsGamepadEvents = 4,
	VROverlayFlags_ShowGamepadFocus = 5,
	VROverlayFlags_SendVRScrollEvents = 6,
	VROverlayFlags_SendVRTouchpadEvents = 7,
	VROverlayFlags_ShowTouchPadScrollWheel = 8,
	VROverlayFlags_TransferOwnershipToInternalProcess = 9,
	VROverlayFlags_SideBySide_Parallel = 10,
	VROverlayFlags_SideBySide_Crossed = 11,
	VROverlayFlags_Panorama = 12,
	VROverlayFlags_StereoPanorama = 13,
	VROverlayFlags_SortWithNonSceneOverlays = 14,
	VROverlayFlags_VisibleInDashboard = 15
} VROverlayFlags;
typedef enum VRMessageOverlayResponse {
	VRMessageOverlayResponse_ButtonPress_0 = 0,
	VRMessageOverlayResponse_ButtonPress_1 = 1,
	VRMessageOverlayResponse_ButtonPress_2 = 2,
	VRMessageOverlayResponse_ButtonPress_3 = 3,
	VRMessageOverlayResponse_CouldntFindSystemOverlay = 4,
	VRMessageOverlayResponse_CouldntFindOrCreateClientOverlay = 5,
	VRMessageOverlayResponse_ApplicationQuit = 6
} VRMessageOverlayResponse;
typedef enum EGamepadTextInputMode {
	EGamepadTextInputMode_k_EGamepadTextInputModeNormal = 0,
	EGamepadTextInputMode_k_EGamepadTextInputModePassword = 1,
	EGamepadTextInputMode_k_EGamepadTextInputModeSubmit = 2
} EGamepadTextInputMode;
typedef enum EGamepadTextInputLineMode {
	EGamepadTextInputLineMode_k_EGamepadTextInputLineModeSingleLine = 0,
	EGamepadTextInputLineMode_k_EGamepadTextInputLineModeMultipleLines = 1
} EGamepadTextInputLineMode;
typedef enum EOverlayDirection {
	EOverlayDirection_OverlayDirection_Up = 0,
	EOverlayDirection_OverlayDirection_Down = 1,
	EOverlayDirection_OverlayDirection_Left = 2,
	EOverlayDirection_OverlayDirection_Right = 3,
	EOverlayDirection_OverlayDirection_Count = 4
} EOverlayDirection;
typedef enum EVROverlayIntersectionMaskPrimitiveType {
	EVROverlayIntersectionMaskPrimitiveType_OverlayIntersectionPrimitiveType_Rectangle = 0,
	EVROverlayIntersectionMaskPrimitiveType_OverlayIntersectionPrimitiveType_Circle = 1
} EVROverlayIntersectionMaskPrimitiveType;
typedef enum EVRRenderModelError {
	EVRRenderModelError_VRRenderModelError_None = 0,
	EVRRenderModelError_VRRenderModelError_Loading = 100,
	EVRRenderModelError_VRRenderModelError_NotSupported = 200,
	EVRRenderModelError_VRRenderModelError_InvalidArg = 300,
	EVRRenderModelError_VRRenderModelError_InvalidModel = 301,
	EVRRenderModelError_VRRenderModelError_NoShapes = 302,
	EVRRenderModelError_VRRenderModelError_MultipleShapes = 303,
	EVRRenderModelError_VRRenderModelError_TooManyVertices = 304,
	EVRRenderModelError_VRRenderModelError_MultipleTextures = 305,
	EVRRenderModelError_VRRenderModelError_BufferTooSmall = 306,
	EVRRenderModelError_VRRenderModelError_NotEnoughNormals = 307,
	EVRRenderModelError_VRRenderModelError_NotEnoughTexCoords = 308,
	EVRRenderModelError_VRRenderModelError_InvalidTexture = 400
} EVRRenderModelError;
typedef enum EVRComponentProperty {
	EVRComponentProperty_VRComponentProperty_IsStatic = 1,
	EVRComponentProperty_VRComponentProperty_IsVisible = 2,
	EVRComponentProperty_VRComponentProperty_IsTouched = 4,
	EVRComponentProperty_VRComponentProperty_IsPressed = 8,
	EVRComponentProperty_VRComponentProperty_IsScrolled = 16
} EVRComponentProperty;
typedef enum EVRNotificationType {
	EVRNotificationType_Transient = 0,
	EVRNotificationType_Persistent = 1,
	EVRNotificationType_Transient_SystemWithUserValue = 2
} EVRNotificationType;
typedef enum EVRNotificationStyle {
	EVRNotificationStyle_None = 0,
	EVRNotificationStyle_Application = 100,
	EVRNotificationStyle_Contact_Disabled = 200,
	EVRNotificationStyle_Contact_Enabled = 201,
	EVRNotificationStyle_Contact_Active = 202
} EVRNotificationStyle;
typedef enum EVRSettingsError {
	EVRSettingsError_VRSettingsError_None = 0,
	EVRSettingsError_VRSettingsError_IPCFailed = 1,
	EVRSettingsError_VRSettingsError_WriteFailed = 2,
	EVRSettingsError_VRSettingsError_ReadFailed = 3,
	EVRSettingsError_VRSettingsError_JsonParseFailed = 4,
	EVRSettingsError_VRSettingsError_UnsetSettingHasNoDefault = 5
} EVRSettingsError;
typedef enum EVRScreenshotError {
	EVRScreenshotError_VRScreenshotError_None = 0,
	EVRScreenshotError_VRScreenshotError_RequestFailed = 1,
	EVRScreenshotError_VRScreenshotError_IncompatibleVersion = 100,
	EVRScreenshotError_VRScreenshotError_NotFound = 101,
	EVRScreenshotError_VRScreenshotError_BufferTooSmall = 102,
	EVRScreenshotError_VRScreenshotError_ScreenshotAlreadyInProgress = 108
} EVRScreenshotError;
/** OpenVR typedefs */
typedef uint32_t TrackedDeviceIndex_t;
typedef uint32_t VRNotificationId;
typedef uint64_t VROverlayHandle_t;
typedef void* glSharedTextureHandle_t;
typedef int32_t glInt_t;
typedef uint32_t glUInt_t;
typedef uint64_t SharedTextureHandle_t;
typedef uint32_t TrackedDeviceIndex_t;
typedef uint64_t VROverlayHandle_t;
typedef uint64_t TrackedCameraHandle_t;
typedef uint32_t ScreenshotHandle_t;
typedef uint32_t VRComponentProperties;
typedef int32_t TextureID_t;
typedef uint32_t VRNotificationId;
typedef EVRInitError HmdError;
typedef EVREye Hmd_Eye;
typedef EColorSpace ColorSpace;
typedef ETrackingResult HmdTrackingResult;
typedef ETrackedDeviceClass TrackedDeviceClass;
typedef ETrackingUniverseOrigin TrackingUniverseOrigin;
typedef ETrackedDeviceProperty TrackedDeviceProperty;
typedef ETrackedPropertyError TrackedPropertyError;
typedef EVRSubmitFlags VRSubmitFlags_t;
typedef EVRState VRState_t;
typedef ECollisionBoundsStyle CollisionBoundsStyle_t;
typedef EVROverlayError VROverlayError;
typedef EVRFirmwareError VRFirmwareError;
typedef EVRCompositorError VRCompositorError;
typedef EVRScreenshotError VRScreenshotsError;
/** OpenVR Structs */
typedef struct HmdMatrix34_t {
	float[3][4] m; //float[3][4]

} HmdMatrix34_t;
typedef struct HmdMatrix44_t {
	float[4][4] m; //float[4][4]

} HmdMatrix44_t;
typedef struct HmdVector3_t {
	float[3] v; //float[3]

} HmdVector3_t;
typedef struct HmdVector4_t {
	float[4] v; //float[4]

} HmdVector4_t;
typedef struct HmdVector3d_t {
	double[3] v; //double[3]

} HmdVector3d_t;
typedef struct HmdVector2_t {
	float[2] v; //float[2]

} HmdVector2_t;
typedef struct HmdQuaternion_t {
	double w;
	double x;
	double y;
	double z;
} HmdQuaternion_t;
typedef struct HmdColor_t {
	float r;
	float g;
	float b;
	float a;
} HmdColor_t;
typedef struct HmdQuad_t {
	HmdVector3_t[4] vCorners; //struct vr::HmdVector3_t[4]

} HmdQuad_t;
typedef struct HmdRect2_t {
	HmdVector2_t vTopLeft;
	HmdVector2_t vBottomRight;
} HmdRect2_t;
typedef struct DistortionCoordinates_t {
	float[2] rfRed; //float[2]

	float[2] rfGreen; //float[2]

	float[2] rfBlue; //float[2]

} DistortionCoordinates_t;
typedef struct Texture_t {
	void* handle; // void *

	ETextureType eType;
	EColorSpace eColorSpace;
	enum ETextureType {
	};
	enum EColorSpace {
	};
} Texture_t;
typedef struct TrackedDevicePose_t {
	HmdMatrix34_t mDeviceToAbsoluteTracking;
	HmdVector3_t vVelocity;
	HmdVector3_t vAngularVelocity;
	ETrackingResult eTrackingResult;
	bool bPoseIsValid;
	bool bDeviceIsConnected;
	enum ETrackingResult {
	};
} TrackedDevicePose_t;
typedef struct VRTextureBounds_t {
	float uMin;
	float vMin;
	float uMax;
	float vMax;
} VRTextureBounds_t;
typedef struct VRVulkanTextureData_t {
	uint64_t m_nImage;
	VkDevice_T* m_pDevice; // struct VkDevice_T *

	VkPhysicalDevice_T* m_pPhysicalDevice; // struct VkPhysicalDevice_T *

	VkInstance_T* m_pInstance; // struct VkInstance_T *

	VkQueue_T* m_pQueue; // struct VkQueue_T *

	uint32_t m_nQueueFamilyIndex;
	uint32_t m_nWidth;
	uint32_t m_nHeight;
	uint32_t m_nFormat;
	uint32_t m_nSampleCount;
} VRVulkanTextureData_t;
typedef struct VREvent_Controller_t {
	uint32_t button;
} VREvent_Controller_t;
typedef struct VREvent_Mouse_t {
	float x;
	float y;
	uint32_t button;
} VREvent_Mouse_t;
typedef struct VREvent_Scroll_t {
	float xdelta;
	float ydelta;
	uint32_t repeatCount;
} VREvent_Scroll_t;
typedef struct VREvent_TouchPadMove_t {
	bool bFingerDown;
	float flSecondsFingerDown;
	float fValueXFirst;
	float fValueYFirst;
	float fValueXRaw;
	float fValueYRaw;
} VREvent_TouchPadMove_t;
typedef struct VREvent_Notification_t {
	uint64_t ulUserValue;
	uint32_t notificationId;
} VREvent_Notification_t;
typedef struct VREvent_Process_t {
	uint32_t pid;
	uint32_t oldPid;
	bool bForced;
} VREvent_Process_t;
typedef struct VREvent_Overlay_t {
	uint64_t overlayHandle;
} VREvent_Overlay_t;
typedef struct VREvent_Status_t {
	uint32_t statusState;
} VREvent_Status_t;
typedef struct VREvent_Keyboard_t {
	char*[8] cNewInput; //char[8]

	uint64_t uUserValue;
} VREvent_Keyboard_t;
typedef struct VREvent_Ipd_t {
	float ipdMeters;
} VREvent_Ipd_t;
typedef struct VREvent_Chaperone_t {
	uint64_t m_nPreviousUniverse;
	uint64_t m_nCurrentUniverse;
} VREvent_Chaperone_t;
typedef struct VREvent_Reserved_t {
	uint64_t reserved0;
	uint64_t reserved1;
} VREvent_Reserved_t;
typedef struct VREvent_PerformanceTest_t {
	uint32_t m_nFidelityLevel;
} VREvent_PerformanceTest_t;
typedef struct VREvent_SeatedZeroPoseReset_t {
	bool bResetBySystemMenu;
} VREvent_SeatedZeroPoseReset_t;
typedef struct VREvent_Screenshot_t {
	uint32_t handle;
	uint32_t type;
} VREvent_Screenshot_t;
typedef struct VREvent_ScreenshotProgress_t {
	float progress;
} VREvent_ScreenshotProgress_t;
typedef struct VREvent_ApplicationLaunch_t {
	uint32_t pid;
	uint32_t unArgsHandle;
} VREvent_ApplicationLaunch_t;
typedef struct VREvent_EditingCameraSurface_t {
	uint64_t overlayHandle;
	uint32_t nVisualMode;
} VREvent_EditingCameraSurface_t;
typedef struct VREvent_MessageOverlay_t {
	uint32_t unVRMessageOverlayResponse;
} VREvent_MessageOverlay_t;
typedef struct HiddenAreaMesh_t {
	HmdVector2_t* pVertexData; // const struct vr::HmdVector2_t *

	uint32_t unTriangleCount;
} HiddenAreaMesh_t;
typedef struct VRControllerAxis_t {
	float x;
	float y;
} VRControllerAxis_t;
typedef struct VRControllerState_t {
	uint32_t unPacketNum;
	uint64_t ulButtonPressed;
	uint64_t ulButtonTouched;
	VRControllerAxis_t[5] rAxis; //struct vr::VRControllerAxis_t[5]

} VRControllerState_t;
typedef struct Compositor_OverlaySettings {
	uint32_t size;
	bool curved;
	bool antialias;
	float scale;
	float distance;
	float alpha;
	float uOffset;
	float vOffset;
	float uScale;
	float vScale;
	float gridDivs;
	float gridWidth;
	float gridScale;
	HmdMatrix44_t transform;
} Compositor_OverlaySettings;
typedef struct CameraVideoStreamFrameHeader_t {
	EVRTrackedCameraFrameType eFrameType;
	uint32_t nWidth;
	uint32_t nHeight;
	uint32_t nBytesPerPixel;
	uint32_t nFrameSequence;
	TrackedDevicePose_t standingTrackedDevicePose;
	enum EVRTrackedCameraFrameType {
	};
} CameraVideoStreamFrameHeader_t;
typedef struct AppOverrideKeys_t {
	char* pchKey; // const char *

	char* pchValue; // const char *

} AppOverrideKeys_t;
typedef struct Compositor_FrameTiming {
	uint32_t m_nSize;
	uint32_t m_nFrameIndex;
	uint32_t m_nNumFramePresents;
	uint32_t m_nNumMisPresented;
	uint32_t m_nNumDroppedFrames;
	uint32_t m_nReprojectionFlags;
	double m_flSystemTimeInSeconds;
	float m_flPreSubmitGpuMs;
	float m_flPostSubmitGpuMs;
	float m_flTotalRenderGpuMs;
	float m_flCompositorRenderGpuMs;
	float m_flCompositorRenderCpuMs;
	float m_flCompositorIdleCpuMs;
	float m_flClientFrameIntervalMs;
	float m_flPresentCallCpuMs;
	float m_flWaitForPresentCpuMs;
	float m_flSubmitFrameMs;
	float m_flWaitGetPosesCalledMs;
	float m_flNewPosesReadyMs;
	float m_flNewFrameReadyMs;
	float m_flCompositorUpdateStartMs;
	float m_flCompositorUpdateEndMs;
	float m_flCompositorRenderStartMs;
	TrackedDevicePose_t m_HmdPose;
} Compositor_FrameTiming;
typedef struct Compositor_CumulativeStats {
	uint32_t m_nPid;
	uint32_t m_nNumFramePresents;
	uint32_t m_nNumDroppedFrames;
	uint32_t m_nNumReprojectedFrames;
	uint32_t m_nNumFramePresentsOnStartup;
	uint32_t m_nNumDroppedFramesOnStartup;
	uint32_t m_nNumReprojectedFramesOnStartup;
	uint32_t m_nNumLoading;
	uint32_t m_nNumFramePresentsLoading;
	uint32_t m_nNumDroppedFramesLoading;
	uint32_t m_nNumReprojectedFramesLoading;
	uint32_t m_nNumTimedOut;
	uint32_t m_nNumFramePresentsTimedOut;
	uint32_t m_nNumDroppedFramesTimedOut;
	uint32_t m_nNumReprojectedFramesTimedOut;
} Compositor_CumulativeStats;
typedef struct VROverlayIntersectionParams_t {
	HmdVector3_t vSource;
	HmdVector3_t vDirection;
	ETrackingUniverseOrigin eOrigin;
	enum ETrackingUniverseOrigin {
	};
} VROverlayIntersectionParams_t;
typedef struct VROverlayIntersectionResults_t {
	HmdVector3_t vPoint;
	HmdVector3_t vNormal;
	HmdVector2_t vUVs;
	float fDistance;
} VROverlayIntersectionResults_t;
typedef struct IntersectionMaskRectangle_t {
	float m_flTopLeftX;
	float m_flTopLeftY;
	float m_flWidth;
	float m_flHeight;
} IntersectionMaskRectangle_t;
typedef struct IntersectionMaskCircle_t {
	float m_flCenterX;
	float m_flCenterY;
	float m_flRadius;
} IntersectionMaskCircle_t;
typedef struct RenderModel_ComponentState_t {
	HmdMatrix34_t mTrackingToComponentRenderModel;
	HmdMatrix34_t mTrackingToComponentLocal;
	VRComponentProperties uProperties;
} RenderModel_ComponentState_t;
typedef struct RenderModel_Vertex_t {
	HmdVector3_t vPosition;
	HmdVector3_t vNormal;
	float[2] rfTextureCoord; //float[2]

} RenderModel_Vertex_t;
typedef struct RenderModel_TextureMap_t {
	uint16_t unWidth;
	uint16_t unHeight;
	uint8_t* rubTextureMapData; // const uint8_t *

} RenderModel_TextureMap_t;
typedef struct RenderModel_t {
	RenderModel_Vertex_t* rVertexData; // const struct vr::RenderModel_Vertex_t *

	uint32_t unVertexCount;
	uint16_t* rIndexData; // const uint16_t *

	uint32_t unTriangleCount;
	TextureID_t diffuseTextureId;
} RenderModel_t;
typedef struct RenderModel_ControllerMode_State_t {
	bool bScrollWheelVisible;
} RenderModel_ControllerMode_State_t;
typedef struct NotificationBitmap_t {
	void* m_pImageData; // void *

	int32_t m_nWidth;
	int32_t m_nHeight;
	int32_t m_nBytesPerPixel;
} NotificationBitmap_t;
typedef struct COpenVRContext {
	intptr_t m_pVRSystem; // class vr::IVRSystem *

	intptr_t m_pVRChaperone; // class vr::IVRChaperone *

	intptr_t m_pVRChaperoneSetup; // class vr::IVRChaperoneSetup *

	intptr_t m_pVRCompositor; // class vr::IVRCompositor *

	intptr_t m_pVROverlay; // class vr::IVROverlay *

	intptr_t m_pVRResources; // class vr::IVRResources *

	intptr_t m_pVRRenderModels; // class vr::IVRRenderModels *

	intptr_t m_pVRExtendedDisplay; // class vr::IVRExtendedDisplay *

	intptr_t m_pVRSettings; // class vr::IVRSettings *

	intptr_t m_pVRApplications; // class vr::IVRApplications *

	intptr_t m_pVRTrackedCamera; // class vr::IVRTrackedCamera *

	intptr_t m_pVRScreenshots; // class vr::IVRScreenshots *

} COpenVRContext;
typedef union  VREvent_Data_t {
	VREvent_Reserved_t reserved;
	VREvent_Controller_t controller;
	VREvent_Mouse_t mouse;
	VREvent_Scroll_t scroll;
	VREvent_Process_t process;
	VREvent_Notification_t notification;
	VREvent_Overlay_t overlay;
	VREvent_Status_t status;
	VREvent_Keyboard_t keyboard;
	VREvent_Ipd_t ipd;
	VREvent_Chaperone_t chaperone;
	VREvent_PerformanceTest_t performanceTest;
	VREvent_TouchPadMove_t touchPadMove;
	VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
} VREvent_Data_t;
/** An event posted by the server to all running applications */
struct VREvent_t {
	uint32_t eventType; // EVREventType enum

	TrackedDeviceIndex_t trackedDeviceIndex;
	float eventAgeSeconds;
	VREvent_Data_t data;
};
typedef union  VROverlayIntersectionMaskPrimitive_Data_t {
	IntersectionMaskRectangle_t m_Rectangle;
	IntersectionMaskCircle_t m_Circle;
} VROverlayIntersectionMaskPrimitive_Data_t;
struct VROverlayIntersectionMaskPrimitive_t {
	EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;
	VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;
};
/** OpenVR Function Pointer Tables */
struct VR_IVRSystem_FnTable {
	GetRecommendedRenderTargetSize_callback* GetRecommendedRenderTargetSize;
	GetProjectionMatrix_callback* GetProjectionMatrix;
	GetProjectionRaw_callback* GetProjectionRaw;
	ComputeDistortion_callback* ComputeDistortion;
	GetEyeToHeadTransform_callback* GetEyeToHeadTransform;
	GetTimeSinceLastVsync_callback* GetTimeSinceLastVsync;
	GetD3D9AdapterIndex_callback* GetD3D9AdapterIndex;
	GetDXGIOutputInfo_callback* GetDXGIOutputInfo;
	IsDisplayOnDesktop_callback* IsDisplayOnDesktop;
	SetDisplayVisibility_callback* SetDisplayVisibility;
	GetDeviceToAbsoluteTrackingPose_callback* GetDeviceToAbsoluteTrackingPose;
	ResetSeatedZeroPose_callback* ResetSeatedZeroPose;
	GetSeatedZeroPoseToStandingAbsoluteTrackingPose_callback* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
	GetRawZeroPoseToStandingAbsoluteTrackingPose_callback* GetRawZeroPoseToStandingAbsoluteTrackingPose;
	GetSortedTrackedDeviceIndicesOfClass_callback* GetSortedTrackedDeviceIndicesOfClass;
	GetTrackedDeviceActivityLevel_callback* GetTrackedDeviceActivityLevel;
	ApplyTransform_callback* ApplyTransform;
	GetTrackedDeviceIndexForControllerRole_callback* GetTrackedDeviceIndexForControllerRole;
	GetControllerRoleForTrackedDeviceIndex_callback* GetControllerRoleForTrackedDeviceIndex;
	GetTrackedDeviceClass_callback* GetTrackedDeviceClass;
	IsTrackedDeviceConnected_callback* IsTrackedDeviceConnected;
	GetBoolTrackedDeviceProperty_callback* GetBoolTrackedDeviceProperty;
	GetFloatTrackedDeviceProperty_callback* GetFloatTrackedDeviceProperty;
	GetInt32TrackedDeviceProperty_callback* GetInt32TrackedDeviceProperty;
	GetUint64TrackedDeviceProperty_callback* GetUint64TrackedDeviceProperty;
	GetMatrix34TrackedDeviceProperty_callback* GetMatrix34TrackedDeviceProperty;
	GetStringTrackedDeviceProperty_callback* GetStringTrackedDeviceProperty;
	GetPropErrorNameFromEnum_callback* GetPropErrorNameFromEnum;
	PollNextEvent_callback* PollNextEvent;
	PollNextEventWithPose_callback* PollNextEventWithPose;
	GetEventTypeNameFromEnum_callback* GetEventTypeNameFromEnum;
	GetHiddenAreaMesh_callback* GetHiddenAreaMesh;
	GetControllerState_callback* GetControllerState;
	GetControllerStateWithPose_callback* GetControllerStateWithPose;
	TriggerHapticPulse_callback* TriggerHapticPulse;
	GetButtonIdNameFromEnum_callback* GetButtonIdNameFromEnum;
	GetControllerAxisTypeNameFromEnum_callback* GetControllerAxisTypeNameFromEnum;
	CaptureInputFocus_callback* CaptureInputFocus;
	ReleaseInputFocus_callback* ReleaseInputFocus;
	IsInputFocusCapturedByAnotherProcess_callback* IsInputFocusCapturedByAnotherProcess;
	DriverDebugRequest_callback* DriverDebugRequest;
	PerformFirmwareUpdate_callback* PerformFirmwareUpdate;
	AcknowledgeQuit_Exiting_callback* AcknowledgeQuit_Exiting;
	AcknowledgeQuit_UserPrompt_callback* AcknowledgeQuit_UserPrompt;
	typedef void GetRecommendedRenderTargetSize_callback(uint32_t* pnWidth, uint32_t* pnHeight);
	typedef HmdMatrix44_t GetProjectionMatrix_callback(EVREye eEye, float fNearZ, float fFarZ);
	typedef void GetProjectionRaw_callback(EVREye eEye, float* pfLeft, float* pfRight, float* pfTop, float* pfBottom);
	typedef bool ComputeDistortion_callback(EVREye eEye, float fU, float fV, DistortionCoordinates_t* pDistortionCoordinates);
	typedef HmdMatrix34_t GetEyeToHeadTransform_callback(EVREye eEye);
	typedef bool GetTimeSinceLastVsync_callback(float* pfSecondsSinceLastVsync, uint64_t* pulFrameCounter);
	typedef int32_t GetD3D9AdapterIndex_callback();
	typedef void GetDXGIOutputInfo_callback(int32_t* pnAdapterIndex);
	typedef bool IsDisplayOnDesktop_callback();
	typedef bool SetDisplayVisibility_callback(bool bIsVisibleOnDesktop);
	typedef void GetDeviceToAbsoluteTrackingPose_callback(ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t* pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount);
	typedef void ResetSeatedZeroPose_callback();
	typedef HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose_callback();
	typedef HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose_callback();
	typedef uint32_t GetSortedTrackedDeviceIndicesOfClass_callback(ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t* punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex);
	typedef EDeviceActivityLevel GetTrackedDeviceActivityLevel_callback(TrackedDeviceIndex_t unDeviceId);
	typedef void ApplyTransform_callback(TrackedDevicePose_t* pOutputPose, TrackedDevicePose_t* pTrackedDevicePose, HmdMatrix34_t* pTransform);
	typedef TrackedDeviceIndex_t GetTrackedDeviceIndexForControllerRole_callback(ETrackedControllerRole unDeviceType);
	typedef ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex_callback(TrackedDeviceIndex_t unDeviceIndex);
	typedef ETrackedDeviceClass GetTrackedDeviceClass_callback(TrackedDeviceIndex_t unDeviceIndex);
	typedef bool IsTrackedDeviceConnected_callback(TrackedDeviceIndex_t unDeviceIndex);
	typedef bool GetBoolTrackedDeviceProperty_callback(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError* pError);
	typedef float GetFloatTrackedDeviceProperty_callback(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError* pError);
	typedef int32_t GetInt32TrackedDeviceProperty_callback(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError* pError);
	typedef uint64_t GetUint64TrackedDeviceProperty_callback(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError* pError);
	typedef HmdMatrix34_t GetMatrix34TrackedDeviceProperty_callback(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError* pError);
	typedef uint32_t GetStringTrackedDeviceProperty_callback(TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char* pchValue, uint32_t unBufferSize, ETrackedPropertyError* pError);
	typedef char* GetPropErrorNameFromEnum_callback(ETrackedPropertyError error);
	typedef bool PollNextEvent_callback(VREvent_t* pEvent, uint32_t uncbVREvent);
	typedef bool PollNextEventWithPose_callback(ETrackingUniverseOrigin eOrigin, VREvent_t* pEvent, uint32_t uncbVREvent, TrackedDevicePose_t* pTrackedDevicePose);
	typedef char* GetEventTypeNameFromEnum_callback(EVREventType eType);
	typedef HiddenAreaMesh_t GetHiddenAreaMesh_callback(EVREye eEye, EHiddenAreaMeshType type);
	typedef bool GetControllerState_callback(TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t* pControllerState, uint32_t unControllerStateSize);
	typedef bool GetControllerStateWithPose_callback(ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, VRControllerState_t* pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t* pTrackedDevicePose);
	typedef void TriggerHapticPulse_callback(TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec);
	typedef char* GetButtonIdNameFromEnum_callback(EVRButtonId eButtonId);
	typedef char* GetControllerAxisTypeNameFromEnum_callback(EVRControllerAxisType eAxisType);
	typedef bool CaptureInputFocus_callback();
	typedef void ReleaseInputFocus_callback();
	typedef bool IsInputFocusCapturedByAnotherProcess_callback();
	typedef uint32_t DriverDebugRequest_callback(TrackedDeviceIndex_t unDeviceIndex, char* pchRequest, char* pchResponseBuffer, uint32_t unResponseBufferSize);
	typedef EVRFirmwareError PerformFirmwareUpdate_callback(TrackedDeviceIndex_t unDeviceIndex);
	typedef void AcknowledgeQuit_Exiting_callback();
	typedef void AcknowledgeQuit_UserPrompt_callback();
};
struct VR_IVRExtendedDisplay_FnTable {
	GetWindowBounds_callback* GetWindowBounds;
	GetEyeOutputViewport_callback* GetEyeOutputViewport;
	GetDXGIOutputInfo_callback* GetDXGIOutputInfo;
	typedef void GetWindowBounds_callback(int32_t* pnX, int32_t* pnY, uint32_t* pnWidth, uint32_t* pnHeight);
	typedef void GetEyeOutputViewport_callback(EVREye eEye, uint32_t* pnX, uint32_t* pnY, uint32_t* pnWidth, uint32_t* pnHeight);
	typedef void GetDXGIOutputInfo_callback(int32_t* pnAdapterIndex, int32_t* pnAdapterOutputIndex);
};
struct VR_IVRTrackedCamera_FnTable {
	GetCameraErrorNameFromEnum_callback* GetCameraErrorNameFromEnum;
	HasCamera_callback* HasCamera;
	GetCameraFrameSize_callback* GetCameraFrameSize;
	GetCameraIntrinsics_callback* GetCameraIntrinsics;
	GetCameraProjection_callback* GetCameraProjection;
	AcquireVideoStreamingService_callback* AcquireVideoStreamingService;
	ReleaseVideoStreamingService_callback* ReleaseVideoStreamingService;
	GetVideoStreamFrameBuffer_callback* GetVideoStreamFrameBuffer;
	GetVideoStreamTextureSize_callback* GetVideoStreamTextureSize;
	GetVideoStreamTextureD3D11_callback* GetVideoStreamTextureD3D11;
	GetVideoStreamTextureGL_callback* GetVideoStreamTextureGL;
	ReleaseVideoStreamTextureGL_callback* ReleaseVideoStreamTextureGL;
	typedef char* GetCameraErrorNameFromEnum_callback(EVRTrackedCameraError eCameraError);
	typedef EVRTrackedCameraError HasCamera_callback(TrackedDeviceIndex_t nDeviceIndex, bool* pHasCamera);
	typedef EVRTrackedCameraError GetCameraFrameSize_callback(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t* pnWidth, uint32_t* pnHeight, uint32_t* pnFrameBufferSize);
	typedef EVRTrackedCameraError GetCameraIntrinsics_callback(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t* pFocalLength, HmdVector2_t* pCenter);
	typedef EVRTrackedCameraError GetCameraProjection_callback(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t* pProjection);
	typedef EVRTrackedCameraError AcquireVideoStreamingService_callback(TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t* pHandle);
	typedef EVRTrackedCameraError ReleaseVideoStreamingService_callback(TrackedCameraHandle_t hTrackedCamera);
	typedef EVRTrackedCameraError GetVideoStreamFrameBuffer_callback(TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void* pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t* pFrameHeader, uint32_t nFrameHeaderSize);
	typedef EVRTrackedCameraError GetVideoStreamTextureSize_callback(TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t* pTextureBounds, uint32_t* pnWidth, uint32_t* pnHeight);
	typedef EVRTrackedCameraError GetVideoStreamTextureD3D11_callback(TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void* pD3D11DeviceOrResource, void** ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t* pFrameHeader, uint32_t nFrameHeaderSize);
	typedef EVRTrackedCameraError GetVideoStreamTextureGL_callback(TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t* pglTextureId, CameraVideoStreamFrameHeader_t* pFrameHeader, uint32_t nFrameHeaderSize);
	typedef EVRTrackedCameraError ReleaseVideoStreamTextureGL_callback(TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId);
};
struct VR_IVRApplications_FnTable {
	AddApplicationManifest_callback* AddApplicationManifest;
	RemoveApplicationManifest_callback* RemoveApplicationManifest;
	IsApplicationInstalled_callback* IsApplicationInstalled;
	GetApplicationCount_callback* GetApplicationCount;
	GetApplicationKeyByIndex_callback* GetApplicationKeyByIndex;
	GetApplicationKeyByProcessId_callback* GetApplicationKeyByProcessId;
	LaunchApplication_callback* LaunchApplication;
	LaunchTemplateApplication_callback* LaunchTemplateApplication;
	LaunchApplicationFromMimeType_callback* LaunchApplicationFromMimeType;
	LaunchDashboardOverlay_callback* LaunchDashboardOverlay;
	CancelApplicationLaunch_callback* CancelApplicationLaunch;
	IdentifyApplication_callback* IdentifyApplication;
	GetApplicationProcessId_callback* GetApplicationProcessId;
	GetApplicationsErrorNameFromEnum_callback* GetApplicationsErrorNameFromEnum;
	GetApplicationPropertyString_callback* GetApplicationPropertyString;
	GetApplicationPropertyBool_callback* GetApplicationPropertyBool;
	GetApplicationPropertyUint64_callback* GetApplicationPropertyUint64;
	SetApplicationAutoLaunch_callback* SetApplicationAutoLaunch;
	GetApplicationAutoLaunch_callback* GetApplicationAutoLaunch;
	SetDefaultApplicationForMimeType_callback* SetDefaultApplicationForMimeType;
	GetDefaultApplicationForMimeType_callback* GetDefaultApplicationForMimeType;
	GetApplicationSupportedMimeTypes_callback* GetApplicationSupportedMimeTypes;
	GetApplicationsThatSupportMimeType_callback* GetApplicationsThatSupportMimeType;
	GetApplicationLaunchArguments_callback* GetApplicationLaunchArguments;
	GetStartingApplication_callback* GetStartingApplication;
	GetTransitionState_callback* GetTransitionState;
	PerformApplicationPrelaunchCheck_callback* PerformApplicationPrelaunchCheck;
	GetApplicationsTransitionStateNameFromEnum_callback* GetApplicationsTransitionStateNameFromEnum;
	IsQuitUserPromptRequested_callback* IsQuitUserPromptRequested;
	LaunchInternalProcess_callback* LaunchInternalProcess;
	typedef EVRApplicationError AddApplicationManifest_callback(char* pchApplicationManifestFullPath, bool bTemporary);
	typedef EVRApplicationError RemoveApplicationManifest_callback(char* pchApplicationManifestFullPath);
	typedef bool IsApplicationInstalled_callback(char* pchAppKey);
	typedef uint32_t GetApplicationCount_callback();
	typedef EVRApplicationError GetApplicationKeyByIndex_callback(uint32_t unApplicationIndex, char* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	typedef EVRApplicationError GetApplicationKeyByProcessId_callback(uint32_t unProcessId, char* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	typedef EVRApplicationError LaunchApplication_callback(char* pchAppKey);
	typedef EVRApplicationError LaunchTemplateApplication_callback(char* pchTemplateAppKey, char* pchNewAppKey, AppOverrideKeys_t* pKeys, uint32_t unKeys);
	typedef EVRApplicationError LaunchApplicationFromMimeType_callback(char* pchMimeType, char* pchArgs);
	typedef EVRApplicationError LaunchDashboardOverlay_callback(char* pchAppKey);
	typedef bool CancelApplicationLaunch_callback(char* pchAppKey);
	typedef EVRApplicationError IdentifyApplication_callback(uint32_t unProcessId, char* pchAppKey);
	typedef uint32_t GetApplicationProcessId_callback(char* pchAppKey);
	typedef char* GetApplicationsErrorNameFromEnum_callback(EVRApplicationError error);
	typedef uint32_t GetApplicationPropertyString_callback(char* pchAppKey, EVRApplicationProperty eProperty, char* pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError* peError);
	typedef bool GetApplicationPropertyBool_callback(char* pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError* peError);
	typedef uint64_t GetApplicationPropertyUint64_callback(char* pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError* peError);
	typedef EVRApplicationError SetApplicationAutoLaunch_callback(char* pchAppKey, bool bAutoLaunch);
	typedef bool GetApplicationAutoLaunch_callback(char* pchAppKey);
	typedef EVRApplicationError SetDefaultApplicationForMimeType_callback(char* pchAppKey, char* pchMimeType);
	typedef bool GetDefaultApplicationForMimeType_callback(char* pchMimeType, char* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	typedef bool GetApplicationSupportedMimeTypes_callback(char* pchAppKey, char* pchMimeTypesBuffer, uint32_t unMimeTypesBuffer);
	typedef uint32_t GetApplicationsThatSupportMimeType_callback(char* pchMimeType, char* pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer);
	typedef uint32_t GetApplicationLaunchArguments_callback(uint32_t unHandle, char* pchArgs, uint32_t unArgs);
	typedef EVRApplicationError GetStartingApplication_callback(char* pchAppKeyBuffer, uint32_t unAppKeyBufferLen);
	typedef EVRApplicationTransitionState GetTransitionState_callback();
	typedef EVRApplicationError PerformApplicationPrelaunchCheck_callback(char* pchAppKey);
	typedef char* GetApplicationsTransitionStateNameFromEnum_callback(EVRApplicationTransitionState state);
	typedef bool IsQuitUserPromptRequested_callback();
	typedef EVRApplicationError LaunchInternalProcess_callback(char* pchBinaryPath, char* pchArguments, char* pchWorkingDirectory);
};
struct VR_IVRChaperone_FnTable {
	GetCalibrationState_callback* GetCalibrationState;
	GetPlayAreaSize_callback* GetPlayAreaSize;
	GetPlayAreaRect_callback* GetPlayAreaRect;
	ReloadInfo_callback* ReloadInfo;
	SetSceneColor_callback* SetSceneColor;
	GetBoundsColor_callback* GetBoundsColor;
	AreBoundsVisible_callback* AreBoundsVisible;
	ForceBoundsVisible_callback* ForceBoundsVisible;
	typedef ChaperoneCalibrationState GetCalibrationState_callback();
	typedef bool GetPlayAreaSize_callback(float* pSizeX, float* pSizeZ);
	typedef bool GetPlayAreaRect_callback(HmdQuad_t* rect);
	typedef void ReloadInfo_callback();
	typedef void SetSceneColor_callback(HmdColor_t color);
	typedef void GetBoundsColor_callback(HmdColor_t* pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t* pOutputCameraColor);
	typedef bool AreBoundsVisible_callback();
	typedef void ForceBoundsVisible_callback(bool bForce);
};
struct VR_IVRChaperoneSetup_FnTable {
	CommitWorkingCopy_callback* CommitWorkingCopy;
	RevertWorkingCopy_callback* RevertWorkingCopy;
	GetWorkingPlayAreaSize_callback* GetWorkingPlayAreaSize;
	GetWorkingPlayAreaRect_callback* GetWorkingPlayAreaRect;
	GetWorkingCollisionBoundsInfo_callback* GetWorkingCollisionBoundsInfo;
	GetLiveCollisionBoundsInfo_callback* GetLiveCollisionBoundsInfo;
	GetWorkingSeatedZeroPoseToRawTrackingPose_callback* GetWorkingSeatedZeroPoseToRawTrackingPose;
	GetWorkingStandingZeroPoseToRawTrackingPose_callback* GetWorkingStandingZeroPoseToRawTrackingPose;
	SetWorkingPlayAreaSize_callback* SetWorkingPlayAreaSize;
	SetWorkingCollisionBoundsInfo_callback* SetWorkingCollisionBoundsInfo;
	SetWorkingSeatedZeroPoseToRawTrackingPose_callback* SetWorkingSeatedZeroPoseToRawTrackingPose;
	SetWorkingStandingZeroPoseToRawTrackingPose_callback* SetWorkingStandingZeroPoseToRawTrackingPose;
	ReloadFromDisk_callback* ReloadFromDisk;
	GetLiveSeatedZeroPoseToRawTrackingPose_callback* GetLiveSeatedZeroPoseToRawTrackingPose;
	SetWorkingCollisionBoundsTagsInfo_callback* SetWorkingCollisionBoundsTagsInfo;
	GetLiveCollisionBoundsTagsInfo_callback* GetLiveCollisionBoundsTagsInfo;
	SetWorkingPhysicalBoundsInfo_callback* SetWorkingPhysicalBoundsInfo;
	GetLivePhysicalBoundsInfo_callback* GetLivePhysicalBoundsInfo;
	ExportLiveToBuffer_callback* ExportLiveToBuffer;
	ImportFromBufferToWorking_callback* ImportFromBufferToWorking;
	typedef bool CommitWorkingCopy_callback(EChaperoneConfigFile configFile);
	typedef void RevertWorkingCopy_callback();
	typedef bool GetWorkingPlayAreaSize_callback(float* pSizeX, float* pSizeZ);
	typedef bool GetWorkingPlayAreaRect_callback(HmdQuad_t* rect);
	typedef bool GetWorkingCollisionBoundsInfo_callback(HmdQuad_t* pQuadsBuffer, uint32_t* punQuadsCount);
	typedef bool GetLiveCollisionBoundsInfo_callback(HmdQuad_t* pQuadsBuffer, uint32_t* punQuadsCount);
	typedef bool GetWorkingSeatedZeroPoseToRawTrackingPose_callback(HmdMatrix34_t* pmatSeatedZeroPoseToRawTrackingPose);
	typedef bool GetWorkingStandingZeroPoseToRawTrackingPose_callback(HmdMatrix34_t* pmatStandingZeroPoseToRawTrackingPose);
	typedef void SetWorkingPlayAreaSize_callback(float sizeX, float sizeZ);
	typedef void SetWorkingCollisionBoundsInfo_callback(HmdQuad_t* pQuadsBuffer, uint32_t unQuadsCount);
	typedef void SetWorkingSeatedZeroPoseToRawTrackingPose_callback(HmdMatrix34_t* pMatSeatedZeroPoseToRawTrackingPose);
	typedef void SetWorkingStandingZeroPoseToRawTrackingPose_callback(HmdMatrix34_t* pMatStandingZeroPoseToRawTrackingPose);
	typedef void ReloadFromDisk_callback(EChaperoneConfigFile configFile);
	typedef bool GetLiveSeatedZeroPoseToRawTrackingPose_callback(HmdMatrix34_t* pmatSeatedZeroPoseToRawTrackingPose);
	typedef void SetWorkingCollisionBoundsTagsInfo_callback(uint8_t* pTagsBuffer, uint32_t unTagCount);
	typedef bool GetLiveCollisionBoundsTagsInfo_callback(uint8_t* pTagsBuffer, uint32_t* punTagCount);
	typedef bool SetWorkingPhysicalBoundsInfo_callback(HmdQuad_t* pQuadsBuffer, uint32_t unQuadsCount);
	typedef bool GetLivePhysicalBoundsInfo_callback(HmdQuad_t* pQuadsBuffer, uint32_t* punQuadsCount);
	typedef bool ExportLiveToBuffer_callback(char* pBuffer, uint32_t* pnBufferLength);
	typedef bool ImportFromBufferToWorking_callback(char* pBuffer, uint32_t nImportFlags);
};
struct VR_IVRCompositor_FnTable {
	SetTrackingSpace_callback* SetTrackingSpace;
	GetTrackingSpace_callback* GetTrackingSpace;
	WaitGetPoses_callback* WaitGetPoses;
	GetLastPoses_callback* GetLastPoses;
	GetLastPoseForTrackedDeviceIndex_callback* GetLastPoseForTrackedDeviceIndex;
	Submit_callback* Submit;
	ClearLastSubmittedFrame_callback* ClearLastSubmittedFrame;
	PostPresentHandoff_callback* PostPresentHandoff;
	GetFrameTiming_callback* GetFrameTiming;
	GetFrameTimings_callback* GetFrameTimings;
	GetFrameTimeRemaining_callback* GetFrameTimeRemaining;
	GetCumulativeStats_callback* GetCumulativeStats;
	FadeToColor_callback* FadeToColor;
	GetCurrentFadeColor_callback* GetCurrentFadeColor;
	FadeGrid_callback* FadeGrid;
	GetCurrentGridAlpha_callback* GetCurrentGridAlpha;
	SetSkyboxOverride_callback* SetSkyboxOverride;
	ClearSkyboxOverride_callback* ClearSkyboxOverride;
	CompositorBringToFront_callback* CompositorBringToFront;
	CompositorGoToBack_callback* CompositorGoToBack;
	CompositorQuit_callback* CompositorQuit;
	IsFullscreen_callback* IsFullscreen;
	GetCurrentSceneFocusProcess_callback* GetCurrentSceneFocusProcess;
	GetLastFrameRenderer_callback* GetLastFrameRenderer;
	CanRenderScene_callback* CanRenderScene;
	ShowMirrorWindow_callback* ShowMirrorWindow;
	HideMirrorWindow_callback* HideMirrorWindow;
	IsMirrorWindowVisible_callback* IsMirrorWindowVisible;
	CompositorDumpImages_callback* CompositorDumpImages;
	ShouldAppRenderWithLowResources_callback* ShouldAppRenderWithLowResources;
	ForceInterleavedReprojectionOn_callback* ForceInterleavedReprojectionOn;
	ForceReconnectProcess_callback* ForceReconnectProcess;
	SuspendRendering_callback* SuspendRendering;
	GetMirrorTextureD3D11_callback* GetMirrorTextureD3D11;
	GetMirrorTextureGL_callback* GetMirrorTextureGL;
	ReleaseSharedGLTexture_callback* ReleaseSharedGLTexture;
	LockGLSharedTextureForAccess_callback* LockGLSharedTextureForAccess;
	UnlockGLSharedTextureForAccess_callback* UnlockGLSharedTextureForAccess;
	GetVulkanInstanceExtensionsRequired_callback* GetVulkanInstanceExtensionsRequired;
	GetVulkanDeviceExtensionsRequired_callback* GetVulkanDeviceExtensionsRequired;
	typedef void SetTrackingSpace_callback(ETrackingUniverseOrigin eOrigin);
	typedef ETrackingUniverseOrigin GetTrackingSpace_callback();
	typedef EVRCompositorError WaitGetPoses_callback(TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount);
	typedef EVRCompositorError GetLastPoses_callback(TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount);
	typedef EVRCompositorError GetLastPoseForTrackedDeviceIndex_callback(TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t* pOutputPose, TrackedDevicePose_t* pOutputGamePose);
	typedef EVRCompositorError Submit_callback(EVREye eEye, Texture_t* pTexture, VRTextureBounds_t* pBounds, EVRSubmitFlags nSubmitFlags);
	typedef void ClearLastSubmittedFrame_callback();
	typedef void PostPresentHandoff_callback();
	typedef bool GetFrameTiming_callback(Compositor_FrameTiming* pTiming, uint32_t unFramesAgo);
	typedef uint32_t GetFrameTimings_callback(Compositor_FrameTiming* pTiming, uint32_t nFrames);
	typedef float GetFrameTimeRemaining_callback();
	typedef void GetCumulativeStats_callback(Compositor_CumulativeStats* pStats, uint32_t nStatsSizeInBytes);
	typedef void FadeToColor_callback(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
	typedef HmdColor_t GetCurrentFadeColor_callback(bool bBackground);
	typedef void FadeGrid_callback(float fSeconds, bool bFadeIn);
	typedef float GetCurrentGridAlpha_callback();
	typedef EVRCompositorError SetSkyboxOverride_callback(Texture_t* pTextures, uint32_t unTextureCount);
	typedef void ClearSkyboxOverride_callback();
	typedef void CompositorBringToFront_callback();
	typedef void CompositorGoToBack_callback();
	typedef void CompositorQuit_callback();
	typedef bool IsFullscreen_callback();
	typedef uint32_t GetCurrentSceneFocusProcess_callback();
	typedef uint32_t GetLastFrameRenderer_callback();
	typedef bool CanRenderScene_callback();
	typedef void ShowMirrorWindow_callback();
	typedef void HideMirrorWindow_callback();
	typedef bool IsMirrorWindowVisible_callback();
	typedef void CompositorDumpImages_callback();
	typedef bool ShouldAppRenderWithLowResources_callback();
	typedef void ForceInterleavedReprojectionOn_callback(bool bOverride);
	typedef void ForceReconnectProcess_callback();
	typedef void SuspendRendering_callback(bool bSuspend);
	typedef EVRCompositorError GetMirrorTextureD3D11_callback(EVREye eEye, void* pD3D11DeviceOrResource, void** ppD3D11ShaderResourceView);
	typedef EVRCompositorError GetMirrorTextureGL_callback(EVREye eEye, glUInt_t* pglTextureId, glSharedTextureHandle_t* pglSharedTextureHandle);
	typedef bool ReleaseSharedGLTexture_callback(glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle);
	typedef void LockGLSharedTextureForAccess_callback(glSharedTextureHandle_t glSharedTextureHandle);
	typedef void UnlockGLSharedTextureForAccess_callback(glSharedTextureHandle_t glSharedTextureHandle);
	typedef uint32_t GetVulkanInstanceExtensionsRequired_callback(char* pchValue, uint32_t unBufferSize);
	typedef uint32_t GetVulkanDeviceExtensionsRequired_callback(VkPhysicalDevice_T* pPhysicalDevice, char* pchValue, uint32_t unBufferSize);
};
struct VR_IVROverlay_FnTable {
	FindOverlay_callback* FindOverlay;
	CreateOverlay_callback* CreateOverlay;
	DestroyOverlay_callback* DestroyOverlay;
	SetHighQualityOverlay_callback* SetHighQualityOverlay;
	GetHighQualityOverlay_callback* GetHighQualityOverlay;
	GetOverlayKey_callback* GetOverlayKey;
	GetOverlayName_callback* GetOverlayName;
	GetOverlayImageData_callback* GetOverlayImageData;
	GetOverlayErrorNameFromEnum_callback* GetOverlayErrorNameFromEnum;
	SetOverlayRenderingPid_callback* SetOverlayRenderingPid;
	GetOverlayRenderingPid_callback* GetOverlayRenderingPid;
	SetOverlayFlag_callback* SetOverlayFlag;
	GetOverlayFlag_callback* GetOverlayFlag;
	SetOverlayColor_callback* SetOverlayColor;
	GetOverlayColor_callback* GetOverlayColor;
	SetOverlayAlpha_callback* SetOverlayAlpha;
	GetOverlayAlpha_callback* GetOverlayAlpha;
	SetOverlayTexelAspect_callback* SetOverlayTexelAspect;
	GetOverlayTexelAspect_callback* GetOverlayTexelAspect;
	SetOverlaySortOrder_callback* SetOverlaySortOrder;
	GetOverlaySortOrder_callback* GetOverlaySortOrder;
	SetOverlayWidthInMeters_callback* SetOverlayWidthInMeters;
	GetOverlayWidthInMeters_callback* GetOverlayWidthInMeters;
	SetOverlayAutoCurveDistanceRangeInMeters_callback* SetOverlayAutoCurveDistanceRangeInMeters;
	GetOverlayAutoCurveDistanceRangeInMeters_callback* GetOverlayAutoCurveDistanceRangeInMeters;
	SetOverlayTextureColorSpace_callback* SetOverlayTextureColorSpace;
	GetOverlayTextureColorSpace_callback* GetOverlayTextureColorSpace;
	SetOverlayTextureBounds_callback* SetOverlayTextureBounds;
	GetOverlayTextureBounds_callback* GetOverlayTextureBounds;
	GetOverlayTransformType_callback* GetOverlayTransformType;
	SetOverlayTransformAbsolute_callback* SetOverlayTransformAbsolute;
	GetOverlayTransformAbsolute_callback* GetOverlayTransformAbsolute;
	SetOverlayTransformTrackedDeviceRelative_callback* SetOverlayTransformTrackedDeviceRelative;
	GetOverlayTransformTrackedDeviceRelative_callback* GetOverlayTransformTrackedDeviceRelative;
	SetOverlayTransformTrackedDeviceComponent_callback* SetOverlayTransformTrackedDeviceComponent;
	GetOverlayTransformTrackedDeviceComponent_callback* GetOverlayTransformTrackedDeviceComponent;
	ShowOverlay_callback* ShowOverlay;
	HideOverlay_callback* HideOverlay;
	IsOverlayVisible_callback* IsOverlayVisible;
	GetTransformForOverlayCoordinates_callback* GetTransformForOverlayCoordinates;
	PollNextOverlayEvent_callback* PollNextOverlayEvent;
	GetOverlayInputMethod_callback* GetOverlayInputMethod;
	SetOverlayInputMethod_callback* SetOverlayInputMethod;
	GetOverlayMouseScale_callback* GetOverlayMouseScale;
	SetOverlayMouseScale_callback* SetOverlayMouseScale;
	ComputeOverlayIntersection_callback* ComputeOverlayIntersection;
	HandleControllerOverlayInteractionAsMouse_callback* HandleControllerOverlayInteractionAsMouse;
	IsHoverTargetOverlay_callback* IsHoverTargetOverlay;
	GetGamepadFocusOverlay_callback* GetGamepadFocusOverlay;
	SetGamepadFocusOverlay_callback* SetGamepadFocusOverlay;
	SetOverlayNeighbor_callback* SetOverlayNeighbor;
	MoveGamepadFocusToNeighbor_callback* MoveGamepadFocusToNeighbor;
	SetOverlayTexture_callback* SetOverlayTexture;
	ClearOverlayTexture_callback* ClearOverlayTexture;
	SetOverlayRaw_callback* SetOverlayRaw;
	SetOverlayFromFile_callback* SetOverlayFromFile;
	GetOverlayTexture_callback* GetOverlayTexture;
	ReleaseNativeOverlayHandle_callback* ReleaseNativeOverlayHandle;
	GetOverlayTextureSize_callback* GetOverlayTextureSize;
	CreateDashboardOverlay_callback* CreateDashboardOverlay;
	IsDashboardVisible_callback* IsDashboardVisible;
	IsActiveDashboardOverlay_callback* IsActiveDashboardOverlay;
	SetDashboardOverlaySceneProcess_callback* SetDashboardOverlaySceneProcess;
	GetDashboardOverlaySceneProcess_callback* GetDashboardOverlaySceneProcess;
	ShowDashboard_callback* ShowDashboard;
	GetPrimaryDashboardDevice_callback* GetPrimaryDashboardDevice;
	ShowKeyboard_callback* ShowKeyboard;
	ShowKeyboardForOverlay_callback* ShowKeyboardForOverlay;
	GetKeyboardText_callback* GetKeyboardText;
	HideKeyboard_callback* HideKeyboard;
	SetKeyboardTransformAbsolute_callback* SetKeyboardTransformAbsolute;
	SetKeyboardPositionForOverlay_callback* SetKeyboardPositionForOverlay;
	SetOverlayIntersectionMask_callback* SetOverlayIntersectionMask;
	GetOverlayFlags_callback* GetOverlayFlags;
	ShowMessageOverlay_callback* ShowMessageOverlay;
	typedef EVROverlayError FindOverlay_callback(char* pchOverlayKey, VROverlayHandle_t* pOverlayHandle);
	typedef EVROverlayError CreateOverlay_callback(char* pchOverlayKey, char* pchOverlayFriendlyName, VROverlayHandle_t* pOverlayHandle);
	typedef EVROverlayError DestroyOverlay_callback(VROverlayHandle_t ulOverlayHandle);
	typedef EVROverlayError SetHighQualityOverlay_callback(VROverlayHandle_t ulOverlayHandle);
	typedef VROverlayHandle_t GetHighQualityOverlay_callback();
	typedef uint32_t GetOverlayKey_callback(VROverlayHandle_t ulOverlayHandle, char* pchValue, uint32_t unBufferSize, EVROverlayError* pError);
	typedef uint32_t GetOverlayName_callback(VROverlayHandle_t ulOverlayHandle, char* pchValue, uint32_t unBufferSize, EVROverlayError* pError);
	typedef EVROverlayError GetOverlayImageData_callback(VROverlayHandle_t ulOverlayHandle, void* pvBuffer, uint32_t unBufferSize, uint32_t* punWidth, uint32_t* punHeight);
	typedef char* GetOverlayErrorNameFromEnum_callback(EVROverlayError error);
	typedef EVROverlayError SetOverlayRenderingPid_callback(VROverlayHandle_t ulOverlayHandle, uint32_t unPID);
	typedef uint32_t GetOverlayRenderingPid_callback(VROverlayHandle_t ulOverlayHandle);
	typedef EVROverlayError SetOverlayFlag_callback(VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled);
	typedef EVROverlayError GetOverlayFlag_callback(VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool* pbEnabled);
	typedef EVROverlayError SetOverlayColor_callback(VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
	typedef EVROverlayError GetOverlayColor_callback(VROverlayHandle_t ulOverlayHandle, float* pfRed, float* pfGreen, float* pfBlue);
	typedef EVROverlayError SetOverlayAlpha_callback(VROverlayHandle_t ulOverlayHandle, float fAlpha);
	typedef EVROverlayError GetOverlayAlpha_callback(VROverlayHandle_t ulOverlayHandle, float* pfAlpha);
	typedef EVROverlayError SetOverlayTexelAspect_callback(VROverlayHandle_t ulOverlayHandle, float fTexelAspect);
	typedef EVROverlayError GetOverlayTexelAspect_callback(VROverlayHandle_t ulOverlayHandle, float* pfTexelAspect);
	typedef EVROverlayError SetOverlaySortOrder_callback(VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder);
	typedef EVROverlayError GetOverlaySortOrder_callback(VROverlayHandle_t ulOverlayHandle, uint32_t* punSortOrder);
	typedef EVROverlayError SetOverlayWidthInMeters_callback(VROverlayHandle_t ulOverlayHandle, float fWidthInMeters);
	typedef EVROverlayError GetOverlayWidthInMeters_callback(VROverlayHandle_t ulOverlayHandle, float* pfWidthInMeters);
	typedef EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters_callback(VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters);
	typedef EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters_callback(VROverlayHandle_t ulOverlayHandle, float* pfMinDistanceInMeters, float* pfMaxDistanceInMeters);
	typedef EVROverlayError SetOverlayTextureColorSpace_callback(VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace);
	typedef EVROverlayError GetOverlayTextureColorSpace_callback(VROverlayHandle_t ulOverlayHandle, EColorSpace* peTextureColorSpace);
	typedef EVROverlayError SetOverlayTextureBounds_callback(VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t* pOverlayTextureBounds);
	typedef EVROverlayError GetOverlayTextureBounds_callback(VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t* pOverlayTextureBounds);
	typedef EVROverlayError GetOverlayTransformType_callback(VROverlayHandle_t ulOverlayHandle, VROverlayTransformType* peTransformType);
	typedef EVROverlayError SetOverlayTransformAbsolute_callback(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t* pmatTrackingOriginToOverlayTransform);
	typedef EVROverlayError GetOverlayTransformAbsolute_callback(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin* peTrackingOrigin, HmdMatrix34_t* pmatTrackingOriginToOverlayTransform);
	typedef EVROverlayError SetOverlayTransformTrackedDeviceRelative_callback(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t* pmatTrackedDeviceToOverlayTransform);
	typedef EVROverlayError GetOverlayTransformTrackedDeviceRelative_callback(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t* punTrackedDevice, HmdMatrix34_t* pmatTrackedDeviceToOverlayTransform);
	typedef EVROverlayError SetOverlayTransformTrackedDeviceComponent_callback(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, char* pchComponentName);
	typedef EVROverlayError GetOverlayTransformTrackedDeviceComponent_callback(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t* punDeviceIndex, char* pchComponentName, uint32_t unComponentNameSize);
	typedef EVROverlayError ShowOverlay_callback(VROverlayHandle_t ulOverlayHandle);
	typedef EVROverlayError HideOverlay_callback(VROverlayHandle_t ulOverlayHandle);
	typedef bool IsOverlayVisible_callback(VROverlayHandle_t ulOverlayHandle);
	typedef EVROverlayError GetTransformForOverlayCoordinates_callback(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t* pmatTransform);
	typedef bool PollNextOverlayEvent_callback(VROverlayHandle_t ulOverlayHandle, VREvent_t* pEvent, uint32_t uncbVREvent);
	typedef EVROverlayError GetOverlayInputMethod_callback(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod* peInputMethod);
	typedef EVROverlayError SetOverlayInputMethod_callback(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod);
	typedef EVROverlayError GetOverlayMouseScale_callback(VROverlayHandle_t ulOverlayHandle, HmdVector2_t* pvecMouseScale);
	typedef EVROverlayError SetOverlayMouseScale_callback(VROverlayHandle_t ulOverlayHandle, HmdVector2_t* pvecMouseScale);
	typedef bool ComputeOverlayIntersection_callback(VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t* pParams, VROverlayIntersectionResults_t* pResults);
	typedef bool HandleControllerOverlayInteractionAsMouse_callback(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex);
	typedef bool IsHoverTargetOverlay_callback(VROverlayHandle_t ulOverlayHandle);
	typedef VROverlayHandle_t GetGamepadFocusOverlay_callback();
	typedef EVROverlayError SetGamepadFocusOverlay_callback(VROverlayHandle_t ulNewFocusOverlay);
	typedef EVROverlayError SetOverlayNeighbor_callback(EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo);
	typedef EVROverlayError MoveGamepadFocusToNeighbor_callback(EOverlayDirection eDirection, VROverlayHandle_t ulFrom);
	typedef EVROverlayError SetOverlayTexture_callback(VROverlayHandle_t ulOverlayHandle, Texture_t* pTexture);
	typedef EVROverlayError ClearOverlayTexture_callback(VROverlayHandle_t ulOverlayHandle);
	typedef EVROverlayError SetOverlayRaw_callback(VROverlayHandle_t ulOverlayHandle, void* pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);
	typedef EVROverlayError SetOverlayFromFile_callback(VROverlayHandle_t ulOverlayHandle, char* pchFilePath);
	typedef EVROverlayError GetOverlayTexture_callback(VROverlayHandle_t ulOverlayHandle, void** pNativeTextureHandle, void* pNativeTextureRef, uint32_t* pWidth, uint32_t* pHeight, uint32_t* pNativeFormat, ETextureType* pAPIType, EColorSpace* pColorSpace, VRTextureBounds_t* pTextureBounds);
	typedef EVROverlayError ReleaseNativeOverlayHandle_callback(VROverlayHandle_t ulOverlayHandle, void* pNativeTextureHandle);
	typedef EVROverlayError GetOverlayTextureSize_callback(VROverlayHandle_t ulOverlayHandle, uint32_t* pWidth, uint32_t* pHeight);
	typedef EVROverlayError CreateDashboardOverlay_callback(char* pchOverlayKey, char* pchOverlayFriendlyName, VROverlayHandle_t* pMainHandle, VROverlayHandle_t* pThumbnailHandle);
	typedef bool IsDashboardVisible_callback();
	typedef bool IsActiveDashboardOverlay_callback(VROverlayHandle_t ulOverlayHandle);
	typedef EVROverlayError SetDashboardOverlaySceneProcess_callback(VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId);
	typedef EVROverlayError GetDashboardOverlaySceneProcess_callback(VROverlayHandle_t ulOverlayHandle, uint32_t* punProcessId);
	typedef void ShowDashboard_callback(char* pchOverlayToShow);
	typedef TrackedDeviceIndex_t GetPrimaryDashboardDevice_callback();
	typedef EVROverlayError ShowKeyboard_callback(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char* pchDescription, uint32_t unCharMax, char* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	typedef EVROverlayError ShowKeyboardForOverlay_callback(VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char* pchDescription, uint32_t unCharMax, char* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	typedef uint32_t GetKeyboardText_callback(char* pchText, uint32_t cchText);
	typedef void HideKeyboard_callback();
	typedef void SetKeyboardTransformAbsolute_callback(ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t* pmatTrackingOriginToKeyboardTransform);
	typedef void SetKeyboardPositionForOverlay_callback(VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect);
	typedef EVROverlayError SetOverlayIntersectionMask_callback(VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t* pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize);
	typedef EVROverlayError GetOverlayFlags_callback(VROverlayHandle_t ulOverlayHandle, uint32_t* pFlags);
	typedef VRMessageOverlayResponse ShowMessageOverlay_callback(char* pchText, char* pchCaption, char* pchButton0Text, char* pchButton1Text, char* pchButton2Text, char* pchButton3Text);
};
struct VR_IVRRenderModels_FnTable {
	LoadRenderModel_Async_callback* LoadRenderModel_Async;
	FreeRenderModel_callback* FreeRenderModel;
	LoadTexture_Async_callback* LoadTexture_Async;
	FreeTexture_callback* FreeTexture;
	LoadTextureD3D11_Async_callback* LoadTextureD3D11_Async;
	LoadIntoTextureD3D11_Async_callback* LoadIntoTextureD3D11_Async;
	FreeTextureD3D11_callback* FreeTextureD3D11;
	GetRenderModelName_callback* GetRenderModelName;
	GetRenderModelCount_callback* GetRenderModelCount;
	GetComponentCount_callback* GetComponentCount;
	GetComponentName_callback* GetComponentName;
	GetComponentButtonMask_callback* GetComponentButtonMask;
	GetComponentRenderModelName_callback* GetComponentRenderModelName;
	GetComponentState_callback* GetComponentState;
	RenderModelHasComponent_callback* RenderModelHasComponent;
	GetRenderModelThumbnailURL_callback* GetRenderModelThumbnailURL;
	GetRenderModelOriginalPath_callback* GetRenderModelOriginalPath;
	GetRenderModelErrorNameFromEnum_callback* GetRenderModelErrorNameFromEnum;
	typedef EVRRenderModelError LoadRenderModel_Async_callback(char* pchRenderModelName, RenderModel_t** ppRenderModel);
	typedef void FreeRenderModel_callback(RenderModel_t* pRenderModel);
	typedef EVRRenderModelError LoadTexture_Async_callback(TextureID_t textureId, RenderModel_TextureMap_t** ppTexture);
	typedef void FreeTexture_callback(RenderModel_TextureMap_t* pTexture);
	typedef EVRRenderModelError LoadTextureD3D11_Async_callback(TextureID_t textureId, void* pD3D11Device, void** ppD3D11Texture2D);
	typedef EVRRenderModelError LoadIntoTextureD3D11_Async_callback(TextureID_t textureId, void* pDstTexture);
	typedef void FreeTextureD3D11_callback(void* pD3D11Texture2D);
	typedef uint32_t GetRenderModelName_callback(uint32_t unRenderModelIndex, char* pchRenderModelName, uint32_t unRenderModelNameLen);
	typedef uint32_t GetRenderModelCount_callback();
	typedef uint32_t GetComponentCount_callback(char* pchRenderModelName);
	typedef uint32_t GetComponentName_callback(char* pchRenderModelName, uint32_t unComponentIndex, char* pchComponentName, uint32_t unComponentNameLen);
	typedef uint64_t GetComponentButtonMask_callback(char* pchRenderModelName, char* pchComponentName);
	typedef uint32_t GetComponentRenderModelName_callback(char* pchRenderModelName, char* pchComponentName, char* pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);
	typedef bool GetComponentState_callback(char* pchRenderModelName, char* pchComponentName, VRControllerState_t* pControllerState, RenderModel_ControllerMode_State_t* pState, RenderModel_ComponentState_t* pComponentState);
	typedef bool RenderModelHasComponent_callback(char* pchRenderModelName, char* pchComponentName);
	typedef uint32_t GetRenderModelThumbnailURL_callback(char* pchRenderModelName, char* pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError* peError);
	typedef uint32_t GetRenderModelOriginalPath_callback(char* pchRenderModelName, char* pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError* peError);
	typedef char* GetRenderModelErrorNameFromEnum_callback(EVRRenderModelError error);
};
struct VR_IVRNotifications_FnTable {
	CreateNotification_callback* CreateNotification;
	RemoveNotification_callback* RemoveNotification;
	typedef EVRNotificationError CreateNotification_callback(VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, char* pchText, EVRNotificationStyle style, NotificationBitmap_t* pImage, VRNotificationId* pNotificationId);
	typedef EVRNotificationError RemoveNotification_callback(VRNotificationId notificationId);
};
struct VR_IVRSettings_FnTable {
	GetSettingsErrorNameFromEnum_callback* GetSettingsErrorNameFromEnum;
	Sync_callback* Sync;
	SetBool_callback* SetBool;
	SetInt32_callback* SetInt32;
	SetFloat_callback* SetFloat;
	SetString_callback* SetString;
	GetBool_callback* GetBool;
	GetInt32_callback* GetInt32;
	GetFloat_callback* GetFloat;
	GetString_callback* GetString;
	RemoveSection_callback* RemoveSection;
	RemoveKeyInSection_callback* RemoveKeyInSection;
	typedef char* GetSettingsErrorNameFromEnum_callback(EVRSettingsError eError);
	typedef bool Sync_callback(bool bForce, EVRSettingsError* peError);
	typedef void SetBool_callback(char* pchSection, char* pchSettingsKey, bool bValue, EVRSettingsError* peError);
	typedef void SetInt32_callback(char* pchSection, char* pchSettingsKey, int32_t nValue, EVRSettingsError* peError);
	typedef void SetFloat_callback(char* pchSection, char* pchSettingsKey, float flValue, EVRSettingsError* peError);
	typedef void SetString_callback(char* pchSection, char* pchSettingsKey, char* pchValue, EVRSettingsError* peError);
	typedef bool GetBool_callback(char* pchSection, char* pchSettingsKey, EVRSettingsError* peError);
	typedef int32_t GetInt32_callback(char* pchSection, char* pchSettingsKey, EVRSettingsError* peError);
	typedef float GetFloat_callback(char* pchSection, char* pchSettingsKey, EVRSettingsError* peError);
	typedef void GetString_callback(char* pchSection, char* pchSettingsKey, char* pchValue, uint32_t unValueLen, EVRSettingsError* peError);
	typedef void RemoveSection_callback(char* pchSection, EVRSettingsError* peError);
	typedef void RemoveKeyInSection_callback(char* pchSection, char* pchSettingsKey, EVRSettingsError* peError);
};
struct VR_IVRScreenshots_FnTable {
	RequestScreenshot_callback* RequestScreenshot;
	HookScreenshot_callback* HookScreenshot;
	GetScreenshotPropertyType_callback* GetScreenshotPropertyType;
	GetScreenshotPropertyFilename_callback* GetScreenshotPropertyFilename;
	UpdateScreenshotProgress_callback* UpdateScreenshotProgress;
	TakeStereoScreenshot_callback* TakeStereoScreenshot;
	SubmitScreenshot_callback* SubmitScreenshot;
	typedef EVRScreenshotError RequestScreenshot_callback(ScreenshotHandle_t* pOutScreenshotHandle, EVRScreenshotType type, char* pchPreviewFilename, char* pchVRFilename);
	typedef EVRScreenshotError HookScreenshot_callback(EVRScreenshotType* pSupportedTypes, int numTypes);
	typedef EVRScreenshotType GetScreenshotPropertyType_callback(ScreenshotHandle_t screenshotHandle, EVRScreenshotError* pError);
	typedef uint32_t GetScreenshotPropertyFilename_callback(ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char* pchFilename, uint32_t cchFilename, EVRScreenshotError* pError);
	typedef EVRScreenshotError UpdateScreenshotProgress_callback(ScreenshotHandle_t screenshotHandle, float flProgress);
	typedef EVRScreenshotError TakeStereoScreenshot_callback(ScreenshotHandle_t* pOutScreenshotHandle, char* pchPreviewFilename, char* pchVRFilename);
	typedef EVRScreenshotError SubmitScreenshot_callback(ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, char* pchSourcePreviewFilename, char* pchSourceVRFilename);
};
struct VR_IVRResources_FnTable {
	LoadSharedResource_callback* LoadSharedResource;
	GetResourceFullPath_callback* GetResourceFullPath;
	typedef uint32_t LoadSharedResource_callback(char* pchResourceName, char* pchBuffer, uint32_t unBufferLen);
	typedef uint32_t GetResourceFullPath_callback(char* pchResourceName, char* pchResourceTypeDirectory, char* pchPathBuffer, uint32_t unBufferLen);
};
