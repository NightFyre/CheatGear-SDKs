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
	 * Class ActionStateMachine.ActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActionStateId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.ActionStateCreatorDefinition
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class AActionStateCreatorDefinition : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.TestActionStateCreatorDefinition
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ATestActionStateCreatorDefinition : public AActionStateCreatorDefinition
	{
	public:
		unsigned char                                              UnknownData_52EH[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.CustomClientValidityActionState2Id
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomClientValidityActionState2Id : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.CustomClientValidityActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomClientValidityActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.NullActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNullActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.TestActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.TestActionStateId2
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestActionStateId2 : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.ActionStateMachineComponent
	 * Size -> 0x0790 (FullSize[0x0858] - InheritedSize[0x00C8])
	 */
	class UActionStateMachineComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_6HP3[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActionChangedOnTrack;                                  // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_C2BC[0x768];                                 // 0x00F0(0x0768) MISSED OFFSET (PADDING)

	public:
		void Server_RequestActionWithMessageForCurrentState(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const struct FSerialisedActionStateMessage& InSerialisedPreviousStateMessage);
		void Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, EActionPredictionType ClientPredicted);
		void PostNetInit();
		void OnNetOwnershipChanged();
		void Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo);
		void Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
		void Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
		void End();
		void Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc);
		void Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.CustomClientValidityCheckCallback
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCustomClientValidityCheckCallback : public UObject
	{
	public:
		bool                                                       ShouldPassClientValidation;                              // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O7RA[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.ActionStateMachineComponentTestFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActionStateMachineComponentTestFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId);
		bool STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent);
		bool STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent);
		bool STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent);
		bool STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent);
		bool STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback);
		bool STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* ClientStateId, class UClass* ServerStateId);
		bool STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* StateId);
		bool STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId);
		void STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* StateId, int32_t DataValue);
		bool STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* StateId);
		class UClass* STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId);
		bool STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, struct FTestActionStateSerialisableData* Data);
		class UCustomClientValidityCheckCallback* STATIC_CreateCustomClientValidityCheckCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.ActionStateMachineInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActionStateMachineInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.ActionStatePriorityTableData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UActionStatePriorityTableData : public UDataAsset
	{
	public:
		TArray<struct FActionStatePriorityRelationship>            StateDefaultValue;                                       // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<struct FActionStatePriorityList>                    PriorityTableEntry;                                      // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.ActionStatePriorityTableUtility
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActionStatePriorityTableUtility : public UBlueprintFunctionLibrary
	{
	public:
		EActionStatePriority STATIC_GetPriority(struct FActionStatePriorityTable* PriorityTable, class UClass* InStateA, class UClass* InStateB);
		struct FActionStatePriorityTable STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USerialisedActionStateConstructionInfoTestFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct);
		bool STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
		bool STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
		struct FTestActionStateConstructionInfoWithInner STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
		struct FTestActionStateConstructionInfo STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
		struct FSerialisedActionStateInfo STATIC_CreateTestSerialisableData(class UClass* Id, int32_t IntProp);
		struct FSerialisedActionStateInfo STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const class FString& StringProp);
		struct FSerialisedActionStateInfo STATIC_CreateTestConstructionInfo(class UClass* Id, int32_t IntProp);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
