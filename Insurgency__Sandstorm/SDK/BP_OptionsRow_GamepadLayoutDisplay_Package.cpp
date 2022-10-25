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
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SetActiveInvalidationBoxState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::SetActiveInvalidationBoxState(bool NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SetActiveInvalidationBoxState");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_SetActiveInvalidationBoxState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SetSticksTexts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UVerticalBox*                                NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLeftStick                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::SetSticksTexts(class UVerticalBox* NewParam, bool bIsLeftStick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SetSticksTexts");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_SetSticksTexts_Params params {};
		params.NewParam = NewParam;
		params.bIsLeftStick = bIsLeftStick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextRightStickMiddle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_OptionsRow_GamepadLayoutDisplay_C::GetTextRightStickMiddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextRightStickMiddle");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextRightStickMiddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Get Text Right Stick Up
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_OptionsRow_GamepadLayoutDisplay_C::Get_Text_Right_Stick_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Get Text Right Stick Up");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_Get_Text_Right_Stick_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickMiddle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_OptionsRow_GamepadLayoutDisplay_C::GetTextLeftStickMiddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickMiddle");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextLeftStickMiddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickUp
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_OptionsRow_GamepadLayoutDisplay_C::GetTextLeftStickUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickUp");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextLeftStickUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextRightStickDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_OptionsRow_GamepadLayoutDisplay_C::GetTextRightStickDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextRightStickDown");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextRightStickDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_OptionsRow_GamepadLayoutDisplay_C::GetTextLeftStickDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickDown");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextLeftStickDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Call JustifyRight_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_TextWithReplaceableText_C*               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::Call_JustifyRight_1(class UBP_TextWithReplaceableText_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Call JustifyRight_1");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_Call_JustifyRight_1_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Call JustifyLeft_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_TextWithReplaceableText_C*               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::Call_JustifyLeft_1(class UBP_TextWithReplaceableText_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Call JustifyLeft_1");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_Call_JustifyLeft_1_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapToLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::SwapToLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapToLeft");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_SwapToLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapToStandard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::SwapToStandard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapToStandard");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_SwapToStandard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapJustificationOnTumbsticks
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::SwapJustificationOnTumbsticks(bool IsLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapJustificationOnTumbsticks");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_SwapJustificationOnTumbsticks_Params params {};
		params.IsLeft = IsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapPanelChildren
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                Widget1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                Widget2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::SwapPanelChildren(class UPanelWidget* Widget1, class UPanelWidget* Widget2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapPanelChildren");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_SwapPanelChildren_Params params {};
		params.Widget1 = Widget1;
		params.Widget2 = Widget2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_OptionsRow_GamepadLayoutDisplay_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextColor");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetBackgroundBrushColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_OptionsRow_GamepadLayoutDisplay_C::GetBackgroundBrushColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetBackgroundBrushColor");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_GetBackgroundBrushColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.BP_TextWithReplaceableText_C_22_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_TextWithReplaceableText_C*               BP_TextWithReplaceableText_C_23                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::BP_TextWithReplaceableText_C_22_Event_1(class UBP_TextWithReplaceableText_C* BP_TextWithReplaceableText_C_23)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.BP_TextWithReplaceableText_C_22_Event_1");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_BP_TextWithReplaceableText_C_22_Event_1_Params params {};
		params.BP_TextWithReplaceableText_C_23 = BP_TextWithReplaceableText_C_23;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.BP_TextWithReplaceableText_C_17_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_TextWithReplaceableText_C*               BP_TextWithReplaceableText_C_18                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::BP_TextWithReplaceableText_C_17_Event_1(class UBP_TextWithReplaceableText_C* BP_TextWithReplaceableText_C_18)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.BP_TextWithReplaceableText_C_17_Event_1");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_BP_TextWithReplaceableText_C_17_Event_1_Params params {};
		params.BP_TextWithReplaceableText_C_18 = BP_TextWithReplaceableText_C_18;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.PreConstruct");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.NewLayoutChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequestLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RequestAlternative                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RequestClassic                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RequestModern                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::NewLayoutChange(bool RequestLeft, bool RequestAlternative, bool RequestClassic, bool RequestModern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.NewLayoutChange");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_NewLayoutChange_Params params {};
		params.RequestLeft = RequestLeft;
		params.RequestAlternative = RequestAlternative;
		params.RequestClassic = RequestClassic;
		params.RequestModern = RequestModern;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.OnAnimationFinishedGamepadLayout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::OnAnimationFinishedGamepadLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.OnAnimationFinishedGamepadLayout");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_OnAnimationFinishedGamepadLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.ExecuteUbergraph_BP_OptionsRow_GamepadLayoutDisplay
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::ExecuteUbergraph_BP_OptionsRow_GamepadLayoutDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.ExecuteUbergraph_BP_OptionsRow_GamepadLayoutDisplay");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_ExecuteUbergraph_BP_OptionsRow_GamepadLayoutDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_GamepadLayoutDisplay_C::OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.OnOptionSelected__DelegateSignature");
		
		UBP_OptionsRow_GamepadLayoutDisplay_C_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_GamepadLayoutDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_GamepadLayoutDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C");
		return ptr;
	}

}


