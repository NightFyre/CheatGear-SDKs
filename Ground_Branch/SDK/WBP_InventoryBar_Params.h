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
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.GenerateEntries
	 */
	struct UWBP_InventoryBar_C_GenerateEntries_Params
	{
	public:
		int32_t                                                    InventorySlot;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQIC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_InventoryBar_SubMenu_Content_C*                 SubMenuContent;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.GetItemsByItemSlot
	 */
	struct UWBP_InventoryBar_C_GetItemsByItemSlot_Params
	{
	public:
		int32_t                                                    InventorySlot;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8RNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AGBItem*>                                     ItemsInSlot1;                                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.Select
	 */
	struct UWBP_InventoryBar_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.Cycle
	 */
	struct UWBP_InventoryBar_C_Cycle_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRestricted;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.SetSlingPoints
	 */
	struct UWBP_InventoryBar_C_SetSlingPoints_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.PopulateSubMenu
	 */
	struct UWBP_InventoryBar_C_PopulateSubMenu_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C2OT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_InventoryBar_SubMenu_Content_C*                 SubMenuContent;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.Construct
	 */
	struct UWBP_InventoryBar_C_Construct_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnCycleCat_Event_1
	 */
	struct UWBP_InventoryBar_C_OnCycleCat_Event_1_Params
	{
	public:
		bool                                                       bNext;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.BindActions
	 */
	struct UWBP_InventoryBar_C_BindActions_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnNextPosPressed_Event
	 */
	struct UWBP_InventoryBar_C_OnNextPosPressed_Event_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnPrevPosPressed_Event
	 */
	struct UWBP_InventoryBar_C_OnPrevPosPressed_Event_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.HideInventoryBar
	 */
	struct UWBP_InventoryBar_C_HideInventoryBar_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.ShowInventoryBar
	 */
	struct UWBP_InventoryBar_C_ShowInventoryBar_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseMainHandPressed_Event
	 */
	struct UWBP_InventoryBar_C_OnUseMainHandPressed_Event_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseMainHandRelease_Event
	 */
	struct UWBP_InventoryBar_C_OnUseMainHandRelease_Event_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseOffHandPressed_Event
	 */
	struct UWBP_InventoryBar_C_OnUseOffHandPressed_Event_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseOffHandReleased_Event
	 */
	struct UWBP_InventoryBar_C_OnUseOffHandReleased_Event_Params
	{	};

	/**
	 * Function WBP_InventoryBar.WBP_InventoryBar_C.ExecuteUbergraph_WBP_InventoryBar
	 */
	struct UWBP_InventoryBar_C_ExecuteUbergraph_WBP_InventoryBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LVOZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
