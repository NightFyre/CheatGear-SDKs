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
	 * Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct
	 */
	struct UUI_ScreenSpaceHealthWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage
	 */
	struct UUI_ScreenSpaceHealthWidget_C_SetMaxHealthPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage
	 */
	struct UUI_ScreenSpaceHealthWidget_C_SetHealthPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget
	 */
	struct UUI_ScreenSpaceHealthWidget_C_ExecuteUbergraph_UI_ScreenSpaceHealthWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJUT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
