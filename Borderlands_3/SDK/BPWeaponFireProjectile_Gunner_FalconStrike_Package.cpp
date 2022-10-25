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
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_Gunner_FalconStrike_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_Gunner_FalconStrike_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_Gunner_FalconStrike_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.K2_OnActivated");
		
		UBPWeaponFireProjectile_Gunner_FalconStrike_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_Gunner_FalconStrike_C::ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike");
		
		UBPWeaponFireProjectile_Gunner_FalconStrike_C_ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_Gunner_FalconStrike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_Gunner_FalconStrike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C");
		return ptr;
	}

}


