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
	 * Function WBP_FireMode_Border.WBP_FireMode_Border_C.GetSelectedImageVis
	 */
	struct UWBP_FireMode_Border_C_GetSelectedImageVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FireMode_Border.WBP_FireMode_Border_C.GetBorderColour
	 */
	struct UWBP_FireMode_Border_C_GetBorderColour_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FireMode_Border.WBP_FireMode_Border_C.Construct
	 */
	struct UWBP_FireMode_Border_C_Construct_Params
	{	};

	/**
	 * Function WBP_FireMode_Border.WBP_FireMode_Border_C.ExecuteUbergraph_WBP_FireMode_Border
	 */
	struct UWBP_FireMode_Border_C_ExecuteUbergraph_WBP_FireMode_Border_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
