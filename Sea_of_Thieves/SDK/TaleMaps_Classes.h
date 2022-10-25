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
	 * Class TaleMaps.AddMarkToTornMapStep
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UAddMarkToTornMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_GGXT[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WBS0[0x20];                                  // 0x0098(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MapMark;                                                 // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.AddMarkToTornMapStepDescBase
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UAddMarkToTornMapStepDescBase : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableGuid                                  MapID;                                                   // 0x0080(0x0020) Edit
		struct FTaleQuestVariableMapMarkType                       MapMark;                                                 // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.AddMarkToTornMapAtLocationStepDesc
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UAddMarkToTornMapAtLocationStepDesc : public UAddMarkToTornMapStepDescBase
	{
	public:
		struct FQuestVariableVector                                MarkLocation;                                            // 0x00C0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UAddMarkToTornMapAtActorLocationStepDesc : public UAddMarkToTornMapStepDescBase
	{
	public:
		struct FQuestVariableActor                                 MarkLocation;                                            // 0x00C0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep
	 * Size -> 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
	 */
	class UGetNumberOfCollectedTornMapPiecesStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_9IP3[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_LV2U[0x30];                                  // 0x0098(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UGetNumberOfCollectedTornMapPiecesStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableGuid                                  MapID;                                                   // 0x0080(0x0020) Edit
		struct FQuestVariableInt                                   NumPieces;                                               // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.RegionIslandSelectionStrategyBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URegionIslandSelectionStrategyBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.RegionIslandFilteredSelectionStrategy
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class URegionIslandFilteredSelectionStrategy : public URegionIslandSelectionStrategyBase
	{
	public:
		TArray<EIslandType>                                        IslandTypes;                                             // 0x0028(0x0010) Edit, ZeroConstructor
		bool                                                       UseMaxDistance;                                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VY4[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistanceFromStartingIsland;                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.RegionIslandRandomSelectionStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URegionIslandRandomSelectionStrategy : public URegionIslandSelectionStrategyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.SelectIslandsFromRegionStep
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class USelectIslandsFromRegionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_ICE7[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class URegionMapDataAsset*                                 RegionData;                                              // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URegionIslandSelectionStrategyBase*                  SelectionStrategy;                                       // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MDXX[0x40];                                  // 0x00A8(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.SelectIslandsFromRegionStepDesc
	 * Size -> 0x0090 (FullSize[0x0110] - InheritedSize[0x0080])
	 */
	class USelectIslandsFromRegionStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableDataAsset                             Region;                                                  // 0x0080(0x0020) Edit
		struct FQuestVariableInt                                   NumIslands;                                              // 0x00A0(0x0020) Edit
		struct FQuestVariableInt                                   MaxDifferentIslands;                                     // 0x00C0(0x0020) Edit
		struct FQuestVariableNameArray                             SelectedIslands;                                         // 0x00E0(0x0020) Edit
		class URegionIslandSelectionStrategyBase*                  SelectionStrategy;                                       // 0x0100(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    DefaultNumIslands;                                       // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefaultMaxDifferentIslands;                              // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestAddLocationMapStep
	 * Size -> 0x0088 (FullSize[0x0118] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddLocationMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_BDOU[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_0YBC[0x80];                                  // 0x0098(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestAddTornMapStep
	 * Size -> 0x0088 (FullSize[0x0118] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddTornMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_O241[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_YJGR[0x80];                                  // 0x0098(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestAddTradeRouteMapStep
	 * Size -> 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddTradeRouteMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_38QC[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_ECGI[0x60];                                  // 0x0098(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestCustomMapFunctionLibrary
	 * Size -> 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
	 */
	class UTaleQuestCustomMapFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		unsigned char                                              UnknownData_QUSJ[0x18];                                  // 0x0178(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateStrikeThoughTextElement(const struct FGuid& MapGuid, const struct FGuid& ElementGuid, bool StrikeThroughEnabled);
		void AddCustomMap(TAssetPtr<class UCustomMapData> Data, struct FGuid* MapGuid);
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestLocationMapChestFoundStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestLocationMapChestFoundStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_UYWN[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_DW1E[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestMapStepDescBase
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTaleQuestMapStepDescBase : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestAddLocationMapStepDesc
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddLocationMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableInt                                   NumberOfChests;                                          // 0x0088(0x0020) Edit
		struct FQuestVariableDataAsset                             RegionMapData;                                           // 0x00A8(0x0020) Edit
		struct FQuestVariableDataAsset                             VaultData;                                               // 0x00C8(0x0020) Edit
		struct FQuestVariableDataAsset                             MapParams;                                               // 0x00E8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestAddTornMapStepDesc
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddTornMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		struct FQuestVariableName                                  IslandName;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableInt                                   NumberOfPieces;                                          // 0x00A0(0x0020) Edit
		struct FQuestVariableDataAsset                             MapParams;                                               // 0x00C0(0x0020) Edit
		struct FQuestVariableGuid                                  MapID;                                                   // 0x00E0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddTradeRouteMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		struct FQuestVariableDataAsset                             TradeRouteData;                                          // 0x0080(0x0020) Edit
		struct FQuestVariableText                                  VesselName;                                              // 0x00A0(0x0020) Edit
		struct FQuestVariableGuid                                  MapID;                                                   // 0x00C0(0x0020) Edit
		class UClueSiteTypeToMapMarkIdDataAsset*                   ClueSiteToMapMarkIdMap;                                  // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestLocationMapChestFoundStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestWaitForChecklistMapCompletionStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestWaitForChecklistMapCompletionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_FOSL[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_IQGC[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestTriggerNamedChecklistEventStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestTriggerNamedChecklistEventStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_30MO[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestTriggerNamedChecklistEventStepDesc : public UTaleQuestStepDesc
	{
	public:
		class FName                                                Event;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<class FString> EventsSource();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
