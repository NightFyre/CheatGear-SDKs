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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.SelectProjectile
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* UBPWeaponFireProjectileComponent_Torgue_C::SelectProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.SelectProjectile");
		
		UBPWeaponFireProjectileComponent_Torgue_C_SelectProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_Torgue_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue");
		
		UBPWeaponFireProjectileComponent_Torgue_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_Torgue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_Torgue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C");
		return ptr;
	}

}


