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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxInventory.InventoryAspectData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UInventoryAspectData : public UGbxDataAsset
	{
	public:
		EInventoryAspectUsagePriority                              Priority;                                                // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0UJW[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		void K2_OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
		void K2_OnApplyAspect(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
		class FString K2_GetFriendlyDescription();
		void K2_CloneAppearance(class AActor* CloneActor, class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryBalanceData
	 * Size -> 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
	 */
	class UInventoryBalanceData : public UActorPartSelectionData
	{
	public:
		unsigned char                                              UnknownData_SJ0W[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InventoryBalanceStateClass;                              // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryBalanceData*                               BaseBalanceData;                                         // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryData*                                      InventoryData;                                           // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryRarityData*                                RarityData;                                              // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FInventoryManufacturerBalanceData>           Manufacturers;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FRuntimeGenericPartListData                         RuntimeGenericPartList;                                  // 0x00D0(0x0020) Protected, NativeAccessSpecifierProtected
		unsigned char                                              bIsGearBuildable : 1;                                    // 0x00F0(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OF0K[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGearBuilderCategoryData*                            GearBuilderCategory;                                     // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxNumPrefixes;                                          // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N67U[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDownloadableInventorySetData*                       DlcInventorySetData;                                     // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMigratedToActorPartSelectionData;                       // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TPYZ[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               AssetGuid;                                               // 0x0114(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableVisibilityAndCollision : 1;                      // 0x0124(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YSK[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryData
	 * Size -> 0x02D0 (FullSize[0x0300] - InheritedSize[0x0030])
	 */
	class UInventoryData : public UGbxDataAsset
	{
	public:
		unsigned char                                              UnknownData_DC4U[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bInventoryNameIsFullName : 1;                            // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L1UD[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                InventoryName;                                           // 0x0040(0x0018) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      PrefixPartList;                                          // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      TitlePartList;                                           // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      SuffixPartList;                                          // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		class UInventoryNamingStrategyData*                        NamingStrategy;                                          // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InventoryActorClass;                                     // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAttributeEffectData>                        InventoryAttributeEffects;                               // 0x0098(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<struct FInstigatorAttributeEffectData>              InstigatorAttributeEffects;                              // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryAspectData*>                        AspectList;                                              // 0x00B8(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryAspectData*>                        StandaloneAspectList;                                    // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		bool                                                       bDisplayNameInInteractionHeader;                         // 0x00D8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsesItemCard;                                           // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CJI[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemCardTypeFrameName;                                   // 0x00E0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxCondition*>                               OnUseConstraints;                                        // 0x00F0(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUsesPlayerLevelRequirement;                             // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VPJ[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUIStatPriorityData>                         UIStats;                                                 // 0x0108(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGuid                                               AssetGuid;                                               // 0x0118(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         PickupSound;                                             // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         PickupEquipSound;                                        // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       SpottedCalloutCondition;                                 // 0x0138(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogEvent*                                        SpottedCallout;                                          // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         PickupImpact;                                            // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         EquipUISound;                                            // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         DropUISound;                                             // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              InventoryItemPickupClass;                                // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateActorInPickup;                                 // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSharedByPickups;                                        // 0x0169(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustMatchGameStageToShare;                              // 0x016A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAJW[0x5];                                   // 0x016B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PickupFlyToTarget;                                       // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PickupHiddenBones;                                       // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideRotationInShop;                                 // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWEO[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationInShop;                                          // 0x018C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideTranslationInShop;                              // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KI2[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TranslationInShop;                                       // 0x019C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideScaleInShop;                                    // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XKBQ[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ScaleInShop;                                             // 0x01AC(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideRotationInContainer;                            // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPNO[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationInContainer;                                     // 0x01BC(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bCanBeHolsteredOnBody : 1;                               // 0x01C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanShowHolsteredInFirstPerson : 1;                      // 0x01C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4BC[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultHolsterSocketName;                                // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryCategoryData*                              InventoryCategory;                                       // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerDroppability                                        PlayerDroppability;                                      // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SizeInInventory;                                         // 0x01E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQKN[0x6];                                   // 0x01E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        MonetaryValue;                                           // 0x01E8(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreShopPriceMarkup;                                  // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCalculatePriceInShopUsingPlayerAsContext;               // 0x0221(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AF2I[0x2];                                   // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseMonetaryValueModifier;                               // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesInventoryScore;                                     // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXZE[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             AssociatedCustomizationData;                             // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AXZ[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ThumbnailTransform;                                      // 0x0240(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          ItemInspectInitialTransform;                             // 0x0270(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          ItemInspectInitialTransform_Vertical;                    // 0x02A0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          ItemInspectInitialTransform_4way;                        // 0x02D0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void EnumeratePickupFlyToTargets(TArray<class FName>* Targets);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryData_Simple
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class UInventoryData_Simple : public UInventoryData
	{
	public:
		class UClass*                                              InventoryBalanceStateClass;                              // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UManufacturerData*                                   ManufacturerData;                                        // 0x0308(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryRarityData*                                RarityData;                                              // 0x0310(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryBalanceData*                               BalanceData;                                             // 0x0318(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryListComponent
	 * Size -> 0x01F8 (FullSize[0x0370] - InheritedSize[0x0178])
	 */
	class UInventoryListComponent : public UActorComponent
	{
	public:
		struct FInventoryListContainer                             InventoryList;                                           // 0x0178(0x00C8) Net, Protected, NativeAccessSpecifierProtected
		int32_t                                                    InventoryCapacityUsed;                                   // 0x0240(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LLO1[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UInventoryCategoryData*, struct FInventorySelectionTracker> SelectedIndexs;                                          // 0x0248(0x0050) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DroppedPickupClass;                                      // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanPickupOnTouch;                                       // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O3DR[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeInteger                                MaxInventoryItems;                                       // 0x02A4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0RI6[0x28];                                  // 0x02B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInventoryItemAdded;                                    // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemRemoved;                                  // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemUpdated;                                  // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemActorReplaced;                            // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemQuantityUpdated;                          // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemPickedUp;                                 // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddedToInventory_Internal;                             // 0x0338(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreAddToFullInventory_Internal;                        // 0x0348(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemovingFromInventory_Internal;                        // 0x0358(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RAQ[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		int32_t SizeInInventory(class AInventoryItemPickup* PickupToTest);
		void ServerTransferItem(const struct FInventoryListEntryHandle& InventoryItemHandle, class AActor* DestinationActor, int32_t Quantity);
		void ServerSetItemUIFlags(const struct FInventoryListEntryHandle& Handle, unsigned char Flags, unsigned char FlagsMask);
		void ServerSetItemsUIFlags(class UInventoryCategoryData* Category, unsigned char Flags, unsigned char FlagsMask);
		void ServerRemoveItem(const struct FInventoryListEntryHandle& InventoryItemHandle);
		void ServerRemoveCustomizationPartFromInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part);
		void ServerDropItem(const struct FInventoryListEntryHandle& InventoryItemHandle, const struct FVector& InitialLocation, const struct FRotator& InitialRotation);
		void ServerConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int32_t Quantity);
		void ServerAddCustomizationPartToInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part);
		bool IsInventoryFull();
		bool HasActorInList(class AActor* ItemActor);
		class AActor* GetStoredInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle);
		void GetSelectedItemQuantity(class UInventoryCategoryData* ChildTypeToGet, int32_t* Quantity, int32_t* MaxQuantity);
		int32_t GetMaxInventoryItems();
		bool GetItem(const struct FInventoryListEntryHandle& InventoryItemHandle, struct FInventoryListEntry* ListEntry);
		class FText STATIC_GetInventoryListEntryDisplayName(struct FInventoryListEntry* ListEntry);
		class FText STATIC_GetInventoryListEntryDisplayDescription(struct FInventoryListEntry* ListEntry);
		int32_t GetInventoryItemCount();
		void GetInventoryHandlesOfType(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList);
		class FText STATIC_GetInventoryDisplayName(class AActor* InventoryActor);
		class FText STATIC_GetInventoryDisplayDescription(class AActor* InventoryActor);
		void GetCategoryOnlyInventoryHandles(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList);
		int32_t GetCategoryItemQuantity(class UInventoryCategoryData* ItemCategory);
		class AActor* GetAndConsumeSelected(class UInventoryCategoryData* TypeToConsume, int32_t Quantity);
		class AActor* GetAndConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int32_t Quantity);
		void ClearInventory(bool DestroyInventory);
		bool CanUseSelected(class UInventoryCategoryData* ChildTypeToUse, int32_t Quantity);
		bool CanSwapItemForPickup(class AActor* Item, class AInventoryItemPickup* Pickup);
		void AddOrUpdateCategoryOnly(class UInventoryCategoryData* ItemCategory, int32_t Quantity);
		struct FInventoryListEntryHandle AddItemFromPickup(class AInventoryItemPickup* PickupActor);
		struct FInventoryListEntryHandle AddExternalItemEx(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32_t Quantity, int32_t Flags, bool bConditionalDestroyActor, int32_t DesiredSlot, bool bBypassInventoryFull);
		struct FInventoryListEntryHandle AddExternalItem(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32_t Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int32_t DesiredSlot, bool bBypassInventoryFull);
		bool AddCategory(class UInventoryCategoryData* ItemCategory, bool TrackQuantity);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryBalanceStateComponent
	 * Size -> 0x0170 (FullSize[0x0348] - InheritedSize[0x01D8])
	 */
	class UInventoryBalanceStateComponent : public UBalanceStateComponent
	{
	public:
		struct FInventoryReplicationData                           PackedReplicationData;                                   // 0x01D8(0x0010) Net, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      NamePartList;                                            // 0x01E8(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		float                                                      MonetaryValueModifierTotal;                              // 0x01F8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MonetaryValue;                                           // 0x01FC(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InventoryScoreModifierTotal;                             // 0x0200(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InventoryScoreValue;                                     // 0x0204(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryData*                                      InventoryData;                                           // 0x0208(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryBalanceData*                               InventoryBalanceData;                                    // 0x0210(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UManufacturerData*                                   ManufacturerData;                                        // 0x0218(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInventoryPartData*>                          PartList;                                                // 0x0220(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryGenericPartData*>                   GenericPartList;                                         // 0x0230(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<unsigned char>                                      AdditionalData;                                          // 0x0240(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryCustomizationPartData*>             CustomizationPartList;                                   // 0x0250(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ReRollCount;                                             // 0x0260(0x0001) Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EHA6[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0268(0x0018) Edit, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryAspectData*>                        GenericAspects;                                          // 0x0280(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		class UGestaltData*                                        GestaltData;                                             // 0x0290(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        GestaltMeshPartNames;                                    // 0x0298(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<struct FGbxAttributeModifierHandle>                 InstigatorAttributeModifiers;                            // 0x02A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FInventoryPrimitiveAspectSetData>            PrimitiveAspectSetList;                                  // 0x02B8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryConditionalDamageAspectData*>       ConditionalDamageAspectList;                             // 0x02C8(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryAttributeEffectsAspectData*>        AttributeEffectsAspectList;                              // 0x02D8(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryParticleAspectData*>                ParticleAspects;                                         // 0x02E8(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		struct FCachedUIStatCollectionData                         UIStats;                                                 // 0x02F8(0x0010) Transient, Protected, NativeAccessSpecifierProtected
		struct FReplicatedUIStatCollectionData                     ReplicatedUIStats;                                       // 0x0308(0x0010) Net, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6AJD[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInventoryMaterialAspectTextureAssetStreamer*> InventoryMaterialAspectTextureAssetStreamers;            // 0x0320(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YMBG[0x18];                                  // 0x0330(0x0018) MISSED OFFSET (PADDING)

	public:
		void PostBeginPlay();
		void OnRep_ReplicatedUIStats();
		void NotifyUnequipped(class APawn* OldInstigator);
		void NotifyEquipped(class APawn* NewInstigator);
		void NotifyAttached(class APawn* Instigator);
		class UClass* K2_GetDamageType();
		bool IsManufactureredBy(class UManufacturerData* Manufacturer);
		unsigned char GetReRollCount();
		TArray<class UInventoryPartData*> GetPartList();
		int32_t GetMonetaryValue();
		class UManufacturerData* GetManufacturer();
		int32_t GetInventoryScoreValue();
		class UParticleSystem* GetInventoryRarityLootBeamOverride();
		float GetInventoryRarityLootBeamHeight();
		class UWwiseEvent* GetInventoryRarityLootAudioStinger();
		EDropLifeSpanType GetInventoryRarityLifeSpanType();
		float GetInventoryRarityLifeSpan();
		class FString GetInventoryRarityFrameName();
		class FText GetInventoryRarityDisplayName();
		class UInventoryRarityData* GetInventoryRarityData();
		struct FLinearColor GetInventoryRarityColorOutline();
		struct FLinearColor GetInventoryRarityColorFX();
		bool GetInventoryDisplayRarityOutline();
		class UInventoryData* GetInventoryData();
		class UInventoryBalanceData* GetInventoryBalanceData();
		TArray<class UInventoryGenericPartData*> GetGenericPartList();
		class FText GetDisplayName();
		class UClass* GetDamageType();
		TArray<class UInventoryCustomizationPartData*> GetCustomizationPartList();
		void CloneAppearance(class AActor* DestActor, class USceneComponent* ParentComp, bool bAbsoluteScale);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryItemPickup
	 * Size -> 0x0190 (FullSize[0x05E8] - InheritedSize[0x0458])
	 */
	class AInventoryItemPickup : public AActor
	{
	public:
		class UWwiseEvent*                                         PickupAudioEvent;                                        // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         CompletePickupAudioEvent;                                // 0x0460(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DestroyOnPickup;                                         // 0x0468(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8R38[0x3];                                   // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseFailBumpUpVelocity;                                   // 0x046C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseFailBumpBaseRotation;                                 // 0x0470(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3R0[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              PickedUpBy;                                              // 0x0478(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                PickupMesh;                                              // 0x0480(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              PickupSkelMesh;                                          // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UParticleSystemComponent*>                    PickupActorParticles;                                    // 0x0490(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x04A0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanOnlyBePickedUpByOwnerController : 1;                 // 0x04A4(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHighDetail : 1;                                         // 0x04A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSharedWithAllPlayers : 1;                               // 0x04A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSharedPlayersMustBeOnFriendlyTeam : 1;                  // 0x04A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReplicatePickupActor : 1;                               // 0x04A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticPickup : 1;                                        // 0x04A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseInventoryDataPickupActionType : 1;                   // 0x04A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4K1[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultPickupActorClass;                                 // 0x04A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDrawDistance;                                         // 0x04B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPickupActionType                                          DefaultPickupActionType;                                 // 0x04B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPickupActionType                                          StaticPickupActionType;                                  // 0x04B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMTR[0x2];                                   // 0x04B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       CanBeTouchedCondition;                                   // 0x04B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryCategoryData*                              PickupCategory;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPickupSpawnUnpaused;                                   // 0x04C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPickupSpawnActive;                                     // 0x04D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPickupIsActive;                                        // 0x04E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPickedUp;                                              // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             StaticLocation;                                          // 0x0508(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StaticRotation;                                          // 0x0514(0x000C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       NotAddedToInventory;                                     // 0x0520(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLH1[0x3];                                   // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PickupSphereRadius;                                      // 0x0524(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PickupSphereRadiusHideScale;                             // 0x0528(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RB7[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    PickupSphereComponent;                                   // 0x0530(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryData*                                      AssociatedInventoryData;                                 // 0x0538(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                OverrideErrorText;                                       // 0x0540(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		bool                                                       PlacedPickup;                                            // 0x0558(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSUD[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryBalanceStateComponent*                     CachedInventoryBalanceComponent;                         // 0x0560(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              PickupActor;                                             // 0x0568(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ReplicatedPickupActor;                                   // 0x0570(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FInventoryItemPickupClientSpawnData                 PickupActorClientSpawnData;                              // 0x0578(0x0030) Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bPickupSpawnPaused : 1;                                  // 0x05A8(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsActive : 1;                                           // 0x05A8(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VR12[0x3];                                   // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantizeNormal                           BumpAngularDir;                                          // 0x05AC(0x000C) Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6NMU[0x20];                                  // 0x05B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LootSpawnAction;                                         // 0x05D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              RepLootSpawnAction;                                      // 0x05E0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void WaitForBalanceState();
		void SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, class AController* OwnerController);
		void ResetBumpOnPickupFail();
		void OnUsedBy(const struct FUseEvent& UseEvent);
		void OnRespawnEvent();
		void OnRep_RepLootSpawnAction();
		void OnRep_PickupActorClientSpawnData();
		void OnRep_PickupActor();
		void OnRep_PickedUpBy();
		void OnRep_IsActive();
		void OnRep_BumpAngularDir();
		void OnPickedUpEvent(class AActor* WasPickedUpBy);
		void OnLookedAtByPlayer(class APlayerController* InstigatingPlayer, bool bCanInteractWith, const struct FVector& NewUsableComponentImpactPoint, float NewUsableDistanceAway);
		bool IsPickupInitialized();
		void GiveInventoryToUser(class AActor* Other, bool bAutoEquip);
		class UMeshComponent* GetMeshComponent();
		class UParticleSystem* GetInventoryRarityLootBeamOverride();
		class UWwiseEvent* GetInventoryRarityLootAudioStinger();
		EDropLifeSpanType GetInventoryRarityLifeSpanType();
		struct FLinearColor GetInventoryRarityColorOutline();
		struct FLinearColor GetInventoryRarityColorFX();
		bool GetInventoryDisplayRarityOutline();
		class UInventoryBalanceStateComponent* GetInventoryBalanceStateComponent();
		void DeactivatePickup();
		bool CanBePickedUp(class AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup);
		void ActivatePickup();
		void ActivateAfterSpawnDelay();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.DroppedInventoryItemPickup
	 * Size -> 0x0078 (FullSize[0x0660] - InheritedSize[0x05E8])
	 */
	class ADroppedInventoryItemPickup : public AInventoryItemPickup
	{
	public:
		float                                                      LinearDamping;                                           // 0x05E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextImpactDistanceThreshold;                             // 0x05EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextImpactTimeThreshold;                                 // 0x05F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ImpactVelocityThreshold;                                 // 0x05F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultVelocity;                                         // 0x05F8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector_NetQuantize10                               DefaultAngularVelocity;                                  // 0x05FC(0x000C) Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InitialMassScale;                                        // 0x0608(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DroppedQuantity;                                         // 0x060C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShrinkLifeSpan;                                          // 0x0610(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8K7F[0xC];                                   // 0x0614(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDroppedFromPlayerInventory;                             // 0x0620(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T5M[0x3F];                                  // 0x0621(0x003F) MISSED OFFSET (PADDING)

	public:
		void OnRep_ShrinkLifeSpan();
		void OnRep_InitialMassScale();
		void OnRep_DroppedQuantity();
		void OnPickupHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnPhysicsWake(class UPrimitiveComponent* WakingComponent, const class FName& BoneName);
		void OnPhysicsSleep(class UPrimitiveComponent* WakingComponent, const class FName& BoneName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.DownloadableInventorySetData
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UDownloadableInventorySetData : public UDownloadableContentData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryCustomizationPartData
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UInventoryCustomizationPartData : public UGbxCustomizationData
	{
	public:
		unsigned char                                              UnknownData_XTK5[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               AssetGuid;                                               // 0x0138(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldRemovePartWhenDropped;                            // 0x0148(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y649[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryPartData
	 * Size -> 0x0150 (FullSize[0x0250] - InheritedSize[0x0100])
	 */
	class UInventoryPartData : public UActorPartData
	{
	public:
		unsigned char                                              UnknownData_TYMM[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        MonetaryValueModifier;                                   // 0x0108(0x0038) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        InventoryScoreModifier;                                  // 0x0140(0x0038) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      PrefixPartList;                                          // 0x0178(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      TitlePartList;                                           // 0x0188(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class UInventoryNamePartData*>                      SuffixPartList;                                          // 0x0198(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		class FName                                                InventoryNamingTag;                                      // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAttributeEffectData>                        InventoryAttributeEffects;                               // 0x01B0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<struct FInstigatorAttributeEffectData>              InstigatorAttributeEffects;                              // 0x01C0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<struct FUIStatPriorityData>                         UIStats;                                                 // 0x01D0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		bool                                                       bAvailableForPartInspection;                             // 0x01E0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QK4S[0x7];                                   // 0x01E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUIStatData_Text*>                            PartInspectionTitleOverride;                             // 0x01E8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		class UUIStatData_Text*                                    PartInspectionDescription;                               // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideStatsForPartInspection;                             // 0x0200(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZI3G[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInventoryAspectData*>                        AspectList;                                              // 0x0208(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FString                                              GearBuilderDescription;                                  // 0x0218(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldIgnorePartBoundsForPickupAttachment;              // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O1XN[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ExcludedGestaltMeshPartNamesForItemInspectionAndThumbnailBounds; // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               AssetGuid;                                               // 0x0240(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FAttributeInitializationData GetMonetaryValueModifier();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryGenericPartData
	 * Size -> 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
	 */
	class UInventoryGenericPartData : public UInventoryPartData
	{
	public:
		bool                                                       bOverridePartSelection;                                  // 0x0250(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZFN[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               Tags;                                                    // 0x0258(0x0020) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryNamingStrategyData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInventoryNamingStrategyData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryRarityData
	 * Size -> 0x0118 (FullSize[0x0148] - InheritedSize[0x0030])
	 */
	class UInventoryRarityData : public UGbxDataAsset
	{
	public:
		struct FLinearColor                                        RarityColorFX;                                           // 0x0030(0x0010) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        RarityColorOutline;                                      // 0x0040(0x0010) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RarityOutlineDepthStencilValue;                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DisplayRarityOutline;                                    // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H361[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RarityFrameName;                                         // 0x0058(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDropLifeSpanType                                          RarityLifeSpanType;                                      // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ERFJ[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                RarityDisplayname;                                       // 0x0070(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		int32_t                                                    RaritySortValue;                                         // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_COKD[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     RarityLootBeamOverride;                                  // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     RarityLootBeamForInventoryWithFoilParts;                 // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RarityLootBeamHeight;                                    // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YENS[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ItemScoreRarityModifier;                                 // 0x00A8(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UWwiseEvent*                                         RarityLootAudioStinger;                                  // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        MonetaryValueModifier;                                   // 0x00E8(0x0038) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              OnPickedUpStat[0x28];                                    // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxInventory.InventoryRarityData.OnPickedUpStat

	public:
		int32_t GetRaritySortValue();
		int32_t GetRarityOutlineDepthStencilValue();
		class UParticleSystem* GetRarityLootBeamOverride(bool bInventoryHasAFoilPart);
		float GetRarityLootBeamHeight();
		class UWwiseEvent* GetRarityLootAudioStinger();
		EDropLifeSpanType GetRarityLifeSpanType();
		float GetRarityLifeSpan();
		class FText GetRarityDisplayName();
		struct FLinearColor GetRarityColorOutline();
		struct FLinearColor GetRarityColorFX();
		struct FAttributeInitializationData GetItemScoreRarityModifier();
		bool GetDisplayRarityOutline();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.LootableComponent
	 * Size -> 0x00A0 (FullSize[0x0218] - InheritedSize[0x0178])
	 */
	class ULootableComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPickupAttached;                                        // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPickupDetached;                                        // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllPickupsDetached;                                    // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ULootableBalanceData*                                BalanceData;                                             // 0x01A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InitialDropLootMassScale;                                // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPickupLootAttachmentMode                                  LootAttachmentMode;                                      // 0x01B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J2A7[0x3];                                   // 0x01B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LootSpawnActions;                                        // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		bool                                                       bForceSpawnedLootToHaveInfiniteLifespan;                 // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_597Z[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UseOverrideBoxExtents;                                   // 0x01CC(0x000C) Edit, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideUseWithBox;                                     // 0x01D8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_68DM[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLootConfigurationInfo>                      LootConfigurations;                                      // 0x01E0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class ADroppedInventoryItemPickup*>                 AttachedLoot;                                            // 0x01F0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class ULootableBalanceData*                                LootableBalanceDataOverride;                             // 0x0200(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              BalanceContextOverride;                                  // 0x0208(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1E2M[0x8];                                   // 0x0210(0x0008) MISSED OFFSET (PADDING)

	public:
		void SpawnAndDropLoot(class FName* SelectedConfigurationName);
		void SpawnAndAttachLoot(class FName* SelectedConfigurationName);
		void SetBalanceContextOverride(class AActor* NewOverrideContext, bool bOnlyUseForGameStage);
		void InitializeLootConfigurations(class ULootableBalanceData* LootableBalanceData);
		TArray<class ADroppedInventoryItemPickup*> GetAttachedPickups();
		void ActivateAttachedLoot();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.ManufacturerData
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UManufacturerData : public UGbxDataAsset
	{
	public:
		unsigned char                                              UnknownData_W11V[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        MinGameStage;                                            // 0x0038(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        MaxGameStage;                                            // 0x0070(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FText                                                ManufacturerName;                                        // 0x00A8(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class FText                                                Blurb;                                                   // 0x00C0(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		TArray<class UUIStatData*>                                 UIStats;                                                 // 0x00D8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               AssetGuid;                                               // 0x00E8(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ManufacturerLogoFrameName;                               // 0x00F8(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDialogEnumValue*                                    ManufacturerDialogEnumValue;                             // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.ItemPoolListInterface
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UItemPoolListInterface : public UGbxDataAsset
	{
	public:
		TArray<class UItemPoolPartSelectionOverrideData*>          PartSelectionOverrides;                                  // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.ItemPoolData
	 * Size -> 0x0088 (FullSize[0x00C8] - InheritedSize[0x0040])
	 */
	class UItemPoolData : public UItemPoolListInterface
	{
	public:
		unsigned char                                              UnknownData_0R7T[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBalancedInventoryInfo>                      BalancedItems;                                           // 0x0048(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bSupportsGameStageVariance;                              // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RPV1[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        Quantity;                                                // 0x0060(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UGbxAttributeData*                                   MinGameStageRequirement;                                 // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxAttributeData*                                   MaxGameStageRequirement;                                 // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UItemPoolExpansionData*>                      Expansions;                                              // 0x00A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               AssetGuid;                                               // 0x00B8(0x0010) DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryMaterialAspectData
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UInventoryMaterialAspectData : public UInventoryAspectData
	{
	public:
		class FName                                                PrimitiveComponentName;                                  // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PrimitiveComponentTag;                                   // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SectionIndex;                                            // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HYYX[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FRarityMaterialData>                         RaritySpecificMaterials;                                 // 0x0058(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialVectorParameterData>                VectorParameters;                                        // 0x0068(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialScalarParameterData>                ScalarParameters;                                        // 0x0078(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialTextureParameterData>               TextureParameters;                                       // 0x0088(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialTextureAssetParameterData>          TextureAssetParameters;                                  // 0x0098(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialFontParameterData>                  FontParameters;                                          // 0x00A8(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryPartSetData
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class UInventoryPartSetData : public UActorPartSetData
	{
	public:
		struct FInventoryGenericPartListData                       GenericParts;                                            // 0x0078(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryAttributeEffectsAspectData
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UInventoryAttributeEffectsAspectData : public UInventoryAspectData
	{
	public:
		struct FGameplayTagContainer                               ComparisonTags;                                          // 0x0038(0x0020) Edit, BlueprintReadOnly, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		bool                                                       bResetAttributes;                                        // 0x0058(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HWIP[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAttributeEffectData>                        InventoryAttributeEffects;                               // 0x0060(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.GbxCondition_InventoryRarityComparison
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UGbxCondition_InventoryRarityComparison : public UGbxCondition
	{
	public:
		EConditionComparisonOperatorType                           Operator;                                                // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5WMW[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryRarityData*                                ReferenceRarity;                                         // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.GearBuilderCategoryData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGearBuilderCategoryData : public UGbxDataAsset
	{
	public:
		class FName                                                CategoryName;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.GearBuilderWidget
	 * Size -> 0x0188 (FullSize[0x0288] - InheritedSize[0x0100])
	 */
	class UGearBuilderWidget : public UWidget
	{
	public:
		class UGearBuilderDebugMenu*                               OwnerMenu;                                               // 0x0100(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QPFK[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryBalanceStateInitializationData            GearData;                                                // 0x0128(0x0068) Transient, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UObject>                              SelectedItem;                                            // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0C1E[0xF0];                                  // 0x0198(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.GearBuilderDebugMenu
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class UGearBuilderDebugMenu : public UGbxDebugMenuSubmenu
	{
	public:
		class UGearBuilderWidget*                                  GearBuilder;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryBalanceCollectionData
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInventoryBalanceCollectionData : public UGbxDataAsset
	{
	public:
		class UInventoryBalanceCollectionData*                     ParentCollection;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              InventoryBalanceList[0x10];                              // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxInventory.InventoryBalanceCollectionData.InventoryBalanceList
		TArray<class UInventoryBalanceData*>                       RuntimeInventoryBalanceList;                             // 0x0048(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryBalanceData_Generated
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UInventoryBalanceData_Generated : public UInventoryBalanceData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInventoryBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class UInventoryGenericPartData*> STATIC_GetPossibleGenericParts(class UInventoryBalanceStateComponent* InventoryBalanceState, const struct FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts);
		class UInventoryBalanceStateComponent* STATIC_GetInventoryBalanceState(class AActor* Inventory);
		class AActor* STATIC_CreateInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData);
		class AActor* STATIC_CloneInventory(class AActor* SourceInventory);
		class AActor* STATIC_BuildInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryCategoryData
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UInventoryCategoryData : public UGbxInventoryCategoryData
	{
	public:
		bool                                                       NotAddedToInventory;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPickupActionType                                          PickupActionType;                                        // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SharedWithAllPlayers;                                    // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSharedPlayersMustBeOnFriendlyTeam;                      // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLevelSyncPickupCurrency;                                // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ManualActivation;                                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJ1R[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CategoryDisplayName;                                     // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bCanInspectItem;                                         // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanInspectManufacturer;                                 // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanInspectElementalEffects;                             // 0x005A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanInspectParts;                                        // 0x005B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanChangeSkins;                                         // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEquipAudioFromWeaponType;                            // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotUseCosmeticLabelInBackpackCells;                   // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VDG[0x1];                                   // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EquipAudioEventName;                                     // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSaveGameQuantityChangeThrottling;                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84P3[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryConditionalDamageAspectData
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UInventoryConditionalDamageAspectData : public UInventoryAspectData
	{
	public:
		TArray<struct FInventoryConditionalDamageAspectInfo>       DamageConditionals;                                      // 0x0038(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryGenericPartExpansionData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UInventoryGenericPartExpansionData : public UGbxDataAsset
	{
	public:
		class UGbxCondition*                                       ExpansionCondition;                                      // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInventoryBalanceCollectionData*                     InventoryBalanceCollection;                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FInventoryGenericPartExpansionListData              GenericParts;                                            // 0x0040(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		void EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryMaterialAspectTextureAssetStreamer
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UInventoryMaterialAspectTextureAssetStreamer : public UObject
	{
	public:
		unsigned char                                              UnknownData_SB9N[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryModuleSettings
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UInventoryModuleSettings : public UObject
	{
	public:
		class UClass*                                              DefaultDroppedPickupBlueprint;                           // 0x0028(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VeryShortLivedDropLifeSpan;                              // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShortLivedDropLifeSpan;                                  // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LongLivedDropLifeSpan;                                   // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PickupShrinkDuration;                                    // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResetBumpOnPickupFailDelay;                              // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T38Q[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PickupFlyToTargets;                                      // 0x0048(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryNamePartData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UInventoryNamePartData : public UGbxDataAsset
	{
	public:
		class FText                                                PartName;                                                // 0x0030(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      Priority;                                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L2YY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       Condition;                                               // 0x0050(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinExperienceLevel;                                      // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxExperienceLevel;                                      // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInventoryOwnerInterface : public UInterface
	{
	public:
		void AttachedItemPickedUp(class AInventoryItemPickup* InventoryItemPickedUp, class AActor* PickedUpBy);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventoryParticleAspectData
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UInventoryParticleAspectData : public UInventoryAspectData
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ComponentName;                                           // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeTranslation;                                     // 0x0050(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RelativeRotation;                                        // 0x005C(0x000C) Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConditionalInventoryParticleEmitter>        ConditionalEmitters;                                     // 0x0068(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventorySerialNumberAssetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInventorySerialNumberAssetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.InventorySerialNumberDatabase
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UInventorySerialNumberDatabase : public UObject
	{
	public:
		TArray<class UClass*>                                      AssetClasses;                                            // 0x0028(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_216O[0xA8];                                  // 0x0038(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.ItemPoolExpansionData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UItemPoolExpansionData : public UGbxDataAsset
	{
	public:
		class UItemPoolData*                                       ItemPoolToExpand;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBalancedInventoryInfo>                      BalancedItems;                                           // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.ItemPoolListData
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UItemPoolListData : public UItemPoolListInterface
	{
	public:
		TArray<class UItemPoolListData*>                           ItemPoolIncludedLists;                                   // 0x0040(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FItemPoolInfo>                               ItemPools;                                               // 0x0050(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.ItemPoolPartSelectionOverrideData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UItemPoolPartSelectionOverrideData : public UGbxDataAsset
	{
	public:
		class UClass*                                              PartSetClass;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEnum*                                               PartTypeEnum;                                            // 0x0038(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FItemPoolPartSelectionPartTypeOverrideData>  PartTypeOverrides;                                       // 0x0040(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void EnumerateInventoryParts(unsigned char PartType, TArray<class UActorPartData*>* OutPartList);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.LootableBalanceData
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class ULootableBalanceData : public UGbxDataAsset
	{
	public:
		TArray<struct FLootConfigurationInfo>                      DefaultLoot;                                             // 0x0030(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class ULootListData*>                               DefaultIncludedLootLists;                                // 0x0040(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DefaultLootGameStageVarianceFormula;                     // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.LootFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULootFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SpawnItemsRaw(class UObject* WorldContextObject, TArray<class UItemPoolListData*> ItemPoolLists, TArray<struct FItemPoolInfo> ExtraItemPools, int32_t GameStage, const struct FVector& Location, const struct FRotator& Rotation, float InitialVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.LootListData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULootListData : public UGbxDataAsset
	{
	public:
		TArray<struct FLootConfigurationInfo>                      LootData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.PickupableMeshActor
	 * Size -> 0x0030 (FullSize[0x0488] - InheritedSize[0x0458])
	 */
	class APickupableMeshActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_JTDN[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxActionComponent*                                 ActionComponent;                                         // 0x0460(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KSMK[0x20];                                  // 0x0468(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.PickupFlyToAbleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPickupFlyToAbleInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.PickupFlyToData
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UPickupFlyToData : public UGbxDataAsset
	{
	public:
		float                                                      MaxLifetime;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetThreshold;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableSpinSpeedRange : 1;                               // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableLinearSpeedRange : 1;                             // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableTargetRotationSpeedRange : 1;                     // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7J7F[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SpinSpeed;                                               // 0x003C(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MaxSpinSpeed;                                            // 0x0048(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LinearSpeed;                                             // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearSpeed;                                          // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearAcceleration;                                      // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TerminalLinearSpeed;                                     // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetRotationSpeed;                                     // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTargetRotationSpeed;                                  // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF0P[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TargetScaleByDistanceCurve;                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetScaleByDistanceBlendInSpeed;                       // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4XA[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ArcCurve;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArcCompletePercent;                                      // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHE3[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInventory.PickupFlyToTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPickupFlyToTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
