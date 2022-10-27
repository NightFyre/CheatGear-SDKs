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
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.ShouldDisplayTotalAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bDisplayTotalAmmo                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_WeaponStatus_C::ShouldDisplayTotalAmmo(bool* bDisplayTotalAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.ShouldDisplayTotalAmmo");
		
		UWBP_WeaponStatus_C_ShouldDisplayTotalAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDisplayTotalAmmo != nullptr)
			*bDisplayTotalAmmo = params.bDisplayTotalAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.UpdateElementVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_WeaponStatus_C::UpdateElementVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.UpdateElementVisibility");
		
		UWBP_WeaponStatus_C_UpdateElementVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_WeaponStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.PreConstruct");
		
		UWBP_WeaponStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseWeapon*                               NewWeap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDBaseWeapon*                               PrevWeap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WeaponStatus_C::BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponChanged");
		
		UWBP_WeaponStatus_C_BPOwnerWeaponChanged_Params params {};
		params.NewWeap = NewWeap;
		params.PrevWeap = PrevWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponSetFireMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFireMode                                          NewFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFireMode                                          PreviousFireMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromPlayerInput                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_WeaponStatus_C::BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponSetFireMode");
		
		UWBP_WeaponStatus_C_BPOwnerWeaponSetFireMode_Params params {};
		params.NewFireMode = NewFireMode;
		params.PreviousFireMode = PreviousFireMode;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponAmmoUpdated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDUIWeaponAmmoState                        AmmoState                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bFromReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bTotalFreeAmmoUpdated                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNumFreeAmmoClipsUpdated                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_WeaponStatus_C::BPOwnerWeaponAmmoUpdated(const struct FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponAmmoUpdated");
		
		UWBP_WeaponStatus_C_BPOwnerWeaponAmmoUpdated_Params params {};
		params.AmmoState = AmmoState;
		params.bFromReload = bFromReload;
		params.bTotalFreeAmmoUpdated = bTotalFreeAmmoUpdated;
		params.bNumFreeAmmoClipsUpdated = bNumFreeAmmoClipsUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.OwnerSetAimStyle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDWeaponAimStyle                                  NewAimStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDWeaponAimStyle                                  PrevAimStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromPlayerInput                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_WeaponStatus_C::OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.OwnerSetAimStyle");
		
		UWBP_WeaponStatus_C_OwnerSetAimStyle_Params params {};
		params.NewAimStyle = NewAimStyle;
		params.PrevAimStyle = PrevAimStyle;
		params.bFromPlayerInput = bFromPlayerInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_WeaponStatus.WBP_WeaponStatus_C.ExecuteUbergraph_WBP_WeaponStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WeaponStatus_C::ExecuteUbergraph_WBP_WeaponStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WeaponStatus.WBP_WeaponStatus_C.ExecuteUbergraph_WBP_WeaponStatus");
		
		UWBP_WeaponStatus_C_ExecuteUbergraph_WBP_WeaponStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_WeaponStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_WeaponStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WeaponStatus.WBP_WeaponStatus_C");
		return ptr;
	}

}


