#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_Projectile_RocketBase.BP_Projectile_RocketBase_C
	 * Size -> 0x0008 (FullSize[0x0558] - InheritedSize[0x0550])
	 */
	class ABP_Projectile_RocketBase_C : public AProjectileRocket
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
