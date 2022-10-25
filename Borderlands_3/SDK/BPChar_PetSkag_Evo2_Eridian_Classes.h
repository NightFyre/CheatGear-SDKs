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
	 * BlueprintGeneratedClass BPChar_PetSkag_Evo2_Eridian.BPChar_PetSkag_Evo2_Eridian_C
	 * Size -> 0x0008 (FullSize[0x2610] - InheritedSize[0x2608])
	 */
	class ABPChar_PetSkag_Evo2_Eridian_C : public ABPChar_PetSkag_C
	{
	public:
		class UParticleSystemComponent*                            PS_BeastMaster_PetSkag_EridianBody;                      // 0x2608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
