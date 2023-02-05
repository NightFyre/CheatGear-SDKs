#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Overlay Visibility on Dragging
	 */
	struct Uv2_WB_EquipmentSlot_C_GetOverlayVisibilityonDragging_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Frame Image Visibility
	 */
	struct Uv2_WB_EquipmentSlot_C_GetFrameImageVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Item Image Opacity
	 */
	struct Uv2_WB_EquipmentSlot_C_GetItemImageOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Drop Preview Image Opacity
	 */
	struct Uv2_WB_EquipmentSlot_C_GetDropPreviewImageOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Drop Preview Color and Opacity
	 */
	struct Uv2_WB_EquipmentSlot_C_GetDropPreviewColorandOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Gauge Visibility
	 */
	struct Uv2_WB_EquipmentSlot_C_GetGaugeVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_72O6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Gauge Percent
	 */
	struct Uv2_WB_EquipmentSlot_C_GetGaugePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Count Text
	 */
	struct Uv2_WB_EquipmentSlot_C_GetCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Count Visibility
	 */
	struct Uv2_WB_EquipmentSlot_C_GetCountVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
