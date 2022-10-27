#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct
	 */
	struct UUI_TooltipOverviewElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged
	 */
	struct UUI_TooltipOverviewElement_C_OnNumberDataChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged
	 */
	struct UUI_TooltipOverviewElement_C_OnTextDataChanged_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement
	 */
	struct UUI_TooltipOverviewElement_C_ExecuteUbergraph_UI_TooltipOverviewElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HATV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
