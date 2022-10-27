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
	 * Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueDescriptor : public UClueDescriptor
	{
	public:
		class UClueDestinationDescriptor*                          DestinationDescriptor;                                   // 0x0028(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAbandonedNoteClueDescriptorGenerator : public UClueDescriptorGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextChoiceSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_GH4K[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClueDestinationDescriptor*, int16_t>           ExistingDestinations;                                    // 0x0040(0x0050) ZeroConstructor, Transient
		unsigned char                                              UnknownData_C3TO[0x50];                                  // 0x0090(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextChoiceSourceConsumerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextAsset : public UDataAsset
	{
	public:
		TArray<class FText>                                        Descriptions;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              DestinationType;                                         // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextIndexAssetBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextIndexAssetMap : public UDataAsset
	{
	public:
		TArray<struct FClueDestinationToTextIndex>                 TextIndexMappings;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ClueTitleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueTitleInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ClueDestinationContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueDestinationContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent
	 * Size -> 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
	 */
	class UAbandonedNoteClueDestinationContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BVAQ[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClueDestinationChoice                              CurrentClueDestination;                                  // 0x00E8(0x0010) Net, Transient, RepNotify
		class UAbandonedNoteClueTextIndexAssetMap*                 ClueTextIndexAssetMap;                                   // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              CompositeFormatString;                                   // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                CurrentTitleText;                                        // 0x0110(0x0018) ELEMENT_SIZE_MISMATCH Net, RepNotify
		unsigned char                                              UnknownData_YA26[0x20];                                  // 0x0128(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UAbandonedNoteClueTextChoiceSource*                  ClueTextChoiceSource;                                    // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VUZY[0x80];                                  // 0x0150(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentTitleText();
		void OnRep_CurrentClueDestination();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNPCByNameClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		struct FGuid                                               NPCIdentifier;                                           // 0x0040(0x0010) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueGenderSpecificTextAsset : public UDataAsset
	{
	public:
		TArray<struct FGenderSpecificTextPairings>                 Descriptions;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              DestinationType;                                         // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueGenderSpecificTextIndexAsset : public UAbandonedNoteClueTextIndexAssetBase
	{
	public:
		TArray<class UAbandonedNoteClueGenderSpecificTextAsset*>   ClueDestinationDescriptions;                             // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteClueTextIndexAsset : public UAbandonedNoteClueTextIndexAssetBase
	{
	public:
		TArray<class UAbandonedNoteClueTextAsset*>                 ClueDestinationDescriptions;                             // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent
	 * Size -> 0x00F0 (FullSize[0x01B8] - InheritedSize[0x00C8])
	 */
	class UAbandonedNoteWieldableRenderingComponent : public UActorComponent
	{
	public:
		int32_t                                                    CanvasWidth;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CanvasHeight;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               BodyTextFont;                                            // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               TitleTextFont;                                           // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FontLineSpacing;                                         // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FontScale;                                               // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTreasureMapWidgetText                              BodyTextLayout;                                          // 0x00E8(0x0038) Edit, DisableEditOnInstance
		struct FTreasureMapWidgetText                              TitleTextLayout;                                         // 0x0120(0x0038) Edit, DisableEditOnInstance
		TArray<struct FTextEntryWithLayout>                        ExtraTextFields;                                         // 0x0158(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              WieldableRenderingInterface[0x10];                       // 0x0168(0x0010) UNKNOWN PROPERTY: InterfaceProperty LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent.WieldableRenderingInterface
		unsigned char                                              UnknownData_WV3H[0x40];                                  // 0x0178(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.AbandonedNoteWieldable
	 * Size -> 0x0040 (FullSize[0x07C0] - InheritedSize[0x0780])
	 */
	class AAbandonedNoteWieldable : public ASkeletalMeshWieldableItem
	{
	public:
		unsigned char                                              UnknownData_XIZ3[0x10];                                  // 0x0780(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWieldableItemCanvasRenderingComponent*              WieldableItemCanvasRenderingComponent;                   // 0x0790(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbandonedNoteWieldableRenderingComponent*           AbandonedNoteRenderingComponent;                         // 0x0798(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInventoryItemComponent*                             InventoryItemComponent;                                  // 0x07A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUsableWieldableComponent*                           UsableWieldableComponent;                                // 0x07A8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EQuestMapIcon                                              QuestMapIcon;                                            // 0x07B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7WIP[0xF];                                   // 0x07B1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBarrelsOfPlentyClueDestinationGenerator : public UClueDestinationGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UBarrelsOfPlentyClueSiteData : public UClueSiteData
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_517X[0x2C];                                  // 0x0044(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBarrelsOfPlentyClueSiteType : public UClueSiteType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBarrelsOfPlentySeaClueCreator : public USeaClueCreator
	{
	public:
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMin;             // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMax;             // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.CircleMapClueDescriptor
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCircleMapClueDescriptor : public UClueDescriptor
	{
	public:
		class UClueDestinationDescriptor*                          DestinationDescriptor;                                   // 0x0028(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UCircleMapClueDescriptorGenerator : public UClueDescriptorGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCircleMapClueRenderDataSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent
	 * Size -> 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
	 */
	class UCircleMapClueDestinationContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_DOLI[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MapMarkId;                                               // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      MapMarkArea;                                             // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MapMarkScaleMin;                                         // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MapMarkScaleMax;                                         // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MapMarkNoiseModifier;                                    // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBlendMode                                                 MapMarkBlendMode;                                        // 0x00F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3HZR[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebugCrossId;                                            // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       ShowCluePositionOnMap;                                   // 0x0100(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_19SA[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMapTextureRenderData>                       ClueRenderData;                                          // 0x0108(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_PMBF[0x48];                                  // 0x0118(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable
	 * Size -> 0x0040 (FullSize[0x0870] - InheritedSize[0x0830])
	 */
	class AClueSiteCircleMapWieldable : public ARenderToTextureMapBase
	{
	public:
		TAssetPtr<class UTexture2D>                                InventoryRadialBackgroundTexture;                        // 0x0830(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_AAWX[0x4];                                   // 0x084C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FMapRadialIconData                                  MapRadialIconData;                                       // 0x0850(0x0018) Net, RepNotify
		unsigned char                                              UnknownData_7PTZ[0x8];                                   // 0x0868(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_MapRadialIconData();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClueVariantsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue);
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UCompositeClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		class UClueDestinationDescriptor*                          PrimaryClueDestDescriptor;                               // 0x0040(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UClueDestinationDescriptor*                          SecondaryClueDestDescriptor;                             // 0x0048(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_DestinationInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UEndOfGooseChaseClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UExistingToPhasedNPCIndexAssetMap : public UDataAsset
	{
	public:
		TArray<struct FExistingNPCToPhasedNPC>                     NPCIndexMappings;                                        // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UFloatingMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UFloatingMessageInABottleClueSiteData : public UClueSiteData
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O3HQ[0x2C];                                  // 0x0044(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFloatingMessageInABottleClueSiteType : public UClueSiteType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UFloatingMessageInABottleSeaClueCreator : public USeaClueCreator
	{
	public:
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMin;             // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMax;             // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGooseChaseClueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UClueDescriptor* STATIC_CreateEndOfGooseChaseClue();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UIslandByCompassBearingClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		ECompassDirections                                         CompassDirection;                                        // 0x0040(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q2V4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UIslandByNameClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		class FName                                                IslandIdentifier;                                        // 0x0040(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UIslandNameForNPCContextDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		class FName                                                IslandIdentifier;                                        // 0x0040(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class ULocationOnIslandClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		class FName                                                IslandIdentifier;                                        // 0x0040(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WorldPosition;                                           // 0x0048(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_WQWH[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULostShipwreckClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMerchantCaptainSpawnInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UMerchantCaptainSpawnComponent : public UItemSpawnComponent
	{
	public:
		unsigned char                                              UnknownData_XIT3[0x10];                                  // 0x0440(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.NPCHintDialogueClueCreator
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UNPCHintDialogueClueCreator : public ULandClueCreator
	{
	public:
		class UExistingToPhasedNPCIndexAssetMap*                   NPCMappingAsset;                                         // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMin;             // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMax;             // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnZOffset;                                    // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CZFA[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UNPCHintDialogueClueDestinationGenerator : public UClueDestinationGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData
	 * Size -> 0x00E8 (FullSize[0x0120] - InheritedSize[0x0038])
	 */
	class UNPCHintDialogueClueSiteData : public UClueSiteData
	{
	public:
		struct FNPCData                                            NPCData;                                                 // 0x0038(0x00B8)
		unsigned char                                              UnknownData_R0ZY[0x30];                                  // 0x00F0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNPCHintDialogueClueSiteType : public UClueSiteType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ObtainClueOnWieldComponent
	 * Size -> 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
	 */
	class UObtainClueOnWieldComponent : public UOnItemWieldedComponent
	{
	public:
		unsigned char                                              UnknownData_W2KN[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClueDescriptor*                                     ClueToObtain;                                            // 0x0140(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ClueSiteType;                                            // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent
	 * Size -> 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
	 */
	class UObtainClueFromContainerOnWieldComponent : public UObtainClueOnWieldComponent
	{
	public:
		unsigned char                                              UnknownData_0TUH[0x70];                                  // 0x0150(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class USeaLocationByGridSquareClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		struct FVector                                             SeaLocationIdentifier;                                   // 0x0040(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_I5LO[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShipwreckClueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UClueDescriptor* STATIC_CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int32_t Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck);
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UShipwreckClueDestinationDescriptor : public UClueDestinationDescriptor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UShipwreckClueDestinationGenerator : public UClueDestinationGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.ShipwreckClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShipwreckClueSiteType : public UClueSiteType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestClueInventoryService
	 * Size -> 0x0228 (FullSize[0x0288] - InheritedSize[0x0060])
	 */
	class UTaleQuestClueInventoryService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_S79D[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClueDescriptor*>                             ObtainedClues;                                           // 0x0078(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_EINW[0x50];                                  // 0x0088(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClueDescriptor*, class AActor*>                DiscovererMap;                                           // 0x00D8(0x0050) ZeroConstructor, Transient
		unsigned char                                              UnknownData_79OF[0x120];                                 // 0x0128(0x0120) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TitleText;                                               // 0x0248(0x0018) ELEMENT_SIZE_MISMATCH Transient
		unsigned char                                              UnknownData_QDJ4[0x20];                                  // 0x0260(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UAbandonedNoteClueTextChoiceSource*                  ClueTextChoiceSource;                                    // 0x0280(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetClueTitleText(const class FText& InTitleText);
		int32_t GetCollectedClueCount();
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTaleQuestClueInventoryServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		TAssetPtr<class UClass>                                    AbandonedNoteItem;                                       // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZU21[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UClass>                                    CircleMapItem;                                           // 0x0048(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_KM14[0x4];                                   // 0x0064(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetNPCActorFromClueSiteStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_8ZTN[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetNPCActorFromClueSiteStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 NPCFromClueSite;                                         // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetPhasedVersionOfActorFromAssetMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_ATC3[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UExistingToPhasedNPCIndexAssetMap*                   NPCIndexAssetMap;                                        // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 ExistingNPCActor;                                        // 0x0080(0x0020) Edit
		struct FQuestVariableActorAssetType                        ObtainedPhasedNPCActorType;                              // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 PhasingSourceActor;                                      // 0x00C0(0x0020) Edit
		class UExistingToPhasedNPCIndexAssetMap*                   IndexAssetMap;                                           // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_U1J0[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableShipwreck                             ShipwreckSpawnedOn;                                      // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 SpawnedMerchantCaptain;                                  // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestSpawnWashedUpMessageInABottleClueStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_405Y[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x0080(0x0020) Edit
		struct FQuestVariableClueDescriptor                        ClueDescriptor;                                          // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 MessageInABottle;                                        // 0x00C0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestSpawnWashedUpSkeletonClueStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_WLJ5[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UTaleQuestSpawnWashedUpSkeletonClueStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClueSite                              ClueSite;                                                // 0x0080(0x0020) Edit
		struct FQuestVariableClueDescriptor                        ClueDescriptor;                                          // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 SkeletonActor;                                           // 0x00C0(0x0020) Edit
		struct FQuestVariableItemInfo                              ClueItem;                                                // 0x00E0(0x0020) Edit
		class FName                                                SkeletonClueSocketName;                                  // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WaitForClueCollectedStep
	 * Size -> 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
	 */
	class UWaitForClueCollectedStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_5KZ3[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UClueDescriptor*                                     ClueDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ClueActor;                                               // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FUPV[0x68];                                  // 0x00A8(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UWaitForClueCollectedStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableClueDescriptor                        Clue;                                                    // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 ClueActor;                                               // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 Discoverer;                                              // 0x00C0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UWashedUpMessageInABottleClueCreator : public ULandClueCreator
	{
	public:
		TAssetPtr<class UClass>                                    MessageInABottleItem;                                    // 0x0030(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_NE6K[0x4];                                   // 0x004C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMin;             // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMax;             // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnZOffset;                                    // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LootItemSinkIntoSandZDistanceMin;                        // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LootItemSinkIntoSandZDistanceMax;                        // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LootItemSinkIntoSandRotationMin;                         // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LootItemSinkIntoSandRotationMax;                         // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LRZJ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TAssetPtr<class UClass>>                            SinkIntoSandItems;                                       // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UWashedUpMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UWashedUpMessageInABottleClueSiteData : public UClueSiteData
	{
	public:
		class UClass*                                              BottleItemType;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                IslandNameToSpawnOn;                                     // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               IslandSpawnLocationReservationId;                        // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9NV[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0060(0x0030) IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      SinkIntoSandItems;                                       // 0x0090(0x0010) ZeroConstructor, UObjectWrapper
		unsigned char                                              UnknownData_G6XA[0x40];                                  // 0x00A0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWashedUpMessageInABottleClueSiteType : public UClueSiteType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UWashedUpSkeletonClueDestinationGenerator : public UClueDestinationGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UWashedUpSkeletonClueSiteData : public UClueSiteData
	{
	public:
		class UClass*                                              SkeletonPoseType;                                        // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              ClueItemType;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                IslandNameToSpawnOn;                                     // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               IslandSpawnLocationReservationId;                        // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransform                                          SpawnTransform;                                          // 0x0060(0x0030) IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IC7M[0x30];                                  // 0x0090(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWashedUpSkeletonClueSiteType : public UClueSiteType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UWashedUpSkeletonLandClueCreator : public ULandClueCreator
	{
	public:
		TArray<TAssetPtr<class UClass>>                            SkeletonPoses;                                           // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		TAssetPtr<class UClass>                                    ClueItemDesc;                                            // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_XADK[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMin;             // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnXYDistanceFromClueIncrementMax;             // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LootItemSpawnZOffset;                                    // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8R6X[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UInteractableGrammaticalGenderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_16YW[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EInteractableGrammaticalGender                             GrammaticalGender;                                       // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PH59[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
