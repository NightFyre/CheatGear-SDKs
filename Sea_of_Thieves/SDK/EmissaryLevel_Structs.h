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
	 * Enum EmissaryLevel.EBootyRewardType
	 */
	enum class EBootyRewardType : uint8_t
	{
		OwnershipChanged   = 0,
		ItemDroppedOnItem  = 1,
		PlayerKilled       = 2,
		GameEventsFinished = 3,
		Handin             = 4,
		MAX                = 5,
		MAX01              = 6
	};

	/**
	 * Enum EmissaryLevel.EEmissaryDeactivateReason
	 */
	enum class EEmissaryDeactivateReason : uint8_t
	{
		DissociateFromShip = 0,
		Cancelled          = 1,
		MAX                = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EmissaryLevel.MaterialVisualisation
	 * Size -> 0x0030
	 */
	struct FMaterialVisualisation
	{
	public:
		struct FActorComponentSelector                             TargetMesh;                                              // 0x0000(0x0010) Edit, ContainsInstancedReference
		float                                                      TransitionTime;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaterialIndex;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ParameterName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActiveValue;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InactiveValue;                                           // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.LightVisualisation
	 * Size -> 0x0028
	 */
	struct FLightVisualisation
	{
	public:
		struct FActorComponentSelector                             TargetLight;                                             // 0x0000(0x0010) Edit, ContainsInstancedReference
		float                                                      TransitionTime;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActiveValue;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InactiveValue;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XI1T[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULightComponent*                                     Light;                                                   // 0x0020(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.ParticleVisualisation
	 * Size -> 0x0028
	 */
	struct FParticleVisualisation
	{
	public:
		struct FActorComponentSelector                             TargetParticles;                                         // 0x0000(0x0010) Edit, ContainsInstancedReference
		float                                                      Delay;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayAfterPutOutParticles;                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PutOutParticles;                                         // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0020(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryFlagMeshReferences
	 * Size -> 0x0020
	 */
	struct FEmissaryFlagMeshReferences
	{
	public:
		struct FStringAssetReference                               BackOfShipEmissaryFlagMeshAssetReference;                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringAssetReference                               MastEmissaryFlagMeshAssetReference;                      // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelData
	 * Size -> 0x0080
	 */
	struct FEmissaryLevelData
	{
	public:
		int32_t                                                    LevelTarget;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CWY2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEmissaryFlagMeshReferences                         EmissaryFlagMeshAssetReferences;                         // 0x0008(0x0020) Edit, DisableEditOnInstance
		TAssetPtr<class UWeightedItemDescSpawnDataAsset>           EmissaryFlotsamSpawnDataAsset;                           // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_L42J[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FRewardId                                           EmissaryDeactivationReward;                              // 0x0048(0x0008) Edit, DisableEditOnInstance
		TArray<struct FPlayerStat>                                 StatsToFireOnEmissaryLevelReached;                       // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringAssetReference                               TreasureSoldNotificationFlag;                            // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringAssetReference                               EmissaryFlagTextureReference;                            // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryCompanyCosmetics
	 * Size -> 0x0020
	 */
	struct FEmissaryCompanyCosmetics
	{
	public:
		TArray<class UClass*>                                      CompanyCostumeCosmetics;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		TArray<class UClass*>                                      CompanyShipCosmetics;                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelEntry
	 * Size -> 0x0080
	 */
	struct FEmissaryLevelEntry
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FEmissaryLevelData>                          CompanyLevelData;                                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UDataAsset*                                          MaxRankPopUpToastData;                                   // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataAsset*                                          EmissarySunkPopUpToastData;                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FEmissaryCompanyCosmetics                           CompanyCosmetics;                                        // 0x0028(0x0020) Edit, DisableEditOnInstance
		struct FPlayerStat                                         TimeSpentAtMaxRankStat;                                  // 0x0048(0x0004) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_AYGE[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerStat>                                 StatsToFireOnFullEmissaryClothing;                       // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FPlayerStat>                                 StatsToFireOnFullEmissaryShipCustomizations;             // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FPlayerStat>                                 StatsToFireOnFullShipCustomizationsAndClothing;          // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryPointBoostMultipliers
	 * Size -> 0x0008
	 */
	struct FEmissaryPointBoostMultipliers
	{
	public:
		float                                                      PlayerWearningCompanyCostume;                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrewShipFullyEquippedWithCompanyCosmetics;               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryCompanyCampaignScale
	 * Size -> 0x000C
	 */
	struct FEmissaryCompanyCampaignScale
	{
	public:
		class FName                                                Campaign;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryCompanyCampaignKillPlayer
	 * Size -> 0x0018
	 */
	struct FEmissaryCompanyCampaignKillPlayer
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FEmissaryCompanyCampaignScale>               Scales;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryCompanyCampaignGameEvent
	 * Size -> 0x0018
	 */
	struct FEmissaryCompanyCampaignGameEvent
	{
	public:
		class UClass*                                              EventType;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FEmissaryCompanyCampaignScale>               Scales;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryCompanyCampaignSettings
	 * Size -> 0x0028
	 */
	struct FEmissaryCompanyCampaignSettings
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FEmissaryCompanyCampaignKillPlayer>          KillPlayers;                                             // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FEmissaryCompanyCampaignGameEvent>           GameEvents;                                              // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryEventAward
	 * Size -> 0x0008
	 */
	struct FEmissaryEventAward
	{
	public:
		bool                                                       FirstTimeOnly;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NotOriginalOwner;                                        // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EEmissaryQualityLevel                                      ItemQualityRequirement;                                  // 0x0002(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IPQ5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EmissaryLevelIncrease;                                   // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryKillScaleFactor
	 * Size -> 0x0008
	 */
	struct FEmissaryKillScaleFactor
	{
	public:
		int32_t                                                    KillCount;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScaleFactor;                                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryKillPlayerReward
	 * Size -> 0x0028
	 */
	struct FEmissaryKillPlayerReward
	{
	public:
		int32_t                                                    EmissaryLevelIncrease;                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LCAC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEmissaryKillScaleFactor>                    EmissaryLevelKillCountScaleFactors;                      // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      ValidEmissariesToKill;                                   // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryGameEventsReward
	 * Size -> 0x0010
	 */
	struct FEmissaryGameEventsReward
	{
	public:
		class UClass*                                              FinishedEventType;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Amount;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GCOZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryCompanyActionReward
	 * Size -> 0x0008
	 */
	struct FEmissaryCompanyActionReward
	{
	public:
		EEmisaryCompanyActionType                                  CompanyActionType;                                       // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NB85[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Amount;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryActionRewardData
	 * Size -> 0x0078
	 */
	struct FEmissaryActionRewardData
	{
	public:
		TArray<struct FEmissaryEventAward>                         OwnershipChangedRewards;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FEmissaryEventAward>                         PlacedOnShipRewards;                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FEmissaryKillPlayerReward                           KillPlayerReward;                                        // 0x0020(0x0028) Edit, DisableEditOnInstance
		TArray<struct FEmissaryGameEventsReward>                   GameEventsRewards;                                       // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FEmissaryEventAward>                         HandinRewards;                                           // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FEmissaryCompanyActionReward>                CompanyActionRewards;                                    // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryRewardEntry
	 * Size -> 0x0080
	 */
	struct FEmissaryRewardEntry
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FEmissaryActionRewardData                           ActionRewardData;                                        // 0x0008(0x0078) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.PerCompanyVotes
	 * Size -> 0x0018
	 */
	struct FPerCompanyVotes
	{
	public:
		TArray<class APlayerState*>                                MemberVotes;                                             // 0x0000(0x0010) ZeroConstructor, Transient
		class FName                                                CompanyIdentifier;                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.CrewMemberVotes
	 * Size -> 0x0020
	 */
	struct FCrewMemberVotes
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FPerCompanyVotes>                            CompanyVotes;                                            // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelStatusStatInfo
	 * Size -> 0x0004
	 */
	struct FEmissaryLevelStatusStatInfo
	{
	public:
		struct FPlayerStat                                         StatToFire;                                              // 0x0000(0x0004) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryPointsBoostCriteria
	 * Size -> 0x0008
	 */
	struct FEmissaryPointsBoostCriteria
	{
	public:
		unsigned char                                              UnknownData_OME1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryLevel.TrackedPlayerKillEntry
	 * Size -> 0x0018
	 */
	struct FTrackedPlayerKillEntry
	{
	public:
		class FString                                              KilledPlayer;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    KillCount;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KillTime;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryVoteRemovedEvent
	 * Size -> 0x0008
	 */
	struct FEmissaryVoteRemovedEvent
	{
	public:
		class FName                                                Company;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryVoteAddedEvent
	 * Size -> 0x0008
	 */
	struct FEmissaryVoteAddedEvent
	{
	public:
		class FName                                                Company;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.ChaliceStatuePhaseUpdate
	 * Size -> 0x0004
	 */
	struct FChaliceStatuePhaseUpdate
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryEncounteredSkellyFortNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissaryEncounteredSkellyFortNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryEncounteredAIShipEvent
	 * Size -> 0x0008
	 */
	struct FEmissaryEncounteredAIShipEvent
	{
	public:
		class FName                                                CompanyName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryEncounteredTinySharkEvent
	 * Size -> 0x0008
	 */
	struct FEmissaryEncounteredTinySharkEvent
	{
	public:
		class FName                                                CompanyName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryEncounteredKrakenEvent
	 * Size -> 0x0008
	 */
	struct FEmissaryEncounteredKrakenEvent
	{
	public:
		class FName                                                CompanyName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryEntitlementPurchasedEvent
	 * Size -> 0x0010
	 */
	struct FEmissaryEntitlementPurchasedEvent
	{
	public:
		struct FGuid                                               OfferId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelRankChange
	 * Size -> 0x000C
	 */
	struct FEmissaryLevelRankChange
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CompanyName;                                             // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryActivated
	 * Size -> 0x0008
	 */
	struct FEmissaryActivated
	{
	public:
		class FName                                                CompanyName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryKilledAnotherEmissaryNetworkEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEmissaryKilledAnotherEmissaryNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VictimCompanyName;                                       // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissarySoldLootNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissarySoldLootNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryStoleLootNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissaryStoleLootNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryDiscoveredCargoRunCrateNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissaryDiscoveredCargoRunCrateNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryDiscoveredLootNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissaryDiscoveredLootNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissarySecuredLootOnShipNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissarySecuredLootOnShipNetworkEvent : public FNetworkEventStruct
	{
	public:
		class FName                                                CompanyName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissarySunkNetworkEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEmissarySunkNetworkEvent : public FNetworkEventStruct
	{
	public:
		class UDataAsset*                                          PopUpDesc;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CompanyName;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryMaxLevelReachedNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEmissaryMaxLevelReachedNetworkEvent : public FNetworkEventStruct
	{
	public:
		class UDataAsset*                                          PopUpDesc;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryDeactivatedNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FEmissaryDeactivatedNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryStateUpdateEvent
	 * Size -> 0x000C
	 */
	struct FEmissaryStateUpdateEvent
	{
	public:
		float                                                      CurrentRepTotal;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CompanyId;                                               // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryProgressUpdatedNetworkEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEmissaryProgressUpdatedNetworkEvent : public FNetworkEventStruct
	{
	public:
		float                                                      OldRepTotal;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewRepTotal;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CompanyId;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelProgressUpdatedEvent
	 * Size -> 0x0014
	 */
	struct FEmissaryLevelProgressUpdatedEvent
	{
	public:
		float                                                      LevelProgress;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryLevel.ActivateEmissaryMaxRankQuestForSession
	 * Size -> 0x0001
	 */
	struct FActivateEmissaryMaxRankQuestForSession
	{
	public:
		unsigned char                                              UnknownData_1C24[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryLevel.UpdateEmissaryValueForCompany
	 * Size -> 0x0030
	 */
	struct FUpdateEmissaryValueForCompany
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Company;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EBootyRewardType                                           RewardType;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2M1Z[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UpdateAmount;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.ReactivateEmissaryForMigratedCrew
	 * Size -> 0x0028
	 */
	struct FReactivateEmissaryForMigratedCrew
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Company;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryLevel.DeactivateEmissaryForCrew
	 * Size -> 0x0030
	 */
	struct FDeactivateEmissaryForCrew
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Company;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EEmissaryDeactivateReason                                  EmissaryDeactivateReason;                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PQSA[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EmissaryTotal;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.ActivateEmissaryForCrew
	 * Size -> 0x0028
	 */
	struct FActivateEmissaryForCrew
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Company;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelChanged
	 * Size -> 0x001C
	 */
	struct FEmissaryLevelChanged
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                CompanyName;                                             // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryLevelResetProgress
	 * Size -> 0x0001
	 */
	struct FEmissaryLevelResetProgress
	{
	public:
		unsigned char                                              UnknownData_SGSI[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryLevel.PlayerRemovedFromEmissaryCrew
	 * Size -> 0x0001
	 */
	struct FPlayerRemovedFromEmissaryCrew
	{
	public:
		unsigned char                                              UnknownData_9MNH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryLevel.PlayerAddedToEmissaryCrew
	 * Size -> 0x0010
	 */
	struct FPlayerAddedToEmissaryCrew
	{
	public:
		int32_t                                                    EmissaryLevel;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissaryLevelProgress;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EmissaryCompany;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissaryRoleplayActionTelemetryEvent
	 * Size -> 0x002C
	 */
	struct FEmissaryRoleplayActionTelemetryEvent
	{
	public:
		struct FGuid                                               EmissarySessionId;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                EmissaryCompany;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EmissaryRank;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBootyRewardType                                           ActionName;                                              // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M6EN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PointsRewarded;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointsAccumulated;                                       // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointsRequiredToNextRank;                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissarySessionEndTelemetryEvent
	 * Size -> 0x001C
	 */
	struct FEmissarySessionEndTelemetryEvent
	{
	public:
		struct FGuid                                               EmissarySessionId;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                EmissaryCompany;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEmissaryDeactivateReason                                  DisbandedReason;                                         // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7Q7Y[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryLevel.EmissarySessionStartTelemetryEvent
	 * Size -> 0x001C
	 */
	struct FEmissarySessionStartTelemetryEvent
	{
	public:
		struct FGuid                                               EmissarySessionId;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                EmissaryCompany;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EmisarriesOnServerCount;                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryLevel.VoteAddedNetworkEvent
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FVoteAddedNetworkEvent : public FBoxedRpc
	{
	public:
		class FName                                                CompanyId;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryLevel.VoteRemovedNetworkEvent
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FVoteRemovedNetworkEvent : public FBoxedRpc
	{
	public:
		class FName                                                CompanyId;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
