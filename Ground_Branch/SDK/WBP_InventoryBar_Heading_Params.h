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
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnGetUserMenuContent_1
	 */
	struct UWBP_InventoryBar_Heading_C_OnGetUserMenuContent_1_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.GetVisibility_1
	 */
	struct UWBP_InventoryBar_Heading_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_InventoryBar_Heading_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.InternalSetSelected
	 */
	struct UWBP_InventoryBar_Heading_C_InternalSetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.CloseSubMenu
	 */
	struct UWBP_InventoryBar_Heading_C_CloseSubMenu_Params
	{	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OpenSubMenu
	 */
	struct UWBP_InventoryBar_Heading_C_OpenSubMenu_Params
	{	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.Cycle
	 */
	struct UWBP_InventoryBar_Heading_C_Cycle_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRestricted;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.EquipSelectedItem
	 */
	struct UWBP_InventoryBar_Heading_C_EquipSelectedItem_Params
	{
	public:
		bool                                                       bMainhand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediate;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.PreConstruct
	 */
	struct UWBP_InventoryBar_Heading_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.BindOnCycleCat
	 */
	struct UWBP_InventoryBar_Heading_C_BindOnCycleCat_Params
	{
	public:
		class UWBP_InventoryBar_SubMenu_Content_C*                 Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnCycleCat_Event_1
	 */
	struct UWBP_InventoryBar_Heading_C_OnCycleCat_Event_1_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.ExecuteUbergraph_WBP_InventoryBar_Heading
	 */
	struct UWBP_InventoryBar_Heading_C_ExecuteUbergraph_WBP_InventoryBar_Heading_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnCycleCat__DelegateSignature
	 */
	struct UWBP_InventoryBar_Heading_C_OnCycleCat__DelegateSignature_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
