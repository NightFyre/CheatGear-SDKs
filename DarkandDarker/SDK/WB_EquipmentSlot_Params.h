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
	 * Function WB_EquipmentSlot.WB_EquipmentSlot_C.OnInitialized
	 */
	struct UWB_EquipmentSlot_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_EquipmentSlot.WB_EquipmentSlot_C.OnMouseEnter
	 */
	struct UWB_EquipmentSlot_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_EquipmentSlot.WB_EquipmentSlot_C.SetActiveHoverImage
	 */
	struct UWB_EquipmentSlot_C_SetActiveHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_EquipmentSlot.WB_EquipmentSlot_C.OnMouseLeave
	 */
	struct UWB_EquipmentSlot_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_EquipmentSlot.WB_EquipmentSlot_C.ExecuteUbergraph_WB_EquipmentSlot
	 */
	struct UWB_EquipmentSlot_C_ExecuteUbergraph_WB_EquipmentSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RINJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
