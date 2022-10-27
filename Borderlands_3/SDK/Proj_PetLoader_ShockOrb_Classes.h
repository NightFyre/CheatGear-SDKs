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
	 * BlueprintGeneratedClass Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C
	 * Size -> 0x00C1 (FullSize[0x07A1] - InheritedSize[0x06E0])
	 */
	class AProj_PetLoader_ShockOrb_C : public AOakProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06E0(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ShootMeTarget;                                           // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                OakTrigger;                                              // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakDamageComponent*                                 OakDamage;                                               // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            TracerTrailFX;                                           // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		Enum_PetLoader_ShockOrb                                    OrbState;                                                // 0x0728(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SO7E[0x7];                                   // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              PetTarget;                                               // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UTargetableComponent*                                PetTargetingComponent;                                   // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               LargeDamage;                                             // 0x0740(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               SmallDamage;                                             // 0x0758(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               LargeRadius;                                             // 0x0770(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               SmallRadius;                                             // 0x0788(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       AllowShotTrigger;                                        // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_OrbState();
		void UserConstructionScript();
		void Orb_Spawning();
		void Orb_Idle();
		void Orb_Explode();
		void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void Orb_LargeExplode();
		void OnExplode();
		void ReceiveBeginPlay();
		void ShockOrb_OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
		void SetAllowShotTrigger();
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void ExecuteUbergraph_Proj_PetLoader_ShockOrb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
