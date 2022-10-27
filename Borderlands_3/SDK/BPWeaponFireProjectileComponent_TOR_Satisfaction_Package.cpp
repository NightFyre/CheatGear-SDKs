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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.GetLockedTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class AActor* UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::GetLockedTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.GetLockedTarget");
		
		UBPWeaponFireProjectileComponent_TOR_Satisfaction_C_GetLockedTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_TOR_Satisfaction_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction");
		
		UBPWeaponFireProjectileComponent_TOR_Satisfaction_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_TOR_Satisfaction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C");
		return ptr;
	}

}


