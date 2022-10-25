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
	 * Enum Tales.ETaleQuestStepBeginMode
	 */
	enum class ETaleQuestStepBeginMode : uint8_t
	{
		Cold = 0,
		Warm = 1,
		MAX  = 2
	};

	/**
	 * Enum Tales.ETaleQuestStepState
	 */
	enum class ETaleQuestStepState : uint8_t
	{
		Inactive          = 0,
		Active            = 1,
		PendingCompletion = 2,
		Completed         = 3,
		MAX               = 4
	};

	/**
	 * Enum Tales.ETaleInteractionState
	 */
	enum class ETaleInteractionState : uint8_t
	{
		Enabled  = 0,
		Disabled = 1,
		MAX      = 2
	};

	/**
	 * Enum Tales.ELostShipmentsIslandTypes
	 */
	enum class ELostShipmentsIslandTypes : uint8_t
	{
		Feature  = 0,
		Resource = 1,
		Seapost  = 2,
		Outpost  = 3,
		Fort     = 4,
		MAX      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Tales.QuestVariableAny
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableAny : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.IslandTypeWeights
	 * Size -> 0x0014
	 */
	struct FIslandTypeWeights
	{
	public:
		float                                                      FeatureIslandWeight;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ResourceIslandWeight;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OutpostIslandWeight;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SeapostIslandWeight;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FortIslandWeight;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.SplineFootprintPathTool
	 * Size -> 0x0001
	 */
	struct FSplineFootprintPathTool
	{
	public:
		unsigned char                                              UnknownData_XXCJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.TaleQuestCargoRunContractItem
	 * Size -> 0x0018
	 */
	struct FTaleQuestCargoRunContractItem
	{
	public:
		class UClass*                                              ItemToCollect;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_HP5R[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.TaleQuestDeliveryRequest
	 * Size -> 0x0038
	 */
	struct FTaleQuestDeliveryRequest
	{
	public:
		int32_t                                                    Id;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O8N7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMerchantContractItemDesc                           Item;                                                    // 0x0008(0x0028) Edit, BlueprintVisible
		int32_t                                                    NumToDeliver;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumToAllocate;                                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.TrackedActorData
	 * Size -> 0x0010
	 */
	struct FTrackedActorData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_79DZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.CriticalActorDelegateData
	 * Size -> 0x0048
	 */
	struct FCriticalActorDelegateData
	{
	public:
		class AActor*                                              CriticalActor;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                FailureMessage;                                          // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_VWHE[0x20];                                  // 0x0020(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_BEXS[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.SnapshottedActorData
	 * Size -> 0x0060
	 */
	struct FSnapshottedActorData
	{
	public:
		unsigned char                                              Instagator[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.SnapshottedActorData.Instagator
		struct FGuid                                               SnapshotID;                                              // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ActorWasCritical;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ActorWasTracked;                                         // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WMPT[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                FailureMessage;                                          // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_5B02[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Tales.PhasedActor
	 * Size -> 0x0020
	 */
	struct FPhasedActor
	{
	public:
		class AActor*                                              MapActor;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8CBX[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.PhasedItem
	 * Size -> 0x0028
	 */
	struct FPhasedItem
	{
	public:
		class AItemProxy*                                          ItemProxy;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AItemInfo*                                           ItemInfo;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tracked;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CMOB[0x17];                                  // 0x0011(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.MigrationActionPair
	 * Size -> 0x0010
	 */
	struct FMigrationActionPair
	{
	public:
		struct FTaleResourceHandle                                 AllocatedResourceHandle;                                 // 0x0000(0x0008)
		class UTaleMigrationAction*                                MigrationAction;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.BodyFramePair
	 * Size -> 0x0028
	 */
	struct FBodyFramePair
	{
	public:
		unsigned char                                              UnknownData_GLYU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTaleQuestIndexedFrame*                              Frame;                                                   // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Body[0x10];                                              // 0x0018(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.BodyFramePair.Body
	};

	/**
	 * ScriptStruct Tales.QuestVariableArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableSetEQSTaleContextValue
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableSetEQSTaleContextValue : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableLinkEQSContext
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableLinkEQSContext : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableItemDescType
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableItemDescType : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableItemInfo
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableItemInfo : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableCollection
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableCollection : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableGuidArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableGuidArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariablePrioritisedPrompt
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariablePrioritisedPrompt : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableBountyTargetArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableBountyTargetArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.TaleQuestDeliverableItem
	 * Size -> 0x0040
	 */
	struct FTaleQuestDeliverableItem
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_Z5EI[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UTexture*                                            Icon;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.QuestVariableMerchantItemArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableMerchantItemArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableMerchantItem
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableMerchantItem : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.TaleActorSpawnParameters
	 * Size -> 0x0003
	 */
	struct FTaleActorSpawnParameters
	{
	public:
		bool                                                       Tracked;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       GatherForMigration;                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DeferredSpawning;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Tales.CompondNodePinDesc
	 * Size -> 0x0048
	 */
	struct FCompondNodePinDesc
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_KM61[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FGuid                                               PinId;                                                   // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Tales.TaleQuestDesc
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	struct FTaleQuestDesc : public FQuestDesc
	{
	public:
		class UTaleQuestStepDesc*                                  Root;                                                    // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Definition;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TaleFailMessage;                                         // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_VYD2[0x20];                                  // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                TaleFailBannerTag;                                       // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldFireStartTallTaleTrackedObjective;                 // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Development;                                             // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_32PJ[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.TaleQuestToggledDefinition
	 * Size -> 0x0010
	 */
	struct FTaleQuestToggledDefinition
	{
	public:
		class FName                                                FeatureToggle;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Definition;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.CriticalActorWrapper
	 * Size -> 0x0040
	 */
	struct FCriticalActorWrapper
	{
	public:
		class AActor*                                              CriticalActor;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M2R0[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.QuestVariableActorArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableActorArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableObjectArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableObjectArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableClassArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableClassArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.ParticpantToolGroup
	 * Size -> 0x0020
	 */
	struct FParticpantToolGroup
	{
	public:
		unsigned char                                              UnknownData_1VGR[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.QuestVariableRotator
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableRotator : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableActorAssetType
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableActorAssetType : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.TaleQuestForEachCrewTask
	 * Size -> 0x0028
	 */
	struct FTaleQuestForEachCrewTask
	{
	public:
		unsigned char                                              Task[0x10];                                              // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.TaleQuestForEachCrewTask.Task
		unsigned char                                              UnknownData_U1PX[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.QuestVariableTaleResourceHandle
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableTaleResourceHandle : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.ActorSpawnedAutomationEvent
	 * Size -> 0x0008
	 */
	struct FActorSpawnedAutomationEvent
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct Tales.EventSpawnedTallTaleQuestItem
	 * Size -> 0x0001
	 */
	struct FEventSpawnedTallTaleQuestItem
	{
	public:
		unsigned char                                              UnknownData_C118[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.TaleQuestSelectorServiceSeedSetTelemetryEvent
	 * Size -> 0x0004
	 */
	struct FTaleQuestSelectorServiceSeedSetTelemetryEvent
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.PlaySequencerAutomationEvent
	 * Size -> 0x0018
	 */
	struct FPlaySequencerAutomationEvent
	{
	public:
		unsigned char                                              UnknownData_XGRM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.EventModalInteractionStateChanged
	 * Size -> 0x0001
	 */
	struct FEventModalInteractionStateChanged
	{
	public:
		bool                                                       IsInteractionBlocked;                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Tales.ToggleModalInteractionNetworkEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FToggleModalInteractionNetworkEvent : public FBoxedRpc
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteractionBlocked;                                      // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R1RG[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Tales.StepMerchantItemDesc
	 * Size -> 0x0040
	 */
	struct FStepMerchantItemDesc
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_B9L8[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UTexture*                                            Icon;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.QuestVariableActorAssetTypeArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableActorAssetTypeArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableItemDescTypeArray
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableItemDescTypeArray : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariablePageLayout
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariablePageLayout : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.QuestVariableTexture
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableTexture : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.TaleQuestFailedEvent
	 * Size -> 0x0020
	 */
	struct FTaleQuestFailedEvent
	{
	public:
		TArray<struct FGuid>                                       CrewIds;                                                 // 0x0000(0x0010) ZeroConstructor
		struct FGuid                                               QuestId;                                                 // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Tales.TaleQuestContextInvalidTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FTaleQuestContextInvalidTelemetryEvent
	{
	public:
		class FName                                                StepType;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Tale;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Tales.QuestVariableAISpawner
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableAISpawner : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Tales.StepBountyTargetDesc
	 * Size -> 0x0040
	 */
	struct FStepBountyTargetDesc
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_WWA0[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UTexture*                                            Portrait;                                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
