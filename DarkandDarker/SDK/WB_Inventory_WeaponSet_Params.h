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
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.GetSlotUnderPointerScreenPos
	 */
	struct UWB_Inventory_WeaponSet_C_GetSlotUnderPointerScreenPos_Params
	{
	public:
		struct FVector2D                                           PointerScreenPosition;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ResultSlot;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.OnMouseMove
	 */
	struct UWB_Inventory_WeaponSet_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.OnInitialized
	 */
	struct UWB_Inventory_WeaponSet_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.OnMouseEnter
	 */
	struct UWB_Inventory_WeaponSet_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.OnMouseLeave
	 */
	struct UWB_Inventory_WeaponSet_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.SetActiveHoverImage
	 */
	struct UWB_Inventory_WeaponSet_C_SetActiveHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.SetActivePrimaryHoverImage
	 */
	struct UWB_Inventory_WeaponSet_C_SetActivePrimaryHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.SetActiveSecondaryHoverImage
	 */
	struct UWB_Inventory_WeaponSet_C_SetActiveSecondaryHoverImage_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_WeaponSet.WB_Inventory_WeaponSet_C.ExecuteUbergraph_WB_Inventory_WeaponSet
	 */
	struct UWB_Inventory_WeaponSet_C_ExecuteUbergraph_WB_Inventory_WeaponSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_09LL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
