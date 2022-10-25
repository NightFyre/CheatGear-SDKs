#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.UpdateSlotEmptyData
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_UpdateSlotEmptyData_Params
	{
	public:
		class FText                                                InSlotText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EItemSlot                                                  InItemSlot;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5INH[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubSlot;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInDisabledSlot;                                         // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNewGear;                                            // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WIFZ[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_NotificationIcon_Visibility
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_Get_NotificationIcon_Visibility_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.CallHoveredEvent
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_CallHoveredEvent_Params
	{
	public:
		bool                                                       bNewHovered;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnFocusReceived
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_LeftTextWidget_Text_1
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_Get_LeftTextWidget_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_ButtonBg_ColorAndOpacity
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_Get_ButtonBg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_ButtonFg_ColorAndOpacity
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_Get_ButtonFg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnMouseEnter
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnMouseLeave
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Construct
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.ExecuteUbergraph_BP_KitSelect_SlotEmptyButton
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_ExecuteUbergraph_BP_KitSelect_SlotEmptyButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnEmptySlotHovered__DelegateSignature
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnEmptySlotHovered__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4PXU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHovered;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnItemSlotSelected__DelegateSignature
	 */
	struct UBP_KitSelect_SlotEmptyButton_C_OnItemSlotSelected__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WZD8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LoadoutCategoryIndex;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
