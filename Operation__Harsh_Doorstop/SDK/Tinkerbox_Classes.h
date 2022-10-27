#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Tinkerbox.TBBaseGameMode
	 * Size -> 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
	 */
	class ATBBaseGameMode : public ADFBaseGameMode
	{
	public:
		class UClass*                                              ScoreboardMenuClass;                                     // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBBasePlayerController
	 * Size -> 0x0000 (FullSize[0x05F8] - InheritedSize[0x05F8])
	 */
	class ATBBasePlayerController : public ADFBasePlayerController
	{
	public:
		void TeamTalk();
		void Talk();
		void OnShowScoreboardReleased();
		void OnShowScoreboardPressed();
		void OnPauseMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameInstance
	 * Size -> 0x0058 (FullSize[0x02E0] - InheritedSize[0x0288])
	 */
	class UTBGameInstance : public UDFBaseGameInstance
	{
	public:
		class UDFBaseMenu*                                         MainMenu;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTBBaseScoreboardMenu*                               ScoreboardMenu;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MainMenuClass;                                           // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      MenuGameMode;                                            // 0x02A0(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bHidePlayerHUDInMainMenu : 1;                            // 0x02B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUseMenuBackgroundMaps : 1;                              // 0x02B8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F87R[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSoftObjectPath>                             MenuBackgroundMaps;                                      // 0x02C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ODZN[0x8];                                   // 0x02D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URCONServerSystem*                                   RCONServerSystem;                                        // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UnloadScoreboardMenu();
		void UnloadMainMenu();
		void LoadScoreboardMenu();
		void LoadMainMenu(bool bExclusive);
		void GoToMainMenu();
		void GetGameBuildInfo();
		bool GetCurrentSessionHostAddressStr(class FString* OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameRulesetBase
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UTBGameRulesetBase : public UDFGameRulesetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameState
	 * Size -> 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
	 */
	class ATBGameState : public ADFBaseGameState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBBasePlayerCharacter
	 * Size -> 0x0000 (FullSize[0x0910] - InheritedSize[0x0910])
	 */
	class ATBBasePlayerCharacter : public ADFBasePlayerCharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBPlayerState
	 * Size -> 0x0000 (FullSize[0x0378] - InheritedSize[0x0378])
	 */
	class ATBPlayerState : public ADFBasePlayerState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBBaseScoreboardMenu
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UTBBaseScoreboardMenu : public UDFBaseMenu
	{
	public:
		class UClass*                                              ScoreboardListRowClass;                                  // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ReceiveScoreboardListRowAdded(class UTBScoreboardListingRow* NewListEntry);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBScoreboardListingRow
	 * Size -> 0x00D8 (FullSize[0x0308] - InheritedSize[0x0230])
	 */
	class UTBScoreboardListingRow : public UUserWidget
	{
	public:
		class UTBBaseScoreboardMenu*                               ParentMenu;                                              // 0x0230(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADFBasePlayerState*                                  PlayerState;                                             // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5M8Y[0x3];                                   // 0x0240(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bRefreshListingOnTick : 1;                               // 0x0243(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2795[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             MutePlayerBtn;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          PlayerName;                                              // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Score;                                                   // 0x0258(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Kills;                                                   // 0x0260(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Deaths;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Ping;                                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              NotTalkingVoiceIcon[0x28];                               // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TalkingVoiceIcon[0x28];                                  // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MutedVoiceIcon[0x28];                                    // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_P96H[0x18];                                  // 0x02F0(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetVoiceStateIcon(class UTexture2D* NewIcon);
		void RefreshListing();
		void ReceivePlayerVoiceStateChanged(EPlayerVoiceState NewVoiceState);
		void OnMutePlayer();
		void Init(class UTBBaseScoreboardMenu* InParentMenu, class ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick);
		bool HasInitialized();
		void GetIconForVoiceState(EPlayerVoiceState VoiceState);
		int32_t GetCurrentPing();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBWorldSettings
	 * Size -> 0x0050 (FullSize[0x0518] - InheritedSize[0x04C8])
	 */
	class ATBWorldSettings : public ADFWorldSettings
	{
	public:
		struct FMinimapGenerationSettings                          MinimapSettings;                                         // 0x04C8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              MinimapImg[0x28];                                        // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBBlueprintFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTBBlueprintFunctions : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetServerPort(const struct FServerInfo& InServerInfo);
		class FString STATIC_GetServerIpPort(const struct FServerInfo& InServerInfo);
		class FString STATIC_GetServerIp(const struct FServerInfo& InServerInfo);
		class FString STATIC_GetGameBuildInfo();
		ESpawnedObject STATIC_DetermineObjectType(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBFreeCamCharacterMovement
	 * Size -> 0x0000 (FullSize[0x06C0] - InheritedSize[0x06C0])
	 */
	class UTBFreeCamCharacterMovement : public UDFCharacterMovementComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBFreeCamPawnMovement
	 * Size -> 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
	 */
	class UTBFreeCamPawnMovement : public USpectatorPawnMovement
	{
	public:
		float                                                      SprintSpeedFactor;                                       // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12TW[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBFreeCamPlayerCharacter
	 * Size -> 0x0010 (FullSize[0x0920] - InheritedSize[0x0910])
	 */
	class ATBFreeCamPlayerCharacter : public ATBBasePlayerCharacter
	{
	public:
		unsigned char                                              bCameraPan : 1;                                          // 0x0910(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XCEW[0x7];                                   // 0x0911(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0918(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnCameraPanReleased();
		void OnCameraPanPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTBFunctionLibrary : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class UTBGameEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameSandbox
	 * Size -> 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
	 */
	class ATBGameSandbox : public ATBBaseGameMode
	{
	public:
		class UClass*                                              FreeCamPawnClass;                                        // 0x0400(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameUserDeveloperSettings
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UTBGameUserDeveloperSettings : public UDeveloperSettings
	{
	public:
		struct FSoftObjectPath                                     SFXSoundMix;                                             // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     MusicSoundMix;                                           // 0x0050(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     VOSoundMix;                                              // 0x0068(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     VoiPSoundMix;                                            // 0x0080(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGameUserSettings
	 * Size -> 0x0740 (FullSize[0x0860] - InheritedSize[0x0120])
	 */
	class UTBGameUserSettings : public UGameUserSettings
	{
	public:
		bool                                                       bUseSmoothFrameRate;                                     // 0x0120(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R3Z9[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredDisplayGamma;                                     // 0x0124(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredFOV;                                              // 0x0128(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMotionBlur;                                          // 0x012C(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OTFR[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredMouseSensitivityX;                                // 0x0130(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredMouseSensitivityY;                                // 0x0134(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInvertMousePitch;                                       // 0x0138(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMouseSmoothing;                                      // 0x0139(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseHeadphoneMode;                                       // 0x013A(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowSoundInBackground;                                 // 0x013B(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredMasterVolumeLevel;                                // 0x013C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedMasterVolumeLevel;                          // 0x0140(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredSFXVolumeLevel;                                   // 0x0144(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedSFXVolumeLevel;                             // 0x0148(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredMusicVolumeLevel;                                 // 0x014C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedMusicVolumeLevel;                           // 0x0150(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredVOVolumeLevel;                                    // 0x0154(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedVOVolumeLevel;                              // 0x0158(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredVoiPVolumeLevel;                                  // 0x015C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastConfirmedVoiPVolumeLevel;                            // 0x0160(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PlayerCharacterMeshRowName;                              // 0x0164(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7RA9[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundMix*                                           DefaultBaseSoundMix;                                     // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundMix*                                           SFXSoundMix;                                             // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundMix*                                           MusicSoundMix;                                           // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundMix*                                           VOSoundMix;                                              // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundMix*                                           VoiPSoundMix;                                            // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayerIsChangingKeyBindings;                            // 0x0198(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KSCG[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                DesiredMoveForwardKey;                                   // 0x01A0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveForwardKey;                             // 0x01B8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredMoveBackwardKey;                                  // 0x01D0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveBackwardKey;                            // 0x01E8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredMoveLeftKey;                                      // 0x0200(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveLeftKey;                                // 0x0218(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredMoveRightKey;                                     // 0x0230(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedMoveRightKey;                               // 0x0248(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredLeanLeftKey;                                      // 0x0260(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedLeanLeftKey;                                // 0x0278(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredLeanRightKey;                                     // 0x0290(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedLeanRightKey;                               // 0x02A8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSprintKey;                                        // 0x02C0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSprintKey;                                  // 0x02D8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredCrouchKey;                                        // 0x02F0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedCrouchKey;                                  // 0x0308(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredProneKey;                                         // 0x0320(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedProneKey;                                   // 0x0338(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredJumpKey;                                          // 0x0350(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedJumpKey;                                    // 0x0368(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredFireKey;                                          // 0x0380(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedFireKey;                                    // 0x0398(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredReloadKey;                                        // 0x03B0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedReloadKey;                                  // 0x03C8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredAimKey;                                           // 0x03E0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedAimKey;                                     // 0x03F8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredNextItemKey;                                      // 0x0410(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedNextItemKey;                                // 0x0428(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPreviousItemKey;                                  // 0x0440(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPreviousItemKey;                            // 0x0458(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot0Key;                                     // 0x0470(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot0Key;                               // 0x0488(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot1Key;                                     // 0x04A0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot1Key;                               // 0x04B8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot2Key;                                     // 0x04D0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot2Key;                               // 0x04E8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot3Key;                                     // 0x0500(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot3Key;                               // 0x0518(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot4Key;                                     // 0x0530(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot4Key;                               // 0x0548(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot5Key;                                     // 0x0560(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot5Key;                               // 0x0578(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot6Key;                                     // 0x0590(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot6Key;                               // 0x05A8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot7Key;                                     // 0x05C0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot7Key;                               // 0x05D8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot8Key;                                     // 0x05F0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot8Key;                               // 0x0608(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredItemSlot9Key;                                     // 0x0620(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedItemSlot9Key;                               // 0x0638(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPushToTalkLocalKey;                               // 0x0650(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPushToTalkLocalKey;                         // 0x0668(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPushToTalkSquadKey;                               // 0x0680(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPushToTalkSquadKey;                         // 0x0698(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredPushToTalkCommandKey;                             // 0x06B0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedPushToTalkCommandKey;                       // 0x06C8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSayAllKey;                                        // 0x06E0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSayAllKey;                                  // 0x06F8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSayTeamKey;                                       // 0x0710(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSayTeamKey;                                 // 0x0728(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredSaySquadKey;                                      // 0x0740(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedSaySquadKey;                                // 0x0758(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredUseKey;                                           // 0x0770(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedUseKey;                                     // 0x0788(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredShowScoreboardKey;                                // 0x07A0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedShowScoreboardKey;                          // 0x07B8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredDeployMenuKey;                                    // 0x07D0(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedDeployMenuKey;                              // 0x07E8(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredRadialMenuKey;                                    // 0x0800(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedRadialMenuKey;                              // 0x0818(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                DesiredCameraToggleKey;                                  // 0x0830(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                LastConfirmedCameraToggleKey;                            // 0x0848(0x0018) Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetWeaponSlot9KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot8KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot7KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot6KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot5KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot4KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot3KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot2KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot1KeyBinding(const struct FInputChord& NewKey);
		void SetWeaponSlot0KeyBinding(const struct FInputChord& NewKey);
		void SetVoiceVolumeLevelNormalized(float NormVoiceVolume);
		void SetVoiceVolumeLevel(float VoiceVolume);
		void SetUseKeyBinding(const struct FInputChord& NewKey);
		void SetSprintKeyBinding(const struct FInputChord& NewKey);
		void SetSoundEffectsVolumeLevelNormalized(float NormSFXVolume);
		void SetSoundEffectsVolumeLevel(float SFXVolume);
		void SetSmoothMouseEnabled(bool bEnable);
		void SetSmoothFrameRateEnabled(bool bEnabled);
		void SetShowScoreboardKeyBinding(const struct FInputChord& NewKey);
		void SetSayTeamKeyBinding(const struct FInputChord& NewKey);
		void SetSaySquadKeyBinding(const struct FInputChord& NewKey);
		void SetSayAllKeyBinding(const struct FInputChord& NewKey);
		void SetReloadKeyBinding(const struct FInputChord& NewKey);
		void SetRadialMenuKeyBinding(const struct FInputChord& NewKey);
		void SetPushToTalkSquadKeyBinding(const struct FInputChord& NewKey);
		void SetPushToTalkLocalKeyBinding(const struct FInputChord& NewKey);
		void SetPushToTalkCommandKeyBinding(const struct FInputChord& NewKey);
		void SetProneKeyBinding(const struct FInputChord& NewKey);
		void SetPreviousItemKeyBinding(const struct FInputChord& NewKey);
		void SetPlayerIsChangingKeyBindings(bool NewValue);
		void SetPlayerCharacterMeshRowName(const class FName& NewRowName);
		void SetNextItemKeyBinding(const struct FInputChord& NewKey);
		void SetMusicVolumeLevelNormalized(float NormMusicVolume);
		void SetMusicVolumeLevel(float MusicVolume);
		void SetMoveRightKeyBinding(const struct FInputChord& NewKey);
		void SetMoveLeftKeyBinding(const struct FInputChord& NewKey);
		void SetMoveForwardKeyBinding(const struct FInputChord& NewKey);
		void SetMoveBackwardKeyBinding(const struct FInputChord& NewKey);
		void SetMouseSensitivityNormalized(float NormSensitivityX, float NormSensitivityY);
		void SetMouseSensitivity(float SensitivityX, float SensitivityY);
		void SetMotionBlurEnabled(bool bEnabled);
		void SetMasterVolumeLevelNormalized(float NormMasterVolume);
		void SetMasterVolumeLevel(float MasterVolume);
		void SetLeanRightKeyBinding(const struct FInputChord& NewKey);
		void SetLeanLeftKeyBinding(const struct FInputChord& NewKey);
		void SetJumpKeyBinding(const struct FInputChord& NewKey);
		void SetInvertMousePitch(bool bInvertPitch);
		void SetFireKeyBinding(const struct FInputChord& NewKey);
		void SetFieldOfView(float NewFOV);
		void SetDisplayGamma(float NewGamma);
		void SetDialogueVolumeLevelNormalized(float NormDialogueVolume);
		void SetDialogueVolumeLevel(float DialogueVolume);
		void SetDeployMenuKeyBinding(const struct FInputChord& NewKey);
		void SetCrouchKeyBinding(const struct FInputChord& NewKey);
		void SetCameraToggleKeyBinding(const struct FInputChord& NewKey);
		void SetAllowSoundInBackground(bool bAllow);
		void SetAimDownSightsKeyBinding(const struct FInputChord& NewKey);
		bool IsVoiceVolumeLevelDirty();
		bool IsSoundInBackgroundAllowed();
		bool IsSoundEffectsVolumeLevelDirty();
		bool IsSmoothMouseEnabled();
		bool IsSmoothMouseDirty();
		bool IsSmoothFrameRateEnabled();
		bool IsSmoothFrameRateDirty();
		bool IsPlayerCharacterMeshRowNameDirty();
		bool IsPlayerChangingKeyBindings();
		bool IsMusicVolumeLevelDirty();
		bool IsMouseSensitivityDirty();
		bool IsMotionBlurEnabled();
		bool IsMotionBlurDirty();
		bool IsMasterVolumeLevelDirty();
		bool IsInvertMouseDirty();
		bool IsHeadphoneModeEnabled();
		bool IsHeadphoneModeDirty();
		bool IsFrameRateLimitDirty();
		bool IsFieldOfViewDirty();
		bool IsDisplayGammaDirty();
		bool IsDialogueVolumeLevelDirty();
		bool IsAudioQualityDirty();
		bool IsAnyInputKeyBindingDirty();
		bool IsAllowSoundInBackgroundDirty();
		struct FKey GetWeaponSlot9KeyBinding();
		struct FKey GetWeaponSlot8KeyBinding();
		struct FKey GetWeaponSlot7KeyBinding();
		struct FKey GetWeaponSlot6KeyBinding();
		struct FKey GetWeaponSlot5KeyBinding();
		struct FKey GetWeaponSlot4KeyBinding();
		struct FKey GetWeaponSlot3KeyBinding();
		struct FKey GetWeaponSlot2KeyBinding();
		struct FKey GetWeaponSlot1KeyBinding();
		struct FKey GetWeaponSlot0KeyBinding();
		float GetVoiceVolumeLevelNormalized();
		float GetVoiceVolumeLevel();
		struct FKey GetUseKeyBinding();
		struct FKey GetSprintKeyBinding();
		float GetSoundEffectsVolumeLevelNormalized();
		float GetSoundEffectsVolumeLevel();
		struct FKey GetShowScoreboardKeyBinding();
		struct FKey GetSayTeamKeyBinding();
		struct FKey GetSaySquadKeyBinding();
		struct FKey GetSayAllKeyBinding();
		struct FKey GetReloadKeyBinding();
		struct FKey GetRadialMenuKeyBinding();
		struct FKey GetPushToTalkSquadKeyBinding();
		struct FKey GetPushToTalkLocalKeyBinding();
		struct FKey GetPushToTalkCommandKeyBinding();
		struct FKey GetProneKeyBinding();
		struct FKey GetPreviousItemKeyBinding();
		class FName GetPlayerCharacterMeshRowName();
		struct FKey GetNextItemKeyBinding();
		float GetMusicVolumeLevelNormalized();
		float GetMusicVolumeLevel();
		struct FKey GetMoveRightKeyBinding();
		struct FKey GetMoveLeftKeyBinding();
		struct FKey GetMoveForwardKeyBinding();
		struct FKey GetMoveBackwardKeyBinding();
		float GetMouseSensitivityYNormalized();
		float GetMouseSensitivityY();
		float GetMouseSensitivityXNormalized();
		float GetMouseSensitivityX();
		float GetMasterVolumeLevelNormalized();
		float GetMasterVolumeLevel();
		class APlayerController* GetLocalPlayerControllerBP();
		struct FKey GetLeanRightKeyBinding();
		struct FKey GetLeanLeftKeyBinding();
		struct FKey GetJumpKeyBinding();
		bool GetInvertMousePitch();
		float GetFrameRateLimitCurrent();
		struct FKey GetFireKeyBinding();
		float GetFieldOfView();
		float GetDisplayGamma();
		float GetDialogueVolumeLevelNormalized();
		float GetDialogueVolumeLevel();
		struct FKey GetDeployMenuKeyBinding();
		struct FKey GetCrouchKeyBinding();
		struct FKey GetCameraToggleKeyBinding();
		struct FKey GetAimDownSightsKeyBinding();
		bool FirstRunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);
		void EnableHeadphoneMode(bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBGizmoEditorComponent
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UTBGizmoEditorComponent : public URTGizmoEditorComponent
	{
	public:
		float                                                      MinActorScale;                                           // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G72Z[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSimulatePhysicsOnAllActors(bool bSimulate);
		void SetScaleOnAllActors(const struct FVector& NewScale);
		void SetRotationOnAllActors(const struct FRotator& NewRot);
		void SetLocationOnAllActors(const struct FVector& NewLoc);
		void ServerSetSimulatePhysicsOnAllActors(bool bSimulate);
		void ServerSetScaleOnAllActors(const struct FVector& NewScale);
		void ServerSetRotationOnAllActors(const struct FRotator& NewRot);
		void ServerSetLocationOnAllActors(const struct FVector& NewLoc);
		void ServerDuplicateAllActors();
		void ServerDuplicateActor(class AActor* Actor, bool bAttachActiveGizmo);
		void ServerDeleteAllActors();
		void ServerDeleteActor(class AActor* Actor);
		void DuplicateActor(class AActor* Actor, bool bAttachActiveGizmo);
		void DeleteAllActors();
		void DeleteActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBServerListView
	 * Size -> 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
	 */
	class UTBServerListView : public UListView
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBJoinGameMenu
	 * Size -> 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
	 */
	class UTBJoinGameMenu : public UDFBaseMenu
	{
	public:
		class UTBServerListView*                                   ServerList;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_664V[0x30];                                  // 0x0240(0x0030) MISSED OFFSET (PADDING)

	public:
		void ReceiveOnRefreshStart();
		void ReceiveOnRefreshComplete();
		void OnResetFilters();
		void OnRefresh();
		void JoinGame(class UTBServerListItemData* ServerItem);
		bool IsUsingDebugServerListings();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBLevelScriptActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ATBLevelScriptActor : public ADFLevelScriptActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBLocalPlayer
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class UTBLocalPlayer : public ULocalPlayer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBObjectComponent
	 * Size -> 0x0030 (FullSize[0x0220] - InheritedSize[0x01F0])
	 */
	class UTBObjectComponent : public USceneComponent
	{
	public:
		struct FVector_NetQuantize100                              ObjectScale;                                             // 0x01F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6FT0[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         ObjectStaticMesh;                                        // 0x0200(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMesh*                                       ObjectSkeletalMesh;                                      // 0x0208(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bObjectSimulatePhysics : 1;                              // 0x0210(0x0001) BIT_FIELD Edit, BlueprintVisible, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRuntimeReplication : 1;                                 // 0x0210(0x0001) BIT_FIELD Edit, BlueprintVisible, Net, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RM1W[0xF];                                   // 0x0211(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetObjectStaticMesh(class UStaticMesh* NewMesh);
		void SetObjectSkeletalMesh(class USkeletalMesh* NewMesh);
		void SetObjectSimulatePhysics(bool bSimulate);
		void SetObjectScale(const struct FVector_NetQuantize100& NewScale);
		void OnRep_ObjectStaticMesh();
		void OnRep_ObjectSkeletalMesh();
		void OnRep_ObjectSimulatePhysics();
		void OnRep_ObjectScale();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBOptionsMenu
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UTBOptionsMenu : public UDFBaseMenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBPhysicsCollisionHandler
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UTBPhysicsCollisionHandler : public UDFPhysicsCollisionHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBPlayerCameraManager
	 * Size -> 0x0000 (FullSize[0x2740] - InheritedSize[0x2740])
	 */
	class ATBPlayerCameraManager : public ADFPlayerCameraManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.ATBSandboxFreeCamPawn
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class AATBSandboxFreeCamPawn : public ASpectatorPawn
	{
	public:
		unsigned char                                              bCameraPan : 1;                                          // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSprinting : 1;                                          // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FBOY[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (PADDING)

	public:
		void Turn(float Val);
		void OnSprintReleased();
		void OnSprintPressed();
		void OnCameraPanReleased();
		void OnCameraPanPressed();
		void LookUp(float Val);
		bool IsSprinting();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBSandboxPlayerCharacter
	 * Size -> 0x0010 (FullSize[0x0920] - InheritedSize[0x0910])
	 */
	class ATBSandboxPlayerCharacter : public ATBBasePlayerCharacter
	{
	public:
		unsigned char                                              bCameraPan : 1;                                          // 0x0910(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_48ML[0xF];                                   // 0x0911(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnCameraPanReleased();
		void OnCameraPanPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBSandboxPlayerController
	 * Size -> 0x0038 (FullSize[0x0630] - InheritedSize[0x05F8])
	 */
	class ATBSandboxPlayerController : public ATBBasePlayerController
	{
	public:
		class FName                                                PlayerCharacterMeshRowName;                              // 0x05F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bFreeCam : 1;                                            // 0x0600(0x0001) BIT_FIELD Edit, BlueprintVisible, Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B1BW[0x7];                                   // 0x0601(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          SpawnListDataTable;                                      // 0x0608(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector_NetQuantize100                              LastSpawnLocation;                                       // 0x0610(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_60VT[0x4];                                   // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTBGizmoEditorComponent*                             GizmoEditor;                                             // 0x0620(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bEditMode : 1;                                           // 0x0628(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BR6P[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (PADDING)

	public:
		void WorldSpaceManipulationToggle();
		void ToggleFreeCam(bool bNewFreeCam, const struct FVector& Loc);
		void ToggleEditMode(bool bNewEditMode);
		void SwitchActiveGizmo();
		void SpawnObjectFromTableAtPawn(const class FName& RowName);
		void SpawnObjectFromTable(const class FName& RowName, const struct FVector& ObjectSpawnLocation);
		class AActor* SpawnObjectFromClass(class UClass* ObjectClass, class UObject* ObjectData);
		void SpawnObject(class UObject* Object);
		void SetPlayerCharacterMeshRowName(const class FName& RowName);
		void ServerToggleFreeCam(bool bNewFreeCam, const struct FVector_NetQuantize& Loc);
		void ServerToggleEditMode(bool bNewEditMode);
		void ServerSpawnObjectFromTable(const class FName& RowName, const struct FVector_NetQuantize100& ObjectSpawnLocation);
		void OnToggleFreeCam(bool bNewFreeCam);
		void OnToggleEditMode(bool bNewEditMode);
		void OnSelectActor(class AActor* NewSelectedActor);
		void OnObjectDuplicateReleased();
		void OnObjectDuplicatePressed();
		void OnLoadedObjectToSpawn(class UObject* LoadedObject);
		void OnDeselectAllActors();
		void OnAssetLoadDummy();
		void ObjectSelect();
		void ObjectDelete();
		void LookAtObject(class AActor* Object);
		bool IsInFreeCam();
		bool IsEditing();
		TMap<class FName, struct FObjectListing> GetSpawnListByCategory(const class FString& DesiredCategory);
		class AActor* GetObjectFromCursorPos();
		class AActor* GetObjectFromAimPos();
		class UTBObjectComponent* GetObjectComponent(class AActor* Object);
		struct FHitResult GetHitResultUnderCursorByVisibility();
		class UTBGizmoEditorComponent* GetGizmoEditor();
		TArray<class FString> GetCategoryList();
		void FreeCamToggle();
		void EditModeToggle();
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBServerListItemData
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UTBServerListItemData : public UObject
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0028(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBServerListing
	 * Size -> 0x00A0 (FullSize[0x02D0] - InheritedSize[0x0230])
	 */
	class UTBServerListing : public UUserWidget
	{
	public:
		unsigned char                                              bTextToUpper : 1;                                        // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5E0F[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FServerInfo                                         ServerInfo;                                              // 0x0238(0x0068) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ServerNameText;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          ModNameText;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          GameModeText;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          MapNameText;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PlayersText;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          PingText;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupListing(const struct FServerInfo& InServerInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBTranslationGizmo
	 * Size -> 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
	 */
	class ATBTranslationGizmo : public ARTTranslationGizmo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBVoiceIndicator
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UTBVoiceIndicator : public UUserWidget
	{
	public:
		class UClass*                                              VoiceListingClass;                                       // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        ActiveVoiceList;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxActiveVoices;                                         // 0x0240(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ActiveVoices;                                            // 0x0244(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ActiveVoiceRemoved(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget);
		void ActiveVoiceAdded(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class Tinkerbox.TBVoiceIndicatorListing
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class UTBVoiceIndicatorListing : public UUserWidget
	{
	public:
		class UTextBlock*                                          PlayerName;                                              // 0x0230(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTBVoiceIndicator*                                   ParentMenu;                                              // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26G3[0x18];                                  // 0x0240(0x0018) MISSED OFFSET (PADDING)

	public:
		void Init(class UTBVoiceIndicator* InParentMenu, const struct FUniqueNetIdRepl& InUniqueNetId, class FString* InPlayerName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
