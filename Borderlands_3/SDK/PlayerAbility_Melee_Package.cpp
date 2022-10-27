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
	 * 		Name   -> Function PlayerAbility_Melee.PlayerAbility_Melee_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Melee_C::GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Melee.PlayerAbility_Melee_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2");
		
		UPlayerAbility_Melee_C_GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Melee.PlayerAbility_Melee_C.ExecuteUbergraph_PlayerAbility_Melee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Melee_C::ExecuteUbergraph_PlayerAbility_Melee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Melee.PlayerAbility_Melee_C.ExecuteUbergraph_PlayerAbility_Melee");
		
		UPlayerAbility_Melee_C_ExecuteUbergraph_PlayerAbility_Melee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAbility_Melee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAbility_Melee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Melee.PlayerAbility_Melee_C");
		return ptr;
	}

}


