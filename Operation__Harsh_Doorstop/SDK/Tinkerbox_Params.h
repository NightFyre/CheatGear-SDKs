#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Tinkerbox.TBBasePlayerController.TeamTalk
	 */
	struct ATBBasePlayerController_TeamTalk_Params
	{	};

	/**
	 * Function Tinkerbox.TBBasePlayerController.Talk
	 */
	struct ATBBasePlayerController_Talk_Params
	{	};

	/**
	 * Function Tinkerbox.TBBasePlayerController.OnShowScoreboardReleased
	 */
	struct ATBBasePlayerController_OnShowScoreboardReleased_Params
	{	};

	/**
	 * Function Tinkerbox.TBBasePlayerController.OnShowScoreboardPressed
	 */
	struct ATBBasePlayerController_OnShowScoreboardPressed_Params
	{	};

	/**
	 * Function Tinkerbox.TBBasePlayerController.OnPauseMenu
	 */
	struct ATBBasePlayerController_OnPauseMenu_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameInstance.UnloadScoreboardMenu
	 */
	struct UTBGameInstance_UnloadScoreboardMenu_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameInstance.UnloadMainMenu
	 */
	struct UTBGameInstance_UnloadMainMenu_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameInstance.LoadScoreboardMenu
	 */
	struct UTBGameInstance_LoadScoreboardMenu_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameInstance.LoadMainMenu
	 */
	struct UTBGameInstance_LoadMainMenu_Params
	{
	public:
		bool                                                       bExclusive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameInstance.GoToMainMenu
	 */
	struct UTBGameInstance_GoToMainMenu_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameInstance.GetGameBuildInfo
	 */
	struct UTBGameInstance_GetGameBuildInfo_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameInstance.GetCurrentSessionHostAddressStr
	 */
	struct UTBGameInstance_GetCurrentSessionHostAddressStr_Params
	{
	public:
		class FString                                              OutHostAddrStr;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreferSteamP2PAddr;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAppendPort;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBBaseScoreboardMenu.ReceiveScoreboardListRowAdded
	 */
	struct UTBBaseScoreboardMenu_ReceiveScoreboardListRowAdded_Params
	{
	public:
		class UTBScoreboardListingRow*                             NewListEntry;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.SetVoiceStateIcon
	 */
	struct UTBScoreboardListingRow_SetVoiceStateIcon_Params
	{
	public:
		class UTexture2D*                                          NewIcon;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.RefreshListing
	 */
	struct UTBScoreboardListingRow_RefreshListing_Params
	{	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.ReceivePlayerVoiceStateChanged
	 */
	struct UTBScoreboardListingRow_ReceivePlayerVoiceStateChanged_Params
	{
	public:
		EPlayerVoiceState                                          NewVoiceState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.OnMutePlayer
	 */
	struct UTBScoreboardListingRow_OnMutePlayer_Params
	{	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.Init
	 */
	struct UTBScoreboardListingRow_Init_Params
	{
	public:
		class UTBBaseScoreboardMenu*                               InParentMenu;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBasePlayerState*                                  InPlayerState;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInRefreshListingOnTick;                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.HasInitialized
	 */
	struct UTBScoreboardListingRow_HasInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.GetIconForVoiceState
	 */
	struct UTBScoreboardListingRow_GetIconForVoiceState_Params
	{
	public:
		EPlayerVoiceState                                          VoiceState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9JHA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tinkerbox.TBScoreboardListingRow.GetCurrentPing
	 */
	struct UTBScoreboardListingRow_GetCurrentPing_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBBlueprintFunctions.GetServerPort
	 */
	struct UTBBlueprintFunctions_GetServerPort_Params
	{
	public:
		struct FServerInfo                                         InServerInfo;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBBlueprintFunctions.GetServerIpPort
	 */
	struct UTBBlueprintFunctions_GetServerIpPort_Params
	{
	public:
		struct FServerInfo                                         InServerInfo;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBBlueprintFunctions.GetServerIp
	 */
	struct UTBBlueprintFunctions_GetServerIp_Params
	{
	public:
		struct FServerInfo                                         InServerInfo;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBBlueprintFunctions.GetGameBuildInfo
	 */
	struct UTBBlueprintFunctions_GetGameBuildInfo_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBBlueprintFunctions.DetermineObjectType
	 */
	struct UTBBlueprintFunctions_DetermineObjectType_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESpawnedObject                                             ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBFreeCamPlayerCharacter.OnCameraPanReleased
	 */
	struct ATBFreeCamPlayerCharacter_OnCameraPanReleased_Params
	{	};

	/**
	 * Function Tinkerbox.TBFreeCamPlayerCharacter.OnCameraPanPressed
	 */
	struct ATBFreeCamPlayerCharacter_OnCameraPanPressed_Params
	{	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot9KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot9KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot8KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot8KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot7KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot7KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot6KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot6KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot5KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot5KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot4KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot4KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot3KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot3KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot2KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot2KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot1KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot1KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetWeaponSlot0KeyBinding
	 */
	struct UTBGameUserSettings_SetWeaponSlot0KeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_SetVoiceVolumeLevelNormalized_Params
	{
	public:
		float                                                      NormVoiceVolume;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevel
	 */
	struct UTBGameUserSettings_SetVoiceVolumeLevel_Params
	{
	public:
		float                                                      VoiceVolume;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetUseKeyBinding
	 */
	struct UTBGameUserSettings_SetUseKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSprintKeyBinding
	 */
	struct UTBGameUserSettings_SetSprintKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_SetSoundEffectsVolumeLevelNormalized_Params
	{
	public:
		float                                                      NormSFXVolume;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevel
	 */
	struct UTBGameUserSettings_SetSoundEffectsVolumeLevel_Params
	{
	public:
		float                                                      SFXVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSmoothMouseEnabled
	 */
	struct UTBGameUserSettings_SetSmoothMouseEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSmoothFrameRateEnabled
	 */
	struct UTBGameUserSettings_SetSmoothFrameRateEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetShowScoreboardKeyBinding
	 */
	struct UTBGameUserSettings_SetShowScoreboardKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSayTeamKeyBinding
	 */
	struct UTBGameUserSettings_SetSayTeamKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSaySquadKeyBinding
	 */
	struct UTBGameUserSettings_SetSaySquadKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetSayAllKeyBinding
	 */
	struct UTBGameUserSettings_SetSayAllKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetReloadKeyBinding
	 */
	struct UTBGameUserSettings_SetReloadKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetRadialMenuKeyBinding
	 */
	struct UTBGameUserSettings_SetRadialMenuKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetPushToTalkSquadKeyBinding
	 */
	struct UTBGameUserSettings_SetPushToTalkSquadKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetPushToTalkLocalKeyBinding
	 */
	struct UTBGameUserSettings_SetPushToTalkLocalKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetPushToTalkCommandKeyBinding
	 */
	struct UTBGameUserSettings_SetPushToTalkCommandKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetProneKeyBinding
	 */
	struct UTBGameUserSettings_SetProneKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetPreviousItemKeyBinding
	 */
	struct UTBGameUserSettings_SetPreviousItemKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetPlayerIsChangingKeyBindings
	 */
	struct UTBGameUserSettings_SetPlayerIsChangingKeyBindings_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetPlayerCharacterMeshRowName
	 */
	struct UTBGameUserSettings_SetPlayerCharacterMeshRowName_Params
	{
	public:
		class FName                                                NewRowName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetNextItemKeyBinding
	 */
	struct UTBGameUserSettings_SetNextItemKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_SetMusicVolumeLevelNormalized_Params
	{
	public:
		float                                                      NormMusicVolume;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevel
	 */
	struct UTBGameUserSettings_SetMusicVolumeLevel_Params
	{
	public:
		float                                                      MusicVolume;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMoveRightKeyBinding
	 */
	struct UTBGameUserSettings_SetMoveRightKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMoveLeftKeyBinding
	 */
	struct UTBGameUserSettings_SetMoveLeftKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMoveForwardKeyBinding
	 */
	struct UTBGameUserSettings_SetMoveForwardKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMoveBackwardKeyBinding
	 */
	struct UTBGameUserSettings_SetMoveBackwardKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMouseSensitivityNormalized
	 */
	struct UTBGameUserSettings_SetMouseSensitivityNormalized_Params
	{
	public:
		float                                                      NormSensitivityX;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NormSensitivityY;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMouseSensitivity
	 */
	struct UTBGameUserSettings_SetMouseSensitivity_Params
	{
	public:
		float                                                      SensitivityX;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SensitivityY;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMotionBlurEnabled
	 */
	struct UTBGameUserSettings_SetMotionBlurEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_SetMasterVolumeLevelNormalized_Params
	{
	public:
		float                                                      NormMasterVolume;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevel
	 */
	struct UTBGameUserSettings_SetMasterVolumeLevel_Params
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetLeanRightKeyBinding
	 */
	struct UTBGameUserSettings_SetLeanRightKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetLeanLeftKeyBinding
	 */
	struct UTBGameUserSettings_SetLeanLeftKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetJumpKeyBinding
	 */
	struct UTBGameUserSettings_SetJumpKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetInvertMousePitch
	 */
	struct UTBGameUserSettings_SetInvertMousePitch_Params
	{
	public:
		bool                                                       bInvertPitch;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetFireKeyBinding
	 */
	struct UTBGameUserSettings_SetFireKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetFieldOfView
	 */
	struct UTBGameUserSettings_SetFieldOfView_Params
	{
	public:
		float                                                      NewFOV;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetDisplayGamma
	 */
	struct UTBGameUserSettings_SetDisplayGamma_Params
	{
	public:
		float                                                      NewGamma;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_SetDialogueVolumeLevelNormalized_Params
	{
	public:
		float                                                      NormDialogueVolume;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevel
	 */
	struct UTBGameUserSettings_SetDialogueVolumeLevel_Params
	{
	public:
		float                                                      DialogueVolume;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetDeployMenuKeyBinding
	 */
	struct UTBGameUserSettings_SetDeployMenuKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetCrouchKeyBinding
	 */
	struct UTBGameUserSettings_SetCrouchKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetCameraToggleKeyBinding
	 */
	struct UTBGameUserSettings_SetCameraToggleKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetAllowSoundInBackground
	 */
	struct UTBGameUserSettings_SetAllowSoundInBackground_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.SetAimDownSightsKeyBinding
	 */
	struct UTBGameUserSettings_SetAimDownSightsKeyBinding_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsVoiceVolumeLevelDirty
	 */
	struct UTBGameUserSettings_IsVoiceVolumeLevelDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsSoundInBackgroundAllowed
	 */
	struct UTBGameUserSettings_IsSoundInBackgroundAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsSoundEffectsVolumeLevelDirty
	 */
	struct UTBGameUserSettings_IsSoundEffectsVolumeLevelDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsSmoothMouseEnabled
	 */
	struct UTBGameUserSettings_IsSmoothMouseEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsSmoothMouseDirty
	 */
	struct UTBGameUserSettings_IsSmoothMouseDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateEnabled
	 */
	struct UTBGameUserSettings_IsSmoothFrameRateEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateDirty
	 */
	struct UTBGameUserSettings_IsSmoothFrameRateDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsPlayerCharacterMeshRowNameDirty
	 */
	struct UTBGameUserSettings_IsPlayerCharacterMeshRowNameDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsPlayerChangingKeyBindings
	 */
	struct UTBGameUserSettings_IsPlayerChangingKeyBindings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsMusicVolumeLevelDirty
	 */
	struct UTBGameUserSettings_IsMusicVolumeLevelDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsMouseSensitivityDirty
	 */
	struct UTBGameUserSettings_IsMouseSensitivityDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsMotionBlurEnabled
	 */
	struct UTBGameUserSettings_IsMotionBlurEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsMotionBlurDirty
	 */
	struct UTBGameUserSettings_IsMotionBlurDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsMasterVolumeLevelDirty
	 */
	struct UTBGameUserSettings_IsMasterVolumeLevelDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsInvertMouseDirty
	 */
	struct UTBGameUserSettings_IsInvertMouseDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeEnabled
	 */
	struct UTBGameUserSettings_IsHeadphoneModeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeDirty
	 */
	struct UTBGameUserSettings_IsHeadphoneModeDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsFrameRateLimitDirty
	 */
	struct UTBGameUserSettings_IsFrameRateLimitDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsFieldOfViewDirty
	 */
	struct UTBGameUserSettings_IsFieldOfViewDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsDisplayGammaDirty
	 */
	struct UTBGameUserSettings_IsDisplayGammaDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsDialogueVolumeLevelDirty
	 */
	struct UTBGameUserSettings_IsDialogueVolumeLevelDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsAudioQualityDirty
	 */
	struct UTBGameUserSettings_IsAudioQualityDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsAnyInputKeyBindingDirty
	 */
	struct UTBGameUserSettings_IsAnyInputKeyBindingDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.IsAllowSoundInBackgroundDirty
	 */
	struct UTBGameUserSettings_IsAllowSoundInBackgroundDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot9KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot9KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot8KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot8KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot7KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot7KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot6KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot6KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot5KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot5KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot4KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot4KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot3KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot3KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot2KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot2KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot1KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot1KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetWeaponSlot0KeyBinding
	 */
	struct UTBGameUserSettings_GetWeaponSlot0KeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_GetVoiceVolumeLevelNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevel
	 */
	struct UTBGameUserSettings_GetVoiceVolumeLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetUseKeyBinding
	 */
	struct UTBGameUserSettings_GetUseKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetSprintKeyBinding
	 */
	struct UTBGameUserSettings_GetSprintKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_GetSoundEffectsVolumeLevelNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevel
	 */
	struct UTBGameUserSettings_GetSoundEffectsVolumeLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetShowScoreboardKeyBinding
	 */
	struct UTBGameUserSettings_GetShowScoreboardKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetSayTeamKeyBinding
	 */
	struct UTBGameUserSettings_GetSayTeamKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetSaySquadKeyBinding
	 */
	struct UTBGameUserSettings_GetSaySquadKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetSayAllKeyBinding
	 */
	struct UTBGameUserSettings_GetSayAllKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetReloadKeyBinding
	 */
	struct UTBGameUserSettings_GetReloadKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetRadialMenuKeyBinding
	 */
	struct UTBGameUserSettings_GetRadialMenuKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetPushToTalkSquadKeyBinding
	 */
	struct UTBGameUserSettings_GetPushToTalkSquadKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetPushToTalkLocalKeyBinding
	 */
	struct UTBGameUserSettings_GetPushToTalkLocalKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetPushToTalkCommandKeyBinding
	 */
	struct UTBGameUserSettings_GetPushToTalkCommandKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetProneKeyBinding
	 */
	struct UTBGameUserSettings_GetProneKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetPreviousItemKeyBinding
	 */
	struct UTBGameUserSettings_GetPreviousItemKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetPlayerCharacterMeshRowName
	 */
	struct UTBGameUserSettings_GetPlayerCharacterMeshRowName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetNextItemKeyBinding
	 */
	struct UTBGameUserSettings_GetNextItemKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_GetMusicVolumeLevelNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevel
	 */
	struct UTBGameUserSettings_GetMusicVolumeLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMoveRightKeyBinding
	 */
	struct UTBGameUserSettings_GetMoveRightKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMoveLeftKeyBinding
	 */
	struct UTBGameUserSettings_GetMoveLeftKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMoveForwardKeyBinding
	 */
	struct UTBGameUserSettings_GetMoveForwardKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMoveBackwardKeyBinding
	 */
	struct UTBGameUserSettings_GetMoveBackwardKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityYNormalized
	 */
	struct UTBGameUserSettings_GetMouseSensitivityYNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityY
	 */
	struct UTBGameUserSettings_GetMouseSensitivityY_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityXNormalized
	 */
	struct UTBGameUserSettings_GetMouseSensitivityXNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityX
	 */
	struct UTBGameUserSettings_GetMouseSensitivityX_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_GetMasterVolumeLevelNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevel
	 */
	struct UTBGameUserSettings_GetMasterVolumeLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetLocalPlayerControllerBP
	 */
	struct UTBGameUserSettings_GetLocalPlayerControllerBP_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyBinding
	 */
	struct UTBGameUserSettings_GetLeanRightKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetLeanLeftKeyBinding
	 */
	struct UTBGameUserSettings_GetLeanLeftKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetJumpKeyBinding
	 */
	struct UTBGameUserSettings_GetJumpKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetInvertMousePitch
	 */
	struct UTBGameUserSettings_GetInvertMousePitch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetFrameRateLimitCurrent
	 */
	struct UTBGameUserSettings_GetFrameRateLimitCurrent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetFireKeyBinding
	 */
	struct UTBGameUserSettings_GetFireKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetFieldOfView
	 */
	struct UTBGameUserSettings_GetFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetDisplayGamma
	 */
	struct UTBGameUserSettings_GetDisplayGamma_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevelNormalized
	 */
	struct UTBGameUserSettings_GetDialogueVolumeLevelNormalized_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevel
	 */
	struct UTBGameUserSettings_GetDialogueVolumeLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetDeployMenuKeyBinding
	 */
	struct UTBGameUserSettings_GetDeployMenuKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetCrouchKeyBinding
	 */
	struct UTBGameUserSettings_GetCrouchKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetCameraToggleKeyBinding
	 */
	struct UTBGameUserSettings_GetCameraToggleKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.GetAimDownSightsKeyBinding
	 */
	struct UTBGameUserSettings_GetAimDownSightsKeyBinding_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.FirstRunHardwareBenchmark
	 */
	struct UTBGameUserSettings_FirstRunHardwareBenchmark_Params
	{
	public:
		int32_t                                                    WorkScale;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CPUMultiplier;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GPUMultiplier;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGameUserSettings.EnableHeadphoneMode
	 */
	struct UTBGameUserSettings_EnableHeadphoneMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.SetSimulatePhysicsOnAllActors
	 */
	struct UTBGizmoEditorComponent_SetSimulatePhysicsOnAllActors_Params
	{
	public:
		bool                                                       bSimulate;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.SetScaleOnAllActors
	 */
	struct UTBGizmoEditorComponent_SetScaleOnAllActors_Params
	{
	public:
		struct FVector                                             NewScale;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.SetRotationOnAllActors
	 */
	struct UTBGizmoEditorComponent_SetRotationOnAllActors_Params
	{
	public:
		struct FRotator                                            NewRot;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.SetLocationOnAllActors
	 */
	struct UTBGizmoEditorComponent_SetLocationOnAllActors_Params
	{
	public:
		struct FVector                                             NewLoc;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerSetSimulatePhysicsOnAllActors
	 */
	struct UTBGizmoEditorComponent_ServerSetSimulatePhysicsOnAllActors_Params
	{
	public:
		bool                                                       bSimulate;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerSetScaleOnAllActors
	 */
	struct UTBGizmoEditorComponent_ServerSetScaleOnAllActors_Params
	{
	public:
		struct FVector                                             NewScale;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerSetRotationOnAllActors
	 */
	struct UTBGizmoEditorComponent_ServerSetRotationOnAllActors_Params
	{
	public:
		struct FRotator                                            NewRot;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerSetLocationOnAllActors
	 */
	struct UTBGizmoEditorComponent_ServerSetLocationOnAllActors_Params
	{
	public:
		struct FVector                                             NewLoc;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerDuplicateAllActors
	 */
	struct UTBGizmoEditorComponent_ServerDuplicateAllActors_Params
	{	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerDuplicateActor
	 */
	struct UTBGizmoEditorComponent_ServerDuplicateActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAttachActiveGizmo;                                      // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerDeleteAllActors
	 */
	struct UTBGizmoEditorComponent_ServerDeleteAllActors_Params
	{	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.ServerDeleteActor
	 */
	struct UTBGizmoEditorComponent_ServerDeleteActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.DuplicateActor
	 */
	struct UTBGizmoEditorComponent_DuplicateActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAttachActiveGizmo;                                      // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.DeleteAllActors
	 */
	struct UTBGizmoEditorComponent_DeleteAllActors_Params
	{	};

	/**
	 * Function Tinkerbox.TBGizmoEditorComponent.DeleteActor
	 */
	struct UTBGizmoEditorComponent_DeleteActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBJoinGameMenu.ReceiveOnRefreshStart
	 */
	struct UTBJoinGameMenu_ReceiveOnRefreshStart_Params
	{	};

	/**
	 * Function Tinkerbox.TBJoinGameMenu.ReceiveOnRefreshComplete
	 */
	struct UTBJoinGameMenu_ReceiveOnRefreshComplete_Params
	{	};

	/**
	 * Function Tinkerbox.TBJoinGameMenu.OnResetFilters
	 */
	struct UTBJoinGameMenu_OnResetFilters_Params
	{	};

	/**
	 * Function Tinkerbox.TBJoinGameMenu.OnRefresh
	 */
	struct UTBJoinGameMenu_OnRefresh_Params
	{	};

	/**
	 * Function Tinkerbox.TBJoinGameMenu.JoinGame
	 */
	struct UTBJoinGameMenu_JoinGame_Params
	{
	public:
		class UTBServerListItemData*                               ServerItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBJoinGameMenu.IsUsingDebugServerListings
	 */
	struct UTBJoinGameMenu_IsUsingDebugServerListings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBObjectComponent.SetObjectStaticMesh
	 */
	struct UTBObjectComponent_SetObjectStaticMesh_Params
	{
	public:
		class UStaticMesh*                                         NewMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBObjectComponent.SetObjectSkeletalMesh
	 */
	struct UTBObjectComponent_SetObjectSkeletalMesh_Params
	{
	public:
		class USkeletalMesh*                                       NewMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBObjectComponent.SetObjectSimulatePhysics
	 */
	struct UTBObjectComponent_SetObjectSimulatePhysics_Params
	{
	public:
		bool                                                       bSimulate;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBObjectComponent.SetObjectScale
	 */
	struct UTBObjectComponent_SetObjectScale_Params
	{
	public:
		struct FVector_NetQuantize100                              NewScale;                                                // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBObjectComponent.OnRep_ObjectStaticMesh
	 */
	struct UTBObjectComponent_OnRep_ObjectStaticMesh_Params
	{	};

	/**
	 * Function Tinkerbox.TBObjectComponent.OnRep_ObjectSkeletalMesh
	 */
	struct UTBObjectComponent_OnRep_ObjectSkeletalMesh_Params
	{	};

	/**
	 * Function Tinkerbox.TBObjectComponent.OnRep_ObjectSimulatePhysics
	 */
	struct UTBObjectComponent_OnRep_ObjectSimulatePhysics_Params
	{	};

	/**
	 * Function Tinkerbox.TBObjectComponent.OnRep_ObjectScale
	 */
	struct UTBObjectComponent_OnRep_ObjectScale_Params
	{	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.Turn
	 */
	struct AATBSandboxFreeCamPawn_Turn_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.OnSprintReleased
	 */
	struct AATBSandboxFreeCamPawn_OnSprintReleased_Params
	{	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.OnSprintPressed
	 */
	struct AATBSandboxFreeCamPawn_OnSprintPressed_Params
	{	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.OnCameraPanReleased
	 */
	struct AATBSandboxFreeCamPawn_OnCameraPanReleased_Params
	{	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.OnCameraPanPressed
	 */
	struct AATBSandboxFreeCamPawn_OnCameraPanPressed_Params
	{	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.LookUp
	 */
	struct AATBSandboxFreeCamPawn_LookUp_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.ATBSandboxFreeCamPawn.IsSprinting
	 */
	struct AATBSandboxFreeCamPawn_IsSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerCharacter.OnCameraPanReleased
	 */
	struct ATBSandboxPlayerCharacter_OnCameraPanReleased_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerCharacter.OnCameraPanPressed
	 */
	struct ATBSandboxPlayerCharacter_OnCameraPanPressed_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.WorldSpaceManipulationToggle
	 */
	struct ATBSandboxPlayerController_WorldSpaceManipulationToggle_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ToggleFreeCam
	 */
	struct ATBSandboxPlayerController_ToggleFreeCam_Params
	{
	public:
		bool                                                       bNewFreeCam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LHY8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Loc;                                                     // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ToggleEditMode
	 */
	struct ATBSandboxPlayerController_ToggleEditMode_Params
	{
	public:
		bool                                                       bNewEditMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.SwitchActiveGizmo
	 */
	struct ATBSandboxPlayerController_SwitchActiveGizmo_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromTableAtPawn
	 */
	struct ATBSandboxPlayerController_SpawnObjectFromTableAtPawn_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromTable
	 */
	struct ATBSandboxPlayerController_SpawnObjectFromTable_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ObjectSpawnLocation;                                     // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromClass
	 */
	struct ATBSandboxPlayerController_SpawnObjectFromClass_Params
	{
	public:
		class UClass*                                              ObjectClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectData;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.SpawnObject
	 */
	struct ATBSandboxPlayerController_SpawnObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.SetPlayerCharacterMeshRowName
	 */
	struct ATBSandboxPlayerController_SetPlayerCharacterMeshRowName_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ServerToggleFreeCam
	 */
	struct ATBSandboxPlayerController_ServerToggleFreeCam_Params
	{
	public:
		bool                                                       bNewFreeCam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IHXB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector_NetQuantize                                 Loc;                                                     // 0x0004(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ServerToggleEditMode
	 */
	struct ATBSandboxPlayerController_ServerToggleEditMode_Params
	{
	public:
		bool                                                       bNewEditMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ServerSpawnObjectFromTable
	 */
	struct ATBSandboxPlayerController_ServerSpawnObjectFromTable_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ObjectSpawnLocation;                                     // 0x0008(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnToggleFreeCam
	 */
	struct ATBSandboxPlayerController_OnToggleFreeCam_Params
	{
	public:
		bool                                                       bNewFreeCam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnToggleEditMode
	 */
	struct ATBSandboxPlayerController_OnToggleEditMode_Params
	{
	public:
		bool                                                       bNewEditMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnSelectActor
	 */
	struct ATBSandboxPlayerController_OnSelectActor_Params
	{
	public:
		class AActor*                                              NewSelectedActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnObjectDuplicateReleased
	 */
	struct ATBSandboxPlayerController_OnObjectDuplicateReleased_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnObjectDuplicatePressed
	 */
	struct ATBSandboxPlayerController_OnObjectDuplicatePressed_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnLoadedObjectToSpawn
	 */
	struct ATBSandboxPlayerController_OnLoadedObjectToSpawn_Params
	{
	public:
		class UObject*                                             LoadedObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnDeselectAllActors
	 */
	struct ATBSandboxPlayerController_OnDeselectAllActors_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.OnAssetLoadDummy
	 */
	struct ATBSandboxPlayerController_OnAssetLoadDummy_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ObjectSelect
	 */
	struct ATBSandboxPlayerController_ObjectSelect_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.ObjectDelete
	 */
	struct ATBSandboxPlayerController_ObjectDelete_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.LookAtObject
	 */
	struct ATBSandboxPlayerController_LookAtObject_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.IsInFreeCam
	 */
	struct ATBSandboxPlayerController_IsInFreeCam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.IsEditing
	 */
	struct ATBSandboxPlayerController_IsEditing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetSpawnListByCategory
	 */
	struct ATBSandboxPlayerController_GetSpawnListByCategory_Params
	{
	public:
		class FString                                              DesiredCategory;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FName, struct FObjectListing>                   ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetObjectFromCursorPos
	 */
	struct ATBSandboxPlayerController_GetObjectFromCursorPos_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetObjectFromAimPos
	 */
	struct ATBSandboxPlayerController_GetObjectFromAimPos_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetObjectComponent
	 */
	struct ATBSandboxPlayerController_GetObjectComponent_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTBObjectComponent*                                  ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetHitResultUnderCursorByVisibility
	 */
	struct ATBSandboxPlayerController_GetHitResultUnderCursorByVisibility_Params
	{
	public:
		struct FHitResult                                          ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetGizmoEditor
	 */
	struct ATBSandboxPlayerController_GetGizmoEditor_Params
	{
	public:
		class UTBGizmoEditorComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.GetCategoryList
	 */
	struct ATBSandboxPlayerController_GetCategoryList_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.FreeCamToggle
	 */
	struct ATBSandboxPlayerController_FreeCamToggle_Params
	{	};

	/**
	 * Function Tinkerbox.TBSandboxPlayerController.EditModeToggle
	 */
	struct ATBSandboxPlayerController_EditModeToggle_Params
	{	};

	/**
	 * Function Tinkerbox.TBServerListing.SetupListing
	 */
	struct UTBServerListing_SetupListing_Params
	{
	public:
		struct FServerInfo                                         InServerInfo;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBVoiceIndicator.ActiveVoiceRemoved
	 */
	struct UTBVoiceIndicator_ActiveVoiceRemoved_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPanelSlot*                                          NewVoiceWidget;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBVoiceIndicator.ActiveVoiceAdded
	 */
	struct UTBVoiceIndicator_ActiveVoiceAdded_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPanelSlot*                                          NewVoiceWidget;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tinkerbox.TBVoiceIndicatorListing.Init
	 */
	struct UTBVoiceIndicatorListing_Init_Params
	{
	public:
		class UTBVoiceIndicator*                                   InParentMenu;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    InUniqueNetId;                                           // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlayerName;                                            // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
