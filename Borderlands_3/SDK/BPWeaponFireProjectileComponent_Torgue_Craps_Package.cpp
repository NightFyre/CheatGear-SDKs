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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.GetShotLightProjectileData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UClass* UBPWeaponFireProjectileComponent_Torgue_Craps_C::GetShotLightProjectileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.GetShotLightProjectileData");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_GetShotLightProjectileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ReloadComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_Craps_C::ReloadComplete(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ReloadComplete");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_ReloadComplete_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.WeaponUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_Craps_C::WeaponUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.WeaponUsed");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_WeaponUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ChooseCrapsNumber
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_Craps_C::ChooseCrapsNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ChooseCrapsNumber");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_ChooseCrapsNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.CheckCrapsShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_Craps_C::CheckCrapsShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.CheckCrapsShot");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_CheckCrapsShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_Craps_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_Craps_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps");
		
		UBPWeaponFireProjectileComponent_Torgue_Craps_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_Torgue_Craps_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_Torgue_Craps_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C");
		return ptr;
	}

}


