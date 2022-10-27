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
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_OnlineStore_CategoryBaseButton_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnKeyUp");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_OnlineStore_CategoryBaseButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnFocusReceived");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.ShowNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::ShowNotification(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.ShowNotification");
		
		UBP_OnlineStore_CategoryBaseButton_C_ShowNotification_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.RefreshColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::RefreshColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.RefreshColors");
		
		UBP_OnlineStore_CategoryBaseButton_C_RefreshColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::SetSelected(bool bInSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.SetSelected");
		
		UBP_OnlineStore_CategoryBaseButton_C_SetSelected_Params params {};
		params.bInSelected = bInSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.SetFontSize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::SetFontSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.SetFontSize");
		
		UBP_OnlineStore_CategoryBaseButton_C_SetFontSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.PreConstruct");
		
		UBP_OnlineStore_CategoryBaseButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_OnlineStore_CategoryBaseButton_C_BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnAddedToFocusPath");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnRemovedFromFocusPath");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnMouseEnter");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnMouseLeave");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_OnlineStore_CategoryBaseButton_C_BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
		
		UBP_OnlineStore_CategoryBaseButton_C_BndEvt__MenuOptionButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.ExecuteUbergraph_BP_OnlineStore_CategoryBaseButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::ExecuteUbergraph_BP_OnlineStore_CategoryBaseButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.ExecuteUbergraph_BP_OnlineStore_CategoryBaseButton");
		
		UBP_OnlineStore_CategoryBaseButton_C_ExecuteUbergraph_BP_OnlineStore_CategoryBaseButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_CategoryBaseButton_C*        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::OnClicked__DelegateSignature(class UBP_OnlineStore_CategoryBaseButton_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnClicked__DelegateSignature");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnClicked__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_CategoryBaseButton_C*        SelectedCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineStore_CategoryBaseButton_C::OnSelected__DelegateSignature(class UBP_OnlineStore_CategoryBaseButton_C* SelectedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C.OnSelected__DelegateSignature");
		
		UBP_OnlineStore_CategoryBaseButton_C_OnSelected__DelegateSignature_Params params {};
		params.SelectedCategory = SelectedCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OnlineStore_CategoryBaseButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OnlineStore_CategoryBaseButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OnlineStore_CategoryBaseButton.BP_OnlineStore_CategoryBaseButton_C");
		return ptr;
	}

}


