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
	 * Class LostShipmentsClueFramework.ClueSiteData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UClueSiteData : public UObject
	{
	public:
		ETrackedOwnerType                                          DebrisTrackingType;                                      // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_KNS0[0xF];                                   // 0x0029(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueSiteType : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.LandClueCreator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULandClueCreator : public UObject
	{
	public:
		unsigned char                                              UnknownData_1BAM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.SeaClueCreator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USeaClueCreator : public UObject
	{
	public:
		unsigned char                                              UnknownData_KC8C[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueChoiceSelectionStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFixedClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
	{
	public:
		int32_t                                                    IndexToSelect;                                           // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_190W[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URandomClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueDestinationDescriptor
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UClueDestinationDescriptor : public UObject
	{
	public:
		unsigned char                                              UnknownData_R7XP[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_DestinationInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueDescriptor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueDescriptor : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueConnectionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UClueDescriptor* STATIC_CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int32_t Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite);
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueDescriptorGenerator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UClueDescriptorGenerator : public UObject
	{
	public:
		class UClass*                                              DescriptorType;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		TArray<class UClass*>                                      SupportedDestinationTypes;                               // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueDestinationGenerator
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UClueDestinationGenerator : public UObject
	{
	public:
		class UClass*                                              RequiredClueSiteDataType;                                // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FWeightedClueDestinationDescriptor>          WeightedSupportedDescriptorTypes;                        // 0x0030(0x0010) Edit, ZeroConstructor, Protected
		unsigned char                                              UnknownData_WB2V[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueConnectionConfig
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UClueConnectionConfig : public UDataAsset
	{
	public:
		TArray<struct FClueSiteTypeSupportedDescribedByEntry>      CluesThatCanDescribeSites;                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClueDescriptorGenerator*>                    ClueGenerators;                                          // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UClueDestinationGenerator*>                   DestinationGenerators;                                   // 0x0048(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueDescriptorContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueDescriptorContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueDescriptorContainerComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UClueDescriptorContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5E5D[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClueDescriptor*                                     CurrentClue;                                             // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       HasClueBeenGiven;                                        // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_Y5ZF[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueFactoryConfig
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UClueFactoryConfig : public UDataAsset
	{
	public:
		TArray<class ULandClueCreator*>                            LandClueCreators;                                        // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USeaClueCreator*>                             SeaClueCreators;                                         // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class UClueChoiceSelectionStrategy*                        ChoiceStrategy;                                          // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FRestrictedClueType>                         RestrictedClueTypes;                                     // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueFactory
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UClueFactory : public UObject
	{
	public:
		class UClueFactoryConfig*                                  Config;                                                  // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueLifetimeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite);
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.ClueSiteLootRestrictionsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UClueSiteLootRestrictionsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FClueSiteLootRestriction>                    ClueSiteLootRestrictions;                                // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.DebrisForVoyageRankDescAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDebrisForVoyageRankDescAsset : public UDataAsset
	{
	public:
		TArray<struct FDebrisToRangeDist>                          RankBasedDebrisDistribution;                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation
	 * Size -> 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_SeaClueSpawnLocation : public UEnvQueryTest
	{
	public:
		float                                                      MinProjectionDistance;                                   // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxProjectionDistance;                                   // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectionAngleInDegrees;                                // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IslandProximitySafeThreshold;                            // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ContextSourcePoint;                                      // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              ContextProjectionPoint;                                  // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQSO[0x8];                                   // 0x0190(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.LootForVoyageRankDescAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULootForVoyageRankDescAsset : public UDataAsset
	{
	public:
		TArray<struct FLootToRangeDist>                            RankBasedLootDistribution;                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.NPCLootSpawnInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNPCLootSpawnInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.NPCLootSpawnComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UNPCLootSpawnComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_B9ZF[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     LootItemSpawnRelativeLocations;                          // 0x00D0(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USeaClueSiteTypesDataAsset : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      ClueSiteTypes;                                           // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep
	 * Size -> 0x00C8 (FullSize[0x0158] - InheritedSize[0x0090])
	 */
	class UTaleQuestChooseLandOrSeaStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_HUZT[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_YML0[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USeaClueSiteTypesDataAsset*                          SeaClueSiteTypes;                                        // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YU3T[0xA0];                                  // 0x00B8(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestClueSiteService
	 * Size -> 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
	 */
	class UTaleQuestClueSiteService : public UTaleQuestService
	{
	public:
		class UTaleQuestClueSiteServiceDesc*                       Desc;                                                    // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FClueSite>                                   ClueSites;                                               // 0x0068(0x0010) ZeroConstructor
		TMap<EClueSiteLootType, struct FClueSiteLootHistory>       SpawnedLoot;                                             // 0x0078(0x0050) ZeroConstructor
		TArray<struct FGuid>                                       DebugClueSiteIds;                                        // 0x00C8(0x0010) ZeroConstructor

	public:
		TArray<struct FClueSite> GetClueSites();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestClueSiteServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc
	 * Size -> 0x00A0 (FullSize[0x0120] - InheritedSize[0x0080])
	 */
	class UTaleQuestChooseLandOrSeaStepDesc : public UTaleQuestStepDesc
	{
	public:
		class USeaClueSiteTypesDataAsset*                          SeaClueSiteTypes;                                        // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectionAngleInDegrees;                                // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinProjectionProportion;                                 // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxProjectionProportion;                                 // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandClueChanceWhenPreviousClueWasSea;                    // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandClueChanceWhenPreviousClueWasLand;                   // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QA5R[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                ProjectionPoint;                                         // 0x00A0(0x0020) Edit
		struct FQuestVariableTradeRouteData                        TradeRouteData;                                          // 0x00C0(0x0020) Edit
		struct FQuestVariableBool                                  IsSeaLocation;                                           // 0x00E0(0x0020) Edit
		struct FQuestVariableNameArray                             ValidIslandNames;                                        // 0x0100(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep
	 * Size -> 0x0088 (FullSize[0x0118] - InheritedSize[0x0090])
	 */
	class UTaleQuestGenerateCluePointingToSiteStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_CH4B[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_4I26[0x80];                                  // 0x0098(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc
	 * Size -> 0x0098 (FullSize[0x0118] - InheritedSize[0x0080])
	 */
	class UTaleQuestGenerateCluePointingToSiteStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableInt                                   Difficulty;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableVector                                SourceLocation;                                          // 0x00A0(0x0020) Edit
		struct FQuestVariableClueSite                              TargetClueSite;                                          // 0x00C0(0x0020) Edit
		struct FQuestVariableClueDescriptor                        GeneratedClue;                                           // 0x00E0(0x0020) Edit
		TArray<class UClass*>                                      AllowedClueTypes;                                        // 0x0100(0x0010) Edit, ZeroConstructor, UObjectWrapper
		class UClueConnectionConfig*                               ConnectionConfiguration;                                 // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestGenerateClueSiteAtSeaLocationStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_XZ6R[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_9424[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGenerateClueSiteAtSeaLocationStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableVector                                ApproximateLocation;                                     // 0x0080(0x0020) Edit
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x00A0(0x0020) Edit
		class UClueFactoryConfig*                                  ClueFactoryConfiguration;                                // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestGenerateClueSiteOnIslandStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_N2AX[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_MWLD[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGenerateClueSiteOnIslandStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableName                                  IslandName;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x00A0(0x0020) Edit
		class UClueFactoryConfig*                                  ClueGenerationConfiguration;                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestGenerateDebrisTypeForVoyageRankStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_72R7[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_YB6V[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableInt                                   VoyageRank;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableActorAssetTypeArray                   DebrisTypeArray;                                         // 0x00A0(0x0020) Edit
		class UDebrisForVoyageRankDescAsset*                       DebrisForRankDescAsset;                                  // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestGenerateLootDescForVoyageRankStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_6KEV[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_PRYR[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGenerateLootDescForVoyageRankStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableInt                                   VoyageRank;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableItemDescTypeArray                     LootDescArray;                                           // 0x00A0(0x0020) Edit
		class ULootForVoyageRankDescAsset*                         LootForRankDescAsset;                                    // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestIsClueOfTypeStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_BMK9[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestIsClueOfTypeStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UClass*                                              ClueSiteTypeToMatch;                                     // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x0088(0x0020) Edit
		struct FQuestVariableBool                                  IsMatchingType;                                          // 0x00A8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStep
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UTaleQuestSelectClueSiteForLootStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_WY7Q[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestSelectClueSiteForLootStepDesc*             StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5XF7[0x40];                                  // 0x00A0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStepDesc
	 * Size -> 0x0058 (FullSize[0x00D8] - InheritedSize[0x0080])
	 */
	class UTaleQuestSelectClueSiteForLootStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UTaleQuestArrayEntrySelectionStrategy*               SelectionStrategy;                                       // 0x0080(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClueSiteLootRestrictionsDataAsset*                  ClueSiteLootRestrictions;                                // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EClueSiteLootType                                          LootType;                                                // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OGWA[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableClueSite                              OutputClueSite;                                          // 0x0098(0x0020) Edit
		struct FQuestVariableBool                                  MaxedAllClueSites;                                       // 0x00B8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStep
	 * Size -> 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
	 */
	class UTaleQuestSpawnDebrisAtClueSiteStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_2TBV[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_JD84[0x78];                                  // 0x0098(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStepDesc
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UTaleQuestSpawnDebrisAtClueSiteStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClueSite                              ClueSiteVar;                                             // 0x0080(0x0020) Edit
		struct FQuestVariableActorAssetType                        DebrisTypeVar;                                           // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 OutDebrisActorVar;                                       // 0x00C0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestSpawnLootItemInClueSiteStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_97PZ[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestSpawnLootItemInClueSiteStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClass                                 LootItem;                                                // 0x0080(0x0020) Edit
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x00A0(0x0020) Edit
		struct FQuestVariableItemInfo                              SpawnedLootItem;                                         // 0x00C0(0x0020) Edit
		bool                                                       Tracked;                                                 // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1795[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestStoreClueOnActorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_NCT4[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UTaleQuestStoreClueOnActorStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClueDescriptor                        ClueDescriptor;                                          // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 Actor;                                                   // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 ClueActor;                                               // 0x00C0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_0TC7[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_STQF[0x28];                                  // 0x0098(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableItemInfo                              Item;                                                    // 0x0080(0x0020) Edit
		bool                                                       EnableAutoSink;                                          // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_49V8[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueFramework.WeightedDebrisDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWeightedDebrisDataAsset : public UDataAsset
	{
	public:
		TArray<struct FWeightedDebris>                             Debris;                                                  // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
