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
	 * Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility
	 */
	struct UUI_ItemStatusWidget_C_UpdateVisibility_Params
	{	};

	/**
	 * Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct
	 */
	struct UUI_ItemStatusWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText
	 */
	struct UUI_ItemStatusWidget_C_SetNameText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget
	 */
	struct UUI_ItemStatusWidget_C_ExecuteUbergraph_UI_ItemStatusWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ORC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
