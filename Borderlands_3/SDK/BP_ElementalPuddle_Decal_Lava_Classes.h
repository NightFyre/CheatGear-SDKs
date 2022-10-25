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
	 * BlueprintGeneratedClass BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C
	 * Size -> 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
	 */
	class ABP_ElementalPuddle_Decal_Lava_C : public AElementalPuddle_Decal
	{
	public:
		class UParticleSystemComponent*                            PS_Incendiary_IOPuddle_Decal;                            // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
