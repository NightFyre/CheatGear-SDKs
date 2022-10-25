#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SeasonProgressionUI.EMoreButtonSource
	 */
	enum class EMoreButtonSource : uint8_t
	{
		Popup            = 0,
		TextNotification = 1,
		MAX              = 2
	};

	/**
	 * Enum SeasonProgressionUI.ENavigationAction
	 */
	enum class ENavigationAction : uint8_t
	{
		ShowDeed     = 0,
		ShowTrial    = 1,
		ShowReward   = 2,
		ShowProgress = 3,
		None         = 4,
		MAX          = 5
	};

	/**
	 * Enum SeasonProgressionUI.ESeasonStyleModifiers
	 */
	enum class ESeasonStyleModifiers : uint8_t
	{
		Owned        = 0,
		SeasonMark   = 1,
		PirateLegend = 2,
		MAX          = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SeasonProgressionUI.SeasonIconPopupAsset
	 * Size -> 0x0068
	 */
	struct FSeasonIconPopupAsset
	{
	public:
		struct FStringAssetReference                               GlowIcon;                                                // 0x0000(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               Icon;                                                    // 0x0010(0x0010) Edit, ZeroConstructor
		class FString                                              ToastSfxEventName;                                       // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ToastEventName;                                          // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ToastSwitchName;                                         // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ToastSwitchValue;                                        // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		float                                                      ToastHoldDuration;                                       // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RSPM[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonGoalPopupAsset
	 * Size -> 0x0080
	 */
	struct FSeasonGoalPopupAsset
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               GlowIcon;                                                // 0x0008(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               Icon;                                                    // 0x0018(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               ChatIcon;                                                // 0x0028(0x0010) Edit, ZeroConstructor
		class FString                                              ToastSfxEventName;                                       // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ToastEventName;                                          // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ToastSwitchName;                                         // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ToastSwitchValue;                                        // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		float                                                      ToastHoldDuration;                                       // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HQBS[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.NavigationDesc
	 * Size -> 0x0014
	 */
	struct FNavigationDesc
	{
	public:
		ENavigationAction                                          Action;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_57MP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Id;                                                      // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SeasonProgressionUI.EnableMoreButtonEvent
	 * Size -> 0x0018
	 */
	struct FEnableMoreButtonEvent
	{
	public:
		EMoreButtonSource                                          MoreButtonSource;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2A45[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavigationDesc                                     Navigation;                                              // 0x0004(0x0014)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonProgressionUIEventTypeTelemetryFragment
	 * Size -> 0x0018
	 */
	struct FSeasonProgressionUIEventTypeTelemetryFragment
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    NumReceivedEvents;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J7QK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonProgressionUITelemetryFragment
	 * Size -> 0x0018
	 */
	struct FSeasonProgressionUITelemetryFragment
	{
	public:
		TArray<struct FSeasonProgressionUIEventTypeTelemetryFragment> ReceivedEventsData;                                      // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    TotalNumReceivedEvents;                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A9SH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonNotificationContent
	 * Size -> 0x0068
	 */
	struct FSeasonNotificationContent
	{
	public:
		struct FStringAssetReference                               GlowIcon;                                                // 0x0000(0x0010) ZeroConstructor
		struct FStringAssetReference                               Icon;                                                    // 0x0010(0x0010) ZeroConstructor
		class FString                                              SfxEventName;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              EventName;                                               // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              SwitchName;                                              // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              SwitchValue;                                             // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash
		float                                                      ToastHoldDuration;                                       // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E2VK[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.DeedProgressDesc
	 * Size -> 0x0080
	 */
	struct FDeedProgressDesc
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Icon;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FNavigationDesc                                     NavigationDesc;                                          // 0x0020(0x0014)
		int32_t                                                    ProgressValue;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Threshold;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6E0Q[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGenericPopupAudioDescriptor                        Audio;                                                   // 0x0040(0x0040)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonsChatNotification
	 * Size -> 0x0060
	 */
	struct FSeasonsChatNotification
	{
	public:
		class FString                                              IconUrl;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Message;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGenericPopupAudioDescriptor                        Audio;                                                   // 0x0020(0x0040)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonsDataRefreshEvent
	 * Size -> 0x0001
	 */
	struct FSeasonsDataRefreshEvent
	{
	public:
		unsigned char                                              UnknownData_I91K[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.OpenSeasonsMenuEvent
	 * Size -> 0x0014
	 */
	struct FOpenSeasonsMenuEvent
	{
	public:
		ENavigationAction                                          NavigationAction;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TA4J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Id;                                                      // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SeasonProgressionUI.DisableMoreButtonEvent
	 * Size -> 0x0001
	 */
	struct FDisableMoreButtonEvent
	{
	public:
		EMoreButtonSource                                          MoreButtonSource;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SeasonProgressionUI.ShowDeedProgressEvent
	 * Size -> 0x0080
	 */
	struct FShowDeedProgressEvent
	{
	public:
		struct FDeedProgressDesc                                   DeedProgressDesc;                                        // 0x0000(0x0080)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonsChatNotificationEvent
	 * Size -> 0x0060
	 */
	struct FSeasonsChatNotificationEvent
	{
	public:
		struct FSeasonsChatNotification                            SeasonsChatNotification;                                 // 0x0000(0x0060)
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonProgressionUITelemetryFragmentInput
	 * Size -> 0x0008
	 */
	struct FSeasonProgressionUITelemetryFragmentInput : public FTelemetryFragmentInput
	{
	public:
		TWeakObjectPtr<class APlayerController>                    PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct SeasonProgressionUI.SeasonsPopupEvent
	 * Size -> 0x00A0
	 */
	struct FSeasonsPopupEvent
	{
	public:
		TArray<class FText>                                        Text;                                                    // 0x0000(0x0010) ZeroConstructor
		TArray<class FString>                                      Images;                                                  // 0x0010(0x0010) ZeroConstructor
		class FString                                              Background;                                              // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGenericPopupAudioDescriptor                        Audio;                                                   // 0x0030(0x0040)
		TArray<ESeasonStyleModifiers>                              StyleModifiers;                                          // 0x0070(0x0010) ZeroConstructor
		int32_t                                                    Rank;                                                    // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FNavigationDesc                                     NavigationDesc;                                          // 0x0084(0x0014)
		float                                                      HoldDuration;                                            // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U7QT[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
