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
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnHoverStatusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SelectableImageButton_C::OnHoverStatusChanged(bool bIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnHoverStatusChanged");
		
		UBP_SelectableImageButton_C_OnHoverStatusChanged_Params params {};
		params.bIsHovered = bIsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnSelectedStatusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SelectableImageButton_C::OnSelectedStatusChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnSelectedStatusChanged");
		
		UBP_SelectableImageButton_C_OnSelectedStatusChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SelectableImageButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.PreConstruct");
		
		UBP_SelectableImageButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SelectableImageButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SelectableImageButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SelectableImageButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SelectableImageButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature");
		
		UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SelectableImageButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");
		
		UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SelectableImageButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnAddedToFocusPath");
		
		UBP_SelectableImageButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SelectableImageButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnRemovedFromFocusPath");
		
		UBP_SelectableImageButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.ExecuteUbergraph_BP_SelectableImageButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SelectableImageButton_C::ExecuteUbergraph_BP_SelectableImageButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.ExecuteUbergraph_BP_SelectableImageButton");
		
		UBP_SelectableImageButton_C_ExecuteUbergraph_BP_SelectableImageButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SelectableImageButton_C::OnClicked__DelegateSignature(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnClicked__DelegateSignature");
		
		UBP_SelectableImageButton_C_OnClicked__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SelectableImageButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SelectableImageButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SelectableImageButton.BP_SelectableImageButton_C");
		return ptr;
	}

}


