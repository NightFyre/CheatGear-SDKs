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
	 * BlueprintGeneratedClass CommandRing_Drone.CommandRing_Drone_C
	 * Size -> 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
	 */
	class ACommandRing_Drone_C : public ACommandRing_Operative_GRMLN
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
