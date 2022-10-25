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
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_OnCausedDamage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UBPEventHub_Siren_C::SkillEvent_OnCausedDamage__DelegateSignature(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_OnCausedDamage__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_OnCausedDamage__DelegateSignature_Params params {};
		params.Damage = Damage;
		params.DamageSource = DamageSource;
		params.DamageType = DamageType;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemyEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPEventHub_Siren_C::SkillEvent_PhaseGraspEnemyEnded__DelegateSignature(bool Killed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemyEnded__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemyEnded__DelegateSignature_Params params {};
		params.Killed = Killed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhaseTranceElementalType                          Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Siren_C::SkillEvent_PhaseGraspEnemy__DelegateSignature(class AActor* Enemy, EPhaseTranceElementalType Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemy__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemy__DelegateSignature_Params params {};
		params.Enemy = Enemy;
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Siren_C::SkillEvent_PhaseSlamEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamEnded__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_PhaseSlamEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Siren_C::SkillEvent_PhaseSlamStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamStarted__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_PhaseSlamStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.PhaseTranceOnSuccessfullyActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhaseTranceAttackFamilyType                       FamilyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhasetranceAttackAction                           PhaseTranceAction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPEventHub_Siren_C::PhaseTranceOnSuccessfullyActivated__DelegateSignature(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction PhaseTranceAction, bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.PhaseTranceOnSuccessfullyActivated__DelegateSignature");
		
		UBPEventHub_Siren_C_PhaseTranceOnSuccessfullyActivated__DelegateSignature_Params params {};
		params.FamilyType = FamilyType;
		params.PhaseTranceAction = PhaseTranceAction;
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_RushEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Siren_C::SkillEvent_RushEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_RushEvent__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_RushEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_ActivateRushBonus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RushStacks                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Siren_C::SkillEvent_ActivateRushBonus__DelegateSignature(int32_t RushStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_ActivateRushBonus__DelegateSignature");
		
		UBPEventHub_Siren_C_SkillEvent_ActivateRushBonus__DelegateSignature_Params params {};
		params.RushStacks = RushStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPEventHub_Siren_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPEventHub_Siren_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPEventHub_Siren.BPEventHub_Siren_C");
		return ptr;
	}

}


