#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_HighlightsNotification.BP_HighlightsNotification_C.SetHighlightType
	 */
	struct UBP_HighlightsNotification_C_SetHighlightType_Params
	{
	public:
		EnumHighlightsType                                         InHighlightType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HighlightsNotification.BP_HighlightsNotification_C.Construct
	 */
	struct UBP_HighlightsNotification_C_Construct_Params
	{	};

	/**
	 * Function BP_HighlightsNotification.BP_HighlightsNotification_C.ExecuteUbergraph_BP_HighlightsNotification
	 */
	struct UBP_HighlightsNotification_C_ExecuteUbergraph_BP_HighlightsNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JA4S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
