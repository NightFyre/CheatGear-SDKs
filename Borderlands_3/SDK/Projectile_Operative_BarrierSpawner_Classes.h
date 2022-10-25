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
	 * BlueprintGeneratedClass Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C
	 * Size -> 0x0020 (FullSize[0x0728] - InheritedSize[0x0708])
	 */
	class AProjectile_Operative_BarrierSpawner_C : public AOakProjectile_ActionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0708(0x0008) Transient, DuplicateTransient
		class UGbxSkeletalMeshComponent*                           GbxSkeletalMesh;                                         // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetBarrierPlacementTransform(struct FTransform* res);
		void UserConstructionScript();
		void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult);
		void SpawnBarrier();
		void OnExplode();
		void OnHitWorld(const struct FHitResult& Hit);
		void OpenHitWorldGate();
		void ExecuteUbergraph_Projectile_Operative_BarrierSpawner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
