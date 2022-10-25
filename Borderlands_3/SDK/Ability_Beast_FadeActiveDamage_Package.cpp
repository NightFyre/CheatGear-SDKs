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
	 * 		Name   -> Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Beast_FadeActiveDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnActivated");
		
		UAbility_Beast_FadeActiveDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Beast_FadeActiveDamage_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnDeactivated");
		
		UAbility_Beast_FadeActiveDamage_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_BeastmasterActionSkill                        ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_FadeActiveDamage_C::FadeAwayStarted(Enum_BeastmasterActionSkill ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayStarted");
		
		UAbility_Beast_FadeActiveDamage_C_FadeAwayStarted_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Beast_FadeActiveDamage_C::FadeAwayEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayEnded");
		
		UAbility_Beast_FadeActiveDamage_C_FadeAwayEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ChangedSkill
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakPlayerAbilitySlotData*                   SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_FadeActiveDamage_C::ChangedSkill(class UOakPlayerAbilitySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ChangedSkill");
		
		UAbility_Beast_FadeActiveDamage_C_ChangedSkill_Params params {};
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ExecuteUbergraph_Ability_Beast_FadeActiveDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_FadeActiveDamage_C::ExecuteUbergraph_Ability_Beast_FadeActiveDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ExecuteUbergraph_Ability_Beast_FadeActiveDamage");
		
		UAbility_Beast_FadeActiveDamage_C_ExecuteUbergraph_Ability_Beast_FadeActiveDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Beast_FadeActiveDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Beast_FadeActiveDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C");
		return ptr;
	}

}


