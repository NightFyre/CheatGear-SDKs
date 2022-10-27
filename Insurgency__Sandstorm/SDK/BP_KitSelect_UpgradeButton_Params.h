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
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Refresh Colors OLD
	 */
	struct UBP_KitSelect_UpgradeButton_C_Refresh_Colors_OLD_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Update Visual Components
	 */
	struct UBP_KitSelect_UpgradeButton_C_Update_Visual_Components_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Update Upgrade Data OLD
	 */
	struct UBP_KitSelect_UpgradeButton_C_Update_Upgrade_Data_OLD_Params
	{
	public:
		class UClass*                                              InUpgradeClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InParentItemSlot;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UA7W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSupplyCost;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInSupplyCostVisible;                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInSelected;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInPurchasable;                                          // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNewGear;                                            // 0x0013(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2RGH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.UpdateNotificationVisibility
	 */
	struct UBP_KitSelect_UpgradeButton_C_UpdateNotificationVisibility_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get_SupplyCostWidget_Visibility_1
	 */
	struct UBP_KitSelect_UpgradeButton_C_Get_SupplyCostWidget_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.HandleGamepadRemove
	 */
	struct UBP_KitSelect_UpgradeButton_C_HandleGamepadRemove_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnKeyDown
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get_LeftTabSwitcher_Visibility_1
	 */
	struct UBP_KitSelect_UpgradeButton_C_Get_LeftTabSwitcher_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.RefreshLeftTab
	 */
	struct UBP_KitSelect_UpgradeButton_C_RefreshLeftTab_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetUnequpOptionVisibility
	 */
	struct UBP_KitSelect_UpgradeButton_C_GetUnequpOptionVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnFocusReceived
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetLeftTextWidgetText
	 */
	struct UBP_KitSelect_UpgradeButton_C_GetLeftTextWidgetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetSupplyCostWidgetText
	 */
	struct UBP_KitSelect_UpgradeButton_C_GetSupplyCostWidgetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetButtonFgColor
	 */
	struct UBP_KitSelect_UpgradeButton_C_GetButtonFgColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetLeftSelectHighlightVisibility
	 */
	struct UBP_KitSelect_UpgradeButton_C_GetLeftSelectHighlightVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get Button Bg Color
	 */
	struct UBP_KitSelect_UpgradeButton_C_Get_Button_Bg_Color_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnMouseLeave
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnMouseEnter
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Construct
	 */
	struct UBP_KitSelect_UpgradeButton_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.SetScrollingText
	 */
	struct UBP_KitSelect_UpgradeButton_C_SetScrollingText_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.SetColorScrollingTextWidget
	 */
	struct UBP_KitSelect_UpgradeButton_C_SetColorScrollingTextWidget_Params
	{
	public:
		struct FLinearColor                                        FgColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.ExecuteUbergraph_BP_KitSelect_UpgradeButton
	 */
	struct UBP_KitSelect_UpgradeButton_C_ExecuteUbergraph_BP_KitSelect_UpgradeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PUTN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUpgradeListItemClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnUpgradeListItemClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUnequipHover__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnUnequipHover__DelegateSignature_Params
	{
	public:
		class UClass*                                              UpgradeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnSelectHover__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnSelectHover__DelegateSignature_Params
	{
	public:
		class UClass*                                              UpgradeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSelected;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUnequipClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnUnequipClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  ParentSlot;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnSelectClicked__DelegateSignature
	 */
	struct UBP_KitSelect_UpgradeButton_C_OnSelectClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
