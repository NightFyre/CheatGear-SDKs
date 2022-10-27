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
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature(bool res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature_Params params {};
		params.res = res;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_Ended__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_Ended__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_Ended__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_Ended__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Ended__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_FadeAway_Ended__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Ended__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Ended__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      StoppedHealingTarget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RiftLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature(class AActor* StoppedHealingTarget, const struct FVector& RiftLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature_Params params {};
		params.StoppedHealingTarget = StoppedHealingTarget;
		params.RiftLocation = RiftLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_ActionSkillActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_BeastmasterActionSkill                        ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_ActionSkillActivated__DelegateSignature(Enum_BeastmasterActionSkill ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_ActionSkillActivated__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_ActionSkillActivated__DelegateSignature_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PlayerHealed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RiftLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature(class AActor* PlayerHealed, const struct FVector& RiftLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature_Params params {};
		params.PlayerHealed = PlayerHealed;
		params.RiftLocation = RiftLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_DealtDamage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_DealtDamage__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_DealtDamage__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_DealtDamage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_AttackCommandSelectedTarget__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetEvolutionType                  PetEvolution                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakActionAbilityPetType                           PetType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_AttackCommandSelectedTarget__DelegateSignature(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_AttackCommandSelectedTarget__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_AttackCommandSelectedTarget__DelegateSignature_Params params {};
		params.PetEvolution = PetEvolution;
		params.PetType = PetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_UsedAttackCommand__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetEvolutionType                  PetEvolution                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakActionAbilityPetType                           PetType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_Pet_UsedAttackCommand__DelegateSignature(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_UsedAttackCommand__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_Pet_UsedAttackCommand__DelegateSignature_Params params {};
		params.PetEvolution = PetEvolution;
		params.PetType = PetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_RevivedPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RevivedBy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_Pet_RevivedPlayer__DelegateSignature(class AActor* RevivedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_RevivedPlayer__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_Pet_RevivedPlayer__DelegateSignature_Params params {};
		params.RevivedBy = RevivedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Damage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedEnemy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_FadeAway_Damage__DelegateSignature(class AActor* DamagedEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Damage__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Damage__DelegateSignature_Params params {};
		params.DamagedEnemy = DamagedEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_KilledEnemy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      KilledEnemy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_FadeAway_KilledEnemy__DelegateSignature(class AActor* KilledEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_KilledEnemy__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_KilledEnemy__DelegateSignature_Params params {};
		params.KilledEnemy = KilledEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_HealedPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_Rakks_HealedPlayer__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_HealedPlayer__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_Rakks_HealedPlayer__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_DealtDamage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedEnemy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_Rakks_DealtDamage__DelegateSignature(class AActor* DamagedEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_DealtDamage__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_Rakks_DealtDamage__DelegateSignature_Params params {};
		params.DamagedEnemy = DamagedEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_KilledEnemy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      KilledEnemy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_Rakks_KilledEnemy__DelegateSignature(class AActor* KilledEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_KilledEnemy__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_Rakks_KilledEnemy__DelegateSignature_Params params {};
		params.KilledEnemy = KilledEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HuntSkillActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_HuntSkillActivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HuntSkillActivated__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_HuntSkillActivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_EnemyDominated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewDominated                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::Beastmaster_EnemyDominated__DelegateSignature(class AActor* NewDominated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_EnemyDominated__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_Beastmaster_EnemyDominated__DelegateSignature_Params params {};
		params.NewDominated = NewDominated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ClassModL03_TriggerHuntKillSkill__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::ClassModL03_TriggerHuntKillSkill__DelegateSignature(class AActor* DamagedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ClassModL03_TriggerHuntKillSkill__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_ClassModL03_TriggerHuntKillSkill__DelegateSignature_Params params {};
		params.DamagedActor = DamagedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetReleased__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::ActivePetReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetReleased__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_ActivePetReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetSpawned__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::ActivePetSpawned__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetSpawned__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_ActivePetSpawned__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetDamage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Beastmaster_C::RegisterPetDamage__DelegateSignature(class AActor* DamagedActor, class UDamageSource* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetDamage__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_RegisterPetDamage__DelegateSignature_Params params {};
		params.DamagedActor = DamagedActor;
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetKill__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Beastmaster_C::RegisterPetKill__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetKill__DelegateSignature");
		
		UBPEventHub_Beastmaster_C_RegisterPetKill__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPEventHub_Beastmaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPEventHub_Beastmaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPEventHub_Beastmaster.BPEventHub_Beastmaster_C");
		return ptr;
	}

}


