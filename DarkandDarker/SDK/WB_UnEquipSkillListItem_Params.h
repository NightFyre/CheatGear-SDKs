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
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.OnDragDetected
	 */
	struct UWB_UnEquipSkillListItem_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.SelectUnEquipSkill
	 */
	struct UWB_UnEquipSkillListItem_C_SelectUnEquipSkill_Params
	{	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.UnEquipSkill
	 */
	struct UWB_UnEquipSkillListItem_C_UnEquipSkill_Params
	{	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.OnDrop
	 */
	struct UWB_UnEquipSkillListItem_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.BP_OnEntryReleased
	 */
	struct UWB_UnEquipSkillListItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.BP_OnItemExpansionChanged
	 */
	struct UWB_UnEquipSkillListItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.BP_OnItemSelectionChanged
	 */
	struct UWB_UnEquipSkillListItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.OnListItemObjectSet
	 */
	struct UWB_UnEquipSkillListItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.OnClick
	 */
	struct UWB_UnEquipSkillListItem_C_OnClick_Params
	{	};

	/**
	 * Function WB_UnEquipSkillListItem.WB_UnEquipSkillListItem_C.ExecuteUbergraph_WB_UnEquipSkillListItem
	 */
	struct UWB_UnEquipSkillListItem_C_ExecuteUbergraph_WB_UnEquipSkillListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
