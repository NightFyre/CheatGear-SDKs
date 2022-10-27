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
	 * BlueprintGeneratedClass StandIn_Beastmaster_Spiderant_Evo1.StandIn_Beastmaster_Spiderant_Evo1_C
	 * Size -> 0x0008 (FullSize[0x0590] - InheritedSize[0x0588])
	 */
	class AStandIn_Beastmaster_Spiderant_Evo1_C : public AStandIn_Beastmaster_Spiderant_C
	{
	public:
		class UParticleSystemComponent*                            AmbientFire;                                             // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
