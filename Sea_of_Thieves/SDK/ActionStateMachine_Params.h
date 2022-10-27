#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
	 */
	struct UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params
	{
	public:
		struct FActionStateChangeRequestId                         InEpochId;                                               // 0x0000(0x0001)  (ConstParm, Parm)
		struct FActionStateChangeRequestId                         InRequestId;                                             // 0x0001(0x0001)  (ConstParm, Parm)
		unsigned char                                              UnknownData_VX9X[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          InSerialisedActionStateConstructionInfo;                 // 0x0008(0x0040)  (ConstParm, Parm, ReferenceParm)
		struct FSerialisedActionStateMessage                       InSerialisedPreviousStateMessage;                        // 0x0048(0x0018)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
	 */
	struct UActionStateMachineComponent_Server_RequestAction_Params
	{
	public:
		struct FActionStateChangeRequestId                         InEpochId;                                               // 0x0000(0x0001)  (ConstParm, Parm)
		struct FActionStateChangeRequestId                         InRequestId;                                             // 0x0001(0x0001)  (ConstParm, Parm)
		unsigned char                                              UnknownData_T22V[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          InSerialisedActionStateConstructionInfo;                 // 0x0008(0x0040)  (ConstParm, Parm, ReferenceParm)
		EActionPredictionType                                      ClientPredicted;                                         // 0x0048(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
	 */
	struct UActionStateMachineComponent_PostNetInit_Params
	{	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
	 */
	struct UActionStateMachineComponent_OnNetOwnershipChanged_Params
	{	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
	 */
	struct UActionStateMachineComponent_Multicast_PushSerialisableData_Params
	{
	public:
		struct FActionStateChangeRequestId                         InEpochId;                                               // 0x0000(0x0001)  (ConstParm, Parm)
		unsigned char                                              UnknownData_K3G3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          InSerialisedActionStateSerialisationStateInfo;           // 0x0008(0x0040)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
	 */
	struct UActionStateMachineComponent_Multicast_PushActionFromRequest_Params
	{
	public:
		struct FActionStateChangeRequestId                         InEpochId;                                               // 0x0000(0x0001)  (ConstParm, Parm)
		unsigned char                                              UnknownData_A3W7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          InSerialisedActionStateConstructionInfo;                 // 0x0008(0x0040)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
	 */
	struct UActionStateMachineComponent_Multicast_PushAction_Params
	{
	public:
		struct FActionStateChangeRequestId                         InEpochId;                                               // 0x0000(0x0001)  (ConstParm, Parm)
		unsigned char                                              UnknownData_KBE8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          InSerialisedActionStateConstructionInfo;                 // 0x0008(0x0040)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.End
	 */
	struct UActionStateMachineComponent_End_Params
	{	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
	 */
	struct UActionStateMachineComponent_Client_ResetStateMachine_Params
	{
	public:
		struct FResetStateMachineRpc                               Rpc;                                                     // 0x0000(0x0150)  (ConstParm, Parm)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
	 */
	struct UActionStateMachineComponent_Client_CorrectAction_Params
	{
	public:
		struct FActionStateChangeRequestId                         InEpochId;                                               // 0x0000(0x0001)  (ConstParm, Parm)
		struct FActionStateChangeRequestId                         InRequestId;                                             // 0x0001(0x0001)  (ConstParm, Parm)
		unsigned char                                              UnknownData_S441[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          InSerialisedActionStateConstructionInfo;                 // 0x0008(0x0040)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
	 */
	struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              StateId;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
	 */
	struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
	 */
	struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
	 */
	struct UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
	 */
	struct UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
	 */
	struct UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCustomClientValidityCheckCallback*                  InCallback;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0898[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ClientStateId;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              ServerStateId;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TS8K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              StateId;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AUOE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              StateId;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    DataValue;                                               // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HY18[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              StateId;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XLBD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
	 */
	struct UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params
	{
	public:
		class UActionStateMachineComponent*                        InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSBR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTestActionStateSerialisableData                    Data;                                                    // 0x0010(0x0038)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
	 */
	struct UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params
	{
	public:
		class UCustomClientValidityCheckCallback*                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
	 */
	struct UActionStatePriorityTableUtility_GetPriority_Params
	{
	public:
		struct FActionStatePriorityTable                           PriorityTable;                                           // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		class UClass*                                              InStateA;                                                // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              InStateB;                                                // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		EActionStatePriority                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
	 */
	struct UActionStatePriorityTableUtility_CreatePriorityTable_Params
	{
	public:
		class UActionStatePriorityTableData*                       Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FActionStatePriorityTable                           ReturnValue;                                             // 0x0008(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params
	{
	public:
		struct FSerialisedActionStateInfo                          TestStruct;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params
	{
	public:
		struct FSerialisedActionStateInfo                          TestStruct;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params
	{
	public:
		struct FSerialisedActionStateInfo                          TestStruct;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params
	{
	public:
		struct FSerialisedActionStateInfo                          TestStruct;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FTestActionStateConstructionInfoWithInner           ReturnValue;                                             // 0x0040(0x0048)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params
	{
	public:
		struct FSerialisedActionStateInfo                          TestStruct;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FTestActionStateConstructionInfo                    ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params
	{
	public:
		class UClass*                                              Id;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    IntProp;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7Q23[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params
	{
	public:
		class UClass*                                              Id;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      FloatProp;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BoolProp;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMZB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StringProp;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSerialisedActionStateInfo                          ReturnValue;                                             // 0x0020(0x0040)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
	 */
	struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params
	{
	public:
		class UClass*                                              Id;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    IntProp;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXMY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSerialisedActionStateInfo                          ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
