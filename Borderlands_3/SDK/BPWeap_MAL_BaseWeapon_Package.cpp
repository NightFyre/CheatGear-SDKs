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
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.GetChargePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ChargePercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_MAL_BaseWeapon_C::GetChargePercent(float* ChargePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.GetChargePercent");
		
		ABPWeap_MAL_BaseWeapon_C_GetChargePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChargePercent != nullptr)
			*ChargePercent = params.ChargePercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.UserConstructionScript");
		
		ABPWeap_MAL_BaseWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::ElementalInterpolationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__FinishedFunc");
		
		ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::ElementalInterpolationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__UpdateFunc");
		
		ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimaryElementalData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_MAL_BaseWeapon_C::SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimaryElementalData");
		
		ABPWeap_MAL_BaseWeapon_C_SetPrimaryElementalData_Params params {};
		params.BaseColor = BaseColor;
		params.HighlightColor = HighlightColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToPrimary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::OnSwitchToPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToPrimary");
		
		ABPWeap_MAL_BaseWeapon_C_OnSwitchToPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToSecondary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::OnSwitchToSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToSecondary");
		
		ABPWeap_MAL_BaseWeapon_C_OnSwitchToSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Initialize Elemental Emissive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::Initialize_Elemental_Emissive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Initialize Elemental Emissive");
		
		ABPWeap_MAL_BaseWeapon_C_Initialize_Elemental_Emissive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::SetPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimary");
		
		ABPWeap_MAL_BaseWeapon_C_SetPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::SetSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondary");
		
		ABPWeap_MAL_BaseWeapon_C_SetSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.K2_OnWeaponSkinApplied
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::K2_OnWeaponSkinApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.K2_OnWeaponSkinApplied");
		
		ABPWeap_MAL_BaseWeapon_C_K2_OnWeaponSkinApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ReceiveBeginPlay");
		
		ABPWeap_MAL_BaseWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Notify_ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_MAL_BaseWeapon_C::Notify_ReloadStarted(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Notify_ReloadStarted");
		
		ABPWeap_MAL_BaseWeapon_C_Notify_ReloadStarted_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Weapon_NotifyEquipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::Weapon_NotifyEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Weapon_NotifyEquipped");
		
		ABPWeap_MAL_BaseWeapon_C_Weapon_NotifyEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Event_ModeSwitched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::Event_ModeSwitched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Event_ModeSwitched");
		
		ABPWeap_MAL_BaseWeapon_C_Event_ModeSwitched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondaryElementalData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_MAL_BaseWeapon_C::SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondaryElementalData");
		
		ABPWeap_MAL_BaseWeapon_C_SetSecondaryElementalData_Params params {};
		params.BaseColor = BaseColor;
		params.HighlightColor = HighlightColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.PutDown_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_MAL_BaseWeapon_C::PutDown_Event(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.PutDown_Event");
		
		ABPWeap_MAL_BaseWeapon_C_PutDown_Event_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.WeaponAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_MAL_BaseWeapon_C::WeaponAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.WeaponAttached");
		
		ABPWeap_MAL_BaseWeapon_C_WeaponAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ExecuteUbergraph_BPWeap_MAL_BaseWeapon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_MAL_BaseWeapon_C::ExecuteUbergraph_BPWeap_MAL_BaseWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ExecuteUbergraph_BPWeap_MAL_BaseWeapon");
		
		ABPWeap_MAL_BaseWeapon_C_ExecuteUbergraph_BPWeap_MAL_BaseWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_MAL_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_MAL_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C");
		return ptr;
	}

}


