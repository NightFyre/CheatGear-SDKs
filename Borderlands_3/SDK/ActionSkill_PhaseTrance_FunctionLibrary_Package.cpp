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
	 * 		Name   -> Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CanPerformPassiveGhostArmAction
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_CanPerformPassiveGhostArmAction(class AOakCharacter_Player* Player, class UObject* __WorldContext, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CanPerformPassiveGhostArmAction");
		
		UActionSkill_PhaseTrance_FunctionLibrary_C_CanPerformPassiveGhostArmAction_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.TriggerPhaseTrancePassives
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_TriggerPhaseTrancePassives(class AOakCharacter_Player* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.TriggerPhaseTrancePassives");
		
		UActionSkill_PhaseTrance_FunctionLibrary_C_TriggerPhaseTrancePassives_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.IsImmuneToPhaseLock
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      GraspTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_IsImmuneToPhaseLock(class AActor* GraspTarget, class UObject* __WorldContext, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.IsImmuneToPhaseLock");
		
		UActionSkill_PhaseTrance_FunctionLibrary_C_IsImmuneToPhaseLock_Params params {};
		params.GraspTarget = GraspTarget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CalculatePhaseTranceDamage
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        ContextSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPhaseTranceActivationComboData             ComboData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_CalculatePhaseTranceDamage(class AOakCharacter_Player* ContextSource, const struct FPhaseTranceActivationComboData& ComboData, class UObject* __WorldContext, float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CalculatePhaseTranceDamage");
		
		UActionSkill_PhaseTrance_FunctionLibrary_C_CalculatePhaseTranceDamage_Params params {};
		params.ContextSource = ContextSource;
		params.ComboData = ComboData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.GetSirenStatusEffectInfo
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCauseDamageStatusEffectOverrides           StatusEffectOverride                                       (Parm, OutParm, NoDestructor)
	 */
	void UActionSkill_PhaseTrance_FunctionLibrary_C::STATIC_GetSirenStatusEffectInfo(class UObject* __WorldContext, struct FCauseDamageStatusEffectOverrides* StatusEffectOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.GetSirenStatusEffectInfo");
		
		UActionSkill_PhaseTrance_FunctionLibrary_C_GetSirenStatusEffectInfo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusEffectOverride != nullptr)
			*StatusEffectOverride = params.StatusEffectOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_PhaseTrance_FunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_PhaseTrance_FunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C");
		return ptr;
	}

}


