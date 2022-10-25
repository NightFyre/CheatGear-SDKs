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
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Update Name
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::Update_Name()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Update Name");
		
		UBP_KitSelect_ItemButton_C_Update_Name_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.UpdateVisualComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::UpdateVisualComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.UpdateVisualComponents");
		
		UBP_KitSelect_ItemButton_C_UpdateVisualComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Refresh Colors OLD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::Refresh_Colors_OLD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Refresh Colors OLD");
		
		UBP_KitSelect_ItemButton_C_Refresh_Colors_OLD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Set Unequip Button Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::Set_Unequip_Button_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Set Unequip Button Visibility");
		
		UBP_KitSelect_ItemButton_C_Set_Unequip_Button_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.RefreshData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::RefreshData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.RefreshData");
		
		UBP_KitSelect_ItemButton_C_RefreshData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Update Item Data OLD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNewGear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_ItemButton_C::Update_Item_Data_OLD(class UClass* InItemClass, int32_t InSubSlot, bool bInSelected, bool bInIsNewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Update Item Data OLD");
		
		UBP_KitSelect_ItemButton_C_Update_Item_Data_OLD_Params params {};
		params.InItemClass = InItemClass;
		params.InSubSlot = InSubSlot;
		params.bInSelected = bInSelected;
		params.bInIsNewGear = bInIsNewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Set_ImageSizeBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::Set_ImageSizeBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Set_ImageSizeBox");
		
		UBP_KitSelect_ItemButton_C_Set_ImageSizeBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Notification Visibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::Get_Notification_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Notification Visibility");
		
		UBP_KitSelect_ItemButton_C_Get_Notification_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.UpdateFocusable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::UpdateFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.UpdateFocusable");
		
		UBP_KitSelect_ItemButton_C_UpdateFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.SetDataFromInventoryComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerInventoryComponent*                   InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::SetDataFromInventoryComponent(class UPlayerInventoryComponent* InventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.SetDataFromInventoryComponent");
		
		UBP_KitSelect_ItemButton_C_SetDataFromInventoryComponent_Params params {};
		params.InventoryComponent = InventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.HandleGamepadRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::HandleGamepadRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.HandleGamepadRemove");
		
		UBP_KitSelect_ItemButton_C_HandleGamepadRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_KitSelect_ItemButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnKeyDown");
		
		UBP_KitSelect_ItemButton_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_KitSelect_ItemButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnFocusReceived");
		
		UBP_KitSelect_ItemButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Weapon Icon Brush
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_KitSelect_ItemButton_C::Get_Weapon_Icon_Brush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Weapon Icon Brush");
		
		UBP_KitSelect_ItemButton_C_Get_Weapon_Icon_Brush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Supply Cost Widget Text 0
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_ItemButton_C::Get_Supply_Cost_Widget_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Supply Cost Widget Text 0");
		
		UBP_KitSelect_ItemButton_C_Get_Supply_Cost_Widget_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Button Fg Color And Opacity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_ItemButton_C::Get_Button_Fg_Color_And_Opacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Button Fg Color And Opacity");
		
		UBP_KitSelect_ItemButton_C_Get_Button_Fg_Color_And_Opacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.GetColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Foreground                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::GetColor(bool Foreground, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.GetColor");
		
		UBP_KitSelect_ItemButton_C_GetColor_Params params {};
		params.Foreground = Foreground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Left Select Highlight Visibility 0
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_ItemButton_C::Get_Left_Select_Highlight_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Left Select Highlight Visibility 0");
		
		UBP_KitSelect_ItemButton_C_Get_Left_Select_Highlight_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Button Bg Color And Opacity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_ItemButton_C::Get_Button_Bg_Color_And_Opacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Get Button Bg Color And Opacity");
		
		UBP_KitSelect_ItemButton_C_Get_Button_Bg_Color_And_Opacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.Construct");
		
		UBP_KitSelect_ItemButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_ItemButton_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_ItemButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnMouseLeave");
		
		UBP_KitSelect_ItemButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.SetColorScrollingTextWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                FgColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::SetColorScrollingTextWidget(const struct FLinearColor& FgColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.SetColorScrollingTextWidget");
		
		UBP_KitSelect_ItemButton_C_SetColorScrollingTextWidget_Params params {};
		params.FgColor = FgColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_ItemButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnMouseEnter");
		
		UBP_KitSelect_ItemButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_ItemButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnRemovedFromFocusPath");
		
		UBP_KitSelect_ItemButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_ItemButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnAddedToFocusPath");
		
		UBP_KitSelect_ItemButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.ExecuteUbergraph_BP_KitSelect_ItemButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::ExecuteUbergraph_BP_KitSelect_ItemButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.ExecuteUbergraph_BP_KitSelect_ItemButton");
		
		UBP_KitSelect_ItemButton_C_ExecuteUbergraph_BP_KitSelect_ItemButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemUnequip__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::OnItemUnequip__DelegateSignature(class UClass* ItemClass, EItemSlot ItemSlot, int32_t ItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemUnequip__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_OnItemUnequip__DelegateSignature_Params params {};
		params.ItemClass = ItemClass;
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::OnItemHover__DelegateSignature(class UClass* ItemClass, bool HoverValue, EItemSlot ItemSlot, int32_t ItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemHover__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_OnItemHover__DelegateSignature_Params params {};
		params.ItemClass = ItemClass;
		params.HoverValue = HoverValue;
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemButton_C::OnItemClicked__DelegateSignature(class UClass* Class, int32_t SubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C.OnItemClicked__DelegateSignature");
		
		UBP_KitSelect_ItemButton_C_OnItemClicked__DelegateSignature_Params params {};
		params.Class = Class;
		params.SubSlot = SubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_ItemButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_ItemButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C");
		return ptr;
	}

}


