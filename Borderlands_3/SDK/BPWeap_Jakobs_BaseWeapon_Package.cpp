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
	 * 		Name   -> Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.ShowMagBones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Jakobs_BaseWeapon_C::ShowMagBones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.ShowMagBones");
		
		ABPWeap_Jakobs_BaseWeapon_C_ShowMagBones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.HideMagBones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Jakobs_BaseWeapon_C::HideMagBones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.HideMagBones");
		
		ABPWeap_Jakobs_BaseWeapon_C_HideMagBones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_Jakobs_BaseWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.UserConstructionScript");
		
		ABPWeap_Jakobs_BaseWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_Jakobs_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_Jakobs_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C");
		return ptr;
	}

}


