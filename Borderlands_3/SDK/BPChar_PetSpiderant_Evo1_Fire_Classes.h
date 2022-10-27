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
	 * BlueprintGeneratedClass BPChar_PetSpiderant_Evo1_Fire.BPChar_PetSpiderant_Evo1_Fire_C
	 * Size -> 0x0018 (FullSize[0x2648] - InheritedSize[0x2630])
	 */
	class ABPChar_PetSpiderant_Evo1_Fire_C : public ABPChar_PetSpiderant_C
	{
	public:
		class UWwiseAudioComponent*                                Fire_Audio;                                              // 0x2630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyMainComponent*                                 FoleyMain_1;                                             // 0x2638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Ambient_Fire;                                         // 0x2640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
