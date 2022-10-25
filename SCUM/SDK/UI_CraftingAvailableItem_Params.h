#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState
	 */
	struct UUI_CraftingAvailableItem_C_UpdateSelectionAndOptionalState_Params
	{	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1
	 */
	struct UUI_CraftingAvailableItem_C_GetbIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init
	 */
	struct UUI_CraftingAvailableItem_C_Init_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected
	 */
	struct UUI_CraftingAvailableItem_C_SetIsSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional
	 */
	struct UUI_CraftingAvailableItem_C_SetIsOptional_Params
	{
	public:
		bool                                                       isOptional;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState
	 */
	struct UUI_CraftingAvailableItem_C_SetOptionalState_Params
	{
	public:
		EOptionalState                                             State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct
	 */
	struct UUI_CraftingAvailableItem_C_Construct_Params
	{	};

	/**
	 * Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem
	 */
	struct UUI_CraftingAvailableItem_C_ExecuteUbergraph_UI_CraftingAvailableItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
