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
	 * BlueprintGeneratedClass Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C
	 * Size -> 0x0028 (FullSize[0x0760] - InheritedSize[0x0738])
	 */
	class AProjectile_Siren_PhaseTrance_Transfer_C : public AOakProjectile_PhaseTrance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0738(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            TransferParticle;                                        // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnHomingTargetDied(class AActor* Receiver, class AActor* Causer);
		void AttachToNewHomingTarget();
		void DetachFromOldHomingTarget();
		void SetNewHomingTarget(class AActor* NewTarget);
		void GetGraspDuration(float* res);
		void SetTransferParticle();
		void PlayExplosionEffect();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnExplode();
		void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer();
		void OnShutdownGracefully();
		void ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
