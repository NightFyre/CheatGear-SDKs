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
	 * BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C
	 * Size -> 0x0030 (FullSize[0x0738] - InheritedSize[0x0708])
	 */
	class AProjectile_Beastmaster_TrapSpawner_C : public AOakProjectile_ActionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0708(0x0008) Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SK_AntigravTrap;                                         // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TrapIO;                                                  // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AIO_Beastmaster_AntiGravityTrap_C*                   SpawnedTrap;                                             // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetBarrierPlacementTransform(struct FTransform* res);
		void UserConstructionScript();
		void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult);
		void SpawnBarrier();
		void OnExplode();
		void OnHitWorld(const struct FHitResult& Hit);
		void OpenHitWorldGate();
		void ReceiveBeginPlay();
		void StartWobble();
		void DidTrapSpawn();
		void ReceiveDestroyed();
		void ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
