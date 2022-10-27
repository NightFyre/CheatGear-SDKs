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
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Label_Text
	 */
	struct UUI_WorldCraftingMarker_C_Get_Label_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Accent_Brush
	 */
	struct UUI_WorldCraftingMarker_C_Get_Accent_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Color
	 */
	struct UUI_WorldCraftingMarker_C_Get_Emphasis_Color_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Visibility
	 */
	struct UUI_WorldCraftingMarker_C_Get_Emphasis_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Visibility
	 */
	struct UUI_WorldCraftingMarker_C_Get_Bar_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Distance_Text
	 */
	struct UUI_WorldCraftingMarker_C_Get_Distance_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Brush
	 */
	struct UUI_WorldCraftingMarker_C_Get_Bar_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_BigPointer_Visibility
	 */
	struct UUI_WorldCraftingMarker_C_Get_BigPointer_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_SmallPointer_Visibility
	 */
	struct UUI_WorldCraftingMarker_C_Get_SmallPointer_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Icon_Brush
	 */
	struct UUI_WorldCraftingMarker_C_Get_Icon_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Tick
	 */
	struct UUI_WorldCraftingMarker_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ChangeMode
	 */
	struct UUI_WorldCraftingMarker_C_ChangeMode_Params
	{
	public:
		ECraftingMarkerMode                                        mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ExecuteUbergraph_UI_WorldCraftingMarker
	 */
	struct UUI_WorldCraftingMarker_C_ExecuteUbergraph_UI_WorldCraftingMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
