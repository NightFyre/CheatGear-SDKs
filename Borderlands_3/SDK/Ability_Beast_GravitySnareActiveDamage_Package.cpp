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
	 * 		Name   -> Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Beast_GravitySnareActiveDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnActivated");
		
		UAbility_Beast_GravitySnareActiveDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Beast_GravitySnareActiveDamage_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnDeactivated");
		
		UAbility_Beast_GravitySnareActiveDamage_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_BeastmasterActionSkill                        ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_GravitySnareActiveDamage_C::GravitySnareStarted(Enum_BeastmasterActionSkill ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareStarted");
		
		UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareStarted_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_GravitySnareActiveDamage_C::GravitySnareEnded(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareEnded");
		
		UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareEnded_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ChangedSkill
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakPlayerAbilitySlotData*                   SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_GravitySnareActiveDamage_C::ChangedSkill(class UOakPlayerAbilitySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ChangedSkill");
		
		UAbility_Beast_GravitySnareActiveDamage_C_ChangedSkill_Params params {};
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Beast_GravitySnareActiveDamage_C::ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage");
		
		UAbility_Beast_GravitySnareActiveDamage_C_ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Beast_GravitySnareActiveDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Beast_GravitySnareActiveDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C");
		return ptr;
	}

}


