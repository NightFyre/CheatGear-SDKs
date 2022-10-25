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
	 * Function CustomGUIWindow.CustomGUIWindow_C.GetTitle
	 */
	struct UCustomGUIWindow_C_GetTitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CustomGUIWindow.CustomGUIWindow_C.SetTitle
	 */
	struct UCustomGUIWindow_C_SetTitle_Params
	{
	public:
		class FText                                                titleToSet;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent
	 */
	struct UCustomGUIWindow_C_AlarmOnWindowContent_Params
	{	};

	/**
	 * Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent
	 */
	struct UCustomGUIWindow_C_AlarmOffWindowContent_Params
	{	};

	/**
	 * Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow
	 */
	struct UCustomGUIWindow_C_ExecuteUbergraph_CustomGUIWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
