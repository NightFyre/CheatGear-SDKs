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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SeasonProgressionUI.SeasonPopupAsset
	 * Size -> 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
	 */
	class USeasonPopupAsset : public UDataAsset
	{
	public:
		class FName                                                ThemeId;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSeasonIconPopupAsset>                       TierInfos;                                               // 0x0030(0x0010) Edit, ZeroConstructor
		TArray<struct FSeasonGoalPopupAsset>                       TrialInfos;                                              // 0x0040(0x0010) Edit, ZeroConstructor
		TArray<struct FSeasonGoalPopupAsset>                       DeedInfos;                                               // 0x0050(0x0010) Edit, ZeroConstructor
		TArray<struct FSeasonGoalPopupAsset>                       RenownActionInfos;                                       // 0x0060(0x0010) Edit, ZeroConstructor
		struct FSeasonIconPopupAsset                               SeasonInfo;                                              // 0x0070(0x0068) Edit
		struct FSeasonIconPopupAsset                               LevelIncreaseInfo;                                       // 0x00D8(0x0068) Edit
		struct FSeasonIconPopupAsset                               RewardInfo;                                              // 0x0140(0x0068) Edit
		struct FSeasonIconPopupAsset                               MultipleRewardsInfo;                                     // 0x01A8(0x0068) Edit
		struct FStringAssetReference                               BackgroundImage;                                         // 0x0210(0x0010) Edit, ZeroConstructor
		class FString                                              DefaultToastSfxEventName;                                // 0x0220(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultToastEventName;                                   // 0x0230(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultToastSwitchName;                                  // 0x0240(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultToastSwitchValue;                                 // 0x0250(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultChatSfxEventName;                                 // 0x0260(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultChatEventName;                                    // 0x0270(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultChatSwitchName;                                   // 0x0280(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultChatSwitchValue;                                  // 0x0290(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonPopupListAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USeasonPopupListAsset : public UDataAsset
	{
	public:
		TArray<class USeasonPopupAsset*>                           SeasonPopups;                                            // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonProgressionUIInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USeasonProgressionUIInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USeasonProgressionUITelemetryInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonProgressionUIComponent
	 * Size -> 0x00E8 (FullSize[0x01B0] - InheritedSize[0x00C8])
	 */
	class USeasonProgressionUIComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M1G3[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEnableMoreButtonEvent>                      DetailsNavigationDesc;                                   // 0x00E8(0x0010) ZeroConstructor
		struct FSeasonProgressionUITelemetryFragment               NextReceivedEventsTelemetryData;                         // 0x00F8(0x0018)
		unsigned char                                              UnknownData_UQN1[0xA0];                                  // 0x0110(0x00A0) MISSED OFFSET (PADDING)

	public:
		void OnHUDDestroyed();
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonProgressionUIServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USeasonProgressionUIServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonProgressionUIService
	 * Size -> 0x01C0 (FullSize[0x0588] - InheritedSize[0x03C8])
	 */
	class ASeasonProgressionUIService : public AActor
	{
	public:
		unsigned char                                              UnknownData_L2Y8[0x30];                                  // 0x03C8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USeasonPopupListAsset*                               SeasonPopupListAsset;                                    // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2Y69[0x188];                                 // 0x0400(0x0188) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgressionUI.SeasonProgressionUISettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USeasonProgressionUISettings : public UObject
	{
	public:
		struct FStringAssetReference                               SeasonPopupListAsset;                                    // 0x0028(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
