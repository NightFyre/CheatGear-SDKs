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
	 * BlueprintGeneratedClass TEDProjectile_Base.TEDProjectile_Base_C
	 * Size -> 0x0094 (FullSize[0x08CC] - InheritedSize[0x0838])
	 */
	class ATEDProjectile_Base_C : public ATedioreProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0838(0x0008) Transient, DuplicateTransient
		class UOakDialogComponent*                                 OakDialog;                                               // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         Stock_Booster;                                           // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BehaviorCurrent;                                         // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HalfHeight;                                              // 0x0858(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NH8Q[0x4];                                   // 0x085C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0860(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnGround;                                                // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Shooting;                                                // 0x0891(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZF3[0x6];                                   // 0x0892(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            FX_Stabilizer;                                           // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Homing;                                                  // 0x08A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StickY;                                                  // 0x08A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Combo;                                                   // 0x08A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AICanSteal;                                              // 0x08A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MIRV;                                                    // 0x08A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Bouncy;                                                  // 0x08A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Default;                                                 // 0x08A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VK77[0x1];                                   // 0x08A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FuseTime;                                                // 0x08A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FuseTriggered;                                           // 0x08AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanWalk;                                                 // 0x08AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_80TZ[0x2];                                   // 0x08AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         Stuck_Audio;                                             // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         MIRV_Audio;                                              // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         Fuse_Audio;                                              // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ComboFXDelay;                                            // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AIProjectileDetonate();
		void DialogueTargetSearch();
		void DialogueThrown();
		void SetExplosionRadius();
		bool AIProjectile_CanBeStolen();
		void AIProjectileArm();
		void AIProjectileDisarm();
		float CalculateExplosionDamage(float DamagePerShot, int32_t BulletsPerShot);
		void RemoveAmmo(int32_t* ThrowType);
		void SpawnRotationandOffset(const struct FVector& Location, const struct FVector& HitNormal, const struct FVector& Normal, struct FTransform* Transform);
		void InitCombo();
		void StabilizerFXandAudio();
		void StabilizerBoostBouncy();
		void StabilizerBoost();
		void InitHoming();
		void InitRotation(int32_t ThrowStyle);
		void InitStabilizer();
		void FuelOut();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void OnBehaviorInitialized(class UClass* BehaviorClass);
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void HomingThrust();
		void AIProjectile_Arm();
		void EnableDrunk();
		void AIProjectile_Disarm();
		void FuseExpired();
		void OnHitWorld(const struct FHitResult& Hit);
		void OnBeginExplode();
		void BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_TEDProjectile_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
