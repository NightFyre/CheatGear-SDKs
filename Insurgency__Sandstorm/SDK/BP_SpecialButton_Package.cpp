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
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_SpecialButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.OnFocusReceived");
		
		UBP_SpecialButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.UpdateKeyAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpecialButton_C::UpdateKeyAction(const struct FKey& Key, const class FName& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.UpdateKeyAction");
		
		UBP_SpecialButton_C_UpdateKeyAction_Params params {};
		params.Key = Key;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.UpdateText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SpecialButton_C::UpdateText(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.UpdateText");
		
		UBP_SpecialButton_C_UpdateText_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpecialButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.PreConstruct");
		
		UBP_SpecialButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SpecialButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SpecialButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SpecialButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SpecialButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
		
		UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SpecialButton_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");
		
		UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.OnHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpecialButton_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.OnHovered");
		
		UBP_SpecialButton_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.OnUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpecialButton_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.OnUnhovered");
		
		UBP_SpecialButton_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SpecialButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.OnAddedToFocusPath");
		
		UBP_SpecialButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SpecialButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.OnRemovedFromFocusPath");
		
		UBP_SpecialButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.ExecuteUbergraph_BP_SpecialButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpecialButton_C::ExecuteUbergraph_BP_SpecialButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.ExecuteUbergraph_BP_SpecialButton");
		
		UBP_SpecialButton_C_ExecuteUbergraph_BP_SpecialButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpecialButton.BP_SpecialButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpecialButton_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpecialButton.BP_SpecialButton_C.OnClicked__DelegateSignature");
		
		UBP_SpecialButton_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SpecialButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpecialButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpecialButton.BP_SpecialButton_C");
		return ptr;
	}

}


