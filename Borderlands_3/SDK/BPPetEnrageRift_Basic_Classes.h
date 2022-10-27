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
	 * BlueprintGeneratedClass BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C
	 * Size -> 0x0012 (FullSize[0x04F0] - InheritedSize[0x04DE])
	 */
	class ABPPetEnrageRift_Basic_C : public ABPPetEnrageRift_C
	{
	public:
		unsigned char                                              UnknownData_4Y9O[0x2];                                   // 0x04DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E0(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            RiftFX;                                                  // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void NotifyPetTeleported();
		void OnPetSummonStarted();
		void ExecuteUbergraph_BPPetEnrageRift_Basic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
