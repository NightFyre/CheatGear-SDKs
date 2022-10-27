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
	 * Class StoryFramework.ActiveStorySpawnRequirement
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UActiveStorySpawnRequirement : public USpawnRequirement
	{
	public:
		TArray<class FName>                                        StoryNames;                                              // 0x0050(0x0010) Edit, ZeroConstructor
		bool                                                       AllStoriesRequired;                                      // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3103[0x1F];                                  // 0x0061(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.IsStoryActiveNPCDialogConditional
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIsStoryActiveNPCDialogConditional : public UNPCDialogConditional
	{
	public:
		unsigned char                                              UnknownData_4VBA[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryClaimableResourceComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UStoryClaimableResourceComponent : public UActorComponent
	{
	public:
		struct FStoryFlag                                          ClaimedStoryFlag;                                        // 0x00C8(0x0008) Edit
		unsigned char                                              UnknownData_54T4[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryClaimedResourcesServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStoryClaimedResourcesServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryClaimedResourcesService
	 * Size -> 0x00C0 (FullSize[0x0488] - InheritedSize[0x03C8])
	 */
	class AStoryClaimedResourcesService : public AActor
	{
	public:
		unsigned char                                              UnknownData_5HUR[0x60];                                  // 0x03C8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class UStoryClaimableResourceComponent>> PendingClaims;                                           // 0x0428(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper
		TMap<class FName, struct FStoryClaimableResourcesList>     StoriesToClaimableResourcesMap;                          // 0x0438(0x0050) ZeroConstructor, Transient, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryDrivenBlendedLightingZoneComponent
	 * Size -> 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
	 */
	class UStoryDrivenBlendedLightingZoneComponent : public UBlendedLightingZoneComponent
	{
	public:
		class UStoryDrivenBlendedLightingZoneComponentCollectionDataAsset* StoryDrivenLightingAssetsCollection;                     // 0x0328(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLightingZoneStoryRelatedSettings                   CurrentStoryResponse;                                    // 0x0330(0x0010) Net, RepNotify
		unsigned char                                              UnknownData_R2XY[0x30];                                  // 0x0340(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentStoryResponse();
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryDrivenBlendedLightingZoneComponentDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UStoryDrivenBlendedLightingZoneComponentDataAsset : public UDataAsset
	{
	public:
		struct FFeatureFlag                                        Feature;                                                 // 0x0028(0x0008) Edit
		TArray<struct FLightingZoneStoryRelatedSettings>           StoryResponses;                                          // 0x0030(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryDrivenBlendedLightingZoneComponentCollectionDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UStoryDrivenBlendedLightingZoneComponentCollectionDataAsset : public UDataAsset
	{
	public:
		TArray<class UStoryDrivenBlendedLightingZoneComponentDataAsset*> StoryDrivenLightingAssetList;                            // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryDrivenSalvageItemSpawnComponent
	 * Size -> 0x0030 (FullSize[0x0590] - InheritedSize[0x0560])
	 */
	class UStoryDrivenSalvageItemSpawnComponent : public USalvageItemSpawnComponent
	{
	public:
		struct FStoryFlag                                          Story;                                                   // 0x0560(0x0008) Edit
		unsigned char                                              UnknownData_IJB3[0x28];                                  // 0x0568(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryNPCDialogConditionalContext
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UStoryNPCDialogConditionalContext : public UNPCDialogConditionalContext
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0028(0x0008) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryNPCDialogOverrideType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStoryNPCDialogOverrideType : public UNPCDialogOverrideType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsCollectionDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UStorySpawnedActorsCollectionDataAsset : public UDataAsset
	{
	public:
		TArray<class UStorySpawnedActorsDataAsset*>                StorySpawnedActorsAssetList;                             // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<class UStorySpawnedActorsCollectionDataAsset*>      StorySpawnedActorsCollectionList;                        // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UStorySpawnedActorsComponent : public UActorComponent
	{
	public:
		class UStorySpawnedActorsComponentCollectionDataAsset*     AssetsCollection;                                        // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZPOK[0x38];                                  // 0x00D0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsComponentCollectionDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UStorySpawnedActorsComponentCollectionDataAsset : public UDataAsset
	{
	public:
		TArray<class UStorySpawnedActorsComponentDataAsset*>       StorySpawnedActorsAssetList;                             // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<class UStorySpawnedActorsComponentCollectionDataAsset*> StorySpawnedActorsCollectionList;                        // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsComponentDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UStorySpawnedActorsComponentDataAsset : public UDataAsset
	{
	public:
		struct FFeatureFlag                                        Feature;                                                 // 0x0028(0x0008) Edit
		TArray<struct FStorySpawnedActorsComponentList>            StorySpawnedActorsList;                                  // 0x0030(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UStorySpawnedActorsDataAsset : public UDataAsset
	{
	public:
		struct FFeatureFlag                                        Feature;                                                 // 0x0028(0x0008) Edit
		TArray<struct FStorySpawnedActorsList>                     StorySpawnedActorsList;                                  // 0x0030(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStorySpawnedActorsServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsService
	 * Size -> 0x0128 (FullSize[0x04F0] - InheritedSize[0x03C8])
	 */
	class AStorySpawnedActorsService : public AActor
	{
	public:
		unsigned char                                              UnknownData_NWM4[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStorySpawnedActorsComponent*>                EarlyRegisteredComponents;                               // 0x03E0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		class UStorySpawnedActorsCollectionDataAsset*              Asset;                                                   // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S1OI[0xF8];                                  // 0x03F8(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySpawnedActorsSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UStorySpawnedActorsSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               StorySpawnActorsCollectionDataAssetLocation;             // 0x0038(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.DebugStoryServiceCheatInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugStoryServiceCheatInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.DebugStoryServiceCheat
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class ADebugStoryServiceCheat : public AActor
	{
	public:
		unsigned char                                              UnknownData_DUF9[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStoryInfo>                                  AllStories;                                              // 0x03D0(0x0010) Net, ZeroConstructor
		TArray<class FString>                                      AllIncludeFilters;                                       // 0x03E0(0x0010) Net, ZeroConstructor
		TArray<class FString>                                      AllExcludeFilters;                                       // 0x03F0(0x0010) Net, ZeroConstructor
		unsigned char                                              UnknownData_ET0D[0x20];                                  // 0x0400(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StorySettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UStorySettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               StoryNamesCollectionDataAssetLocation;                   // 0x0038(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryNamesCollectionDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UStoryNamesCollectionDataAsset : public UDataAsset
	{
	public:
		TArray<struct FStoryNameInfo>                              Stories;                                                 // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<class UStoryNamesCollectionDataAsset*>              StoriesAssets;                                           // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStoryServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StoryFramework.StoryService
	 * Size -> 0x00D8 (FullSize[0x04A0] - InheritedSize[0x03C8])
	 */
	class AStoryService : public AActor
	{
	public:
		unsigned char                                              UnknownData_PD4N[0x28];                                  // 0x03C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStoryInfo>                                  Stories;                                                 // 0x03F0(0x0010) ZeroConstructor
		TArray<struct FStoryInfo>                                  ActiveStories;                                           // 0x0400(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_DKJH[0x90];                                  // 0x0410(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnRep_ActiveStories();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
