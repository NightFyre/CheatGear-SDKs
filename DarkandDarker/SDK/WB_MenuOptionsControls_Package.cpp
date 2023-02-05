/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnOptionWidgetHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetSwitcher*                             BtnSwitcher                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsControls_C::OnOptionWidgetHovered(class UWidgetSwitcher* BtnSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnOptionWidgetHovered");
		
		UWB_MenuOptionsControls_C_OnOptionWidgetHovered_Params params {};
		params.BtnSwitcher = BtnSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.InitOptionWidgetBinding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::InitOptionWidgetBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.InitOptionWidgetBinding");
		
		UWB_MenuOptionsControls_C_InitOptionWidgetBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.Construct");
		
		UWB_MenuOptionsControls_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnGameUserSettingControls
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameUserSettingControls                    NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameUserSettingControls                    OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_MenuOptionsControls_C::OnGameUserSettingControls(const struct FGameUserSettingControls& NewValue, const struct FGameUserSettingControls& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnGameUserSettingControls");
		
		UWB_MenuOptionsControls_C_OnGameUserSettingControls_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.UpdateCultureButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      culture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsControls_C::UpdateCultureButton(const class FString& culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.UpdateCultureButton");
		
		UWB_MenuOptionsControls_C_UpdateCultureButton_Params params {};
		params.culture = culture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature");
		
		UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnMouseSenitivityHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::OnMouseSenitivityHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnMouseSenitivityHovered");
		
		UWB_MenuOptionsControls_C_OnMouseSenitivityHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseHorizontalAxisHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::OnInvertMouseHorizontalAxisHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseHorizontalAxisHovered");
		
		UWB_MenuOptionsControls_C_OnInvertMouseHorizontalAxisHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseVerticalHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::OnInvertMouseVerticalHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseVerticalHovered");
		
		UWB_MenuOptionsControls_C_OnInvertMouseVerticalHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnIgnoreInvitationHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::OnIgnoreInvitationHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnIgnoreInvitationHovered");
		
		UWB_MenuOptionsControls_C_OnIgnoreInvitationHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnStreamingModeHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsControls_C::OnStreamingModeHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnStreamingModeHovered");
		
		UWB_MenuOptionsControls_C_OnStreamingModeHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.ExecuteUbergraph_WB_MenuOptionsControls
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsControls_C::ExecuteUbergraph_WB_MenuOptionsControls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.ExecuteUbergraph_WB_MenuOptionsControls");
		
		UWB_MenuOptionsControls_C_ExecuteUbergraph_WB_MenuOptionsControls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MenuOptionsControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MenuOptionsControls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MenuOptionsControls.WB_MenuOptionsControls_C");
		return ptr;
	}

}


