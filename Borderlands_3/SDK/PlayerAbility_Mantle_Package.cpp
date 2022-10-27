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
	 * 		Name   -> Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Mantle_C::GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4");
		
		UPlayerAbility_Mantle_C_GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Mantle_C::GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3");
		
		UPlayerAbility_Mantle_C_GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerAbility_Mantle_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.OnPaused");
		
		UPlayerAbility_Mantle_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.ExecuteUbergraph_PlayerAbility_Mantle
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Mantle_C::ExecuteUbergraph_PlayerAbility_Mantle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.ExecuteUbergraph_PlayerAbility_Mantle");
		
		UPlayerAbility_Mantle_C_ExecuteUbergraph_PlayerAbility_Mantle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAbility_Mantle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAbility_Mantle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Mantle.PlayerAbility_Mantle_C");
		return ptr;
	}

}


