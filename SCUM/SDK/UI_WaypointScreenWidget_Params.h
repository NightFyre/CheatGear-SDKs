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
	 * Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen
	 */
	struct UUI_WaypointScreenWidget_C_AddWaypointWidgetToScreen_Params
	{
	public:
		class UWaypointWidget*                                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen
	 */
	struct UUI_WaypointScreenWidget_C_RemoveWaypointWidgetFromScreen_Params
	{
	public:
		class UWaypointWidget*                                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget
	 */
	struct UUI_WaypointScreenWidget_C_ExecuteUbergraph_UI_WaypointScreenWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1JRM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
