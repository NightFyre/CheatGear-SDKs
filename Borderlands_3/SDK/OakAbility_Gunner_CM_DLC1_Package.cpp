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
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnActivated");
		
		UOakAbility_Gunner_CM_DLC1_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnClicked(unsigned char InputChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnClicked");
		
		UOakAbility_Gunner_CM_DLC1_C_OnClicked_Params params {};
		params.InputChannel = InputChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnPutDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnPutDown(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnPutDown");
		
		UOakAbility_Gunner_CM_DLC1_C_OnPutDown_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnReloadStarted");
		
		UOakAbility_Gunner_CM_DLC1_C_OnReloadStarted_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnSwitchMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnSwitchMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnSwitchMode");
		
		UOakAbility_Gunner_CM_DLC1_C_OnSwitchMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.StartClassModBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::StartClassModBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.StartClassModBonus");
		
		UOakAbility_Gunner_CM_DLC1_C_StartClassModBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.StopClassModBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::StopClassModBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.StopClassModBonus");
		
		UOakAbility_Gunner_CM_DLC1_C_StopClassModBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.UpdateScalar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::UpdateScalar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.UpdateScalar");
		
		UOakAbility_Gunner_CM_DLC1_C_UpdateScalar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnDeactivated");
		
		UOakAbility_Gunner_CM_DLC1_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.BindWeaponEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::BindWeaponEvents(class AWeapon* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.BindWeaponEvents");
		
		UOakAbility_Gunner_CM_DLC1_C_BindWeaponEvents_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.UnbindWeaponEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     OldWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::UnbindWeaponEvents(class AWeapon* OldWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.UnbindWeaponEvents");
		
		UOakAbility_Gunner_CM_DLC1_C_UnbindWeaponEvents_Params params {};
		params.OldWeapon = OldWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnWeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     LastWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnWeaponChanged");
		
		UOakAbility_Gunner_CM_DLC1_C_OnWeaponChanged_Params params {};
		params.NewWeapon = NewWeapon;
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.ExecuteUbergraph_OakAbility_Gunner_CM_DLC1
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_DLC1_C::ExecuteUbergraph_OakAbility_Gunner_CM_DLC1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.ExecuteUbergraph_OakAbility_Gunner_CM_DLC1");
		
		UOakAbility_Gunner_CM_DLC1_C_ExecuteUbergraph_OakAbility_Gunner_CM_DLC1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Gunner_CM_DLC1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Gunner_CM_DLC1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C");
		return ptr;
	}

}


