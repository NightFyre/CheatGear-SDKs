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
	 * BlueprintGeneratedClass Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C
	 * Size -> 0x00E1 (FullSize[0x07C1] - InheritedSize[0x06E0])
	 */
	class AProjectile_BloodyHarvest_Ghost_C : public AOakAIBalancedProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06E0(0x0008) Transient, DuplicateTransient
		class USphereComponent*                                    PawnSphere;                                              // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakMinimapIconComponent*                            OakMinimapIcon;                                          // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameplayTagContainerComponent*                      GameplayTagContainer;                                    // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_OakAttributeComponent_C*                         BP_OakAttributeComponent;                                // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakDamageComponent*                                 OakDamage;                                               // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDrunkenRandomMovementComponent*                     DrunkenRandomMovement;                                   // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    SnapZoom;                                                // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTargetableComponent*                                Targetable;                                              // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            GhostFX;                                                 // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            HauntedGroundFX;                                         // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceInstantSpawn;                                       // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_40OH[0x3];                                   // 0x0759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HomingDelay;                                             // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWasKilledByDamage;                                      // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_52HT[0x7];                                   // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageComponent*                                    SecondWindReceivers;                                     // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      SecondWindDamageCausers;                                 // 0x0770(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UParticleSystem*                                     StartSpawnFX;                                            // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     EndSpawnFX;                                              // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionData*                                      GhostExplosionData;                                      // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       NewPlayerTarget;                                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LifeTime;                                                // 0x07A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7VNK[0x4];                                   // 0x07A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               DataTableDamageScale;                                    // 0x07A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bCanDoCollisionCleanup;                                  // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TryFindNextValidTarget(class AOakCharacter* SourcePlayer, class AOakCharacter** NewTarget);
		void CauseDamageGhost();
		void TrySecondWind();
		void SpawnLoot();
		void DoStartSpawnPresentation(bool ForceInstantSpawn);
		void InitGhost();
		void DoSpawnInPresentation();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetPlayerTargets();
		void OnExplode();
		void OnHitDamagableObject(const struct FHitResult& Hit);
		void OnHitWorld(const struct FHitResult& Hit);
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
		void DoEndSpawnPresentation(bool ForceInstantSpawn);
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void CheckPerceivableByAI();
		void ExecuteUbergraph_Projectile_BloodyHarvest_Ghost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
