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
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_MAL_SM_Tsunami_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.K2_OnActivated");
		
		UBPWeaponFireProjectile_MAL_SM_Tsunami_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.EvaluateShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::EvaluateShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.EvaluateShot");
		
		UBPWeaponFireProjectile_MAL_SM_Tsunami_C_EvaluateShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami");
		
		UBPWeaponFireProjectile_MAL_SM_Tsunami_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_MAL_SM_Tsunami_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_MAL_SM_Tsunami_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C");
		return ptr;
	}

}


