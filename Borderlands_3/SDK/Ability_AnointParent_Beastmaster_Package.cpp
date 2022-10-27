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
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointOnActionSkillCoolingDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointOnActionSkillCoolingDown");
		
		UAbility_AnointParent_Beastmaster_C_AnointOnActionSkillCoolingDown_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndHulkOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointEndHulkOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndHulkOut");
		
		UAbility_AnointParent_Beastmaster_C_AnointEndHulkOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndGammaBurst
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointEndGammaBurst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndGammaBurst");
		
		UAbility_AnointParent_Beastmaster_C_AnointEndGammaBurst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndFadeAway
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointEndFadeAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndFadeAway");
		
		UAbility_AnointParent_Beastmaster_C_AnointEndFadeAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedBeastmasterSkill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_BeastmasterActionSkill                        ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointUsedBeastmasterSkill(Enum_BeastmasterActionSkill ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedBeastmasterSkill");
		
		UAbility_AnointParent_Beastmaster_C_AnointUsedBeastmasterSkill_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedAttackCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetEvolutionType                  PetEvolution                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakActionAbilityPetType                           PetType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointUsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedAttackCommand");
		
		UAbility_AnointParent_Beastmaster_C_AnointUsedAttackCommand_Params params {};
		params.PetEvolution = PetEvolution;
		params.PetType = PetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_Beastmaster_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.OnActivated");
		
		UAbility_AnointParent_Beastmaster_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointBeastmasterFindLocation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_Beastmaster_C::AnointBeastmasterFindLocation(bool res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointBeastmasterFindLocation");
		
		UAbility_AnointParent_Beastmaster_C_AnointBeastmasterFindLocation_Params params {};
		params.res = res;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.BindBeastmasterEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Beastmaster_C::BindBeastmasterEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.BindBeastmasterEvents");
		
		UAbility_AnointParent_Beastmaster_C_BindBeastmasterEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.ExecuteUbergraph_Ability_AnointParent_Beastmaster
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Beastmaster_C::ExecuteUbergraph_Ability_AnointParent_Beastmaster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.ExecuteUbergraph_Ability_AnointParent_Beastmaster");
		
		UAbility_AnointParent_Beastmaster_C_ExecuteUbergraph_Ability_AnointParent_Beastmaster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_AnointParent_Beastmaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_AnointParent_Beastmaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C");
		return ptr;
	}

}


