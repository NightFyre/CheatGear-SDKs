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
	 * 		Name   -> Function Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C.PlayScreenParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_WeaponMelee_RH_Success_C::PlayScreenParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C.PlayScreenParticle");
		
		UAction_WeaponMelee_RH_Success_C_PlayScreenParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C.ExecuteUbergraph_Action_WeaponMelee_RH_Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_WeaponMelee_RH_Success_C::ExecuteUbergraph_Action_WeaponMelee_RH_Success(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C.ExecuteUbergraph_Action_WeaponMelee_RH_Success");
		
		UAction_WeaponMelee_RH_Success_C_ExecuteUbergraph_Action_WeaponMelee_RH_Success_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_WeaponMelee_RH_Success_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_WeaponMelee_RH_Success_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_WeaponMelee_RH_Success.Action_WeaponMelee_RH_Success_C");
		return ptr;
	}

}


