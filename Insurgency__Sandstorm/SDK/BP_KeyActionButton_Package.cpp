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
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.SetInitialButtonStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::SetInitialButtonStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.SetInitialButtonStyle");
		
		UBP_KeyActionButton_C_SetInitialButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.setPressedButtonStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::setPressedButtonStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.setPressedButtonStyle");
		
		UBP_KeyActionButton_C_setPressedButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.UpdateButtonOrder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::UpdateButtonOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.UpdateButtonOrder");
		
		UBP_KeyActionButton_C_UpdateButtonOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.RefreshText
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::RefreshText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.RefreshText");
		
		UBP_KeyActionButton_C_RefreshText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.SetText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KeyActionButton_C::SetText(class FText* newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.SetText");
		
		UBP_KeyActionButton_C_SetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newText != nullptr)
			*newText = params.newText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.EmulateClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::EmulateClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.EmulateClick");
		
		UBP_KeyActionButton_C_EmulateClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.SetAllowButtonPressEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KeyActionButton_C::SetAllowButtonPressEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.SetAllowButtonPressEnabled");
		
		UBP_KeyActionButton_C_SetAllowButtonPressEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.GetKeyActionIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_KeyActionIcon_C*                         KeyActionIcon                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KeyActionButton_C::GetKeyActionIcon(class UBP_KeyActionIcon_C** KeyActionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.GetKeyActionIcon");
		
		UBP_KeyActionButton_C_GetKeyActionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyActionIcon != nullptr)
			*KeyActionIcon = params.KeyActionIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.SetButtonType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::SetButtonType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.SetButtonType");
		
		UBP_KeyActionButton_C_SetButtonType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.BindControllerDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::BindControllerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.BindControllerDelegates");
		
		UBP_KeyActionButton_C_BindControllerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.SetIsUsingController
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KeyActionButton_C::SetIsUsingController(bool bUsingController, EeInputIconType IconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.SetIsUsingController");
		
		UBP_KeyActionButton_C_SetIsUsingController_Params params {};
		params.bUsingController = bUsingController;
		params.IconType = IconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.Update");
		
		UBP_KeyActionButton_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.SetInvertHover
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInvert                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KeyActionButton_C::SetInvertHover(bool bInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.SetInvertHover");
		
		UBP_KeyActionButton_C_SetInvertHover_Params params {};
		params.bInvert = bInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.GetColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KeyActionButton_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.GetColorAndOpacity_1");
		
		UBP_KeyActionButton_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.Construct");
		
		UBP_KeyActionButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KeyActionButton_C_BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KeyActionButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.PreConstruct");
		
		UBP_KeyActionButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KeyActionButton_C_BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.OnRebuildButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::OnRebuildButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.OnRebuildButton");
		
		UBP_KeyActionButton_C_OnRebuildButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.ExecuteUbergraph_BP_KeyActionButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KeyActionButton_C::ExecuteUbergraph_BP_KeyActionButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.ExecuteUbergraph_BP_KeyActionButton");
		
		UBP_KeyActionButton_C_ExecuteUbergraph_BP_KeyActionButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KeyActionButton.BP_KeyActionButton_C.OnPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KeyActionButton_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyActionButton.BP_KeyActionButton_C.OnPressed__DelegateSignature");
		
		UBP_KeyActionButton_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KeyActionButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KeyActionButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KeyActionButton.BP_KeyActionButton_C");
		return ptr;
	}

}


