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
	 * BlueprintGeneratedClass BPChar_Pet.BPChar_Pet_C
	 * Size -> 0x0267 (FullSize[0x25E8] - InheritedSize[0x2381])
	 */
	class ABPChar_Pet_C : public ABPChar_Enemy_C
	{
	public:
		unsigned char                                              UnknownData_QE27[0x7];                                   // 0x2381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2388(0x0008) Transient, DuplicateTransient
		class UOakInventoryListComponent*                          OakInventoryList;                                        // 0x2390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x2398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                Rad_Audio;                                               // 0x23A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           FFYLReviveFX;                                            // 0x23A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeastMaster_Pet_Healing_Looping;                      // 0x23B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FFYL_ReviveFX_Off;                                       // 0x23B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FFYL_ReviveFX_On;                                        // 0x23C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeastMaster_Pet_Mod2_RadAura_Off;                     // 0x23C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeastMaster_Pet_Mod2_RadAura;                         // 0x23D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AuraOff;                                                 // 0x23D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AuraOn;                                                  // 0x23E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           HulkOutRadiationAuraSwitch;                              // 0x23E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxCustomizationComponent*                          GbxCustomization;                                        // 0x23F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPNPCFightForYourLifeComponent_C*                   BPNPCFightForYourLifeComponent;                          // 0x23F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_UsableComponent_C*                               UsableComponentPet;                                      // 0x2400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_2_A6C3A78149ABE084DCECBA9FADC6C2EB;  // 0x2408(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_A6C3A78149ABE084DCECBA9FADC6C2EB;  // 0x240C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BLP8[0x3];                                   // 0x240D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x2410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter_Player*                                Beastmaster;                                             // 0x2418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              PetSpawnActionClass;                                     // 0x2420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBeingReleased;                                        // 0x2428(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D7YN[0x7];                                   // 0x2429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPEventHub_Beastmaster_C*                           AbilityHub_Beastmaster;                                  // 0x2430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ScriptedFFYLTarget;                                      // 0x2438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AOakCharacter_Player*>                        PlayerAllies;                                            // 0x2440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		EOakActionAbilityPetEvolutionType                          EvolutionType;                                           // 0x2450(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EOakActionAbilityPetType                                   PetType;                                                 // 0x2451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y7IB[0x2];                                   // 0x2452(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  PetSkagFrenzyPlayRate;                                   // 0x2454(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UCharacterSoundTag*                                  CSTPet_Death;                                            // 0x2460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterSoundTag*                                  CSTPet_Retreat;                                          // 0x2468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Rep_ScriptedPetTarget;                                   // 0x2470(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   PlayerStatusEffectData;                                  // 0x2478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatusEffectInstanceReference                      PlayerStatusEffectRef;                                   // 0x2480(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FEnvQueryParams                                     QueryAttackCommand;                                      // 0x2498(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FHUDInWorldIconTargetInfo                           PetAttackTargetICON;                                     // 0x2550(0x0058) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGbxAttributeFloat                                  Att_AttackCommand_Damage;                                // 0x25A8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  OnRep_TrackHealingFX;                                    // 0x25B4(0x000C) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsInFFYL;                                               // 0x25C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OIJC[0x3];                                   // 0x25C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EnragedActorScale;                                       // 0x25C4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEnraged;                                              // 0x25D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_WHJD[0x3];                                   // 0x25D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreEnragedActorScale;                                    // 0x25D4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ClassModTauntFX;                                         // 0x25E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPetJabberIngenuityBarrel(class AActor** Barrel);
		void GetPetEvolutionType(EOakActionAbilityPetEvolutionType* EvolutionType);
		void GetPetType(EOakActionAbilityPetType* PetType);
		void MatchesPetProfile(class UOakPlayerCharacterAugmentData_Pet* InAugment, bool* res);
		void GetBeastmasterOwner(class AOakCharacter_Player** Beastmaster);
		void UpdateHealingFX();
		void RefreshIconDuration();
		void TogglePetTaunt_CLASSMODONLY(bool IsEnraged);
		void IncrementKillStat();
		void DoShrinkAudio();
		void OnEnrageEnd();
		void OnEnrageBegin();
		void OnRep_bIsEnraged();
		void ToggleAttackCommand_BB(bool Value);
		void RemoveAttackCommandIcon();
		void AddAttackCommandIcon();
		void ToggleAttackCommand_ScriptedTarget(bool Toggle);
		void OnRep_ScriptedPetTarget();
		void DoPetAttackCommand(class UObject* Target);
		void TryRemovePlayerStatusEffect();
		void TryAddPlayerStatusEffect();
		void SetBlackboard_Aggro(bool Toggle);
		void NotifyPetSpawn();
		void SecondWindInjuredAllies(TArray<class AOakCharacter_Player*>* Allies);
		void SetUltimateBlackboard(bool Value);
		void ComparePetKillerToAllies(class AActor* Killer, bool* AssignPetToKiller);
		void PlaySpawnActions();
		void IsOwnerInFFYL(bool* InFFYL);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnAnimEnd_448EE01D4E3F143531F722AF23144929();
		void OnEnd_448EE01D4E3F143531F722AF23144929(EGbxActionEndState EndState, class AActor* Actor);
		void PetJabbermon_Poop_Hide();
		void DoAttackCommandEQS();
		void DoAttackCommandFail();
		void DoAttackCommand(class UObject* EnemyObject);
		void OnPetTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
		void OnBeastmasterCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void PetJabbermon_Poop_Show();
		void BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet(class AController* UserController, class UPrimitiveComponent* UsedComponent);
		void BeginAttackCommand();
		void BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet();
		void PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility);
		void OnPetReleased(bool bForced, EPetReleaseReason Reason);
		void PetSpawnTrapProjectile();
		void OnAggro_PlayerPets();
		void OnDeAggro_PlayerPets(float AggroDuration);
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet();
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet();
		void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ReceiveDestroyed();
		void SetEnraged(bool bIsEnraged);
		void ReversePetEnrageScale();
		void CancelPetEnrageScale();
		void Pet_DownStateStart();
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet();
		void OnHealingFXChanged(float OldValue, float NewValue);
		void InitializePetSpawned(class AOakCharacter_Player* Beastmaster, EOakActionAbilityPetEvolutionType EvolutionType);
		void ReceiveBeginPlay();
		void PetAttackIconFinished(const struct FGameResourcePoolReference& ResourcePool);
		void PetJabbermon_BarrelDrop();
		void PetSucceededRevive();
		void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet(bool IsSuccessful);
		void PetJabbermon_BarrelThrow();
		void OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
		void OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
		void OnInventoryPickedUp(class AActor* PickedUpActor, int32_t Quantity);
		void PetJabbermon_BarrelSet(class AActor* NewBarrel);
		void PetJabbermon_BarrelAlign(class AActor* NewBarrel);
		void PetJabbermon_FireRocket();
		void Player_OnLevelUp(int32_t OldExperienceLevel, int32_t NewExperienceLevel);
		void OnDeath_FFYLScriptedTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
		void PetJabbermon_ChangeLauncherVis(bool NewVisibility);
		void Beastmaster_FFYLStop();
		void Beastmaster_FFYLStart();
		void PetJabbermon_ChangeGunVis(bool NewVisibility);
		void ExecuteUbergraph_BPChar_Pet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
