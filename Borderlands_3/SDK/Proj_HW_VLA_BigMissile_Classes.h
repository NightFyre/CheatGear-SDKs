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
	 * BlueprintGeneratedClass Proj_HW_VLA_BigMissile.Proj_HW_VLA_BigMissile_C
	 * Size -> 0x0022 (FullSize[0x07AC] - InheritedSize[0x078A])
	 */
	class AProj_HW_VLA_BigMissile_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_OPGY[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            Trail;                                                   // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ProjectileEndLocation;                                   // 0x07A0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnExplode();
		void ExecuteUbergraph_Proj_HW_VLA_BigMissile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
