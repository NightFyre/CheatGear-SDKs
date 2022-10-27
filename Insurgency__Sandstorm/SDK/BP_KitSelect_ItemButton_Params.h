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
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Update Name
	 */
	struct UBP_KitSelect_ItemButton_C_Update_Name_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.UpdateVisualComponents
	 */
	struct UBP_KitSelect_ItemButton_C_UpdateVisualComponents_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Refresh Colors OLD
	 */
	struct UBP_KitSelect_ItemButton_C_Refresh_Colors_OLD_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Set Unequip Button Visibility
	 */
	struct UBP_KitSelect_ItemButton_C_Set_Unequip_Button_Visibility_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.RefreshData
	 */
	struct UBP_KitSelect_ItemButton_C_RefreshData_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Update Item Data OLD
	 */
	struct UBP_KitSelect_ItemButton_C_Update_Item_Data_OLD_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSubSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInSelected;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNewGear;                                            // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Set_ImageSizeBox
	 */
	struct UBP_KitSelect_ItemButton_C_Set_ImageSizeBox_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Notification Visibility
	 */
	struct UBP_KitSelect_ItemButton_C_Get_Notification_Visibility_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.UpdateFocusable
	 */
	struct UBP_KitSelect_ItemButton_C_UpdateFocusable_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.SetDataFromInventoryComponent
	 */
	struct UBP_KitSelect_ItemButton_C_SetDataFromInventoryComponent_Params
	{
	public:
		class UPlayerInventoryComponent*                           InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.HandleGamepadRemove
	 */
	struct UBP_KitSelect_ItemButton_C_HandleGamepadRemove_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnKeyDown
	 */
	struct UBP_KitSelect_ItemButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnFocusReceived
	 */
	struct UBP_KitSelect_ItemButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Weapon Icon Brush
	 */
	struct UBP_KitSelect_ItemButton_C_Get_Weapon_Icon_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Supply Cost Widget Text 0
	 */
	struct UBP_KitSelect_ItemButton_C_Get_Supply_Cost_Widget_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Button Fg Color And Opacity
	 */
	struct UBP_KitSelect_ItemButton_C_Get_Button_Fg_Color_And_Opacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.GetColor
	 */
	struct UBP_KitSelect_ItemButton_C_GetColor_Params
	{
	public:
		bool                                                       Foreground;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IGYE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Left Select Highlight Visibility 0
	 */
	struct UBP_KitSelect_ItemButton_C_Get_Left_Select_Highlight_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Button Bg Color And Opacity
	 */
	struct UBP_KitSelect_ItemButton_C_Get_Button_Bg_Color_And_Opacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Construct
	 */
	struct UBP_KitSelect_ItemButton_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnMouseLeave
	 */
	struct UBP_KitSelect_ItemButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.SetColorScrollingTextWidget
	 */
	struct UBP_KitSelect_ItemButton_C_SetColorScrollingTextWidget_Params
	{
	public:
		struct FLinearColor                                        FgColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnMouseEnter
	 */
	struct UBP_KitSelect_ItemButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_ItemButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_ItemButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.ExecuteUbergraph_BP_KitSelect_ItemButton
	 */
	struct UBP_KitSelect_ItemButton_C_ExecuteUbergraph_BP_KitSelect_ItemButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemUnequip__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_OnItemUnequip__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  ItemSlot;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W5RL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemHover__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_OnItemHover__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemSlot                                                  ItemSlot;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5SV[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemClicked__DelegateSignature
	 */
	struct UBP_KitSelect_ItemButton_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubSlot;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
