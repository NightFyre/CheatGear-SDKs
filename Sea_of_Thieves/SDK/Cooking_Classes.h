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
	 * Class Cooking.BurntItemConditionalStatTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBurntItemConditionalStatTrigger : public UConditionalStatsTriggerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.BurntItemOnShipConditionalStatTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBurntItemOnShipConditionalStatTrigger : public UConditionalStatsTriggerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCookableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookingDefaultsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCookingDefaultsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookingStatusPublisherInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCookingStatusPublisherInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookingStateInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCookingStateInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookableComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UCookableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JG7T[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NextCookState;                                           // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TimeToNextCookState;                                     // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TPQH[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCookableComponentSmokeFeedbackTimingEntry>  SmokeFeedbackLevels;                                     // 0x00F8(0x0010) Edit, ZeroConstructor
		class UCurveFloat*                                         VisibleCookedExtentOverTime;                             // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultVisibleCookedExtent;                              // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CookableTypeName;                                        // 0x0114(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPlayerStat                                         CookedStat;                                              // 0x011C(0x0004) Edit, DisableEditOnInstance
		struct FPlayerStat                                         ShipCookedStat;                                          // 0x0120(0x0004) Edit, DisableEditOnInstance
		ECookingState                                              CookingState;                                            // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECookingState                                              InitialCookingState;                                     // 0x0125(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECookingState                                              RemovedCookingState;                                     // 0x0126(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IgnoreCookedFromRawStats;                                // 0x0127(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCookerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookerComponent
	 * Size -> 0x0180 (FullSize[0x0248] - InheritedSize[0x00C8])
	 */
	class UCookerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WBXB[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatus>                                     StatusToApplyToContents;                                 // 0x00D0(0x0010) Edit, ZeroConstructor
		TArray<struct FCookerSmokeFeedbackEntry>                   VFXFeedback;                                             // 0x00E0(0x0010) Edit, ZeroConstructor
		class UStaticMeshMemoryConstraintComponent*                CookableStaticMeshComponent;                             // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshMemoryConstraintComponent*              CookableSkeletalMeshComponent;                           // 0x00F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CookedMaterialParameterName;                             // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BurnDownDirectionParameterName;                          // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlacementVarianceAngleBound;                             // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnByDefault;                                             // 0x0114(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1GGY[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCookingComponentAudioParams*                        AudioParams;                                             // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EVfxRegion                                                 VfxLocation;                                             // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M8DC[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemInfo*                                           CurrentlyCookingItem;                                    // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCookingClientRepresentation                        CookingState;                                            // 0x0130(0x0068) Net, Transient, RepNotify
		class UParticleSystemComponent*                            SmokeParticleComponent;                                  // 0x0198(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            VisibleCookableMaterial;                                 // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnedOn;                                                // 0x01A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       OnIsland;                                                // 0x01A9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BM5K[0x9E];                                  // 0x01AA(0x009E) MISSED OFFSET (PADDING)

	public:
		void OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation);
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookingComponentAudioParams
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UCookingComponentAudioParams : public UDataAsset
	{
	public:
		class UWwiseObjectPoolWrapper*                             CookingPool;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EmitterOffsetVector;                                     // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9RV4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         FoodPlaceInPot;                                          // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         CookingStart;                                            // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         CookingStop;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CookingTypeSwitchGroup;                                  // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CookingTypeSizzle;                                       // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CookingTypeSimmer;                                       // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FoodTypeSwitchGroup;                                     // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FoodTypeFruit;                                           // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FoodTypeMeat;                                            // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FoodTypeRareMeat;                                        // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FoodCookedAmount;                                        // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxCookingRtpcAmount;                                    // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ON0F[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookingPot
	 * Size -> 0x01E0 (FullSize[0x05E0] - InheritedSize[0x0400])
	 */
	class ACookingPot : public AInteractableBase
	{
	public:
		unsigned char                                              UnknownData_VWCC[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionRulesInteractableComponent*                   InteractableComponent;                                   // 0x0410(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCookerComponent*                                    CookerComponent;                                         // 0x0418(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HoldToInteractTime;                                      // 0x0420(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_03B6[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                NotWieldingCookableItemTooltip;                          // 0x0428(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_JDTR[0x20];                                  // 0x0440(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                WieldingCookableItemTooltip;                             // 0x0460(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_B497[0x20];                                  // 0x0478(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                TakeItemTooltip;                                         // 0x0498(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_QEW1[0x20];                                  // 0x04B0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CannotTakeItemTooltip;                                   // 0x04D0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_GC91[0x20];                                  // 0x04E8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                MixInItemTooltip;                                        // 0x0508(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_XCSP[0x20];                                  // 0x0520(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_A12L[0xA0];                                  // 0x0540(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.CookItemConditionalStatTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCookItemConditionalStatTrigger : public UConditionalStatsTriggerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.HasRequiredCookingStateStatCondition
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UHasRequiredCookingStateStatCondition : public UTargetedStatCondition
	{
	public:
		ECookingState                                              RequiredState;                                           // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_19K0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.MixableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMixableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.PottableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPottableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooking.PottableComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UPottableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_C5A2[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       CanBePutInPot;                                           // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O2T6[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
