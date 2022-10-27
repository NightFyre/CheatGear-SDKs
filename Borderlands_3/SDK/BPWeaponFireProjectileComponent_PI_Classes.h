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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C
	 * Size -> 0x0004 (FullSize[0x095C] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectileComponent_PI_C : public UWeaponFireProjectileComponent
	{
	public:
		float                                                      BuffDuration;                                            // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void QueryBuiltStacks(unsigned char Index, int32_t* NumberOfInstances);
		void QueryActiveBonus(int32_t* NumberOfInstances);
		class UClass* GetShotLightProjectileData();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
