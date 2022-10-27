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
	 * BlueprintGeneratedClass ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C
	 * Size -> 0x0008 (FullSize[0x0148] - InheritedSize[0x0140])
	 */
	class UACharge_PetSkag_Charge_C : public UGbxAction_AICharge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0140(0x0008) Transient, DuplicateTransient

	public:
		void Notify_Melee();
		void ExecuteUbergraph_ACharge_PetSkag_Charge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
