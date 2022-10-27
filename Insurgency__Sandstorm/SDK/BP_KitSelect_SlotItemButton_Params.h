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
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.UpdateSlotItemData
	 */
	struct UBP_KitSelect_SlotItemButton_C_UpdateSlotItemData_Params
	{
	public:
		int32_t                                                    InSupplyCost;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InItemSlot;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BUZI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AUH2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              InItemClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.SetClass
	 */
	struct UBP_KitSelect_SlotItemButton_C_SetClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.HandleGamepadRemove
	 */
	struct UBP_KitSelect_SlotItemButton_C_HandleGamepadRemove_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnKeyDown
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnFocusReceived
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.Get_WeaponIconBrush
	 */
	struct UBP_KitSelect_SlotItemButton_C_Get_WeaponIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.Get_SupplyCostWidget_Text_1
	 */
	struct UBP_KitSelect_SlotItemButton_C_Get_SupplyCostWidget_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.Get_ButtonFg_ColorAndOpacity
	 */
	struct UBP_KitSelect_SlotItemButton_C_Get_ButtonFg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.Get_LeftSelectHighlight_Visibility_1
	 */
	struct UBP_KitSelect_SlotItemButton_C_Get_LeftSelectHighlight_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.Get_ButtonBg_ColorAndOpacity
	 */
	struct UBP_KitSelect_SlotItemButton_C_Get_ButtonBg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.Construct
	 */
	struct UBP_KitSelect_SlotItemButton_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SlotItemButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnMouseEnter
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnMouseLeave
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SlotItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnClassSet
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnClassSet_Params
	{	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.ExecuteUbergraph_BP_KitSelect_SlotItemButton
	 */
	struct UBP_KitSelect_SlotItemButton_C_ExecuteUbergraph_BP_KitSelect_SlotItemButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnUnequipClicked__DelegateSignature
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnUnequipClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  ItemSlot;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FN87[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnItemHover__DelegateSignature
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnItemHover__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemSlot                                                  ItemSlot;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8XBB[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SlotItemButton.BP_KitSelect_SlotItemButton_C.OnItemClicked__DelegateSignature
	 */
	struct UBP_KitSelect_SlotItemButton_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9AZL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LoadoutCategoryIndex;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
