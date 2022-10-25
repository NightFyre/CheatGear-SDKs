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
	 * Function UI_Item2.UI_Item2_C.GetLowerLeftBoxShowAnimation
	 */
	struct UUI_Item2_C_GetLowerLeftBoxShowAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.GetAdditionalIconFadeOutAnimation
	 */
	struct UUI_Item2_C_GetAdditionalIconFadeOutAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.GetAdditionalIconFadeInAnimation
	 */
	struct UUI_Item2_C_GetAdditionalIconFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.GetLowerLeftBoxFadeOutAnimation
	 */
	struct UUI_Item2_C_GetLowerLeftBoxFadeOutAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.GetLowerLeftBoxFadeInAnimation
	 */
	struct UUI_Item2_C_GetLowerLeftBoxFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.OnPreviewKeyDown
	 */
	struct UUI_Item2_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.UpdateVisualszzz
	 */
	struct UUI_Item2_C_UpdateVisualszzz_Params
	{	};

	/**
	 * Function UI_Item2.UI_Item2_C.Tick
	 */
	struct UUI_Item2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.Init
	 */
	struct UUI_Item2_C_Init_Params
	{
	public:
		unsigned char                                              UnknownData_W0VY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_RIUG[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       temporary;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.UpdateVisuals
	 */
	struct UUI_Item2_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_Item2.UI_Item2_C.OnMouseEnter
	 */
	struct UUI_Item2_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.OnMouseLeave
	 */
	struct UUI_Item2_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Item2.UI_Item2_C.ExecuteUbergraph_UI_Item2
	 */
	struct UUI_Item2_C_ExecuteUbergraph_UI_Item2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
