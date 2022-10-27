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
	 * BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C
	 * Size -> 0x0008 (FullSize[0x0740] - InheritedSize[0x0738])
	 */
	class AProjectile_Beastmaster_TrapSpawner_Mod3_C : public AProjectile_Beastmaster_TrapSpawner_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0738(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void DidTrapSpawn();
		void ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
