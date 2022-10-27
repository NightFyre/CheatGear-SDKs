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
	 * BlueprintGeneratedClass ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UARand_PetSkag_MeleeMix_C : public UOakAction_RandomAnim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) Transient, DuplicateTransient

	public:
		void Notify_Bite();
		void Notify_ClawRtoL();
		void Notify_ClawLtoR();
		void Notify_MeleeAttack();
		void ExecuteUbergraph_ARand_PetSkag_MeleeMix(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
