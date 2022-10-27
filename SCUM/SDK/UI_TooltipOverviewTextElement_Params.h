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
	 * Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnTextDataChanged
	 */
	struct UUI_TooltipOverviewTextElement_C_OnTextDataChanged_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.PreConstruct
	 */
	struct UUI_TooltipOverviewTextElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnNumberDataChanged
	 */
	struct UUI_TooltipOverviewTextElement_C_OnNumberDataChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.ExecuteUbergraph_UI_TooltipOverviewTextElement
	 */
	struct UUI_TooltipOverviewTextElement_C_ExecuteUbergraph_UI_TooltipOverviewTextElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DE6R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
