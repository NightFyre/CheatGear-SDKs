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
	 * Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.GetVisibility_1
	 */
	struct UWBP_WidgetInteractionCursor_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.OnHoveredWidgetChanged_Event_1
	 */
	struct UWBP_WidgetInteractionCursor_C_OnHoveredWidgetChanged_Event_1_Params
	{
	public:
		class UWidgetComponent*                                    WidgetComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetComponent*                                    PreviousWidgetComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.Construct
	 */
	struct UWBP_WidgetInteractionCursor_C_Construct_Params
	{	};

	/**
	 * Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.ExecuteUbergraph_WBP_WidgetInteractionCursor
	 */
	struct UWBP_WidgetInteractionCursor_C_ExecuteUbergraph_WBP_WidgetInteractionCursor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5H32[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
