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
	 * 		Name   -> Function Ability_TrashGun.Ability_TrashGun_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_TrashGun_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.OnActivated");
		
		UAbility_TrashGun_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_TrashGun.Ability_TrashGun_C.RandomRandomness
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_TrashGun_C::RandomRandomness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.RandomRandomness");
		
		UAbility_TrashGun_C_RandomRandomness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_TrashGun.Ability_TrashGun_C.KillCDM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_TrashGun_C::KillCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.KillCDM");
		
		UAbility_TrashGun_C_KillCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_TrashGun.Ability_TrashGun_C.ExecuteUbergraph_Ability_TrashGun
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_TrashGun_C::ExecuteUbergraph_Ability_TrashGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.ExecuteUbergraph_Ability_TrashGun");
		
		UAbility_TrashGun_C_ExecuteUbergraph_Ability_TrashGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_TrashGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_TrashGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_TrashGun.Ability_TrashGun_C");
		return ptr;
	}

}


