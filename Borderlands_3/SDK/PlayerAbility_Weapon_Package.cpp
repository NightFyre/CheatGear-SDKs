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
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.QuickSelectWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInventorySlotData*                          InvSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponSlotData*                             WeaponSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.QuickSelectWeapon");
		
		UPlayerAbility_Weapon_C_QuickSelectWeapon_Params params {};
		params.InvSlot = InvSlot;
		params.WeaponSlot = WeaponSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16(class UGbxInputActionData_Discrete* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16");
		
		UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerAbility_Weapon_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.OnPaused");
		
		UPlayerAbility_Weapon_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.ExecuteUbergraph_PlayerAbility_Weapon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerAbility_Weapon_C::ExecuteUbergraph_PlayerAbility_Weapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.ExecuteUbergraph_PlayerAbility_Weapon");
		
		UPlayerAbility_Weapon_C_ExecuteUbergraph_PlayerAbility_Weapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAbility_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAbility_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Weapon.PlayerAbility_Weapon_C");
		return ptr;
	}

}


