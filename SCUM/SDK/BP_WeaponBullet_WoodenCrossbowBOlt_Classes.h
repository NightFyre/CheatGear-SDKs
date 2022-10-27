#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_WeaponBullet_WoodenCrossbowBOlt.BP_WeaponBullet_WoodenCrossbowBolt_C
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class ABP_WeaponBullet_WoodenCrossbowBolt_C : public AProjectileArrow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_WeaponBullet_WoodenCrossbowBolt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
