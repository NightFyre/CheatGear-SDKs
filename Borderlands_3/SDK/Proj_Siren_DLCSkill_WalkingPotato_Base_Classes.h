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
	 * BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C
	 * Size -> 0x0290 (FullSize[0x09C8] - InheritedSize[0x0738])
	 */
	class AProj_Siren_DLCSkill_WalkingPotato_Base_C : public AOakProjectile_PhaseTrance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0738(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            OrbRadius;                                               // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            OrbMain;                                                 // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            OrbSpawn;                                                // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           SwitchRadius;                                            // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           SwitchMain;                                              // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            OrbImpact;                                               // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWalkingProjectileMovementComponent*                 WalkingProjectileMovement;                               // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    MeleeTargetSocket;                                       // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                HitEnemyTrigger;                                         // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakDamageComponent*                                 OakDamage;                                               // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTargetableComponent*                                Targetable;                                              // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		EPhaseTranceElementalType                                  OrbElement;                                              // 0x07B0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		ESirenDLCProjectileState                                   OrbState;                                                // 0x07B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FRRF[0x6];                                   // 0x07B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SirenDLCProjectile_SetOrbState;                          // 0x07B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FEnvQueryParams                                     EQSFindTarget;                                           // 0x07C8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvQueryParams                                     EQSFindLocation;                                         // 0x0880(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      ReturnMaxSpeed;                                          // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SendMaxSpeed;                                            // 0x093C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DamageAreaData;                                          // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ProjectileCount;                                         // 0x0948(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HHO[0x4];                                   // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExplosionData*                                      ImpactEnemyExplosionData;                                // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImpactData*                                         ImpactEnemyImpactData;                                   // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomizeNextTarget;                                     // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ME2T[0x3];                                   // 0x0961(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentDamage;                                           // 0x0964(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               DmgScalar;                                               // 0x0968(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               DmgBonusScalar;                                          // 0x0980(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    HitCount;                                                // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YVR1[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               MaxMeleeHits;                                            // 0x09A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       SendOnSpawn;                                             // 0x09B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableMainEmitter;                                       // 0x09B9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_F4DA[0x6];                                   // 0x09BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              MyHomingTarget;                                          // 0x09C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_MyHomingTarget();
		void OnRep_EnableMainEmitter();
		void OnOrbDetaching();
		void ReachedMaxHitCount(bool* res);
		void IncreaseHitCount();
		void StopActionSkillOnMaxHits(bool* res);
		void UpdateCurrentDamage(float* res);
		void StopFistFX();
		void StartFistFX();
		void OrbDamageRadius(float* res);
		void SetImpactExplosionData(bool* res);
		void DamageScalar(float* res);
		void GetOrbAreaDamageType(class UClass** res);
		void ToggleDamageArea(bool Enable);
		void OnOrbStateDespawning();
		void OnOrbStateReturning();
		void OnOrbStateSending();
		void OnOrbStateIdle();
		void OnRep_OrbState();
		void OnRep_OrbElement();
		void UserConstructionScript();
		void SirenDLCProjectile_SetOrbState_Event(ESirenDLCProjectileState NewState);
		void RequestRecallOrb();
		void SetOrbState(ESirenDLCProjectileState NewState);
		void SetOrbMovement(class AActor* New_Homing_Target, const struct FVector& New_Homing_Location, float ReachDistance);
		void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_Potato(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void OnPhasetranceEnded(class UOakActionAbility* ActionAbility);
		void OnExplode();
		void DealExplodeDamage();
		void OnOrbStateSpawning();
		void ReceiveDestroyed();
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Base(const struct FHitResult& ImpactResult);
		void FinishedSpawningOrb();
		void RemoveSpawnEmitter();
		void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Proj_Mayhem2_ItFollows();
		void SetHomingTargetBinds(class AActor* HomingTarget);
		void HomingTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
		void RemoveHomingTargetBinds(class AActor* HomingTarget);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Base(int32_t EntryPoint);
		void SirenDLCProjectile_SetOrbState__DelegateSignature(ESirenDLCProjectileState NewState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
