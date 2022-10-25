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
	 * BlueprintGeneratedClass Challenge_Salvage.Challenge_Salvage_C
	 * Size -> 0x0040 (FullSize[0x0378] - InheritedSize[0x0338])
	 */
	class UChallenge_Salvage_C : public UChallenge_Crew_C
	{
	public:
		struct FDialogTimeSlotReference                            Claptrap_GF_Dialog;                                      // 0x0338(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetClaptrapGFDialog(struct FDialogTimeSlotReference* Dialog);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
