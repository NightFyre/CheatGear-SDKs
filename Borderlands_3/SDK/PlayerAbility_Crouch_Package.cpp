/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerAbility_Crouch_C::FlushCrouchInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput");
		
		UPlayerAbility_Crouch_C_FlushCrouchInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerAbility_Crouch_C::IsCrouchToggle(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle");
		
		UPlayerAbility_Crouch_C_IsCrouchToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Crouch_C::GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6");
		
		UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Crouch_C::GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5");
		
		UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Crouch_C::GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4");
		
		UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerAbility_Crouch_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.OnPaused");
		
		UPlayerAbility_Crouch_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Crouch_C::ExecuteUbergraph_PlayerAbility_Crouch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch");
		
		UPlayerAbility_Crouch_C_ExecuteUbergraph_PlayerAbility_Crouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAbility_Crouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAbility_Crouch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Crouch.PlayerAbility_Crouch_C");
		return ptr;
	}

}


