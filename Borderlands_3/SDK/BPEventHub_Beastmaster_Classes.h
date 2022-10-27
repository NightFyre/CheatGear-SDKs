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
	 * BlueprintGeneratedClass BPEventHub_Beastmaster.BPEventHub_Beastmaster_C
	 * Size -> 0x0160 (FullSize[0x01D0] - InheritedSize[0x0070])
	 */
	class UBPEventHub_Beastmaster_C : public UOakPlayerAbilityEventHub_Beastmaster
	{
	public:
		class FScriptMulticastDelegate                             RegisterPetKill;                                         // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RegisterPetDamage;                                       // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ActivePetSpawned;                                        // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ActivePetReleased;                                       // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ClassModL03_TriggerHuntKillSkill;                        // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_EnemyDominated;                              // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_HuntSkillActivated;                          // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_Rakks_KilledEnemy;                           // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_Rakks_DealtDamage;                           // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_Rakks_HealedPlayer;                          // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_FadeAway_KilledEnemy;                        // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_FadeAway_Damage;                             // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_Pet_RevivedPlayer;                           // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_Pet_UsedAttackCommand;                       // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_AttackCommandSelectedTarget;                 // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_HulkedOut_DealtDamage;                       // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_HulkedOut_BeginHealingPlayer;                // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_ActionSkillActivated;                        // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_HulkedOut_StoppedHealingPlayer;              // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_FadeAway_Ended;                              // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_HulkedOut_Ended;                             // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Beastmaster_HulkedOut_FoundValidLocation;                // 0x01C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature(bool res);
		void Beastmaster_HulkedOut_Ended__DelegateSignature();
		void Beastmaster_FadeAway_Ended__DelegateSignature();
		void Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature(class AActor* StoppedHealingTarget, const struct FVector& RiftLocation);
		void Beastmaster_ActionSkillActivated__DelegateSignature(Enum_BeastmasterActionSkill ActionSkill);
		void Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature(class AActor* PlayerHealed, const struct FVector& RiftLocation);
		void Beastmaster_HulkedOut_DealtDamage__DelegateSignature();
		void Beastmaster_AttackCommandSelectedTarget__DelegateSignature(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
		void Beastmaster_Pet_UsedAttackCommand__DelegateSignature(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
		void Beastmaster_Pet_RevivedPlayer__DelegateSignature(class AActor* RevivedBy);
		void Beastmaster_FadeAway_Damage__DelegateSignature(class AActor* DamagedEnemy);
		void Beastmaster_FadeAway_KilledEnemy__DelegateSignature(class AActor* KilledEnemy);
		void Beastmaster_Rakks_HealedPlayer__DelegateSignature();
		void Beastmaster_Rakks_DealtDamage__DelegateSignature(class AActor* DamagedEnemy);
		void Beastmaster_Rakks_KilledEnemy__DelegateSignature(class AActor* KilledEnemy);
		void Beastmaster_HuntSkillActivated__DelegateSignature();
		void Beastmaster_EnemyDominated__DelegateSignature(class AActor* NewDominated);
		void ClassModL03_TriggerHuntKillSkill__DelegateSignature(class AActor* DamagedActor);
		void ActivePetReleased__DelegateSignature();
		void ActivePetSpawned__DelegateSignature();
		void RegisterPetDamage__DelegateSignature(class AActor* DamagedActor, class UDamageSource* DamageSource);
		void RegisterPetKill__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
