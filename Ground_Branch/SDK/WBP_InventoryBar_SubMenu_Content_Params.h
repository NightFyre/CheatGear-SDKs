#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.AddItemEntry
	 */
	struct UWBP_InventoryBar_SubMenu_Content_C_AddItemEntry_Params
	{
	public:
		class UUserWidget*                                         Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.Cycle
	 */
	struct UWBP_InventoryBar_SubMenu_Content_C_Cycle_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRestricted;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.SelectIndex
	 */
	struct UWBP_InventoryBar_SubMenu_Content_C_SelectIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.EquipSelectedItem
	 */
	struct UWBP_InventoryBar_SubMenu_Content_C_EquipSelectedItem_Params
	{
	public:
		bool                                                       bMainhand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.ExecuteUbergraph_WBP_InventoryBar_SubMenu_Content
	 */
	struct UWBP_InventoryBar_SubMenu_Content_C_ExecuteUbergraph_WBP_InventoryBar_SubMenu_Content_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_SubMenu_Content.WBP_InventoryBar_SubMenu_Content_C.OnCycleCat__DelegateSignature
	 */
	struct UWBP_InventoryBar_SubMenu_Content_C_OnCycleCat__DelegateSignature_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
