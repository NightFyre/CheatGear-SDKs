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
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.SetSelectedStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapVoteButton_C::SetSelectedStyle(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.SetSelectedStyle");
		
		UBP_MapVoteButton_C_SetSelectedStyle_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.SetHoverStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapVoteButton_C::SetHoverStyle(bool bHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.SetHoverStyle");
		
		UBP_MapVoteButton_C_SetHoverStyle_Params params {};
		params.bHovered = bHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.InternalSetVoteCount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapVoteButton_C::InternalSetVoteCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.InternalSetVoteCount");
		
		UBP_MapVoteButton_C_InternalSetVoteCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapVoteButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.PreConstruct");
		
		UBP_MapVoteButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.Construct");
		
		UBP_MapVoteButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.SetVoteCount
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewVoteCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapVoteButton_C::SetVoteCount(int32_t NewVoteCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.SetVoteCount");
		
		UBP_MapVoteButton_C_SetVoteCount_Params params {};
		params.NewVoteCount = NewVoteCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.SetLocalVoteState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapVoteButton_C::SetLocalVoteState(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.SetLocalVoteState");
		
		UBP_MapVoteButton_C_SetLocalVoteState_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.PlayWinningVoteAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::PlayWinningVoteAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.PlayWinningVoteAnimation");
		
		UBP_MapVoteButton_C_PlayWinningVoteAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.PlayLosingVoteAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::PlayLosingVoteAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.PlayLosingVoteAnimation");
		
		UBP_MapVoteButton_C_PlayLosingVoteAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MapVoteButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.ExecuteUbergraph_BP_MapVoteButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapVoteButton_C::ExecuteUbergraph_BP_MapVoteButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.ExecuteUbergraph_BP_MapVoteButton");
		
		UBP_MapVoteButton_C_ExecuteUbergraph_BP_MapVoteButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MapVoteButton.BP_MapVoteButton_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMapVoteSelection                                  Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapVoteButton_C::OnOptionSelected__DelegateSignature(EMapVoteSelection Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MapVoteButton.BP_MapVoteButton_C.OnOptionSelected__DelegateSignature");
		
		UBP_MapVoteButton_C_OnOptionSelected__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MapVoteButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MapVoteButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapVoteButton.BP_MapVoteButton_C");
		return ptr;
	}

}


