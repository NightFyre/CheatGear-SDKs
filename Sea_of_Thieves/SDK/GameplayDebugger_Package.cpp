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
	 * 		RVA    -> 0x041DD5B0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           InMessage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint32_t                                           DataView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameplayDebuggingComponent::ServerReplicateData(uint32_t InMessage, uint32_t DataView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData");
		
		UGameplayDebuggingComponent_ServerReplicateData_Params params {};
		params.InMessage = InMessage;
		params.DataView = DataView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD560
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData");
		
		UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD490
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FVector_NetQuantize10                       TargetLocation                                             (Parm)
	 */
	void UGameplayDebuggingComponent::ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData");
		
		UGameplayDebuggingComponent_ServerCollectNavmeshData_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD470
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
	 * 		Flags  -> (Native, Public)
	 */
	void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh");
		
		UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD450
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
	 * 		Flags  -> (Native, Public)
	 */
	void UGameplayDebuggingComponent::OnRep_UpdateEQS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS");
		
		UGameplayDebuggingComponent_OnRep_UpdateEQS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD430
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
	 * 		Flags  -> (Native, Public)
	 */
	void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard");
		
		UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD410
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
	 * 		Flags  -> (Native, Public)
	 */
	void UGameplayDebuggingComponent::OnRep_PathCorridorData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData");
		
		UGameplayDebuggingComponent_OnRep_PathCorridorData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD3D0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
	 * 		Flags  -> (Native, Public)
	 */
	void UGameplayDebuggingComponent::OnCycleDetailsView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView");
		
		UGameplayDebuggingComponent_OnCycleDetailsView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD1E0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection");
		
		UGameplayDebuggingComponent_ClientEnableTargetSelection_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayDebuggingHUDComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayDebuggingHUDComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingHUDComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggingControllerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggingControllerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingControllerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGaneplayDebuggerProxyHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGaneplayDebuggerProxyHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GaneplayDebuggerProxyHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD7A0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameplayDebuggingReplicator::ServerSetActorToDebug(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug");
		
		AGameplayDebuggingReplicator_ServerSetActorToDebug_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD670
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint32_t                                           InMessage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint32_t                                           DataView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameplayDebuggingReplicator::ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage");
		
		AGameplayDebuggingReplicator_ServerReplicateMessage_Params params {};
		params.Actor = Actor;
		params.InMessage = InMessage;
		params.DataView = DataView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD3F0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
	 * 		Flags  -> (Native, Public)
	 */
	void AGameplayDebuggingReplicator::OnRep_AutoActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate");
		
		AGameplayDebuggingReplicator_OnRep_AutoActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD2A0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint32_t                                           InMessage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint32_t                                           DataView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameplayDebuggingReplicator::ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage");
		
		AGameplayDebuggingReplicator_ClientReplicateMessage_Params params {};
		params.Actor = Actor;
		params.InMessage = InMessage;
		params.DataView = DataView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD0E0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class APlayerController* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection");
		
		AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params params {};
		params.bEnable = bEnable;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041DD0C0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void AGameplayDebuggingReplicator::ClientAutoActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate");
		
		AGameplayDebuggingReplicator_ClientAutoActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayDebuggingReplicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayDebuggingReplicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingReplicator");
		return ptr;
	}

}


