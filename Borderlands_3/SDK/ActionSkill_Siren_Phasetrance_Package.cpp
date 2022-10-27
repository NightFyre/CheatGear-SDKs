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
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetDLCSkillOrb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::GetDLCSkillOrb(class AProj_Siren_DLCSkill_WalkingPotato_Base_C** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetDLCSkillOrb");
		
		UActionSkill_Siren_Phasetrance_C_GetDLCSkillOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RegisterDLCSkillOrb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   Orb                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::RegisterDLCSkillOrb(class AProj_Siren_DLCSkill_WalkingPotato_Base_C* Orb, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RegisterDLCSkillOrb");
		
		UActionSkill_Siren_Phasetrance_C_RegisterDLCSkillOrb_Params params {};
		params.Orb = Orb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Quicken
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::DoEffect_Quicken(const struct FOakPhaseTranceEffectSpec& Spec, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Quicken");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_Quicken_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UActionSkill_Siren_Phasetrance_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CalculateAbilityState");
		
		UActionSkill_Siren_Phasetrance_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetSingularityRadius
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPhaseTranceActivationComboData             ComboData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::GetSingularityRadius(const struct FPhaseTranceActivationComboData& ComboData, float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetSingularityRadius");
		
		UActionSkill_Siren_Phasetrance_C_GetSingularityRadius_Params params {};
		params.ComboData = ComboData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetEssenceDurationAdjust
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::GetEssenceDurationAdjust(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetEssenceDurationAdjust");
		
		UActionSkill_Siren_Phasetrance_C_GetEssenceDurationAdjust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.TryFindNewEssenceGraspTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LastGraspTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::TryFindNewEssenceGraspTarget(class AActor* LastGraspTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.TryFindNewEssenceGraspTarget");
		
		UActionSkill_Siren_Phasetrance_C_TryFindNewEssenceGraspTarget_Params params {};
		params.LastGraspTarget = LastGraspTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnWebGraspMissed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::OnWebGraspMissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnWebGraspMissed");
		
		UActionSkill_Siren_Phasetrance_C_OnWebGraspMissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnKilledGraspedEnemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::OnKilledGraspedEnemy(class AActor* Killer, class AGbxCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnKilledGraspedEnemy");
		
		UActionSkill_Siren_Phasetrance_C_OnKilledGraspedEnemy_Params params {};
		params.Killer = Killer;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.AdjustLeechDamage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              StartingDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FinalDamage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::AdjustLeechDamage(float StartingDamage, float* FinalDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.AdjustLeechDamage");
		
		UActionSkill_Siren_Phasetrance_C_AdjustLeechDamage_Params params {};
		params.StartingDamage = StartingDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinalDamage != nullptr)
			*FinalDamage = params.FinalDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindLeechTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::FindLeechTarget(class AActor** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindLeechTarget");
		
		UActionSkill_Siren_Phasetrance_C_FindLeechTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetLeechTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::GetLeechTarget(class AActor** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetLeechTarget");
		
		UActionSkill_Siren_Phasetrance_C_GetLeechTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_SoulSap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::DoEffect_SoulSap(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_SoulSap");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_SoulSap_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Allure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::DoEffect_Allure(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Allure");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_Allure_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_StillnessOfMind
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::DoEffect_StillnessOfMind(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_StillnessOfMind");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_StillnessOfMind_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_BrightStar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::DoEffect_BrightStar(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_BrightStar");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_BrightStar_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Glamour
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::DoEffect_Glamour(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Glamour");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_Glamour_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FOakPhaseTranceEffectSpec                   Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool UActionSkill_Siren_Phasetrance_C::DoEffect(const struct FOakPhaseTranceEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect");
		
		UActionSkill_Siren_Phasetrance_C_DoEffect_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CreateAttackActionRegisters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FGbxActionRegister>                  res                                                        (Parm, OutParm, ZeroConstructor)
	 */
	void UActionSkill_Siren_Phasetrance_C::CreateAttackActionRegisters(TArray<struct FGbxActionRegister>* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CreateAttackActionRegisters");
		
		UActionSkill_Siren_Phasetrance_C_CreateAttackActionRegisters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ShouldAbortActivation
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		unsigned char                                      OutAbortCode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_Siren_Phasetrance_C::ShouldAbortActivation(unsigned char* OutAbortCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ShouldAbortActivation");
		
		UActionSkill_Siren_Phasetrance_C_ShouldAbortActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAbortCode != nullptr)
			*OutAbortCode = params.OutAbortCode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetActionSkillWidgetKeyframe
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UActionSkill_Siren_Phasetrance_C::GetActionSkillWidgetKeyframe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetActionSkillWidgetKeyframe");
		
		UActionSkill_Siren_Phasetrance_C_GetActionSkillWidgetKeyframe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ResetCounters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::ResetCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ResetCounters");
		
		UActionSkill_Siren_Phasetrance_C_ResetCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetMaxCooldownModifier
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		EGbxAttributeModifierType                          ModifierType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_Siren_Phasetrance_C::GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetMaxCooldownModifier");
		
		UActionSkill_Siren_Phasetrance_C_GetMaxCooldownModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifierType != nullptr)
			*ModifierType = params.ModifierType;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindSpreadTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::FindSpreadTarget(class AActor** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindSpreadTarget");
		
		UActionSkill_Siren_Phasetrance_C_FindSpreadTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.StartAttack
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::StartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.StartAttack");
		
		UActionSkill_Siren_Phasetrance_C_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Calculate Leech Heal Amount
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Don_t_Adjust                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UActionSkill_Siren_Phasetrance_C::Calculate_Leech_Heal_Amount(float Damage, bool Don_t_Adjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Calculate Leech Heal Amount");
		
		UActionSkill_Siren_Phasetrance_C_Calculate_Leech_Heal_Amount_Params params {};
		params.Damage = Damage;
		params.Don_t_Adjust = Don_t_Adjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetCooldownRestartPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UActionSkill_Siren_Phasetrance_C::GetCooldownRestartPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetCooldownRestartPercent");
		
		UActionSkill_Siren_Phasetrance_C_GetCooldownRestartPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnStartActionAbility");
		
		UActionSkill_Siren_Phasetrance_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnActivated");
		
		UActionSkill_Siren_Phasetrance_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RecallOrb
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::RecallOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RecallOrb");
		
		UActionSkill_Siren_Phasetrance_C_RecallOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ExecuteUbergraph_ActionSkill_Siren_Phasetrance
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Siren_Phasetrance_C::ExecuteUbergraph_ActionSkill_Siren_Phasetrance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ExecuteUbergraph_ActionSkill_Siren_Phasetrance");
		
		UActionSkill_Siren_Phasetrance_C_ExecuteUbergraph_ActionSkill_Siren_Phasetrance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Phasetrance_RecallOrb__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Siren_Phasetrance_C::Phasetrance_RecallOrb__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Phasetrance_RecallOrb__DelegateSignature");
		
		UActionSkill_Siren_Phasetrance_C_Phasetrance_RecallOrb__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_Siren_Phasetrance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_Siren_Phasetrance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C");
		return ptr;
	}

}


