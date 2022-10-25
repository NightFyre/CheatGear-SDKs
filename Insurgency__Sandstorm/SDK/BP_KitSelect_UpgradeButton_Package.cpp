/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Refresh Colors OLD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::Refresh_Colors_OLD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Refresh Colors OLD");
		
		UBP_KitSelect_UpgradeButton_C_Refresh_Colors_OLD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Update Visual Components
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::Update_Visual_Components()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Update Visual Components");
		
		UBP_KitSelect_UpgradeButton_C_Update_Visual_Components_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Update Upgrade Data OLD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InUpgradeClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InParentItemSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSupplyCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInSupplyCostVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInPurchasable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNewGear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeButton_C::Update_Upgrade_Data_OLD(class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InSupplyCost, bool bInSupplyCostVisible, bool bInSelected, bool bInPurchasable, bool bInIsNewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Update Upgrade Data OLD");
		
		UBP_KitSelect_UpgradeButton_C_Update_Upgrade_Data_OLD_Params params {};
		params.InUpgradeClass = InUpgradeClass;
		params.InParentItemSlot = InParentItemSlot;
		params.InSupplyCost = InSupplyCost;
		params.bInSupplyCostVisible = bInSupplyCostVisible;
		params.bInSelected = bInSelected;
		params.bInPurchasable = bInPurchasable;
		params.bInIsNewGear = bInIsNewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.UpdateNotificationVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::UpdateNotificationVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.UpdateNotificationVisibility");
		
		UBP_KitSelect_UpgradeButton_C_UpdateNotificationVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get_SupplyCostWidget_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_UpgradeButton_C::Get_SupplyCostWidget_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get_SupplyCostWidget_Visibility_1");
		
		UBP_KitSelect_UpgradeButton_C_Get_SupplyCostWidget_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.HandleGamepadRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::HandleGamepadRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.HandleGamepadRemove");
		
		UBP_KitSelect_UpgradeButton_C_HandleGamepadRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_KitSelect_UpgradeButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnKeyDown");
		
		UBP_KitSelect_UpgradeButton_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get_LeftTabSwitcher_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_UpgradeButton_C::Get_LeftTabSwitcher_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get_LeftTabSwitcher_Visibility_1");
		
		UBP_KitSelect_UpgradeButton_C_Get_LeftTabSwitcher_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.RefreshLeftTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::RefreshLeftTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.RefreshLeftTab");
		
		UBP_KitSelect_UpgradeButton_C_RefreshLeftTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetUnequpOptionVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_UpgradeButton_C::GetUnequpOptionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetUnequpOptionVisibility");
		
		UBP_KitSelect_UpgradeButton_C_GetUnequpOptionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_KitSelect_UpgradeButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnFocusReceived");
		
		UBP_KitSelect_UpgradeButton_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetLeftTextWidgetText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_UpgradeButton_C::GetLeftTextWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetLeftTextWidgetText");
		
		UBP_KitSelect_UpgradeButton_C_GetLeftTextWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetSupplyCostWidgetText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_UpgradeButton_C::GetSupplyCostWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetSupplyCostWidgetText");
		
		UBP_KitSelect_UpgradeButton_C_GetSupplyCostWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetButtonFgColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_UpgradeButton_C::GetButtonFgColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetButtonFgColor");
		
		UBP_KitSelect_UpgradeButton_C_GetButtonFgColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetLeftSelectHighlightVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_UpgradeButton_C::GetLeftSelectHighlightVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.GetLeftSelectHighlightVisibility");
		
		UBP_KitSelect_UpgradeButton_C_GetLeftSelectHighlightVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get Button Bg Color
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_UpgradeButton_C::Get_Button_Bg_Color()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Get Button Bg Color");
		
		UBP_KitSelect_UpgradeButton_C_Get_Button_Bg_Color_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnMouseLeave");
		
		UBP_KitSelect_UpgradeButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnMouseEnter");
		
		UBP_KitSelect_UpgradeButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnRemovedFromFocusPath");
		
		UBP_KitSelect_UpgradeButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.Construct");
		
		UBP_KitSelect_UpgradeButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnAddedToFocusPath");
		
		UBP_KitSelect_UpgradeButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.SetScrollingText
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::SetScrollingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.SetScrollingText");
		
		UBP_KitSelect_UpgradeButton_C_SetScrollingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.SetColorScrollingTextWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                FgColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeButton_C::SetColorScrollingTextWidget(const struct FLinearColor& FgColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.SetColorScrollingTextWidget");
		
		UBP_KitSelect_UpgradeButton_C_SetColorScrollingTextWidget_Params params {};
		params.FgColor = FgColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.ExecuteUbergraph_BP_KitSelect_UpgradeButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeButton_C::ExecuteUbergraph_BP_KitSelect_UpgradeButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.ExecuteUbergraph_BP_KitSelect_UpgradeButton");
		
		UBP_KitSelect_UpgradeButton_C_ExecuteUbergraph_BP_KitSelect_UpgradeButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUpgradeListItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnUpgradeListItemClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUpgradeListItemClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_OnUpgradeListItemClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUnequipHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnUnequipHover__DelegateSignature(class UClass* UpgradeClass, bool HoverValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUnequipHover__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_OnUnequipHover__DelegateSignature_Params params {};
		params.UpgradeClass = UpgradeClass;
		params.HoverValue = HoverValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnSelectHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnSelectHover__DelegateSignature(class UClass* UpgradeClass, bool HoverValue, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnSelectHover__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_OnSelectHover__DelegateSignature_Params params {};
		params.UpgradeClass = UpgradeClass;
		params.HoverValue = HoverValue;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUnequipClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          ParentSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnUnequipClicked__DelegateSignature(class UClass* Class, EItemSlot ParentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnUnequipClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_OnUnequipClicked__DelegateSignature_Params params {};
		params.Class = Class;
		params.ParentSlot = ParentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnSelectClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeButton_C::OnSelectClicked__DelegateSignature(class UClass* Class, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C.OnSelectClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeButton_C_OnSelectClicked__DelegateSignature_Params params {};
		params.Class = Class;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_UpgradeButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_UpgradeButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C");
		return ptr;
	}

}


