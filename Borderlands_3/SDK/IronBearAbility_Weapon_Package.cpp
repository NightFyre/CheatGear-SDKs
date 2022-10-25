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
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetRightFireHardPointSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UOakActionAbilityAugmentSlotData*            res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GetRightFireHardPointSlot(class UOakActionAbilityAugmentSlotData** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetRightFireHardPointSlot");
		
		UIronBearAbility_Weapon_C_GetRightFireHardPointSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetLeftFireHardPointSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UOakActionAbilityAugmentSlotData*            res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GetLeftFireHardPointSlot(class UOakActionAbilityAugmentSlotData** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetLeftFireHardPointSlot");
		
		UIronBearAbility_Weapon_C_GetLeftFireHardPointSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.QuickSelectWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInventorySlotData*                          InvSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponSlotData*                             WeaponSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.QuickSelectWeapon");
		
		UIronBearAbility_Weapon_C_QuickSelectWeapon_Params params {};
		params.InvSlot = InvSlot;
		params.WeaponSlot = WeaponSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10");
		
		UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9");
		
		UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8");
		
		UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7");
		
		UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6");
		
		UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UIronBearAbility_Weapon_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnActivated");
		
		UIronBearAbility_Weapon_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UIronBearAbility_Weapon_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnPaused");
		
		UIronBearAbility_Weapon_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.ExecuteUbergraph_IronBearAbility_Weapon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Weapon_C::ExecuteUbergraph_IronBearAbility_Weapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.ExecuteUbergraph_IronBearAbility_Weapon");
		
		UIronBearAbility_Weapon_C_ExecuteUbergraph_IronBearAbility_Weapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIronBearAbility_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIronBearAbility_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IronBearAbility_Weapon.IronBearAbility_Weapon_C");
		return ptr;
	}

}


