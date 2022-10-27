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
	 * BlueprintGeneratedClass LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C
	 * Size -> 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Siren_Schism_Spawner_C : public UOakLightProjectileData
	{
	public:
		class UClass*                                              SchismDamageType;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImpactData*                                         SchismImpactData;                                        // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalcSchismFireTrajectory(const struct FVector& SpawnLocation, class APawn* Instigator, struct FVector* res);
		void FireSchismProjectilesAtTargets(float SchismDamage, class APawn* ProjectileOwner, const struct FVector& Location, TArray<class AActor*>* Targets);
		void ExplodeProjectile(class UOakLightProjectile* Projectile);
		void OnExplode(class ULightProjectile* Projectile);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
