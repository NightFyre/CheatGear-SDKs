/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActionStateCreatorDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActionStateCreatorDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStateCreatorDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestActionStateCreatorDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActionStateCreatorDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateCreatorDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomClientValidityActionState2Id.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomClientValidityActionState2Id::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.CustomClientValidityActionState2Id");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomClientValidityActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomClientValidityActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.CustomClientValidityActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNullActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNullActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.NullActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestActionStateId2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestActionStateId2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateId2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033826B0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
	 * 		struct FActionStateChangeRequestId                 InRequestId                                                (ConstParm, Parm)
	 * 		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
	 * 		struct FSerialisedActionStateMessage               InSerialisedPreviousStateMessage                           (ConstParm, Parm, ReferenceParm)
	 */
	void UActionStateMachineComponent::Server_RequestActionWithMessageForCurrentState(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const struct FSerialisedActionStateMessage& InSerialisedPreviousStateMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState");
		
		UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params params {};
		params.InEpochId = InEpochId;
		params.InRequestId = InRequestId;
		params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
		params.InSerialisedPreviousStateMessage = InSerialisedPreviousStateMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033824E0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
	 * 		struct FActionStateChangeRequestId                 InRequestId                                                (ConstParm, Parm)
	 * 		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
	 * 		EActionPredictionType                              ClientPredicted                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionStateMachineComponent::Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, EActionPredictionType ClientPredicted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction");
		
		UActionStateMachineComponent_Server_RequestAction_Params params {};
		params.InEpochId = InEpochId;
		params.InRequestId = InRequestId;
		params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
		params.ClientPredicted = ClientPredicted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033820B0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActionStateMachineComponent::PostNetInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.PostNetInit");
		
		UActionStateMachineComponent_PostNetInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382090
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UActionStateMachineComponent::OnNetOwnershipChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged");
		
		UActionStateMachineComponent_OnNetOwnershipChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381F90
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
	 * 		struct FSerialisedActionStateInfo                  InSerialisedActionStateSerialisationStateInfo              (ConstParm, Parm, ReferenceParm)
	 */
	void UActionStateMachineComponent::Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData");
		
		UActionStateMachineComponent_Multicast_PushSerialisableData_Params params {};
		params.InEpochId = InEpochId;
		params.InSerialisedActionStateSerialisationStateInfo = InSerialisedActionStateSerialisationStateInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381E90
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
	 * 		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
	 */
	void UActionStateMachineComponent::Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest");
		
		UActionStateMachineComponent_Multicast_PushActionFromRequest_Params params {};
		params.InEpochId = InEpochId;
		params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381D90
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
	 * 		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
	 */
	void UActionStateMachineComponent::Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction");
		
		UActionStateMachineComponent_Multicast_PushAction_Params params {};
		params.InEpochId = InEpochId;
		params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381440
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.End
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActionStateMachineComponent::End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.End");
		
		UActionStateMachineComponent_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03380DA0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FResetStateMachineRpc                       Rpc                                                        (ConstParm, Parm)
	 */
	void UActionStateMachineComponent::Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine");
		
		UActionStateMachineComponent_Client_ResetStateMachine_Params params {};
		params.Rpc = Rpc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03380C40
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
	 * 		struct FActionStateChangeRequestId                 InRequestId                                                (ConstParm, Parm)
	 * 		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
	 */
	void UActionStateMachineComponent::Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction");
		
		UActionStateMachineComponent_Client_CorrectAction_Params params {};
		params.InEpochId = InEpochId;
		params.InRequestId = InRequestId;
		params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionStateMachineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionStateMachineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStateMachineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomClientValidityCheckCallback.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomClientValidityCheckCallback::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.CustomClientValidityCheckCallback");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382B50
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId");
		
		UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params params {};
		params.InComponent = InComponent;
		params.StateId = StateId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382AD0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses");
		
		UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382A50
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails");
		
		UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033829D0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate");
		
		UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382950
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory");
		
		UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382890
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomClientValidityCheckCallback*          InCallback                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory");
		
		UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params params {};
		params.InComponent = InComponent;
		params.InCallback = InCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033823B0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ClientStateId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      ServerStateId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* ClientStateId, class UClass* ServerStateId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack");
		
		UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		params.ClientStateId = ClientStateId;
		params.ServerStateId = ServerStateId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033822C0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* StateId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack");
		
		UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		params.StateId = StateId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03382200
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack");
		
		UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033820D0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            DataValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionStateMachineComponentTestFunctions::STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* StateId, int32_t DataValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack");
		
		UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		params.StateId = StateId;
		params.DataValue = DataValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381BF0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, class UClass* StateId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack");
		
		UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		params.StateId = StateId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033819D0
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* UActionStateMachineComponentTestFunctions::STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack");
		
		UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381640
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActionStateMachineTrackId                         TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTestActionStateSerialisableData            Data                                                       (Parm, OutParm)
	 */
	bool UActionStateMachineComponentTestFunctions::STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, EActionStateMachineTrackId TrackId, struct FTestActionStateSerialisableData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack");
		
		UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params params {};
		params.InComponent = InComponent;
		params.TrackId = TrackId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03380F60
	 * 		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::STATIC_CreateCustomClientValidityCheckCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback");
		
		UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionStateMachineComponentTestFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionStateMachineComponentTestFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStateMachineComponentTestFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionStateMachineInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionStateMachineInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStateMachineInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionStatePriorityTableData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionStatePriorityTableData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStatePriorityTableData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381460
	 * 		Name   -> Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FActionStatePriorityTable                   PriorityTable                                              (Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      InStateA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      InStateB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	EActionStatePriority UActionStatePriorityTableUtility::STATIC_GetPriority(struct FActionStatePriorityTable* PriorityTable, class UClass* InStateA, class UClass* InStateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority");
		
		UActionStatePriorityTableUtility_GetPriority_Params params {};
		params.InStateA = InStateA;
		params.InStateB = InStateB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PriorityTable != nullptr)
			*PriorityTable = params.PriorityTable;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03380F90
	 * 		Name   -> Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActionStatePriorityTableData*               Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FActionStatePriorityTable UActionStatePriorityTableUtility::STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable");
		
		UActionStatePriorityTableUtility_CreatePriorityTable_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionStatePriorityTableUtility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionStatePriorityTableUtility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.ActionStatePriorityTableUtility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381CE0
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid");
		
		USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params params {};
		params.TestStruct = TestStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381B40
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner");
		
		USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params params {};
		params.TestStruct = TestStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381A90
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo");
		
		USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params params {};
		params.TestStruct = TestStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381880
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner");
		
		USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params params {};
		params.TestStruct = TestStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381790
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo");
		
		USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params params {};
		params.TestStruct = TestStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03381340
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            IntProp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestSerialisableData(class UClass* Id, int32_t IntProp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData");
		
		USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params params {};
		params.Id = Id;
		params.IntProp = IntProp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033811A0
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		float                                              FloatProp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BoolProp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      StringProp                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const class FString& StringProp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner");
		
		USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params params {};
		params.Id = Id;
		params.FloatProp = FloatProp;
		params.BoolProp = BoolProp;
		params.StringProp = StringProp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033810A0
	 * 		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            IntProp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfo(class UClass* Id, int32_t IntProp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo");
		
		USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params params {};
		params.Id = Id;
		params.IntProp = IntProp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USerialisedActionStateConstructionInfoTestFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USerialisedActionStateConstructionInfoTestFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions");
		return ptr;
	}

}


