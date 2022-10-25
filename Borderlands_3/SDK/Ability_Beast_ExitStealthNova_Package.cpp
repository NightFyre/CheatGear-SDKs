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
	 * 		Name   -> Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Beast_ExitStealthNova_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.AnointTriggerEffect");
		
		UAbility_Beast_ExitStealthNova_C_AnointTriggerEffect_Params params {};
		params.TriggerEffect = TriggerEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExitStealth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Beast_ExitStealthNova_C::ExitStealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExitStealth");
		
		UAbility_Beast_ExitStealthNova_C_ExitStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExecuteUbergraph_Ability_Beast_ExitStealthNova
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_ExitStealthNova_C::ExecuteUbergraph_Ability_Beast_ExitStealthNova(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExecuteUbergraph_Ability_Beast_ExitStealthNova");
		
		UAbility_Beast_ExitStealthNova_C_ExecuteUbergraph_Ability_Beast_ExitStealthNova_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Beast_ExitStealthNova_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Beast_ExitStealthNova_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C");
		return ptr;
	}

}


