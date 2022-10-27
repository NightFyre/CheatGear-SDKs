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
	 * 		Name   -> Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerAbility_Sprint_C::IsSprintToggle(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle");
		
		UPlayerAbility_Sprint_C_IsSprintToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Sprint_C::GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4");
		
		UPlayerAbility_Sprint_C_GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Sprint_C::GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3");
		
		UPlayerAbility_Sprint_C_GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Sprint_C::ExecuteUbergraph_PlayerAbility_Sprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint");
		
		UPlayerAbility_Sprint_C_ExecuteUbergraph_PlayerAbility_Sprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAbility_Sprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAbility_Sprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Sprint.PlayerAbility_Sprint_C");
		return ptr;
	}

}


