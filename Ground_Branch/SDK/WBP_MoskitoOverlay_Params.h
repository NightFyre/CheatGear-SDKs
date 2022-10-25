#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetRangeText
	 */
	struct UWBP_MoskitoOverlay_C_GetRangeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetTextColour
	 */
	struct UWBP_MoskitoOverlay_C_GetTextColour_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetNVReticleVis
	 */
	struct UWBP_MoskitoOverlay_C_GetNVReticleVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetOverlayVis
	 */
	struct UWBP_MoskitoOverlay_C_GetOverlayVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
