/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Jump_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Jump_K2Node_InputActionEvent_3");
		
		ABP_HDVehicleBase_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Jump_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Jump_K2Node_InputActionEvent_2");
		
		ABP_HDVehicleBase_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Use_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Use_K2Node_InputActionEvent_1");
		
		ABP_HDVehicleBase_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");
		
		ABP_HDVehicleBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");
		
		ABP_HDVehicleBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.Used
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Invoker                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::Used(class AActor* Invoker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.Used");
		
		ABP_HDVehicleBase_C_Used_Params params {};
		params.Invoker = Invoker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.NotifyPlayerSeatChangeEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UArcVehicleSeatConfig*                       ToSeat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UArcVehicleSeatConfig*                       FromSeat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EArcVehicleSeatChangeType                          SeatChangeEvent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::NotifyPlayerSeatChangeEvent(class APlayerState* Player, class UArcVehicleSeatConfig* ToSeat, class UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.NotifyPlayerSeatChangeEvent");
		
		ABP_HDVehicleBase_C_NotifyPlayerSeatChangeEvent_Params params {};
		params.Player = Player;
		params.ToSeat = ToSeat;
		params.FromSeat = FromSeat;
		params.SeatChangeEvent = SeatChangeEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.ReceiveTick");
		
		ABP_HDVehicleBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehicleBase.BP_HDVehicleBase_C.ExecuteUbergraph_BP_HDVehicleBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDVehicleBase_C::ExecuteUbergraph_BP_HDVehicleBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehicleBase.BP_HDVehicleBase_C.ExecuteUbergraph_BP_HDVehicleBase");
		
		ABP_HDVehicleBase_C_ExecuteUbergraph_BP_HDVehicleBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDVehicleBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDVehicleBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDVehicleBase.BP_HDVehicleBase_C");
		return ptr;
	}

}


