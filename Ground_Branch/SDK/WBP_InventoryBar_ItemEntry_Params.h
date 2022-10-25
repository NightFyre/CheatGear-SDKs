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
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.GetVisibility_1
	 */
	struct UWBP_InventoryBar_ItemEntry_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_InventoryBar_ItemEntry_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.InternalSetSelected
	 */
	struct UWBP_InventoryBar_ItemEntry_C_InternalSetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.SetInventorySlotItem
	 */
	struct UWBP_InventoryBar_ItemEntry_C_SetInventorySlotItem_Params
	{
	public:
		class AGBItem*                                             InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.OnIconLoaded
	 */
	struct UWBP_InventoryBar_ItemEntry_C_OnIconLoaded_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.EquipInventorySlotItem
	 */
	struct UWBP_InventoryBar_ItemEntry_C_EquipInventorySlotItem_Params
	{
	public:
		bool                                                       bMainhand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.SetItemText
	 */
	struct UWBP_InventoryBar_ItemEntry_C_SetItemText_Params
	{	};

	/**
	 * Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.ExecuteUbergraph_WBP_InventoryBar_ItemEntry
	 */
	struct UWBP_InventoryBar_ItemEntry_C_ExecuteUbergraph_WBP_InventoryBar_ItemEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_16HK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
