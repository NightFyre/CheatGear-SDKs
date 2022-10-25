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
	 * 		Name   -> Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_StainlessSteelBear_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.OnActivated");
		
		UPassiveSkill_Gunner_StainlessSteelBear_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_AutoBearStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Gunner_StainlessSteelBear_C::StainlessSteelBear_AutoBearStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_AutoBearStarted");
		
		UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_AutoBearStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_IronBearEnteredAndReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_StainlessSteelBear_C::StainlessSteelBear_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_IronBearEnteredAndReady");
		
		UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_IronBearEnteredAndReady_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Gunner_StainlessSteelBear_C::ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear");
		
		UPassiveSkill_Gunner_StainlessSteelBear_C_ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Gunner_StainlessSteelBear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Gunner_StainlessSteelBear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C");
		return ptr;
	}

}


