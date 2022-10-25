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
	 * Enum LostShipmentsClueFramework.EClueSiteLootType
	 */
	enum class EClueSiteLootType : uint8_t
	{
		Loot   = 0,
		Debris = 1,
		None   = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LostShipmentsClueFramework.ClueSite
	 * Size -> 0x0020
	 */
	struct FClueSite
	{
	public:
		class UClass*                                              SiteType;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClueSiteData*                                       SiteData;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_760G[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.WeightedClueDestinationDescriptor
	 * Size -> 0x0018
	 */
	struct FWeightedClueDestinationDescriptor
	{
	public:
		class UClass*                                              DestinationType;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<float>                                              DifficultyWeightings;                                    // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.WeightedClueDescriptor
	 * Size -> 0x0018
	 */
	struct FWeightedClueDescriptor
	{
	public:
		class UClass*                                              Descriptor;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<float>                                              DifficultyWeightings;                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.ClueSiteTypeSupportedDescribedByEntry
	 * Size -> 0x0018
	 */
	struct FClueSiteTypeSupportedDescribedByEntry
	{
	public:
		class UClass*                                              SiteType;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FWeightedClueDescriptor>                     SupportedDescriptors;                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.RestrictedClueType
	 * Size -> 0x0010
	 */
	struct FRestrictedClueType
	{
	public:
		class UClass*                                              Type;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    Max;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DBTA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.ClueSiteLootRestriction
	 * Size -> 0x0010
	 */
	struct FClueSiteLootRestriction
	{
	public:
		class UClass*                                              SiteType;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    LootMax;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y8VJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.DebrisToRangeDist
	 * Size -> 0x0028
	 */
	struct FDebrisToRangeDist
	{
	public:
		struct FWeightedProbabilityRange                           NumberOfDebrisItemsToSpawn;                              // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly
		class UWeightedDebrisDataAsset*                            WeightedDebrisTypeAsset;                                 // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.LootToRangeDist
	 * Size -> 0x0028
	 */
	struct FLootToRangeDist
	{
	public:
		struct FWeightedProbabilityRange                           NumberOfLootItemsToSpawn;                                // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly
		class UWeightedTreasureChestDescAsset*                     WeightedLootDescAsset;                                   // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.LootSpawnedAtClueSite
	 * Size -> 0x0018
	 */
	struct FLootSpawnedAtClueSite
	{
	public:
		class UClass*                                              SiteType;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             SiteLocation;                                            // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NumLoot;                                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.ClueSiteLootHistory
	 * Size -> 0x0010
	 */
	struct FClueSiteLootHistory
	{
	public:
		TArray<struct FLootSpawnedAtClueSite>                      History;                                                 // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.QuestVariableClueSite
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableClueSite : public FQuestVariable
	{	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.QuestVariableClueDescriptor
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableClueDescriptor : public FQuestVariable
	{	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.WeightedDebris
	 * Size -> 0x0028
	 */
	struct FWeightedDebris
	{
	public:
		TAssetPtr<class UClass>                                    DebrisClass;                                             // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_0964[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Weight;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IF66[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.LandClueCreationChoice
	 * Size -> 0x0018
	 */
	struct FLandClueCreationChoice
	{
	public:
		class UClass*                                              ClueSiteType;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                IslandIdentifier;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULandClueCreator*                                    ClueCreator;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.SeaClueCreationChoice
	 * Size -> 0x0020
	 */
	struct FSeaClueCreationChoice
	{
	public:
		class UClass*                                              SiteType;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USeaClueCreator*                                     ClueCreator;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_13QV[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.QuestVariableClueSiteArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableClueSiteArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct LostShipmentsClueFramework.EventClueObtained
	 * Size -> 0x0020
	 */
	struct FEventClueObtained
	{
	public:
		class UClueDescriptor*                                     ObtainedClue;                                            // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ObtainedSiteType;                                        // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_W745[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
