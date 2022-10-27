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
	 * Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation
	 */
	struct UUI_DialogueContainerWidget_C_GetHideAvatarAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation
	 */
	struct UUI_DialogueContainerWidget_C_GetShowAvatarAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
	 */
	struct UUI_DialogueContainerWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
	 */
	struct UUI_DialogueContainerWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
	 */
	struct UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
