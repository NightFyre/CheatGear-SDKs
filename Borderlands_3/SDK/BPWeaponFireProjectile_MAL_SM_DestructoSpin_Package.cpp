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
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.K2_OnActivated");
		
		UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.EvaluateShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::EvaluateShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.EvaluateShot");
		
		UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_EvaluateShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin");
		
		UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C");
		return ptr;
	}

}


