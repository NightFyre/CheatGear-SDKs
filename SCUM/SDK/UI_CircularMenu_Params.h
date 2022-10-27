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
	 * Function UI_CircularMenu.UI_CircularMenu_C.CenterMouseToWidget
	 */
	struct UUI_CircularMenu_C_CenterMouseToWidget_Params
	{	};

	/**
	 * Function UI_CircularMenu.UI_CircularMenu_C.Construct
	 */
	struct UUI_CircularMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_CircularMenu.UI_CircularMenu_C.OnWidgetVisibilityChanged
	 */
	struct UUI_CircularMenu_C_OnWidgetVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CircularMenu.UI_CircularMenu_C.ExecuteUbergraph_UI_CircularMenu
	 */
	struct UUI_CircularMenu_C_ExecuteUbergraph_UI_CircularMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
