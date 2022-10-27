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
	 * 		Name   -> Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillCoolingDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_SkillActive_C::AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillCoolingDown");
		
		UAbility_AnointParent_SkillActive_C_AnointOnActionSkillCoolingDown_Params params {};
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
	 * 		Name   -> Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillActivated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_SkillActive_C::AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillActivated");
		
		UAbility_AnointParent_SkillActive_C_AnointOnActionSkillActivated_Params params {};
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
	 * 		Name   -> Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_SkillActive_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnActivated");
		
		UAbility_AnointParent_SkillActive_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointRemoveEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_SkillActive_C::AnointRemoveEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointRemoveEffect");
		
		UAbility_AnointParent_SkillActive_C_AnointRemoveEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_SkillActive_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnDeactivated");
		
		UAbility_AnointParent_SkillActive_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.ExecuteUbergraph_Ability_AnointParent_SkillActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_SkillActive_C::ExecuteUbergraph_Ability_AnointParent_SkillActive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.ExecuteUbergraph_Ability_AnointParent_SkillActive");
		
		UAbility_AnointParent_SkillActive_C_ExecuteUbergraph_Ability_AnointParent_SkillActive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_AnointParent_SkillActive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_AnointParent_SkillActive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C");
		return ptr;
	}

}


