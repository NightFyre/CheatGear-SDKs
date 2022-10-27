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
	 * Class Tales.TaleQuestStep
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UTaleQuestStep : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z687[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTaleQuestStepDesc*                                  TaleStepDesc;                                            // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestService
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UTaleQuestService : public UObject
	{
	public:
		unsigned char                                              UnknownData_4JZ4[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestServiceDesc : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStepDesc
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UTaleQuestStepDesc : public UObject
	{
	public:
		bool                                                       Fork;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PUBC[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FQuestVariableAny>                PromotedPropertyVariables;                               // 0x0030(0x0050) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleMigrationAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleMigrationAction : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFramedStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestFramedStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_6YDW[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_NR7S[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTaleQuestService*>                           Services;                                                // 0x00A0(0x0010) ZeroConstructor, Protected
		class UTaleQuestFramedStepDesc*                            FrameDesc;                                               // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G8A4[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       StructForCollector;                                      // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScriptStruct*                                       LocalStructForCollector;                                 // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFramedStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
	{
	public:
		TArray<class UTaleQuestServiceDesc*>                       Services;                                                // 0x0080(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
		class UScriptStruct*                                       Variables;                                               // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInlineUserDefinedStructDetails                     GeneratedVariables;                                      // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ContendedResourceComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UContendedResourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NBRT[0x40];                                  // 0x00C8(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.EnvQueryContext_TaleContextBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_TaleContextBase : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.IslandTypeWeightsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UIslandTypeWeightsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FIslandTypeWeights>                          IslandTypeWeightsForDifficultyRanks;                     // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStepInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestStepInterface : public UInterface
	{
	public:
		void Signal();
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SplineFootprintPathComponent
	 * Size -> 0x0028 (FullSize[0x0660] - InheritedSize[0x0638])
	 */
	class USplineFootprintPathComponent : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_4MUP[0x8];                                   // 0x0638(0x0008) Fix Super Size
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0640(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSplineFootprintPathTool                            PathTool;                                                // 0x0648(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_16WC[0x3];                                   // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecalYaw;                                                // 0x064C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DecalUniformScale;                                       // 0x0650(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UHLD[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.StartTallTaleConditionalStatTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStartTallTaleConditionalStatTrigger : public UConditionalStatsTriggerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayEntrySelectionStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestArrayEntrySelectionStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FixedArrayEntrySelectionStrategy
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFixedArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
	{
	public:
		int32_t                                                    IndexToSelect;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZIZX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.RandomArrayEntrySelectionStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URandomArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SequentialArrayEntrySelectionStrategy
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USequentialArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
	{
	public:
		unsigned char                                              UnknownData_SOYP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCargoRunContract
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UTaleQuestCargoRunContract : public UObject
	{
	public:
		unsigned char                                              UnknownData_MFSZ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnDelivered;                                             // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnCollected;                                             // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		TArray<struct FTaleQuestCargoRunContractItem>              ItemsToCollect;                                          // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor
		unsigned char                                              UnknownData_QH2B[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DeliverToNPC;                                            // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CollectFromNPC;                                          // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3CCC[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCargoRunContractsService
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UTaleQuestCargoRunContractsService : public UTaleQuestService
	{
	public:
		TArray<class UTaleQuestCargoRunContract*>                  Contracts;                                               // 0x0060(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_WAID[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (PADDING)

	public:
		class UTaleQuestCargoRunContract* GetContract(const struct FGuid& Guid);
		struct FGuid AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int32_t InTimeLimitInMinutes);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCompoundStepInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestCompoundStepInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestIndexedFrame
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UTaleQuestIndexedFrame : public UObject
	{
	public:
		unsigned char                                              UnknownData_RBLG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTaleQuestForEachStepDescBase*                       Desc;                                                    // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6WGN[0x4C];                                  // 0x003C(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMerchantContract
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UTaleQuestMerchantContract : public UObject
	{
	public:
		unsigned char                                              UnknownData_HCMR[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnExpired;                                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnDelivered;                                             // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnCollected;                                             // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnAllocated;                                             // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMerchantContractsService
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UTaleQuestMerchantContractsService : public UTaleQuestService
	{
	public:
		TArray<class UTaleQuestMerchantContract*>                  Contracts;                                               // 0x0060(0x0010) ZeroConstructor

	public:
		class UTaleQuestMerchantContract* GetContract(const struct FGuid& Guid);
		struct FGuid AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const class FName& InDeliveryDestination, float InTimeLimit);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestImportFrame
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UTaleQuestImportFrame : public UTaleQuestRootFrame
	{
	public:
		unsigned char                                              UnknownData_BOSJ[0x88];                                  // 0x0038(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestSelectorServiceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetDebugVoyageSeed(int32_t Seed);
		void STATIC_ResetVoyageDebugSeed();
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.CutsceneResponsesTaleService
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UCutsceneResponsesTaleService : public UTaleQuestService
	{
	public:
		TArray<class UCutsceneResponseCoordinator*>                TrackedResponseCoordinators;                             // 0x0060(0x0010) ZeroConstructor
		TArray<class UCutsceneResponseComponent*>                  TrackedResponseComponents;                               // 0x0070(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		TArray<class AActor*>                                      ResponseRelevantActors;                                  // 0x0080(0x0010) ZeroConstructor

	public:
		void TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator);
		class UCutsceneResponseSheet* StartCutsceneResponseSheet(class AActor* TargetActor, class UClass* ResponseSheetClass);
		void ClearAllActiveResponseSheets();
		void AddResponseSheetRelevantActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GameEventExclusionZoneTaleService
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UGameEventExclusionZoneTaleService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_T1ZP[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.RewardGenTaleQuestService
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class URewardGenTaleQuestService : public UTaleQuestService
	{
	public:
		class UTaleQuestWeightedItemDescSpawnDataAsset*            GlobalSpawnData;                                         // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<int32_t>                                            ValidSpawnData;                                          // 0x0068(0x0010) ZeroConstructor, Protected
		TArray<class UItemSpawnData*>                              ItemsToSpawn;                                            // 0x0078(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected
		unsigned char                                              UnknownData_7EDQ[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestActorService
	 * Size -> 0x0310 (FullSize[0x0370] - InheritedSize[0x0060])
	 */
	class UTaleQuestActorService : public UTaleQuestService
	{
	public:
		TArray<struct FTrackedActorData>                           TrackedActors;                                           // 0x0060(0x0010) ZeroConstructor
		TArray<struct FCriticalActorDelegateData>                  CriticalActors;                                          // 0x0070(0x0010) ZeroConstructor
		TArray<struct FSnapshottedActorData>                       SnapshottedActors;                                       // 0x0080(0x0010) ZeroConstructor
		class UTaleQuestActorServiceDesc*                          Desc;                                                    // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APhasedClusterRoot*                                  PhasedClusterRoot;                                       // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPhasedActor>                                PhasedActors;                                            // 0x00A0(0x0010) ZeroConstructor
		TArray<struct FPhasedItem>                                 PhasedItems;                                             // 0x00B0(0x0010) ZeroConstructor
		class FText                                                CriticalActorHandedInByAnotherCrewFailureMessage;        // 0x00C0(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_9C8D[0x20];                                  // 0x00D8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_8THG[0x278];                                 // 0x00F8(0x0278) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCheckpointService
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UTaleQuestCheckpointService : public UTaleQuestService
	{
	public:
		class UTaleQuestCheckpointServiceDesc*                     Desc;                                                    // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V07R[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEQSService
	 * Size -> 0x00C8 (FullSize[0x0128] - InheritedSize[0x0060])
	 */
	class UTaleQuestEQSService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_OV1X[0xC8];                                  // 0x0060(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestInteractionPreventionService
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UTaleQuestInteractionPreventionService : public UTaleQuestService
	{
	public:
		TArray<class AActor*>                                      TrackedInteractionActors;                                // 0x0060(0x0010) ZeroConstructor
		class UTaleQuestInteractionPreventionServiceDesc*          Desc;                                                    // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PreventInteractionWithTargetActor(class AActor* Actor);
		void EnableInteractionWithTargetActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectorService
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UTaleQuestSelectorService : public UTaleQuestService
	{
	public:
		class UTaleQuestSelectorServiceDesc*                       Desc;                                                    // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NB1I[0x20];                                  // 0x0068(0x0020) MISSED OFFSET (PADDING)

	public:
		int32_t GetRandomIntegerInRange(int32_t Minimum, int32_t Maximum);
		float GetRandomFloatInRange(float Minimum, float Maximum);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestToggleInteractionDescriptionService
	 * Size -> 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
	 */
	class UTaleQuestToggleInteractionDescriptionService : public UTaleQuestService
	{
	public:
		TMap<class AActor*, ETaleInteractionState>                 TrackedInteractionActors;                                // 0x0060(0x0050) ZeroConstructor
		class UTaleQuestToggleInteractionDescriptionServiceDesc*   Desc;                                                    // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TargetActorInteractionToEnable(class AActor* Actor);
		void TargetActorInteractionToDisable(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleResourceBrokerService
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UTaleResourceBrokerService : public UTaleQuestService
	{
	public:
		unsigned char                                              ContendedResourceService[0x10];                          // 0x0060(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleResourceBrokerService.ContendedResourceService
		unsigned char                                              ResourceRegistry[0x10];                                  // 0x0070(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleResourceBrokerService.ResourceRegistry
		TArray<struct FMigrationActionPair>                        MigrationActions;                                        // 0x0080(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_J6UP[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.CutsceneResponsesTaleServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCutsceneResponsesTaleServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GameEventExclusionZoneTaleServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameEventExclusionZoneTaleServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.RewardGenTaleQuestServiceDesc
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URewardGenTaleQuestServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		class UTaleQuestWeightedItemDescSpawnDataAsset*            SpawnData;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestActorServiceDesc
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTaleQuestActorServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		class UClass*                                              ItemLostFailureRunnable;                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCargoRunContractsServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestCargoRunContractsServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEQSServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestEQSServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestInteractionPreventionServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestInteractionPreventionServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMerchantContractsServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestMerchantContractsServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectorServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestSelectorServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestToggleInteractionDescriptionServiceDesc
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTaleQuestToggleInteractionDescriptionServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		bool                                                       ResetDisabledInteractsOnEnd;                             // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ResetEnabledInteractsOnEnd;                              // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4H4G[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ActorRadiusTrackerStep
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UActorRadiusTrackerStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_WMNQ[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UActorRadiusTrackerStepDesc*                         Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TargetActor;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TTU2[0x28];                                  // 0x00A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.AddGameEventExclusionZoneStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UAddGameEventExclusionZoneStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_QP1C[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UAddGameEventExclusionZoneStepDesc*                  Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.CallObjectFunctionStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UCallObjectFunctionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_MLSH[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.DebugTaleAddInstancedLevelStep
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UDebugTaleAddInstancedLevelStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_5OXW[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_B8B3[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDebugTaleAddInstancedLevelStepDesc*                 StepDesc;                                                // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              InstancedLevelPath;                                      // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KFGM[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.DebugTaleAddInstancedLevelStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UDebugTaleAddInstancedLevelStepDesc : public UTaleQuestStepDesc
	{
	public:
		class FText                                                InstancedLevelKeyword;                                   // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_7HYK[0x20];                                  // 0x0098(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   InstancedLevelIndex;                                     // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GLZ6[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.DestroySpawnedActorStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UDestroySpawnedActorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_79LX[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.DoEQSQueryStep
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UDoEQSQueryStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_KKY2[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UDoEQSQueryStepDesc*                                 Desc;                                                    // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTaleQuestEQSService*                                CachedTaleEQSService;                                    // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.EnableInteractionWithActorStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UEnableInteractionWithActorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_YPBO[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindItemInCollectorsChestStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UFindItemInCollectorsChestStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_6Y8X[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UFindNamedPointStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_CZWW[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointAsVectorStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UFindNamedPointAsVectorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_3PB4[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointAsTransformStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UFindNamedPointAsTransformStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_HPZD[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ForceCannonLoadStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UForceCannonLoadStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_74ZN[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_H3BE[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GenerateDigLocationInRadiusStep
	 * Size -> 0x0088 (FullSize[0x0118] - InheritedSize[0x0090])
	 */
	class UGenerateDigLocationInRadiusStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_WGYX[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_ELB8[0x80];                                  // 0x0098(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GetActorOfInterestStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UGetActorOfInterestStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_K7HW[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GetVoyageDifficultyFromRankStep
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UGetVoyageDifficultyFromRankStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_KW0D[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_DBC8[0x28];                                  // 0x0098(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.InvokeDamageStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UInvokeDamageStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_BUBZ[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.LinkEQSContextWithVariableStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class ULinkEQSContextWithVariableStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_RL2X[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class ULinkEQSContextWithVariableStepDesc*                 Desc;                                                    // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.LoadSequencerAnimationStep
	 * Size -> 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
	 */
	class ULoadSequencerAnimationStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_95EO[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class ULoadSequencerAnimationStepDesc*                     StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASequencerCutSceneActor*                             SequencerCutSceneActor;                                  // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TargetToSpawnActor;                                      // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.OverrideManagedActorStateStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UOverrideManagedActorStateStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_Q8ZR[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ParticipantRadiusTrackerStep
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UParticipantRadiusTrackerStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_4J2V[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UParticipantRadiusTrackerStepDesc*                   Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I38Y[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.PlaySequencerAnimationOnCutsceneActorStep
	 * Size -> 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
	 */
	class UPlaySequencerAnimationOnCutsceneActorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_WAP2[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UPlaySequencerAnimationOnCutsceneActorStepDesc*      StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASequencerCutSceneActor*                             SequencerCutSceneActor;                                  // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPossessableSequence>                        PossessableSequences;                                    // 0x00A8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_Z609[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.PlaySequencerAnimationStep
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UPlaySequencerAnimationStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_9YOR[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UPlaySequencerAnimationStepDesc*                     StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASequencerCutSceneActor*                             SequencerCutSceneActor;                                  // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A5TC[0x28];                                  // 0x00A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.PreventInteractionWithActorStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UPreventInteractionWithActorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_GHZP[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ProvokeHitReactionStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UProvokeHitReactionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_S80L[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.RemoveGameEventExclusionZoneStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class URemoveGameEventExclusionZoneStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_4UQM[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class URemoveGameEventExclusionZoneStepDesc*               Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SelectNamedPointStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class USelectNamedPointStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_I5EY[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SetEQSNamedContextStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class USetEQSNamedContextStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_46BF[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class USetEQSNamedContextStepDesc*                         Desc;                                                    // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnLayerStep
	 * Size -> 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
	 */
	class USpawnLayerStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_LWBV[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_090S[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnPhasedActorWithTransformStep
	 * Size -> 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
	 */
	class USpawnPhasedActorWithTransformStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_EZTO[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_Z7A0[0x58];                                  // 0x0098(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnPhasedItemStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class USpawnPhasedItemStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_ZLEO[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.StartSuppressingCutsceneResponsesStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UStartSuppressingCutsceneResponsesStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_GFAY[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.StopSuppressingCutsceneResponsesStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UStopSuppressingCutsceneResponsesStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_H3SZ[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddToArrayStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddToArrayStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_YBJ0[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayAppendStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestArrayAppendStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_8BO8[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayContainsStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestArrayContainsStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_V4UL[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayUnionStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestArrayUnionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_YW17[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAwaitEventStep
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UTaleQuestAwaitEventStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_MYC0[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_XN5U[0x48];                                  // 0x0098(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestChooseIslandFromWeightsStep
	 * Size -> 0x0070 (FullSize[0x0100] - InheritedSize[0x0090])
	 */
	class UTaleQuestChooseIslandFromWeightsStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_Y3UZ[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_TMUN[0x60];                                  // 0x0098(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIslandTypeWeightsDataAsset*                         IslandTypeWeights;                                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestClearTaleProposalsStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestClearTaleProposalsStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_Z54G[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCrewTaskStep
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UTaleQuestCrewTaskStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_IPJT[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              Task[0x10];                                              // 0x0098(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleQuestCrewTaskStep.Task
		unsigned char                                              UnknownData_WPV4[0x28];                                  // 0x00A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestDisableInteractionStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestDisableInteractionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_CFTZ[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestEmissaryCompanyActionRewardBoostStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_UVYT[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc*  Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEnableInteractionStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestEnableInteractionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_0FIK[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFireEventStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestFireEventStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_1P8M[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachStepBase
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UTaleQuestForEachStepBase : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_C1JU[0x8];                                   // 0x0090(0x0008) Fix Super Size
		TArray<struct FBodyFramePair>                              Bodies;                                                  // 0x0098(0x0010) ZeroConstructor, Transient

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachAnyStep
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestForEachAnyStep : public UTaleQuestForEachStepBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachSequential
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestForEachSequential : public UTaleQuestForEachStepBase
	{
	public:
		class UTaleQuestIndexedFrame*                              Frame;                                                   // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2D7Q[0x38];                                  // 0x00B0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachUnionStep
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestForEachUnionStep : public UTaleQuestForEachStepBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGetCollectionItemCountStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetCollectionItemCountStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_PI96[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGetParticipatingCrewsInRadiusStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetParticipatingCrewsInRadiusStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_MM8C[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGetParticipatingCrewsStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetParticipatingCrewsStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_WDT1[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGrantRewardStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestGrantRewardStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_TGY8[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_1QEB[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestPermanentPromptStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestPermanentPromptStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_T7DB[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestPersistentForEachCrewTaskStep
	 * Size -> 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
	 */
	class UTaleQuestPersistentForEachCrewTaskStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_NVXO[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestPersistentForEachCrewTaskStepDesc*         StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q0DH[0x50];                                  // 0x00A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectEntryFromArrayStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestSelectEntryFromArrayStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_2KED[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_D8ZN[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestShipDiveStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestShipDiveStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_LQ8U[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestShipSurfaceStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestShipSurfaceStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_4WX9[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStartCameraFadeStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestStartCameraFadeStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_ULEP[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStructStepBase
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestStructStepBase : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_JRWJ[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestBreakStructStep
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UTaleQuestBreakStructStep : public UTaleQuestStructStepBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMakeStructStep
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UTaleQuestMakeStructStep : public UTaleQuestStructStepBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestToggleAmbientMigrationForServerStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestToggleAmbientMigrationForServerStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_A077[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestUpdateCheckpointStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestUpdateCheckpointStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_AF2V[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestWaitForHandInStep
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UTaleQuestWaitForHandInStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_NH43[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestWaitForHandInStepDesc*                     Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_70VW[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TrackResponseCoordinatorStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTrackResponseCoordinatorStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_YQ5V[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTrackResponseCoordinatorStepDesc*                   StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.VisualiseLoggerEQSResultsTaleStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UVisualiseLoggerEQSResultsTaleStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_DTGM[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitForActorOfInterestToUnregisterStep
	 * Size -> 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
	 */
	class UWaitForActorOfInterestToUnregisterStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_RVT9[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UWaitForActorOfInterestToUnregisterStepDesc*         Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NLB1[0x70];                                  // 0x00A0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitForHealthToReachFractionStep
	 * Size -> 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
	 */
	class UWaitForHealthToReachFractionStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_CHS4[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_YVSC[0x70];                                  // 0x0098(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitForItemPickupStep
	 * Size -> 0x00B8 (FullSize[0x0148] - InheritedSize[0x0090])
	 */
	class UWaitForItemPickupStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_7ZJW[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_8AEZ[0xB0];                                  // 0x0098(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ActorRadiusTrackerStepDesc
	 * Size -> 0x0070 (FullSize[0x00F0] - InheritedSize[0x0080])
	 */
	class UActorRadiusTrackerStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 TargetActor;                                             // 0x0080(0x0020) Edit
		float                                                      DurationBetweenChecks;                                   // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5DYB[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                Location;                                                // 0x00A8(0x0020) Edit
		float                                                      Radius;                                                  // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MQG0[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableBool                                  ActorInsideRadius;                                       // 0x00D0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.AddGameEventExclusionZoneStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAddGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
	{
	public:
		float                                                      Radius;                                                  // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VB11[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                Location;                                                // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.CallObjectFunctionStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UCallObjectFunctionStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UObject*                                             Target;                                                  // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FClassFunctionSelectionType                         Function;                                                // 0x0088(0x0010) Edit
		TMap<class FName, class FName>                             ParameterMappings;                                       // 0x0098(0x0050) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.DestroySpawnedActorStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UDestroySpawnedActorStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 ActorVar;                                                // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.DoEQSQueryStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UDoEQSQueryStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UEnvQuery*                                           EQSQuery;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableArray                                 OutPoints;                                               // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.EnableInteractionWithActorStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UEnableInteractionWithActorStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 TargetActor;                                             // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindItemInCollectorsChestStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UFindItemInCollectorsChestStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 CollectorsChest;                                         // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 ItemInChest;                                             // 0x00A0(0x0020) Edit
		class UClass*                                              ItemToFind;                                              // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointStepDescBase
	 * Size -> 0x0070 (FullSize[0x00F0] - InheritedSize[0x0080])
	 */
	class UFindNamedPointStepDescBase : public UTaleQuestStepDesc
	{
	public:
		unsigned char                                              UnknownData_97JH[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableActor                                 ActorToSearch;                                           // 0x00A0(0x0020) Edit
		struct FQuestVariableName                                  GroupNamePin;                                            // 0x00C0(0x0020) Edit
		class FName                                                PointGroupName;                                          // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPointSelectionMethod                                      SearchMethod;                                            // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESpaceType                                                 ReturnInSpace;                                           // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8RPO[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointStepDesc
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UFindNamedPointStepDesc : public UFindNamedPointStepDescBase
	{
	public:
		struct FQuestVariableOrientedPoint                         OutputOrientedPoint;                                     // 0x00F0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointAsVectorStepDesc
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UFindNamedPointAsVectorStepDesc : public UFindNamedPointStepDescBase
	{
	public:
		struct FQuestVariableVector                                OutputVectorLocation;                                    // 0x00F0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.FindNamedPointAsTransformStepDesc
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class UFindNamedPointAsTransformStepDesc : public UFindNamedPointStepDescBase
	{
	public:
		struct FQuestVariableTransform                             OutputTransform;                                         // 0x00F0(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ForceCannonLoadStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UForceCannonLoadStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 Cannon;                                                  // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 Projectile;                                              // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GenerateDigLocationInRadiusStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UGenerateDigLocationInRadiusStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableName                                  IslandName;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableVector                                Center;                                                  // 0x00A0(0x0020) Edit
		float                                                      RadiusInCm;                                              // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_93EQ[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                DigLocation;                                             // 0x00C8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.GetActorOfInterestStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UGetActorOfInterestStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UClass*                                              ActorOfInterestId;                                       // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FQuestVariableActor                                 ActorOfInterest;                                         // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.InvokeDamageDesc
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UInvokeDamageDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 ActorToDamage;                                           // 0x0080(0x0020) Edit
		class UClass*                                              DamageType;                                              // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      DamageAmount;                                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHealthChangedReason                                       DamageReason;                                            // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8JMI[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.LinkEQSContextWithVariableStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class ULinkEQSContextWithVariableStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UClass*                                              Context;                                                 // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FQuestVariableSetEQSTaleContextValue                Variable;                                                // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.LoadSequencerAnimationStepDesc
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class ULoadSequencerAnimationStepDesc : public UTaleQuestStepDesc
	{
	public:
		TArray<class ULevelSequence*>                              LevelSequencesToLoad;                                    // 0x0080(0x0010) Edit, ZeroConstructor
		struct FQuestVariableActor                                 TargetActorToSpawn;                                      // 0x0090(0x0020) Edit
		struct FQuestVariableActor                                 LevelSequenceActorSpawnLocation;                         // 0x00B0(0x0020) Edit
		struct FQuestVariableActor                                 SequencerCutSceneActor;                                  // 0x00D0(0x0020) Edit
		bool                                                       AttachToTargetActor;                                     // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YRA5[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachSocketName;                                        // 0x00F4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayGlobally;                                            // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5IZG[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.OverrideManagedActorStateStepDesc
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UOverrideManagedActorStateStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 ActorVar;                                                // 0x0080(0x0020) Edit
		bool                                                       TrackActor;                                              // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MarkAsCritical;                                          // 0x00A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WK4[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CriticalActorLostMessage;                                // 0x00A8(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_2G13[0x20];                                  // 0x00C0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ParticipantRadiusTrackerStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UParticipantRadiusTrackerStepDesc : public UTaleQuestStepDesc
	{
	public:
		float                                                      DurationBetweenChecks;                                   // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0QUB[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                Location;                                                // 0x0088(0x0020) Edit
		struct FQuestVariableFloat                                 Radius;                                                  // 0x00A8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitUntilAllParticipantsEnterRadiusStep
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UWaitUntilAllParticipantsEnterRadiusStep : public UParticipantRadiusTrackerStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitUntilAllParticipantsLeaveRadiusStep
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UWaitUntilAllParticipantsLeaveRadiusStep : public UParticipantRadiusTrackerStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitUntilAnyParticipantEntersRadiusStep
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UWaitUntilAnyParticipantEntersRadiusStep : public UParticipantRadiusTrackerStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc
	 * Size -> 0x00E8 (FullSize[0x0168] - InheritedSize[0x0080])
	 */
	class UPlaySequencerAnimationOnCutsceneActorStepDesc : public UTaleQuestStepDesc
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Delay;                                                   // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OQJK[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableActor                                 DockableBaseActor;                                       // 0x0090(0x0020) Edit
		struct FQuestVariableActor                                 SequencerCutSceneActor;                                  // 0x00B0(0x0020) Edit
		struct FQuestVariableActor                                 ActorToPossess;                                          // 0x00D0(0x0020) Edit
		struct FQuestVariableArray                                 AdditionalPossessables;                                  // 0x00F0(0x0020) Edit
		struct FQuestVariableActor                                 InteractingActor;                                        // 0x0110(0x0020) Edit
		class FString                                              PossessableName;                                         // 0x0130(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class USceneDialogueData*                                  DialogueData;                                            // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        LocalisableNames;                                        // 0x0148(0x0010) Edit, ZeroConstructor
		bool                                                       IsLevelSequenceActorAlwaysRelevant;                      // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsLooping;                                               // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B0UK[0x2];                                   // 0x015A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SubtitleSphereRadiusInCm;                                // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      FemaleLevelSequence;                                     // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.PlaySequencerAnimationStepDesc
	 * Size -> 0x00B8 (FullSize[0x0138] - InheritedSize[0x0080])
	 */
	class UPlaySequencerAnimationStepDesc : public UTaleQuestStepDesc
	{
	public:
		class ULevelSequence*                                      LevelSequenceToPlay;                                     // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableActor                                 TargetActorToSpawn;                                      // 0x0088(0x0020) Edit
		struct FQuestVariableActor                                 LevelSequenceActorSpawnLocation;                         // 0x00A8(0x0020) Edit
		struct FQuestVariableActor                                 DockableBaseActor;                                       // 0x00C8(0x0020) Edit
		struct FQuestVariableActor                                 InteractingActor;                                        // 0x00E8(0x0020) Edit
		bool                                                       PlayGlobally;                                            // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsLevelSequenceActorAlawaysRelevant;                     // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2I6C[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneDialogueData*                                  DialogueData;                                            // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        LocalisableNames;                                        // 0x0118(0x0010) Edit, ZeroConstructor
		bool                                                       IsLooping;                                               // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3FS[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SubtitleSphereRadiusInCm;                                // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      FemaleLevelSequenceToPlay;                               // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.PreventInteractionWithActorStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UPreventInteractionWithActorStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 TargetActor;                                             // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ProvokeHitReactionDesc
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UProvokeHitReactionDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 ActorToProvoke;                                          // 0x0080(0x0020) Edit
		class UClass*                                              DamageType;                                              // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      DamageAmount;                                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHealthChangedReason                                       DamageReason;                                            // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C4O3[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.RemoveGameEventExclusionZoneStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class URemoveGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
	{
	public:
		float                                                      Radius;                                                  // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_63HA[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                Location;                                                // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SelectNamedPointStepDesc
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class USelectNamedPointStepDesc : public UTaleQuestStepDesc
	{
	public:
		TAssetPtr<class AActor>                                    PointsContainer;                                         // 0x0080(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_63YO[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                GroupName;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PointIndex;                                              // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESpaceType                                                 ReturnInSpace;                                           // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N8UK[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableOrientedPoint                         Point;                                                   // 0x00B0(0x0020) Edit

	public:
		TArray<class FString> GetNamedPointsGroups();
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SetEQSNamedContextStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class USetEQSNamedContextStepDesc : public UTaleQuestStepDesc
	{
	public:
		class FName                                                Name;                                                    // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableLinkEQSContext                        Value;                                                   // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnLayerStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class USpawnLayerStepDesc : public UTaleQuestStepDesc
	{
	public:
		class ULayerActorsDataAsset*                               LayerAsset;                                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnPhased;                                             // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8RU5[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableActor                                 ActorWithLayers;                                         // 0x0090(0x0020) Edit
		TArray<struct FQuestVariableActor>                         SpawnedActors;                                           // 0x00B0(0x0010) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class USpawnPhasedActorWithTransformStepBaseDesc : public UTaleQuestStepDesc
	{
	public:
		TAssetPtr<class UClass>                                    Actor;                                                   // 0x0080(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_9JZN[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       MarkAsCritical;                                          // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O1SG[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CriticalActorLostMessage;                                // 0x00A8(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_P20F[0x20];                                  // 0x00C0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FQuestVariableActor                                 ActorVar;                                                // 0x00E0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnPhasedActorAtLocationStepDesc
	 * Size -> 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
	 */
	class USpawnPhasedActorAtLocationStepDesc : public USpawnPhasedActorWithTransformStepBaseDesc
	{
	public:
		struct FQuestVariableTransform                             Location;                                                // 0x0100(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.SpawnPhasedItemStepDesc
	 * Size -> 0x00A8 (FullSize[0x0128] - InheritedSize[0x0080])
	 */
	class USpawnPhasedItemStepDesc : public UTaleQuestStepDesc
	{
	public:
		bool                                                       TrackItem;                                               // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MarkItemAsCritical;                                      // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PH8Z[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CriticalActorLostMessage;                                // 0x0088(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_PRED[0x20];                                  // 0x00A0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                SocketName;                                              // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableItemDescType                          Item;                                                    // 0x00C8(0x0020) Edit
		struct FQuestVariableActor                                 LocatorVar;                                              // 0x00E8(0x0020) Edit
		struct FQuestVariableItemInfo                              SpawnedItemVar;                                          // 0x0108(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.StartSuppressingCutsceneResponsesStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UStartSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.StopSuppressingCutsceneResponsesStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UStopSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayItemStepBaseDesc
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UTaleQuestArrayItemStepBaseDesc : public UTaleQuestStepDesc
	{
	public:
		class FName                                                ArrayVar;                                                // 0x0080(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ItemVar;                                                 // 0x0088(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddToArrayStepDesc
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddToArrayStepDesc : public UTaleQuestArrayItemStepBaseDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayContainsStepDesc
	 * Size -> 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
	 */
	class UTaleQuestArrayContainsStepDesc : public UTaleQuestArrayItemStepBaseDesc
	{
	public:
		struct FQuestVariableBool                                  Result;                                                  // 0x0090(0x0020)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayOperationStepBaseDesc
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UTaleQuestArrayOperationStepBaseDesc : public UTaleQuestStepDesc
	{
	public:
		class FName                                                Array1;                                                  // 0x0080(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Array2;                                                  // 0x0088(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Result;                                                  // 0x0090(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayAppendStepDesc
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UTaleQuestArrayAppendStepDesc : public UTaleQuestArrayOperationStepBaseDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestArrayUnionStepDesc
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UTaleQuestArrayUnionStepDesc : public UTaleQuestArrayOperationStepBaseDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestChooseIslandFromWeightsStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestChooseIslandFromWeightsStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableNameArray                             IslandsToChooseFrom;                                     // 0x0080(0x0020) Edit
		struct FQuestVariableInt                                   DifficultyRank;                                          // 0x00A0(0x0020) Edit
		struct FQuestVariableName                                  ChosenIsland;                                            // 0x00C0(0x0020) Edit
		class UIslandTypeWeightsDataAsset*                         IslandTypeWeights;                                       // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestClearTaleProposalsStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestClearTaleProposalsStepDesc : public UTaleQuestStepDesc
	{
	public:
		class FName                                                CampaignId;                                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestDisableInteractionStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestDisableInteractionStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 TargetActor;                                             // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : public UTaleQuestStepDesc
	{
	public:
		EEmisaryCompanyActionType                                  CompanyActionType;                                       // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3KZ[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEnableInteractionStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestEnableInteractionStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 TargetActor;                                             // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestEventStepDescBase
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UTaleQuestEventStepDescBase : public UTaleQuestStepDesc
	{
	public:
		class UObject*                                             Dispatcher;                                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FNativeAndUserDefinedStructSelector                 EventType;                                               // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TMap<class FName, class FName>                             ArgumentMappings;                                        // 0x0090(0x0050) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAwaitEventStepDesc
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UTaleQuestAwaitEventStepDesc : public UTaleQuestEventStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFireEventStepDesc
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UTaleQuestFireEventStepDesc : public UTaleQuestEventStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.ValueProviderStepInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UValueProviderStepInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachStepDescBase
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestForEachStepDescBase : public UTaleQuestStepDesc
	{
	public:
		unsigned char                                              UnknownData_IRQV[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Collection;                                              // 0x0088(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTaleQuestStepDesc*                                  Body;                                                    // 0x0090(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                KeyPinName;                                              // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ItemPinName;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachAnyStepDesc
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestForEachAnyStepDesc : public UTaleQuestForEachStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachSequentialDesc
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestForEachSequentialDesc : public UTaleQuestForEachStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestForEachUnionStepDesc
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestForEachUnionStepDesc : public UTaleQuestForEachStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGetCollectionItemCountStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetCollectionItemCountStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableCollection                            Collection;                                              // 0x0080(0x0020) Edit
		struct FQuestVariableInt                                   Num;                                                     // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGetParticipatingCrewsInRadiusStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetParticipatingCrewsInRadiusStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableGuidArray                             CrewIds;                                                 // 0x0080(0x0020) Edit
		struct FQuestVariableVector                                Location;                                                // 0x00A0(0x0020) Edit
		float                                                      Radius;                                                  // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9DXZ[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGetParticipatingCrewsStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetParticipatingCrewsStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableGuidArray                             CrewIds;                                                 // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestGrantRewardStepDesc
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FRewardId                                           RewardId;                                                // 0x0080(0x0008) Edit
		class UClass*                                              Company;                                                 // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FGuid                                               Id;                                                      // 0x0090(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldGrantToAlliedCrews;                                // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P9R0[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariablePlayerActor                           SpecificPlayerToAward;                                   // 0x00A8(0x0020) Edit
		class FName                                                Feature;                                                 // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestPermanentPromptStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestPermanentPromptStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariablePrioritisedPrompt                     Prompt;                                                  // 0x0080(0x0020) Edit
		EPromptStartStop                                           StartOrStop;                                             // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L5ZH[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestRunnableStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestRunnableStepDesc : public UTaleQuestStepDesc
	{
	public:
		unsigned char                                              UnknownData_M2H9[0x68];                                  // 0x0080(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFunctionStepLibrary
	 * Size -> 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
	 */
	class UTaleQuestFunctionStepLibrary : public UTaleQuestRunnableStepDesc
	{
	public:
		class UFunction*                                           Function;                                                // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, struct FQuestVariable>                   ParameterMappings;                                       // 0x00F0(0x0050) Edit, ZeroConstructor, EditConst
		unsigned char                                              UnknownData_TB10[0x30];                                  // 0x0140(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FunctionStepFlags;                                       // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IFB2[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestActorFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestActorFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		class AActor* SpawnActor(class UClass* What, const struct FTransform& Where, bool TrackActor, bool AutomaticallyGatherForMigration);
		class AActor* ResolveActor(TAssetPtr<class AActor> ActorReference);
		void STATIC_GetInterface(class AActor* Actor, class UClass* InterfaceClass);
		struct FTransform STATIC_GetActorTransform(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAnimationStepFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestAnimationStepFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		struct FPossessableSequence STATIC_MakePosseableSequence(class AActor* ActorToPossess, const class FString& TrackNameToPossess);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestIntMathsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestIntMathsFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		int32_t STATIC_Subtract_Int(int32_t Left, int32_t Right);
		bool STATIC_NotEquals(int32_t Left, int32_t Right);
		int32_t STATIC_Multiply_Int(int32_t Left, int32_t Right);
		int32_t STATIC_Modulus_Int(int32_t Left, int32_t Right);
		bool STATIC_LessThanOrEqual(int32_t Left, int32_t Right);
		bool STATIC_LessThan(int32_t Left, int32_t Right);
		void STATIC_Increment_Int(int32_t* Value);
		bool STATIC_GreaterThanOrEqual(int32_t Left, int32_t Right);
		bool STATIC_GreaterThan(int32_t Left, int32_t Right);
		bool STATIC_Equals(int32_t Left, int32_t Right);
		int32_t STATIC_Divide_Int(int32_t Left, int32_t Right);
		void STATIC_Decrement_Int(int32_t* Value);
		int32_t STATIC_Add_Int(int32_t Left, int32_t Right);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestNamedPointsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestNamedPointsFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		void STATIC_GetNamedPointsFromGroup(TAssetPtr<class AActor> PointsContainer, const class FName& GroupName, ESpaceType ReturnSpace, TArray<struct FOrientedPoint>* Points);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestNPCHideFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestNPCHideFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		void FadeOut(class AActor* InActor);
		void FadeIn(class AActor* InActor);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStoryFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestStoryFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		void WaitForStory(const class FName& StoryName, bool ShouldBeActive);
		bool IsStoryActive(const class FName& StoryName);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStoryBranchFunctionLibrary
	 * Size -> 0x0048 (FullSize[0x01C0] - InheritedSize[0x0178])
	 */
	class UTaleQuestStoryBranchFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		unsigned char                                              UnknownData_KIG4[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTaleQuestStepDesc*                                  Active;                                                  // 0x0180(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTaleQuestStepDesc*                                  Inactive;                                                // 0x0188(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Step[0x10];                                              // 0x0190(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleQuestStoryBranchFunctionLibrary.Step
		unsigned char                                              UnknownData_RDMG[0x20];                                  // 0x01A0(0x0020) MISSED OFFSET (PADDING)

	public:
		void BranchOnStory(const class FName& StoryName);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestTransformMathsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestTransformMathsFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		struct FTransform STATIC_ToWorld_Transform(const struct FTransform& RootTransform, const struct FTransform& RelativeTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestTransfromConversionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestTransfromConversionFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		struct FTransform STATIC_FromVector(const struct FVector& InTranslation);
		struct FTransform STATIC_FromOrientedPoint(const struct FOrientedPoint& InOrientedPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestUObjectFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestUObjectFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		bool STATIC_IsValid(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestUtilityFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestUtilityFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		void FailTale(const class FText& FailureMessage);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestWaterVolumeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestWaterVolumeFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		void SetExactWaterLevel(class AWaterVolume* WaterVolume, float WaterLevel);
		bool IsWaterVolumeFull(class AWaterVolume* WaterVolume);
		void EmptyWaterVolume(class AWaterVolume* WaterVolume);
		void AddWaterAmount(class AWaterVolume* WaterVolume, float AmountToAdd, float LerpRate);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectEntryFromArrayStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestSelectEntryFromArrayStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UTaleQuestArrayEntrySelectionStrategy*               SelectionStrategy;                                       // 0x0080(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FQuestVariableArray                                 InputArray;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableAny                                   OutputEntry;                                             // 0x00A8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestShipDiveStepDesc
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTaleQuestShipDiveStepDesc : public UTaleQuestStepDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestShipSurfaceStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestShipSurfaceStepDesc : public UTaleQuestStepDesc
	{
	public:
		float                                                      TimeToSurface;                                           // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FCTJ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStartCameraFadeStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestStartCameraFadeStepDesc : public UTaleQuestStepDesc
	{
	public:
		float                                                      FromAlpha;                                               // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ToAlpha;                                                 // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeTimeInSeconds;                                       // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FadeColour;                                              // 0x008C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldFadeAudio;                                         // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HoldFadeWhenFinished;                                    // 0x009D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AA86[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestStructStepDescBase
	 * Size -> 0x0058 (FullSize[0x00D8] - InheritedSize[0x0080])
	 */
	class UTaleQuestStructStepDescBase : public UTaleQuestStepDesc
	{
	public:
		class UScriptStruct*                                       Struct;                                                  // 0x0080(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class FName>                             PropertyMappings;                                        // 0x0088(0x0050) Edit, ZeroConstructor, EditConst

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestBreakStructStepDesc
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UTaleQuestBreakStructStepDesc : public UTaleQuestStructStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMakeStructStepDesc
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UTaleQuestMakeStructStepDesc : public UTaleQuestStructStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestTaskStepDescBase
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestTaskStepDescBase : public UTaleQuestStepDesc
	{
	public:
		class UTaleQuestStepDesc*                                  Task;                                                    // 0x0080(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestCrewTaskStepDesc
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UTaleQuestCrewTaskStepDesc : public UTaleQuestTaskStepDescBase
	{
	public:
		struct FQuestVariableGuid                                  CrewId;                                                  // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestPersistentForEachCrewTaskStepDesc
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UTaleQuestPersistentForEachCrewTaskStepDesc : public UTaleQuestTaskStepDescBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestToggleAmbientMigrationForServerStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestToggleAmbientMigrationForServerStepDesc : public UTaleQuestStepDesc
	{
	public:
		bool                                                       AmbientMigrationAvailable;                               // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3LAP[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestUpdateCheckpointStepDesc
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UTaleQuestUpdateCheckpointStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FRewardId                                           RewardIdToAward;                                         // 0x0080(0x0008) Edit
		class FName                                                CampaignIdToRemove;                                      // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Feature;                                                 // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestWaitForHandInStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 HandInActor;                                             // 0x0080(0x0020) Edit
		class UClass*                                              SpecificItem;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FQuestVariableItemDescType                          HandInItem;                                              // 0x00A8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TrackResponseCoordinatorStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTrackResponseCoordinatorStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableUObject                               CutsceneResponseCoordinator;                             // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.VisualiseLoggerEQSResultsTaleStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UVisualiseLoggerEQSResultsTaleStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableArray                                 ResultsArray;                                            // 0x0080(0x0020) Edit
		struct FQuestVariableVector                                SelectedResult;                                          // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitForActorOfInterestToUnregisterStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UWaitForActorOfInterestToUnregisterStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UClass*                                              ActorOfInterestId;                                       // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FText                                                ActorOfInterestUnregisteredFailureMessage;               // 0x0088(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_Z6L6[0x20];                                  // 0x00A0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitForHealthToReachFractionStepDesc
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UWaitForHealthToReachFractionStepDesc : public UTaleQuestStepDesc
	{
	public:
		class AActor*                                              HealthOwner;                                             // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthFraction;                                          // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S1XW[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.WaitForItemPickupStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UWaitForItemPickupStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 Item;                                                    // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 PickerUpper;                                             // 0x00A0(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep
	 * Size -> 0x0180 (FullSize[0x0210] - InheritedSize[0x0090])
	 */
	class UTaleQuestSelectShipwreckLocationFromValidCandidatesStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_H1KA[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_9QJ6[0x58];                                  // 0x0098(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTaleQuestSelectorService*                           CachedSelectorService;                                   // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZL8T[0x118];                                 // 0x00F8(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc : public UTaleQuestStepDesc
	{
	public:
		class UTaleQuestArrayEntrySelectionStrategy*               SelectionStrategy;                                       // 0x0080(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FQuestVariableVectorArray                           InputArray;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableVector                                OutputEntry;                                             // 0x00A8(0x0020) Edit
		struct FQuestVariableBool                                  ShuffleLists;                                            // 0x00C8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.RemoveFlameOfFateTypeStepDesc
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class URemoveFlameOfFateTypeStepDesc : public UTaleQuestStepDesc
	{
	public:
		EFlameOfFateType                                           FlameOfFateTypeToRemove;                                 // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_65W5[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LanternItemCategory;                                     // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFlameOfFateService
	 * Size -> 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
	 */
	class UTaleQuestFlameOfFateService : public UTaleQuestService
	{
	public:
		class UTaleQuestFlameOfFateServiceDesc*                    ServiceDesc;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MJNU[0x58];                                  // 0x0068(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestFlameOfFateServiceDesc
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTaleQuestFlameOfFateServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		class UClass*                                              LanternItemCategory;                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EFlameOfFateType                                           FlameOfFateTypeToSet;                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SetFlameOnStart;                                         // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BOUL[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddBountyMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddBountyMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_VBT0[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddBountyMapStepDesc
	 * Size -> 0x00B8 (FullSize[0x0138] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddBountyMapStepDesc : public UTaleQuestStepDesc
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableName                                  IslandName;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableText                                  Location;                                                // 0x00A8(0x0020) Edit
		struct FQuestVariableTextArray                             Description;                                             // 0x00C8(0x0020) Edit
		struct FQuestVariableBountyTargetArray                     CaptainTargets;                                          // 0x00E8(0x0020) Edit
		struct FQuestVariableBountyTargetArray                     CrewTargets;                                             // 0x0108(0x0020) Edit
		class UBountyMapLayout*                                    CustomLayout;                                            // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              OverrideTreasureMapItemDesc;                             // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddCargoRunMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddCargoRunMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_HMUR[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddChecklistMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddChecklistMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_EVMR[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddCircleMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddCircleMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_5V44[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddMerchantMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddMerchantMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_MW05[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddRiddleMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddRiddleMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_V6G4[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddXMarksMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAddXMarksMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_9015[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAdvanceRiddleMapStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestAdvanceRiddleMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_TYYT[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMapService
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UTaleQuestMapService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_HLH4[0xB0];                                  // 0x0060(0x00B0) MISSED OFFSET (PADDING)

	public:
		void UpdateMerchantMap(const class FName& MapID, int32_t Index, const struct FTaleQuestDeliverableItem& Deliverable);
		void AdvanceRiddleMap(const class FName& MapID);
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestMapServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestMapServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddCargoRunMapStepDesc
	 * Size -> 0x0070 (FullSize[0x00F0] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableName                                  IslandName;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableInt                                   NumItems;                                                // 0x00A8(0x0020) Edit
		struct FQuestVariableGuid                                  NPCId;                                                   // 0x00C8(0x0020) Edit
		class UCargoRunMapLayout*                                  Layout;                                                  // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddChecklistMapStepDesc
	 * Size -> 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddChecklistMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    OverrideTreasureMapItemDesc;                             // 0x0088(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_93QT[0x4];                                   // 0x00A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FQuestVariableText                                  Title;                                                   // 0x00A8(0x0020) Edit
		struct FQuestVariableText                                  Description;                                             // 0x00C8(0x0020) Edit
		struct FQuestVariableDataAsset                             ChecklistItemsData;                                      // 0x00E8(0x0020) Edit
		struct FQuestVariableText                                  Afternote;                                               // 0x0108(0x0020) Edit
		struct FQuestVariableDataAsset                             Layout;                                                  // 0x0128(0x0020) Edit
		EQuestMapIcon                                              RadialMiniIcon;                                          // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5PON[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddCircleMapStepDesc
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddCircleMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableName                                  IslandName;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableVector                                Location;                                                // 0x00A8(0x0020) Edit
		float                                                      CircleScale;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EQuestMapIcon                                              RadialMiniIcon;                                          // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HX1[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddMerchantMapStepDesc
	 * Size -> 0x0090 (FullSize[0x0110] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableName                                  IslandName;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableText                                  DeliveryLocation;                                        // 0x00A8(0x0020) Edit
		struct FQuestVariableText                                  DeliverByTime;                                           // 0x00C8(0x0020) Edit
		struct FQuestVariableMerchantItemArray                     Items;                                                   // 0x00E8(0x0020) Edit
		class UMerchantMapLayout*                                  Layout;                                                  // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddRiddleMapBaseStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableName                                  IslandName;                                              // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddRiddleMapStepDesc
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestAddRiddleMapStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
	{
	public:
		TArray<class FText>                                        Text;                                                    // 0x00A8(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UTaleQuestAddRiddleMapUsingVariableStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
	{
	public:
		struct FQuestVariableTextArray                             TextVariable;                                            // 0x00A8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAddXMarksMapStepDesc
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableName                                  IslandName;                                              // 0x0088(0x0020) Edit
		struct FQuestVariableVector                                Location;                                                // 0x00A8(0x0020) Edit
		struct FQuestVariableBool                                  IsUnderground;                                           // 0x00C8(0x0020) Edit
		struct FTaleQuestVariableTreasureMapItemDescType           TreasureMapOverride;                                     // 0x00E8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestAdvanceRiddleMapStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestRemoveMapStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestRemoveMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_ROQV[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestRemoveMapStepDesc*                         StepDesc;                                                // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestRemoveMapStepDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestRemoveMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableVector                                Location;                                                // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestUpdateMerchantMapStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestUpdateMerchantMapStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_UWC8[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestUpdateMerchantMapStepDesc*                 Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestUpdateMerchantMapStepDesc
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableMerchantItem                          Item;                                                    // 0x0088(0x0020) Edit
		struct FQuestVariableInt                                   Index;                                                   // 0x00A8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tales.TaleQuestWaitForChecklistMapCompletionStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestWaitForChecklistMapCompletionStepDesc : public UTaleQuestMapStepDescBase
	{
	public:
		class FName                                                MapID;                                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
