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
	 * Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.Get_Overlay_EmoteSlot_ToolTipWidget
	 */
	struct UWB_CustomizeEmoteRadialSlot_C_Get_Overlay_EmoteSlot_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.Construct
	 */
	struct UWB_CustomizeEmoteRadialSlot_C_Construct_Params
	{	};

	/**
	 * Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.SetEmoteIconImageAngle
	 */
	struct UWB_CustomizeEmoteRadialSlot_C_SetEmoteIconImageAngle_Params
	{
	public:
		float                                                      NewAngle;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.OnEmoteNameChanged
	 */
	struct UWB_CustomizeEmoteRadialSlot_C_OnEmoteNameChanged_Params
	{
	public:
		class FText                                                NewEmoteName;                                            // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.ExecuteUbergraph_WB_CustomizeEmoteRadialSlot
	 */
	struct UWB_CustomizeEmoteRadialSlot_C_ExecuteUbergraph_WB_CustomizeEmoteRadialSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
