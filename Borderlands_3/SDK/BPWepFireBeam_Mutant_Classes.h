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
	 * BlueprintGeneratedClass BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C
	 * Size -> 0x0008 (FullSize[0x0940] - InheritedSize[0x0938])
	 */
	class UBPWepFireBeam_Mutant_C : public UWeaponFireBeamComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0938(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPWepFireBeam_Mutant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
