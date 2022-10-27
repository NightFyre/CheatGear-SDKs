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
	 * BlueprintGeneratedClass Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C
	 * Size -> 0x00BC (FullSize[0x07E4] - InheritedSize[0x0728])
	 */
	class AProjectile_RakkAttack_Rakk_C : public AOakProjectile_RakkAttack_Rakk
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0728(0x0008) Transient, DuplicateTransient
		class USphereComponent*                                    DMGCollision;                                            // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                DamageTrigger;                                           // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           FX_RakkTransfusionReturn;                                // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                Transfusion_Audio;                                       // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeastMaster_Rakk_Healing_Return;                      // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDrunkenRandomMovementComponent*                     DrunkenRandomMovement;                                   // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeastMaster_Rakk_Healing;                             // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           FX_RakkTransfusion;                                      // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Passive_FX;                                              // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Rakk;                                                 // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HitEnemy;                                                // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReturningToOwner;                                       // 0x07B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_AOOD[0x6];                                   // 0x07B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ReturnPortalFX;                                          // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CoordinatedEffect_Out;                                   // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CoordinatedEffect_In;                                    // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFindingTargets;                                       // 0x07D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasHadInitialTarget;                                    // 0x07D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWasJustSpawned;                                         // 0x07D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7A71[0x5];                                   // 0x07D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPEventHub_Beastmaster_C*                           OwnerEventHub;                                           // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetDelay;                                             // 0x07E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetHitTarget(class AActor* SourceActor);
		void SetHomingAndLocationWithDelay(class AActor* NewTarget);
		void ChooseTargetFromSet(TArray<class AActor*>* SetRef, class AActor** res);
		void FindNewTarget();
		void ReleaseCurrentHomingTarget();
		void OnRep_bReturningToOwner();
		void DoMod1Heal();
		void HasHomingTarget(bool* bRes);
		void SetupRakkElement();
		void SetupElementalMaterials(class UMaterialInstance* Material, class UParticleSystem* PassiveParticle);
		void DoPreDestroyCleanup();
		void SetupMod1Transfusion();
		void InitAudio();
		void SetHomingAndLocation(class AActor* NewTarget);
		void DoRakkDamage();
		void UserConstructionScript();
		void OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4();
		void OnEnd_A3A042B947729CE01D4C998DA75FCBF4(EGbxActionEndState EndState, class AActor* Actor);
		void OnAnimEnd_D54427794086CD24870288B0EF46744B();
		void OnEnd_D54427794086CD24870288B0EF46744B(EGbxActionEndState EndState, class AActor* Actor);
		void ReceiveBeginPlay();
		void OnHitDamagableObject(const struct FHitResult& Hit);
		void OnHitWorld(const struct FHitResult& Hit);
		void OnExplode();
		void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1();
		void DoRakkDestroyCleanup(bool WantsNiceCleanup);
		void SetupRuntimeMods();
		void DoRakkDigistructIn();
		void SetNewHomingTarget(class AActor* NewHomingTarget);
		void OnDeath_ProjectileHomingTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
		void StartNewTargetSearch();
		void ReturnToOwner();
		void SetNewHomingTargetWithDelay(float Delay, class AActor* NewHomingTarget);
		void BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void ExecuteUbergraph_Projectile_RakkAttack_Rakk(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
