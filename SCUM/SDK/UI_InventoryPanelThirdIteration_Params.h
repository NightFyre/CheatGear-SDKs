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
	 * Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner
	 */
	struct UUI_InventoryPanelThirdIteration_C_ReinitializeForPrisoner_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem
	 */
	struct UUI_InventoryPanelThirdIteration_C_ScrollToEquippedItem_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave
	 */
	struct UUI_InventoryPanelThirdIteration_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.SetDisplayedCharacterName
	 */
	struct UUI_InventoryPanelThirdIteration_C_SetDisplayedCharacterName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration
	 */
	struct UUI_InventoryPanelThirdIteration_C_ExecuteUbergraph_UI_InventoryPanelThirdIteration_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
