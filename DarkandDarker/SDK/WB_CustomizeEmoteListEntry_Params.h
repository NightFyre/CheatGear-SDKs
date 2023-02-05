#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Get_Overlay_EmoteSlot_ToolTipWidget
	 */
	struct UWB_CustomizeEmoteListEntry_C_Get_Overlay_EmoteSlot_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Get_Image_Hover_Visibility
	 */
	struct UWB_CustomizeEmoteListEntry_C_Get_Image_Hover_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Construct
	 */
	struct UWB_CustomizeEmoteListEntry_C_Construct_Params
	{	};

	/**
	 * Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.ExecuteUbergraph_WB_CustomizeEmoteListEntry
	 */
	struct UWB_CustomizeEmoteListEntry_C_ExecuteUbergraph_WB_CustomizeEmoteListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZO4L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
