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
	 * BlueprintGeneratedClass Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C
	 * Size -> 0x0131 (FullSize[0x0811] - InheritedSize[0x06E0])
	 */
	class AProjectile_RakkAttack_Rakk_CM_Raid1_C : public AOakProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06E0(0x0008) Transient, DuplicateTransient
		class UGbxActionComponent*                                 GbxAction;                                               // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                OakTrigger;                                              // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio1;                                             // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere2;                                                 // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere1;                                                 // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              HomingTarget;                                            // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FEnvQueryParams                                     EQSSearch;                                               // 0x0738(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FDataTableValueHandle                               DamageScalar;                                            // 0x07F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UOakActionAbility_RakkAttack*                        RakkAttackActionSkill;                                   // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IceRakk;                                                 // 0x0810(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_IceRakk();
		void ConfigureFX();
		void DoRakkDamage();
		void SetRakkHomingTarget();
		void UserConstructionScript();
		void StartHoming();
		void HomingTarget_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser);
		void OnHitDamagableObject(const struct FHitResult& Hit);
		void OnHitEnemy(const struct FHitResult& Hit);
		void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void ReceiveBeginPlay();
		void OnExplode();
		void ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
