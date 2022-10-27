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
	 * BlueprintGeneratedClass ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UANav_PetJabbermon_Leap_C : public UGbxAction_NavJump
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) Transient, DuplicateTransient

	public:
		void Notify_Landed_Pet();
		void ExecuteUbergraph_ANav_PetJabbermon_Leap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
