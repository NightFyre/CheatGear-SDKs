#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum GbxInventory.EPickupLootAttachmentMode
	 */
	enum class EPickupLootAttachmentMode : uint8_t
	{
		Origin                 = 0,
		Center                 = 1,
		CenterAndScale         = 2,
		CenterAndScaleUpOrDown = 3,
		ScaleDown              = 4,
		MAX                    = 5
	};

	/**
	 * Enum GbxInventory.EPlayerDroppability
	 */
	enum class EPlayerDroppability : uint8_t
	{
		EPD_CanDropAndSell = 0,
		EPD_NoDrop         = 1,
		EPD_NoDropOrSell   = 2,
		EPD_MAX            = 3
	};

	/**
	 * Enum GbxInventory.EPickupActionType
	 */
	enum class EPickupActionType : uint8_t
	{
		OnUseOrTouch = 0,
		OnUseOnly    = 1,
		OnTouchOnly  = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxInventory.EInventoryAspectUsagePriority
	 */
	enum class EInventoryAspectUsagePriority : uint8_t
	{
		Default   = 0,
		Low       = 1,
		Medium    = 2,
		High      = 3,
		Ultra     = 4,
		Legendary = 5,
		MAX       = 6
	};

	/**
	 * Enum GbxInventory.EInventoryConditionalDamageApplicationTarget
	 */
	enum class EInventoryConditionalDamageApplicationTarget : uint8_t
	{
		Inventory                = 0,
		InstigatorDamageCaused   = 1,
		InstigatorDamageReceived = 2,
		MAX                      = 3
	};

	/**
	 * Enum GbxInventory.EAddInventoryItemFlags
	 */
	enum class EAddInventoryItemFlags : uint8_t
	{
		AutoEquip     = 0,
		AddedByPickup = 1,
		AddedBySave   = 2,
		MissionReward = 3,
		MAX           = 4
	};

	/**
	 * Enum GbxInventory.EDropLifeSpanType
	 */
	enum class EDropLifeSpanType : uint8_t
	{
		DROP_VeryShortLived    = 0,
		DROP_ShortLived        = 1,
		DROP_LongLived         = 2,
		DROP_LiveForever       = 3,
		DROP_LiveAsLongAsLevel = 4,
		DROP_MAX               = 5
	};

	/**
	 * Enum GbxInventory.EInventorySerialNumberState
	 */
	enum class EInventorySerialNumberState : uint8_t
	{
		Empty     = 0,
		Writing   = 1,
		Full      = 2,
		Reading   = 3,
		Encrypted = 4,
		MAX       = 5
	};

	/**
	 * Enum GbxInventory.EPickupFlyToAlignmentType
	 */
	enum class EPickupFlyToAlignmentType : uint8_t
	{
		Spin         = 0,
		TargetFacing = 1,
		MAX          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxInventory.InventoryManufacturerBalanceData
	 * Size -> 0x0080
	 */
	struct FInventoryManufacturerBalanceData
	{
	public:
		class UManufacturerData*                                   ManufacturerData;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameStageGradeWeightData                           GameStageWeight;                                         // 0x0008(0x0070) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class UItemPoolPartSelectionOverrideData*                  PartSelectionOverrideData;                               // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInventory.RuntimeGenericPartListData
	 * Size -> 0x0020
	 */
	struct FRuntimeGenericPartListData
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8IWC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedActorPartData>                      PartList;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4W7B[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryListEntryHandle
	 * Size -> 0x0004
	 */
	struct FInventoryListEntryHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInventory.InventoryListEntry
	 * Size -> 0x0034 (FullSize[0x0040] - InheritedSize[0x000C])
	 */
	struct FInventoryListEntry : public FFastArraySerializerItem
	{
	public:
		struct FInventoryListEntryHandle                           Handle;                                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryCategoryData*                              BaseCategoryDefinition;                                  // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMZ8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              StoredActor;                                             // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerDroppability                                        PlayerDroppability;                                      // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN8I[0x17];                                  // 0x0029(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryListContainer
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FInventoryListContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FInventoryListEntry>                         Items;                                                   // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OVPZ[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventorySelectionTracker
	 * Size -> 0x000C
	 */
	struct FInventorySelectionTracker
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TrackQuantity;                                           // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXNF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryListEntryHandle                           SelectedHandle;                                          // 0x0008(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.InventoryReplicationData
	 * Size -> 0x0010
	 */
	struct FInventoryReplicationData
	{
	public:
		unsigned char                                              UnknownData_0WZR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryPrimitiveSectionAspectSetData
	 * Size -> 0x0018
	 */
	struct FInventoryPrimitiveSectionAspectSetData
	{
	public:
		class UInventoryMaterialAspectData*                        PrimaryMaterialAspect;                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInventoryMaterialAspectData*>                MaterialAspects;                                         // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.InventoryPrimitiveAspectSetData
	 * Size -> 0x0020
	 */
	struct FInventoryPrimitiveAspectSetData
	{
	public:
		class FName                                                PrimitiveComponentName;                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PrimitiveComponentTag;                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInventoryPrimitiveSectionAspectSetData>     SectionAspectSetList;                                    // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.InventoryItemPickupClientSpawnData
	 * Size -> 0x0030
	 */
	struct FInventoryItemPickupClientSpawnData
	{
	public:
		bool                                                       bSpawnDefaultPickupActor;                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYYW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryReplicationData                           BalanceData;                                             // 0x0008(0x0010) NativeAccessSpecifierPublic
		struct FReplicatedUIStatCollectionData                     UIStats;                                                 // 0x0018(0x0010) NativeAccessSpecifierPublic
		int32_t                                                    MonetaryValue;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryScoreValue;                                     // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.PoolSocketAttachmentInfo
	 * Size -> 0x0048
	 */
	struct FPoolSocketAttachmentInfo
	{
	public:
		class UItemPoolData*                                       ItemPool;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AttachmentPointName;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        Weight;                                                  // 0x0010(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.LootAttachmentInfo
	 * Size -> 0x0058
	 */
	struct FLootAttachmentInfo
	{
	public:
		class UItemPoolData*                                       ItemPool;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AttachmentPointName;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        Probability;                                             // 0x0010(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPoolSocketAttachmentInfo>                   OverrideAttachmentList;                                  // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.LootConfigurationInfo
	 * Size -> 0x0058
	 */
	struct FLootConfigurationInfo
	{
	public:
		class FName                                                ConfigurationName;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LootGameStageVarianceFormula;                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        Weight;                                                  // 0x0010(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FLootAttachmentInfo>                         ItemAttachments;                                         // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.BalancedInventoryInfo
	 * Size -> 0x0070
	 */
	struct FBalancedInventoryInfo
	{
	public:
		class UItemPoolData*                                       ItemPoolData;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              InventoryBalanceData[0x28];                              // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxInventory.BalancedInventoryInfo.InventoryBalanceData
		class UInventoryBalanceData*                               ResolvedInventoryBalanceData;                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Weight;                                                  // 0x0038(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.RarityMaterialData
	 * Size -> 0x0010
	 */
	struct FRarityMaterialData
	{
	public:
		class UInventoryRarityData*                                Rarity;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.MaterialParameterData
	 * Size -> 0x0008
	 */
	struct FMaterialParameterData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.MaterialVectorParameterData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMaterialVectorParameterData : public FMaterialParameterData
	{
	public:
		struct FLinearColor                                        Vector;                                                  // 0x0008(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.MaterialScalarParameterData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMaterialScalarParameterData : public FMaterialParameterData
	{
	public:
		float                                                      Scalar;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM9J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.MaterialTextureParameterData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMaterialTextureParameterData : public FMaterialParameterData
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.MaterialTextureAssetParameterData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMaterialTextureAssetParameterData : public FMaterialParameterData
	{
	public:
		unsigned char                                              Texture[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxInventory.MaterialTextureAssetParameterData.Texture
	};

	/**
	 * ScriptStruct GbxInventory.MaterialFontParameterData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMaterialFontParameterData : public FMaterialParameterData
	{
	public:
		class UFont*                                               Font;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FontPage;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQD7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryGenericPartListData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FInventoryGenericPartListData : public FActorPartListData
	{	};

	/**
	 * ScriptStruct GbxInventory.InventoryBalanceStateInitializationData
	 * Size -> 0x0068
	 */
	struct FInventoryBalanceStateInitializationData
	{
	public:
		int32_t                                                    GameStage;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MQ3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryData*                                      InventoryData;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryBalanceData*                               InventoryBalanceData;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UManufacturerData*                                   ManufacturerData;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInventoryPartData*>                          PartList;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UInventoryGenericPartData*>                   GenericPartList;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      AdditionalData;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UInventoryCustomizationPartData*>             CustomizationPartList;                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ReRollCount;                                             // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDroppedFromAI;                                          // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZGR[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryConditionalDamageAspectInfo
	 * Size -> 0x0010
	 */
	struct FInventoryConditionalDamageAspectInfo
	{
	public:
		class UConditionalDamageModifier*                          ConditionalModifier;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInventoryForDamageValueContext;                      // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryConditionalDamageApplicationTarget               ApplicationTarget;                                       // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0MN[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryGenericPartExpansionListData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FInventoryGenericPartExpansionListData : public FActorPartListData
	{	};

	/**
	 * ScriptStruct GbxInventory.ConditionalInventoryParticleEmitter
	 * Size -> 0x0018
	 */
	struct FConditionalInventoryParticleEmitter
	{
	public:
		class UGbxCondition*                                       EnableCondition;                                         // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        EmitterNames;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInventory.ItemPoolInfo
	 * Size -> 0x0088
	 */
	struct FItemPoolInfo
	{
	public:
		class UItemPoolData*                                       ItemPool;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        PoolProbability;                                         // 0x0008(0x0038) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        NumberOfTimesToSelectFromThisPool;                       // 0x0040(0x0038) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class UItemPoolPartSelectionOverrideData*>          PartSelectionOverrides;                                  // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxInventory.ItemPoolPartSelectionPartTypeOverrideData
	 * Size -> 0x0018
	 */
	struct FItemPoolPartSelectionPartTypeOverrideData
	{
	public:
		unsigned char                                              PartType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z44U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorPartData*>                              PreferredParts;                                          // 0x0008(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxInventory.SelectedInventoryInfo
	 * Size -> 0x0060
	 */
	struct FSelectedInventoryInfo
	{
	public:
		class UInventoryData*                                      InventoryData;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryBalanceData*                               InventoryBalanceData;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UManufacturerData*                                   ManufacturerData;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameStage;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2S1D[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActorPartSelectionOverrideData                     PartSelectionOverrideData;                               // 0x0020(0x0010) NativeAccessSpecifierPublic
		struct FActorPartList                                      GenericPartSelectionOverrideData;                        // 0x0030(0x0018) NativeAccessSpecifierPublic
		TArray<class UInventoryGenericPartData*>                   GenericPartsToInject;                                    // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCompileUIStats;                                         // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDroppedFromAI;                                          // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCIY[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventorySaveGameData
	 * Size -> 0x0080
	 */
	struct FInventorySaveGameData
	{
	public:
		TArray<unsigned char>                                      EncryptedSerialNumber;                                   // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FInventoryBalanceStateInitializationData            DevelopmentSaveData;                                     // 0x0010(0x0068) Edit, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60EG[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.ItemPoolCollection
	 * Size -> 0x0020
	 */
	struct FItemPoolCollection
	{
	public:
		TArray<struct FItemPoolInfo>                               ItemPools;                                               // 0x0000(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UItemPoolListData*>                           ItemPoolLists;                                           // 0x0010(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxInventory.InventoryListEntryUIData
	 * Size -> 0x0008
	 */
	struct FInventoryListEntryUIData
	{
	public:
		unsigned char                                              UnknownData_BGP3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventoryCategorySaveData
	 * Size -> 0x0010
	 */
	struct FInventoryCategorySaveData
	{
	public:
		class UInventoryCategoryData*                              BaseCategoryDefinition;                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W1U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.InventorySerialNumber
	 * Size -> 0x0020
	 */
	struct FInventorySerialNumber
	{
	public:
		EInventorySerialNumberState                                State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UHCM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Buffer;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		uint32_t                                                   RunningCounter;                                          // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7V9B[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInventory.ManufacturerGradeData
	 * Size -> 0x0010
	 */
	struct FManufacturerGradeData
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
