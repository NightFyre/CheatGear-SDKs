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
	 * 		Name   -> Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_FireInSkagDen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnActivated");
		
		UPassiveSkill_Gunner_FireInSkagDen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnEnteredIronBear_FireSkagDen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_FireInSkagDen_C::OnEnteredIronBear_FireSkagDen(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnEnteredIronBear_FireSkagDen");
		
		UPassiveSkill_Gunner_FireInSkagDen_C_OnEnteredIronBear_FireSkagDen_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_FireInSkagDen_C::ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen");
		
		UPassiveSkill_Gunner_FireInSkagDen_C_ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Gunner_FireInSkagDen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Gunner_FireInSkagDen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C");
		return ptr;
	}

}


