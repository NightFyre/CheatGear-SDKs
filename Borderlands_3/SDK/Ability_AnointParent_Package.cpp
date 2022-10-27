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
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveCDM
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::AnointRemoveCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveCDM");
		
		UAbility_AnointParent_C_AnointRemoveCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointRegisterCDM
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Register                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointRegisterCDM(bool Register, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointRegisterCDM");
		
		UAbility_AnointParent_C_AnointRegisterCDM_Params params {};
		params.Register = Register;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::AnointRemoveEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveEffect");
		
		UAbility_AnointParent_C_AnointRemoveEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointTriggerEffect");
		
		UAbility_AnointParent_C_AnointTriggerEffect_Params params {};
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
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillReadied
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointOnActionSkillReadied(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillReadied");
		
		UAbility_AnointParent_C_AnointOnActionSkillReadied_Params params {};
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
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillActivated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillActivated");
		
		UAbility_AnointParent_C_AnointOnActionSkillActivated_Params params {};
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
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillCoolingDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillCoolingDown");
		
		UAbility_AnointParent_C_AnointOnActionSkillCoolingDown_Params params {};
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
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnPlayerAbilitySlotChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakPlayerAbilitySlotData*                   SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_OnPlayerAbilitySlotChanged(class UOakPlayerAbilitySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnPlayerAbilitySlotChanged");
		
		UAbility_AnointParent_C_AnointParent_OnPlayerAbilitySlotChanged_Params params {};
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SetBinds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::AnointParent_SetBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SetBinds");
		
		UAbility_AnointParent_C_AnointParent_SetBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillCoolingDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillCoolingDown");
		
		UAbility_AnointParent_C_AnointParent_OnActionSkillCoolingDown_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillActivated");
		
		UAbility_AnointParent_C_AnointParent_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillReadied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_OnActionSkillReadied(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillReadied");
		
		UAbility_AnointParent_C_AnointParent_OnActionSkillReadied_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_BeastmasterActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_BeastmasterActionSkill                        ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_BeastmasterActionSkillActivated(Enum_BeastmasterActionSkill ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_BeastmasterActionSkillActivated");
		
		UAbility_AnointParent_C_AnointParent_BeastmasterActionSkillActivated_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OperativeActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeGadgets                                  ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_OperativeActionSkillActivated(EOperativeGadgets ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OperativeActionSkillActivated");
		
		UAbility_AnointParent_C_AnointParent_OperativeActionSkillActivated_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SirenPhaseGraspedEnemy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhaseTranceElementalType                          Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::AnointParent_SirenPhaseGraspedEnemy(class AActor* Enemy, EPhaseTranceElementalType Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SirenPhaseGraspedEnemy");
		
		UAbility_AnointParent_C_AnointParent_SirenPhaseGraspedEnemy_Params params {};
		params.Enemy = Enemy;
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_PhaseGraspEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointParent_PhaseGraspEnded(bool Killed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_PhaseGraspEnded");
		
		UAbility_AnointParent_C_AnointParent_PhaseGraspEnded_Params params {};
		params.Killed = Killed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_C::AnointParent_HulkedOutStarted(bool res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutStarted");
		
		UAbility_AnointParent_C_AnointParent_HulkedOutStarted_Params params {};
		params.res = res;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::AnointParent_HulkedOutEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutEnded");
		
		UAbility_AnointParent_C_AnointParent_HulkedOutEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.OnDeactivated");
		
		UAbility_AnointParent_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.OnActivated");
		
		UAbility_AnointParent_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.BindBeastmasterEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::BindBeastmasterEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindBeastmasterEvents");
		
		UAbility_AnointParent_C_BindBeastmasterEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.BindOperativeEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::BindOperativeEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindOperativeEvents");
		
		UAbility_AnointParent_C_BindOperativeEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.BindSirenEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::BindSirenEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindSirenEvents");
		
		UAbility_AnointParent_C_BindSirenEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.BindGunnerEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_C::BindGunnerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.BindGunnerEvents");
		
		UAbility_AnointParent_C_BindGunnerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent.Ability_AnointParent_C.ExecuteUbergraph_Ability_AnointParent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_C::ExecuteUbergraph_Ability_AnointParent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent.Ability_AnointParent_C.ExecuteUbergraph_Ability_AnointParent");
		
		UAbility_AnointParent_C_ExecuteUbergraph_Ability_AnointParent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_AnointParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_AnointParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent.Ability_AnointParent_C");
		return ptr;
	}

}


