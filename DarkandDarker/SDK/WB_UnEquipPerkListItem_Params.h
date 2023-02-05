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
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.UnEquipPerk
	 */
	struct UWB_UnEquipPerkListItem_C_UnEquipPerk_Params
	{	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.OnDragDetected
	 */
	struct UWB_UnEquipPerkListItem_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.OnDrop
	 */
	struct UWB_UnEquipPerkListItem_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.SelectUnEquipPerk
	 */
	struct UWB_UnEquipPerkListItem_C_SelectUnEquipPerk_Params
	{	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.BP_OnEntryReleased
	 */
	struct UWB_UnEquipPerkListItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.BP_OnItemExpansionChanged
	 */
	struct UWB_UnEquipPerkListItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.BP_OnItemSelectionChanged
	 */
	struct UWB_UnEquipPerkListItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.OnListItemObjectSet
	 */
	struct UWB_UnEquipPerkListItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.OnClick
	 */
	struct UWB_UnEquipPerkListItem_C_OnClick_Params
	{	};

	/**
	 * Function WB_UnEquipPerkListItem.WB_UnEquipPerkListItem_C.ExecuteUbergraph_WB_UnEquipPerkListItem
	 */
	struct UWB_UnEquipPerkListItem_C_ExecuteUbergraph_WB_UnEquipPerkListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
