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
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.UnEquipPerk
	 */
	struct UWB_PerkSlotInventory_C_UnEquipPerk_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnMouseButtonUp
	 */
	struct UWB_PerkSlotInventory_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnPreviewMouseButtonDown
	 */
	struct UWB_PerkSlotInventory_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnDragDetected
	 */
	struct UWB_PerkSlotInventory_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnDrop
	 */
	struct UWB_PerkSlotInventory_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62FN[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnMouseButtonDown
	 */
	struct UWB_PerkSlotInventory_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_PerkSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_PerkSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_PerkSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_PerkSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.BndEvt__WB_PerkSlotInventory_Btn_Perk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWB_PerkSlotInventory_C_BndEvt__WB_PerkSlotInventory_Btn_Perk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnPress
	 */
	struct UWB_PerkSlotInventory_C_OnPress_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnRelease
	 */
	struct UWB_PerkSlotInventory_C_OnRelease_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.OnClick
	 */
	struct UWB_PerkSlotInventory_C_OnClick_Params
	{	};

	/**
	 * Function WB_PerkSlotInventory.WB_PerkSlotInventory_C.ExecuteUbergraph_WB_PerkSlotInventory
	 */
	struct UWB_PerkSlotInventory_C_ExecuteUbergraph_WB_PerkSlotInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
