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
	 * 		Name   -> Function IronBearAbility_Eject.IronBearAbility_Eject_C.QuickSelectWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInventorySlotData*                          InvSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponSlotData*                             WeaponSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Eject_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.QuickSelectWeapon");
		
		UIronBearAbility_Eject_C_QuickSelectWeapon_Params params {};
		params.InvSlot = InvSlot;
		params.WeaponSlot = WeaponSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Eject_C::GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4");
		
		UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Eject_C::GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3");
		
		UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Eject.IronBearAbility_Eject_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UIronBearAbility_Eject_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.OnActivated");
		
		UIronBearAbility_Eject_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IronBearAbility_Eject.IronBearAbility_Eject_C.ExecuteUbergraph_IronBearAbility_Eject
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIronBearAbility_Eject_C::ExecuteUbergraph_IronBearAbility_Eject(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.ExecuteUbergraph_IronBearAbility_Eject");
		
		UIronBearAbility_Eject_C_ExecuteUbergraph_IronBearAbility_Eject_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIronBearAbility_Eject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIronBearAbility_Eject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IronBearAbility_Eject.IronBearAbility_Eject_C");
		return ptr;
	}

}


