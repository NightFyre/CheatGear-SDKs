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
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCachedWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateCachedWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCachedWidgets");
		
		UBP_ProfileAppearance_C_UpdateCachedWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SaveSelectedPreset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SaveSelectedPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SaveSelectedPreset");
		
		UBP_ProfileAppearance_C_SaveSelectedPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetPresetButtonSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::SetPresetButtonSelected(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetPresetButtonSelected");
		
		UBP_ProfileAppearance_C_SetPresetButtonSelected_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetVisibilityBtnBack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::GetVisibilityBtnBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetVisibilityBtnBack");
		
		UBP_ProfileAppearance_C_GetVisibilityBtnBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetWidgetToFocusFromCache
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetWidgetToFocusFromCache(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetWidgetToFocusFromCache");
		
		UBP_ProfileAppearance_C_GetWidgetToFocusFromCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetHoveredCache
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ResetHoveredCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetHoveredCache");
		
		UBP_ProfileAppearance_C_ResetHoveredCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSubSlotHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 SelfRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::OnSubSlotHover(class UUserWidget* SelfRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSubSlotHover");
		
		UBP_ProfileAppearance_C_OnSubSlotHover_Params params {};
		params.SelfRef = SelfRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetPresetToFocusFromCache
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBP_ProfileAppearance_C::GetPresetToFocusFromCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetPresetToFocusFromCache");
		
		UBP_ProfileAppearance_C_GetPresetToFocusFromCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetSelectedSlotItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_ProfileAppearance_CosmeticItem_C*        SelectedItemRef                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetSelectedSlotItem(class UBP_ProfileAppearance_CosmeticItem_C** SelectedItemRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetSelectedSlotItem");
		
		UBP_ProfileAppearance_C_GetSelectedSlotItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedItemRef != nullptr)
			*SelectedItemRef = params.SelectedItemRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.RemoveActiveDialogWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::RemoveActiveDialogWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.RemoveActiveDialogWidget");
		
		UBP_ProfileAppearance_C_RemoveActiveDialogWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.On Confirm Network Purchase Error Dialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::On_Confirm_Network_Purchase_Error_Dialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.On Confirm Network Purchase Error Dialog");
		
		UBP_ProfileAppearance_C_On_Confirm_Network_Purchase_Error_Dialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.On Button Purchase Cart Clicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::On_Button_Purchase_Cart_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.On Button Purchase Cart Clicked");
		
		UBP_ProfileAppearance_C_On_Button_Purchase_Cart_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_ProfileAppearance_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCustomNavigation");
		
		UBP_ProfileAppearance_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_ProfileAppearance_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnAnalogValueChanged");
		
		UBP_ProfileAppearance_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SelectEquippedVariation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SelectEquippedVariation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SelectEquippedVariation");
		
		UBP_ProfileAppearance_C_SelectEquippedVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ClearUnviewedItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ClearUnviewedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ClearUnviewedItems");
		
		UBP_ProfileAppearance_C_ClearUnviewedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnConfirmedError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnConfirmedError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnConfirmedError");
		
		UBP_ProfileAppearance_C_OnConfirmedError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetupPurchaseBox
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSelectedCosmetic                           SelectedCosmetic                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileAppearance_C::SetupPurchaseBox(const struct FSelectedCosmetic& SelectedCosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetupPurchaseBox");
		
		UBP_ProfileAppearance_C_SetupPurchaseBox_Params params {};
		params.SelectedCosmetic = SelectedCosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetCanceled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnPresetCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetCanceled");
		
		UBP_ProfileAppearance_C_OnPresetCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCancelPurchase
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnCancelPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCancelPurchase");
		
		UBP_ProfileAppearance_C_OnCancelPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetTextColor_GenderSwitchBtn
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_ProfileAppearance_C::GetTextColor_GenderSwitchBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetTextColor_GenderSwitchBtn");
		
		UBP_ProfileAppearance_C_GetTextColor_GenderSwitchBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetBrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ProfileAppearance_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetBrushColor_1");
		
		UBP_ProfileAppearance_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_ProfileAppearance_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnKeyDown");
		
		UBP_ProfileAppearance_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCurrentSlotWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetCurrentSlotWidget(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCurrentSlotWidget");
		
		UBP_ProfileAppearance_C_GetCurrentSlotWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSlotListVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnSlotListVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSlotListVisible");
		
		UBP_ProfileAppearance_C_OnSlotListVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSlotDetailVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnSlotDetailVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSlotDetailVisible");
		
		UBP_ProfileAppearance_C_OnSlotDetailVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ProfileAppearance_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnFocusReceived");
		
		UBP_ProfileAppearance_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEditPresetCanceled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnEditPresetCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEditPresetCanceled");
		
		UBP_ProfileAppearance_C_OnEditPresetCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEditPresetConfirmed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::OnEditPresetConfirmed(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEditPresetConfirmed");
		
		UBP_ProfileAppearance_C_OnEditPresetConfirmed_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetConfirmed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        CommitedText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::OnPresetConfirmed(const class FText& CommitedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetConfirmed");
		
		UBP_ProfileAppearance_C_OnPresetConfirmed_Params params {};
		params.CommitedText = CommitedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetTextColor_RandomizeBtn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ProfileAppearance_C::GetTextColor_RandomizeBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetTextColor_RandomizeBtn");
		
		UBP_ProfileAppearance_C_GetTextColor_RandomizeBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnConfirmPurchase
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnConfirmPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnConfirmPurchase");
		
		UBP_ProfileAppearance_C_OnConfirmPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Prompt Purchase Shopping Cart
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::Prompt_Purchase_Shopping_Cart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Prompt Purchase Shopping Cart");
		
		UBP_ProfileAppearance_C_Prompt_Purchase_Shopping_Cart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetCosmeticState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ResetCosmeticState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetCosmeticState");
		
		UBP_ProfileAppearance_C_ResetCosmeticState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.EmptyShoppingCart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::EmptyShoppingCart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.EmptyShoppingCart");
		
		UBP_ProfileAppearance_C_EmptyShoppingCart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetEntitledCosmeticsInSlot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UClass*>                              OutArray                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetEntitledCosmeticsInSlot(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bActive, TArray<class UClass*>* OutArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetEntitledCosmeticsInSlot");
		
		UBP_ProfileAppearance_C_GetEntitledCosmeticsInSlot_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArray != nullptr)
			*OutArray = params.OutArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.IsCosmeticEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncludeBase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipped                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::IsCosmeticEquipped(int32_t ItemId, bool bIncludeBase, bool* bEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.IsCosmeticEquipped");
		
		UBP_ProfileAppearance_C_IsCosmeticEquipped_Params params {};
		params.ItemId = ItemId;
		params.bIncludeBase = bIncludeBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEquipped != nullptr)
			*bEquipped = params.bEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PlayerOwnsItemId
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Owns                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::PlayerOwnsItemId(int32_t ItemId, bool* Owns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PlayerOwnsItemId");
		
		UBP_ProfileAppearance_C_PlayerOwnsItemId_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Owns != nullptr)
			*Owns = params.Owns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCurrentFaction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        OutFaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetCurrentFaction(class FName* OutFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCurrentFaction");
		
		UBP_ProfileAppearance_C_GetCurrentFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFaction != nullptr)
			*OutFaction = params.OutFaction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionTo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewFaction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::SwitchFactionTo(const class FName& NewFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionTo");
		
		UBP_ProfileAppearance_C_SwitchFactionTo_Params params {};
		params.NewFaction = NewFaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Open Hands Slot List
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::Open_Hands_Slot_List(ECharacterAppearanceSlot Slot, int32_t SubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Open Hands Slot List");
		
		UBP_ProfileAppearance_C_Open_Hands_Slot_List_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdatePreferredFactionSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdatePreferredFactionSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdatePreferredFactionSelection");
		
		UBP_ProfileAppearance_C_UpdatePreferredFactionSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.InitializeCarrierAndArmorButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::InitializeCarrierAndArmorButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.InitializeCarrierAndArmorButtons");
		
		UBP_ProfileAppearance_C_InitializeCarrierAndArmorButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateEquipmentPreview
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateEquipmentPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateEquipmentPreview");
		
		UBP_ProfileAppearance_C_UpdateEquipmentPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnTabSelected");
		
		UBP_ProfileAppearance_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ForceCameraForCurrentSlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ForceCameraForCurrentSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ForceCameraForCurrentSlot");
		
		UBP_ProfileAppearance_C_ForceCameraForCurrentSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCarrierLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::UpdateCarrierLevel(const class FName& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCarrierLevel");
		
		UBP_ProfileAppearance_C_UpdateCarrierLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.NotifyArmorOrCarrierUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::NotifyArmorOrCarrierUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.NotifyArmorOrCarrierUpdate");
		
		UBP_ProfileAppearance_C_NotifyArmorOrCarrierUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateArmorLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::UpdateArmorLevel(const class FName& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateArmorLevel");
		
		UBP_ProfileAppearance_C_UpdateArmorLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateBalance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateBalance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateBalance");
		
		UBP_ProfileAppearance_C_UpdateBalance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLastKnownBalance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetLastKnownBalance(int32_t* Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLastKnownBalance");
		
		UBP_ProfileAppearance_C_GetLastKnownBalance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Credits != nullptr)
			*Credits = params.Credits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLastKnownBalanceAsText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        Balance                                                    (Parm, OutParm)
	 */
	void UBP_ProfileAppearance_C::GetLastKnownBalanceAsText(class FText* Balance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLastKnownBalanceAsText");
		
		UBP_ProfileAppearance_C_GetLastKnownBalanceAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Balance != nullptr)
			*Balance = params.Balance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateEquipmentList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::PopulateEquipmentList(ECharacterAppearanceSlot Slot, int32_t SubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateEquipmentList");
		
		UBP_ProfileAppearance_C_PopulateEquipmentList_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetCharacterRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ResetCharacterRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetCharacterRotation");
		
		UBP_ProfileAppearance_C_ResetCharacterRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.AddCharacterRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::AddCharacterRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.AddCharacterRotation");
		
		UBP_ProfileAppearance_C_AddCharacterRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateExternalCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Sub_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::UpdateExternalCamera(ECharacterAppearanceSlot Slot, int32_t Sub_Slot, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateExternalCamera");
		
		UBP_ProfileAppearance_C_UpdateExternalCamera_Params params {};
		params.Slot = Slot;
		params.Sub_Slot = Sub_Slot;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnQueryEntitlementsComplete
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnQueryEntitlementsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnQueryEntitlementsComplete");
		
		UBP_ProfileAppearance_C_OnQueryEntitlementsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetColor_GenderSwitchImage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_ProfileAppearance_C::GetColor_GenderSwitchImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetColor_GenderSwitchImage");
		
		UBP_ProfileAppearance_C_GetColor_GenderSwitchImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetGenderText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_ProfileAppearance_C::GetGenderText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetGenderText");
		
		UBP_ProfileAppearance_C_GetGenderText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_GenderDisplay_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::Get_GenderDisplay_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_GenderDisplay_Visibility_1");
		
		UBP_ProfileAppearance_C_Get_GenderDisplay_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressBackButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::PressBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressBackButton");
		
		UBP_ProfileAppearance_C_PressBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ShouldNavigateBackToMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldReturn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::ShouldNavigateBackToMenu(bool* ShouldReturn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ShouldNavigateBackToMenu");
		
		UBP_ProfileAppearance_C_ShouldNavigateBackToMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldReturn != nullptr)
			*ShouldReturn = params.ShouldReturn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_VoiceIconWindow_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::Get_VoiceIconWindow_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_VoiceIconWindow_Visibility_1");
		
		UBP_ProfileAppearance_C_Get_VoiceIconWindow_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCurrentGender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateCurrentGender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCurrentGender");
		
		UBP_ProfileAppearance_C_UpdateCurrentGender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.CloseShoppingCart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::CloseShoppingCart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.CloseShoppingCart");
		
		UBP_ProfileAppearance_C_CloseShoppingCart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_RightSidebar_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::Get_RightSidebar_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_RightSidebar_Visibility_1");
		
		UBP_ProfileAppearance_C_Get_RightSidebar_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCosmeticUnHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnCosmeticUnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCosmeticUnHovered");
		
		UBP_ProfileAppearance_C_OnCosmeticUnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SaveCurrentStateAsPreset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SaveCurrentStateAsPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SaveCurrentStateAsPreset");
		
		UBP_ProfileAppearance_C_SaveCurrentStateAsPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCreatePresetHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnCreatePresetHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCreatePresetHovered");
		
		UBP_ProfileAppearance_C_OnCreatePresetHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetNextPresetName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (Parm, OutParm)
	 */
	void UBP_ProfileAppearance_C::GetNextPresetName(class FText* PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetNextPresetName");
		
		UBP_ProfileAppearance_C_GetNextPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PresetName != nullptr)
			*PresetName = params.PresetName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetRandomizeText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_ProfileAppearance_C::GetRandomizeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetRandomizeText");
		
		UBP_ProfileAppearance_C_GetRandomizeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.RandomizeCurrentCosmetics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSubSlotButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::RandomizeCurrentCosmetics(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.RandomizeCurrentCosmetics");
		
		UBP_ProfileAppearance_C_RandomizeCurrentCosmetics_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.bIsSubSlotButton = bIsSubSlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PurchaseShoppingCart
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::PurchaseShoppingCart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PurchaseShoppingCart");
		
		UBP_ProfileAppearance_C_PurchaseShoppingCart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_ConfirmPurchaseWindow_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::Get_ConfirmPurchaseWindow_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_ConfirmPurchaseWindow_Visibility_1");
		
		UBP_ProfileAppearance_C_Get_ConfirmPurchaseWindow_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.StartCheckout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::StartCheckout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.StartCheckout");
		
		UBP_ProfileAppearance_C_StartCheckout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PreviewItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::PreviewItem(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PreviewItem");
		
		UBP_ProfileAppearance_C_PreviewItem_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.CloseShoppingList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Skip_Camera                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               To_Initial_Slot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::CloseShoppingList(bool Skip_Camera, bool To_Initial_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.CloseShoppingList");
		
		UBP_ProfileAppearance_C_CloseShoppingList_Params params {};
		params.Skip_Camera = Skip_Camera;
		params.To_Initial_Slot = To_Initial_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_ProfileAppearance_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseMove");
		
		UBP_ProfileAppearance_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_ProfileAppearance_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseButtonUp");
		
		UBP_ProfileAppearance_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_ProfileAppearance_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseButtonDown");
		
		UBP_ProfileAppearance_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.IsCosmeticAvailable
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::IsCosmeticAvailable(class UClass* Cosmetic, bool* IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.IsCosmeticAvailable");
		
		UBP_ProfileAppearance_C_IsCosmeticAvailable_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailable != nullptr)
			*IsAvailable = params.IsAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCosmeticRarity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECollectibleRarity                                 Rarity                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetCosmeticRarity(int32_t ItemId, ECollectibleRarity* Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCosmeticRarity");
		
		UBP_ProfileAppearance_C_GetCosmeticRarity_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rarity != nullptr)
			*Rarity = params.Rarity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateSelectedItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateSelectedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateSelectedItems");
		
		UBP_ProfileAppearance_C_UpdateSelectedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateDevBox
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateDevBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateDevBox");
		
		UBP_ProfileAppearance_C_UpdateDevBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UnhoveredItemButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     WidgetRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::UnhoveredItemButton(class UWidget* WidgetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UnhoveredItemButton");
		
		UBP_ProfileAppearance_C_UnhoveredItemButton_Params params {};
		params.WidgetRef = WidgetRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.HoverItemButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::HoverItemButton(class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.HoverItemButton");
		
		UBP_ProfileAppearance_C_HoverItemButton_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressItemButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_ProfileAppearance_Variation_C*           VariationButtonReference                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::PressItemButton(int32_t ItemId, class UBP_ProfileAppearance_Variation_C* VariationButtonReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressItemButton");
		
		UBP_ProfileAppearance_C_PressItemButton_Params params {};
		params.ItemId = ItemId;
		params.VariationButtonReference = VariationButtonReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Open Sub Slot List
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::Open_Sub_Slot_List(ECharacterAppearanceSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Open Sub Slot List");
		
		UBP_ProfileAppearance_C_Open_Sub_Slot_List_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_SlotDetailsContainer_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::Get_SlotDetailsContainer_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_SlotDetailsContainer_Visibility_1");
		
		UBP_ProfileAppearance_C_Get_SlotDetailsContainer_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ScrollToSlotListNow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ScrollToSlotListNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ScrollToSlotListNow");
		
		UBP_ProfileAppearance_C_ScrollToSlotListNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnInventoryPurchase
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewItemDefId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::OnInventoryPurchase(int32_t NewItemDefId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnInventoryPurchase");
		
		UBP_ProfileAppearance_C_OnInventoryPurchase_Params params {};
		params.NewItemDefId = NewItemDefId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCosmeticStyleVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::GetCosmeticStyleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCosmeticStyleVisibility");
		
		UBP_ProfileAppearance_C_GetCosmeticStyleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.AnimScrollToSlotDetail
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::AnimScrollToSlotDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.AnimScrollToSlotDetail");
		
		UBP_ProfileAppearance_C_AnimScrollToSlotDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.AnimReturnToSlotList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::AnimReturnToSlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.AnimReturnToSlotList");
		
		UBP_ProfileAppearance_C_AnimReturnToSlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetUnHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnPresetUnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetUnHovered");
		
		UBP_ProfileAppearance_C_OnPresetUnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     ItemRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::OnPresetHovered(class UWidget* ItemRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetHovered");
		
		UBP_ProfileAppearance_C_OnPresetHovered_Params params {};
		params.ItemRef = ItemRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetCancelButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::OnPresetCancelButtonClicked(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetCancelButtonClicked");
		
		UBP_ProfileAppearance_C_OnPresetCancelButtonClicked_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateFactionSelectButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::UpdateFactionSelectButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateFactionSelectButtons");
		
		UBP_ProfileAppearance_C_UpdateFactionSelectButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.RemovePreset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::RemovePreset(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.RemovePreset");
		
		UBP_ProfileAppearance_C_RemovePreset_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetEditButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::OnPresetEditButtonClicked(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetEditButtonClicked");
		
		UBP_ProfileAppearance_C_OnPresetEditButtonClicked_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetEditingPreset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEditing                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::SetEditingPreset(bool bEditing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetEditingPreset");
		
		UBP_ProfileAppearance_C_SetEditingPreset_Params params {};
		params.bEditing = bEditing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetSaveButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PresetDesignation                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::OnPresetSaveButtonClicked(const class FText& PresetName, const class FText& PresetDesignation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetSaveButtonClicked");
		
		UBP_ProfileAppearance_C_OnPresetSaveButtonClicked_Params params {};
		params.PresetName = PresetName;
		params.PresetDesignation = PresetDesignation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_BtnAddNewPreset_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::Get_BtnAddNewPreset_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_BtnAddNewPreset_Visibility_1");
		
		UBP_ProfileAppearance_C_Get_BtnAddNewPreset_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ReloadPresets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::ReloadPresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ReloadPresets");
		
		UBP_ProfileAppearance_C_ReloadPresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.VisibleIfEditingPreset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_C::VisibleIfEditingPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.VisibleIfEditingPreset");
		
		UBP_ProfileAppearance_C_VisibleIfEditingPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.LoadPreset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileAppearance_C::LoadPreset(class FText* PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.LoadPreset");
		
		UBP_ProfileAppearance_C_LoadPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PresetName != nullptr)
			*PresetName = params.PresetName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::OnPresetButtonClicked(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetButtonClicked");
		
		UBP_ProfileAppearance_C_OnPresetButtonClicked_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionToInsurgent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SwitchFactionToInsurgent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionToInsurgent");
		
		UBP_ProfileAppearance_C_SwitchFactionToInsurgent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLocalPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UINSLocalPlayer*                             LocalPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::GetLocalPlayer(class UINSLocalPlayer** LocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLocalPlayer");
		
		UBP_ProfileAppearance_C_GetLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalPlayer != nullptr)
			*LocalPlayer = params.LocalPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressVarietyButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ProfileAppearance_CosmeticVariety_C*     VarietyButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::PressVarietyButton(class UBP_ProfileAppearance_CosmeticVariety_C* VarietyButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressVarietyButton");
		
		UBP_ProfileAppearance_C_PressVarietyButton_Params params {};
		params.VarietyButton = VarietyButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateVarietiesList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::PopulateVarietiesList(class UClass* Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateVarietiesList");
		
		UBP_ProfileAppearance_C_PopulateVarietiesList_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateItemsList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Clear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::PopulateItemsList(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool Clear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateItemsList");
		
		UBP_ProfileAppearance_C_PopulateItemsList_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.Clear = Clear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionToSecurity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SwitchFactionToSecurity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionToSecurity");
		
		UBP_ProfileAppearance_C_SwitchFactionToSecurity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressCosmeticButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ProfileAppearance_CosmeticItem_C*        CosmeticButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::PressCosmeticButton(class UBP_ProfileAppearance_CosmeticItem_C* CosmeticButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressCosmeticButton");
		
		UBP_ProfileAppearance_C_PressCosmeticButton_Params params {};
		params.CosmeticButton = CosmeticButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressSlotButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSubSlotButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::PressSlotButton(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressSlotButton");
		
		UBP_ProfileAppearance_C_PressSlotButton_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.bIsSubSlotButton = bIsSubSlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshAppearanceSlotList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::RefreshAppearanceSlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshAppearanceSlotList");
		
		UBP_ProfileAppearance_C_RefreshAppearanceSlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.Construct");
		
		UBP_ProfileAppearance_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature(const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature_Params params {};
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature(const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature_Params params {};
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnScrollToSlotListStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnScrollToSlotListStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnScrollToSlotListStart");
		
		UBP_ProfileAppearance_C_OnScrollToSlotListStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnScrollToSlotListEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnScrollToSlotListEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnScrollToSlotListEnd");
		
		UBP_ProfileAppearance_C_OnScrollToSlotListEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSubSlotButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.bIsSubSlotButton = bIsSubSlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshCosmetics
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::RefreshCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshCosmetics");
		
		UBP_ProfileAppearance_C_RefreshCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetSlotDetailVisibilities
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SetSlotDetailVisibilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetSlotDetailVisibilities");
		
		UBP_ProfileAppearance_C_SetSlotDetailVisibilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetSlotListVisibilities
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::SetSlotListVisibilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetSlotListVisibilities");
		
		UBP_ProfileAppearance_C_SetSlotListVisibilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileAppearance_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseLeave");
		
		UBP_ProfileAppearance_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PreConstruct");
		
		UBP_ProfileAppearance_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnProfileBlockLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EProfileBlockType                                  Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromCloud                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_C::OnProfileBlockLoaded(EProfileBlockType Type, bool bFromCloud)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnProfileBlockLoaded");
		
		UBP_ProfileAppearance_C_OnProfileBlockLoaded_Params params {};
		params.Type = Type;
		params.bFromCloud = bFromCloud;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCosmeticsProfileLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnCosmeticsProfileLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCosmeticsProfileLoaded");
		
		UBP_ProfileAppearance_C_OnCosmeticsProfileLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.PlayVoiceSample
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::PlayVoiceSample()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.PlayVoiceSample");
		
		UBP_ProfileAppearance_C_PlayVoiceSample_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature");
		
		UBP_ProfileAppearance_C_BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEntitlementsQueryCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnEntitlementsQueryCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEntitlementsQueryCompleted");
		
		UBP_ProfileAppearance_C_OnEntitlementsQueryCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.ExecuteUbergraph_BP_ProfileAppearance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_C::ExecuteUbergraph_BP_ProfileAppearance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.ExecuteUbergraph_BP_ProfileAppearance");
		
		UBP_ProfileAppearance_C_ExecuteUbergraph_BP_ProfileAppearance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshBackButtonHint__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::RefreshBackButtonHint__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshBackButtonHint__DelegateSignature");
		
		UBP_ProfileAppearance_C_RefreshBackButtonHint__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetUnhover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnPresetUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetUnhover__DelegateSignature");
		
		UBP_ProfileAppearance_C_OnPresetUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnPresetHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetHover__DelegateSignature");
		
		UBP_ProfileAppearance_C_OnPresetHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnClicked__DelegateSignature");
		
		UBP_ProfileAppearance_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileAppearance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileAppearance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileAppearance.BP_ProfileAppearance_C");
		return ptr;
	}

}


