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
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_Tutorials_Lessons_LessonButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnFocusReceived");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnUnselected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::OnUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnUnselected");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_OnUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.SetLessonText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::SetLessonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.SetLessonText");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_SetLessonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_507_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::BndEvt__LessonButton_K2Node_ComponentBoundEvent_507_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_507_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_BndEvt__LessonButton_K2Node_ComponentBoundEvent_507_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_517_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::BndEvt__LessonButton_K2Node_ComponentBoundEvent_517_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_517_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_BndEvt__LessonButton_K2Node_ComponentBoundEvent_517_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_559_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::BndEvt__LessonButton_K2Node_ComponentBoundEvent_559_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_559_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_BndEvt__LessonButton_K2Node_ComponentBoundEvent_559_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnAddedToFocusPath");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnRemovedFromFocusPath");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::BndEvt__LessonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.BndEvt__LessonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_BndEvt__LessonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_LessonButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_LessonButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_LessonButton");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_LessonButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::OnHovered__DelegateSignature(class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnHovered__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_OnHovered__DelegateSignature_Params params {};
		params.LessonButton = LessonButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_LessonButton_C::OnPressed__DelegateSignature(class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C.OnPressed__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_LessonButton_C_OnPressed__DelegateSignature_Params params {};
		params.LessonButton = LessonButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Tutorials_Lessons_LessonButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Tutorials_Lessons_LessonButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Lessons_LessonButton.BP_MainMenu_Tutorials_Lessons_LessonButton_C");
		return ptr;
	}

}


