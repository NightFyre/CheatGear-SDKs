#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * AnimDataEntryStruct ADS_FrontendPiratePoses.ADS_FrontendPiratePoses
	 * Size -> 0x0010
	 */
	struct FADS_FrontendPiratePoses
	{
	public:
		TArray<struct FBP_LineUp_Animation>                        Poses_3_564E3A8A40C5BF1FA007C298A241C6B6;                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
