#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPEventHub_Siren.BPEventHub_Siren_C
	 * Size -> 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
	 */
	class UBPEventHub_Siren_C : public UOakPlayerAbilityEventHub_Siren
	{
	public:
		class FScriptMulticastDelegate                             SkillEvent_ActivateRushBonus;                            // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_RushEvent;                                    // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PhaseTranceOnSuccessfullyActivated;                      // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_PhaseSlamStarted;                             // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_PhaseSlamEnded;                               // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_PhaseGraspEnemy;                              // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_PhaseGraspEnemyEnded;                         // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SkillEvent_OnCausedDamage;                               // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SkillEvent_OnCausedDamage__DelegateSignature(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void SkillEvent_PhaseGraspEnemyEnded__DelegateSignature(bool Killed);
		void SkillEvent_PhaseGraspEnemy__DelegateSignature(class AActor* Enemy, EPhaseTranceElementalType Element);
		void SkillEvent_PhaseSlamEnded__DelegateSignature();
		void SkillEvent_PhaseSlamStarted__DelegateSignature();
		void PhaseTranceOnSuccessfullyActivated__DelegateSignature(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction PhaseTranceAction, bool Success);
		void SkillEvent_RushEvent__DelegateSignature();
		void SkillEvent_ActivateRushBonus__DelegateSignature(int32_t RushStacks);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
