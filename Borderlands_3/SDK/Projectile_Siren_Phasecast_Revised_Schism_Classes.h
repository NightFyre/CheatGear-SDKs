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
	 * BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C
	 * Size -> 0x0008 (FullSize[0x07C8] - InheritedSize[0x07C0])
	 */
	class AProjectile_Siren_Phasecast_Revised_Schism_C : public AProjectile_Siren_Phasecast_Revised_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) Transient, DuplicateTransient

	public:
		void GetSchismDamage(float* res);
		void GetSchismProjectileClass(class UClass** res);
		void FireSchismProjectile(class AActor* EnemyTarget);
		void UserConstructionScript();
		void DoDamageToEnemy(class AActor* Enemy);
		void TrySchism(class AActor* Enemy);
		void ResetSchism();
		void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
