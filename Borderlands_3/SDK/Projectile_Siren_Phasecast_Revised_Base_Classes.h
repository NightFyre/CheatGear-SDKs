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
	 * BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C
	 * Size -> 0x0088 (FullSize[0x07C0] - InheritedSize[0x0738])
	 */
	class AProjectile_Siren_Phasecast_Revised_Base_C : public AOakProjectile_PhaseTrance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0738(0x0008) Transient, DuplicateTransient
		class USphereComponent*                                    OverlapCollision;                                        // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    WorldCollision;                                          // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxProjectileMovementComponent*                     GbxProjectileMovement;                                   // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BodyMesh;                                                // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HeadMesh;                                                // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GhostArms;                                               // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               LifeSpan;                                                // 0x0770(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bDoEnemyHitImpactEffect;                                 // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVU6[0x7];                                   // 0x0789(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExplosionData*                                      ShockExplosionData;                                      // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionData*                                      CorrosiveExplosionData;                                  // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionData*                                      IncendiaryExplosionData;                                 // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CastDamageData;                                          // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              WorldDamageData;                                         // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionData*                                      CryoExplosionData;                                       // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryToAllure();
		void HandleWorldHit(struct FHitResult* HitResult);
		void DoDamageToWorld(const struct FVector& Location);
		class UPrimitiveComponent* GetOverlapComponent();
		void GetTargetedHitDirectionForDamage(class AActor* Enemy, struct FVector* res);
		void CalculateDamage(float* res);
		void DoDamageToEnemy(class AActor* Enemy);
		void HandleEnemyHit(struct FHitResult* HitResult);
		void GetImpactEffect(class UImpactData** res);
		void PlayImpactEffect(struct FHitResult* InHitInfo);
		void ConfigureSkeletalMesh();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnHitWorld(const struct FHitResult& Hit);
		void OnHitEnemy(const struct FHitResult& Hit);
		void OnOverlappedEnemy(const struct FHitResult& HitResult);
		void OnOverlappedNeutral(const struct FHitResult& HitResult);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
