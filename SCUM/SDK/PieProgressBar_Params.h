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
	 * Function PieProgressBar.PieProgressBar_C.HidePieImages
	 */
	struct UPieProgressBar_C_HidePieImages_Params
	{	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.GetPercentageText
	 */
	struct UPieProgressBar_C_GetPercentageText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.SetImageColor
	 */
	struct UPieProgressBar_C_SetImageColor_Params
	{
	public:
		class UImage*                                              Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.SetTextColor
	 */
	struct UPieProgressBar_C_SetTextColor_Params
	{
	public:
		class UTextBlock*                                          textWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.SetCircularBarColor
	 */
	struct UPieProgressBar_C_SetCircularBarColor_Params
	{
	public:
		struct FLinearColor                                        circularBarColor;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.GetCircularBarColor
	 */
	struct UPieProgressBar_C_GetCircularBarColor_Params
	{
	public:
		struct FLinearColor                                        circularBarColor;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor
	 */
	struct UPieProgressBar_C_SetOuterCircleColor_Params
	{
	public:
		struct FLinearColor                                        OuterCircleColor;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor
	 */
	struct UPieProgressBar_C_GetOuterCircleColor_Params
	{
	public:
		struct FLinearColor                                        OuterCircleColor;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.GetNormalColor
	 */
	struct UPieProgressBar_C_GetNormalColor_Params
	{
	public:
		struct FLinearColor                                        normalColor;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.SetNormalColor
	 */
	struct UPieProgressBar_C_SetNormalColor_Params
	{
	public:
		struct FLinearColor                                        normalColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc
	 */
	struct UPieProgressBar_C_UpdatePercentageArc_Params
	{	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.OnPercentageChanged
	 */
	struct UPieProgressBar_C_OnPercentageChanged_Params
	{	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.Tick
	 */
	struct UPieProgressBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.Construct
	 */
	struct UPieProgressBar_C_Construct_Params
	{	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties
	 */
	struct UPieProgressBar_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar
	 */
	struct UPieProgressBar_C_ExecuteUbergraph_PieProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
