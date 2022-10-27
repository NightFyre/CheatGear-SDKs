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
	 * 		Name   -> Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_EnterExit_Nova_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointTriggerEffect");
		
		UAbility_Gunner_EnterExit_Nova_C_AnointTriggerEffect_Params params {};
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
	 * 		Name   -> Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronIronBearStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_EnterExit_Nova_C::AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronIronBearStarted");
		
		UAbility_Gunner_EnterExit_Nova_C_AnointIronIronBearStarted_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronBearEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Gunner_EnterExit_Nova_C::AnointIronBearEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronBearEnded");
		
		UAbility_Gunner_EnterExit_Nova_C_AnointIronBearEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.ExecuteUbergraph_Ability_Gunner_EnterExit_Nova
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_EnterExit_Nova_C::ExecuteUbergraph_Ability_Gunner_EnterExit_Nova(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.ExecuteUbergraph_Ability_Gunner_EnterExit_Nova");
		
		UAbility_Gunner_EnterExit_Nova_C_ExecuteUbergraph_Ability_Gunner_EnterExit_Nova_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Gunner_EnterExit_Nova_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Gunner_EnterExit_Nova_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C");
		return ptr;
	}

}


