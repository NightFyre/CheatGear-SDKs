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
	 * BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C
	 * Size -> 0x0008 (FullSize[0x07C8] - InheritedSize[0x07C0])
	 */
	class AProjectile_Siren_Phasecast_Revised_Bomb_C : public AProjectile_Siren_Phasecast_Revised_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void OnHitWorld(const struct FHitResult& Hit);
		void OnHitEnemy(const struct FHitResult& Hit);
		void OnExplode();
		void OnOverlappedEnemy(const struct FHitResult& HitResult);
		void OnOverlappedNeutral(const struct FHitResult& HitResult);
		void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
