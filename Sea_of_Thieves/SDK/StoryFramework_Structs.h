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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StoryFramework.StoryFlag
	 * Size -> 0x0008
	 */
	struct FStoryFlag
	{
	public:
		class FName                                                StoryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.StoryClaimableResourcesList
	 * Size -> 0x0020
	 */
	struct FStoryClaimableResourcesList
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008)
		bool                                                       AreResourcesClaimed;                                     // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FTFJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class UStoryClaimableResourceComponent>> ClaimableResources;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper
	};

	/**
	 * ScriptStruct StoryFramework.LightingZoneStoryRelatedSettings
	 * Size -> 0x0010
	 */
	struct FLightingZoneStoryRelatedSettings
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		float                                                      TargetPointOnCurve;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeDuration;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.NamedPointsGroupActorLocation
	 * Size -> 0x0028
	 */
	struct FNamedPointsGroupActorLocation
	{
	public:
		class FName                                                NamedPointsGroup;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    ActorToSpawn;                                            // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_IXXY[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct StoryFramework.StorySpawnedActorsComponentList
	 * Size -> 0x0020
	 */
	struct FStorySpawnedActorsComponentList
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		TArray<struct FNamedPointsGroupActorLocation>              GroupLocations;                                          // 0x0008(0x0010) Edit, ZeroConstructor
		class ULayerActorsDataAsset*                               LayerToSpawn;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.ActorLocationPair
	 * Size -> 0x0040
	 */
	struct FActorLocationPair
	{
	public:
		struct FStringAssetReference                               SpawnLocation;                                           // 0x0000(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               DevSpawnLocation;                                        // 0x0010(0x0010) Edit, ZeroConstructor
		TAssetPtr<class UClass>                                    ActorToSpawn;                                            // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_STHO[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct StoryFramework.NamedPointsActorLocation
	 * Size -> 0x0030
	 */
	struct FNamedPointsActorLocation
	{
	public:
		struct FStringAssetReference                               ActorWithNamedPointsComponent;                           // 0x0000(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               DevActorWithNamedPointsComponent;                        // 0x0010(0x0010) Edit, ZeroConstructor
		TArray<struct FNamedPointsGroupActorLocation>              GroupLocations;                                          // 0x0020(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct StoryFramework.InstancedLayerLocation
	 * Size -> 0x0028
	 */
	struct FInstancedLayerLocation
	{
	public:
		struct FStringAssetReference                               ActorWithInstancedLayerComponent;                        // 0x0000(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               DevActorWithInstancedLayerComponent;                     // 0x0010(0x0010) Edit, ZeroConstructor
		class ULayerActorsDataAsset*                               LayerToSpawn;                                            // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.StorySpawnedActorsList
	 * Size -> 0x0038
	 */
	struct FStorySpawnedActorsList
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		TArray<struct FActorLocationPair>                          ActorLocations;                                          // 0x0008(0x0010) Edit, ZeroConstructor
		TArray<struct FNamedPointsActorLocation>                   NamedPointsActorLocations;                               // 0x0018(0x0010) Edit, ZeroConstructor
		TArray<struct FInstancedLayerLocation>                     InstancedLayerLocations;                                 // 0x0028(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct StoryFramework.StoryInfo
	 * Size -> 0x0018
	 */
	struct FStoryInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    StartTimeTicks;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    EndTimeTicks;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.StoryNameInfo
	 * Size -> 0x0018
	 */
	struct FStoryNameInfo
	{
	public:
		class FName                                                StoryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              StoryDesc;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.StoryResourceStateChanged
	 * Size -> 0x0014
	 */
	struct FStoryResourceStateChanged
	{
	public:
		class FName                                                StoryName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumResourcesClaimed;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumResourcesReleased;                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumClaimsPending;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.StoryClaimedResourcesChangedTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FStoryClaimedResourcesChangedTelemetryEvent
	{
	public:
		TArray<struct FStoryResourceStateChanged>                  StoryResourceStateChanges;                               // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct StoryFramework.StorySpawnedActorsIndividualStoryInfo
	 * Size -> 0x0018
	 */
	struct FStorySpawnedActorsIndividualStoryInfo
	{
	public:
		class FString                                              StoryName;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    NumActorsSpawned;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumActorsDespawned;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StoryFramework.StorySpawnedActorsChangeTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FStorySpawnedActorsChangeTelemetryEvent
	{
	public:
		TArray<struct FStorySpawnedActorsIndividualStoryInfo>      StorySpawnedActors;                                      // 0x0000(0x0010) ZeroConstructor
		TArray<struct FStorySpawnedActorsIndividualStoryInfo>      StoryDespawnedActors;                                    // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct StoryFramework.StoriesChangedTelemetryEvent
	 * Size -> 0x0028
	 */
	struct FStoriesChangedTelemetryEvent
	{
	public:
		TArray<class FString>                                      AllStories;                                              // 0x0000(0x0010) ZeroConstructor
		TArray<class FString>                                      ActiveStories;                                           // 0x0010(0x0010) ZeroConstructor
		bool                                                       DidStoriesChange;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       WereStoriesRefreshed;                                    // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHEI[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
