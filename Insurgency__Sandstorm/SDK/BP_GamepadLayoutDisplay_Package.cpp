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
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_GamepadLayoutDisplay_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnKeyUp");
		
		UBP_GamepadLayoutDisplay_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_GamepadLayoutDisplay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnKeyDown");
		
		UBP_GamepadLayoutDisplay_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_GamepadLayoutDisplay_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnFocusReceived");
		
		UBP_GamepadLayoutDisplay_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.PopulateGamepadLayoutSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GamepadLayoutDisplay_C::PopulateGamepadLayoutSettings(const class FName& Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.PopulateGamepadLayoutSettings");
		
		UBP_GamepadLayoutDisplay_C_PopulateGamepadLayoutSettings_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GamepadLayoutDisplay_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_GamepadLayoutDisplay_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GamepadLayoutDisplay_C::BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature");
		
		UBP_GamepadLayoutDisplay_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature_Params params {};
		params.ID = ID;
		params.Text = Text;
		params.SelectInfo = SelectInfo;
		params.Console_Variable = Console_Variable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GamepadLayoutDisplay_C::OnCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnCancel");
		
		UBP_GamepadLayoutDisplay_C_OnCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnApply
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GamepadLayoutDisplay_C::OnApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnApply");
		
		UBP_GamepadLayoutDisplay_C_OnApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GamepadLayoutDisplay_C::BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_GamepadLayoutDisplay_C_BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_GamepadLayoutDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.Construct");
		
		UBP_GamepadLayoutDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.ExecuteUbergraph_BP_GamepadLayoutDisplay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GamepadLayoutDisplay_C::ExecuteUbergraph_BP_GamepadLayoutDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.ExecuteUbergraph_BP_GamepadLayoutDisplay");
		
		UBP_GamepadLayoutDisplay_C_ExecuteUbergraph_BP_GamepadLayoutDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnGamepadLayoutApplied__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GamepadLayoutDisplay_C::OnGamepadLayoutApplied__DelegateSignature(const class FName& NewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnGamepadLayoutApplied__DelegateSignature");
		
		UBP_GamepadLayoutDisplay_C_OnGamepadLayoutApplied__DelegateSignature_Params params {};
		params.NewID = NewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GamepadLayoutDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GamepadLayoutDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C");
		return ptr;
	}

}


