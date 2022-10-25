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
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
	 */
	struct UCircularProgressBarSprites_C_GetCurrentPercentageToShowText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
	 */
	struct UCircularProgressBarSprites_C_GetCurrentPercentageToShow_Params
	{
	public:
		float                                                      currentPercentageToShow;                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
	 */
	struct UCircularProgressBarSprites_C_SetCurrentPercentageToShow_Params
	{
	public:
		float                                                      percentageToShow;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
	 */
	struct UCircularProgressBarSprites_C_GetPercentageText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
	 */
	struct UCircularProgressBarSprites_C_SetTextalarmColorC_Params
	{
	public:
		class UTextBlock*                                          textWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
	 */
	struct UCircularProgressBarSprites_C_SetTextColor_Params
	{
	public:
		class UTextBlock*                                          textWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
	 */
	struct UCircularProgressBarSprites_C_ActivateNormalColor_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
	 */
	struct UCircularProgressBarSprites_C_SetCircularBarColor_Params
	{
	public:
		struct FLinearColor                                        circularBarColor;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
	 */
	struct UCircularProgressBarSprites_C_GetCircularBarColor_Params
	{
	public:
		struct FLinearColor                                        circularBarColor;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
	 */
	struct UCircularProgressBarSprites_C_SetOuterCircleColor_Params
	{
	public:
		struct FLinearColor                                        OuterCircleColor;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
	 */
	struct UCircularProgressBarSprites_C_GetOuterCircleColor_Params
	{
	public:
		struct FLinearColor                                        OuterCircleColor;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
	 */
	struct UCircularProgressBarSprites_C_GetNormalColor_Params
	{
	public:
		struct FLinearColor                                        normalColor;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
	 */
	struct UCircularProgressBarSprites_C_SetNormalColor_Params
	{
	public:
		struct FLinearColor                                        normalColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
	 */
	struct UCircularProgressBarSprites_C_GetAlarmColor_Params
	{
	public:
		struct FLinearColor                                        AlarmColor;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
	 */
	struct UCircularProgressBarSprites_C_SetAlarmColor_Params
	{
	public:
		struct FLinearColor                                        AlarmColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
	 */
	struct UCircularProgressBarSprites_C_ActivateAlarmColor_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
	 */
	struct UCircularProgressBarSprites_C_UpdatePercentageArc_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
	 */
	struct UCircularProgressBarSprites_C_SetImageAlarmColor_Params
	{
	public:
		class UImage*                                              ImageWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
	 */
	struct UCircularProgressBarSprites_C_OnPercentageChanged_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
	 */
	struct UCircularProgressBarSprites_C_AlarmSwitchOn_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
	 */
	struct UCircularProgressBarSprites_C_AlarmSwitchOff_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
	 */
	struct UCircularProgressBarSprites_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
	 */
	struct UCircularProgressBarSprites_C_Construct_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
	 */
	struct UCircularProgressBarSprites_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
	 */
	struct UCircularProgressBarSprites_C_ExecuteUbergraph_CircularProgressBarSprites_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
