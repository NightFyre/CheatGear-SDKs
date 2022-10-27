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
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.GetVisibility_1
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.InternalSetSelected
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_InternalSetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.SetInventorySlotItem
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_SetInventorySlotItem_Params
	{
	public:
		class AGBItem*                                             InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.OnIconLoaded
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_OnIconLoaded_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.EquipInventorySlotItem
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_EquipInventorySlotItem_Params
	{
	public:
		bool                                                       bMainhand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_HolsterEntry.WBP_InventoryBar_HolsterEntry_C.ExecuteUbergraph_WBP_InventoryBar_HolsterEntry
	 */
	struct UWBP_InventoryBar_HolsterEntry_C_ExecuteUbergraph_WBP_InventoryBar_HolsterEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
