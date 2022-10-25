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
	 * BlueprintGeneratedClass BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C
	 * Size -> 0x0010 (FullSize[0x2640] - InheritedSize[0x2630])
	 */
	class ABPChar_PetSpiderant_Evo2_King_C : public ABPChar_PetSpiderant_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2630(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_Beastmaster_PetSpiderant_Ambient_Acid;                // 0x2638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
