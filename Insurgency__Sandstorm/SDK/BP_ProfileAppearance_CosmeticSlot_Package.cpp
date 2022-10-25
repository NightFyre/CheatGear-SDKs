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
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Set Icon Texture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::Set_Icon_Texture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Set Icon Texture");
		
		UBP_ProfileAppearance_CosmeticSlot_C_Set_Icon_Texture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ProfileAppearance_CosmeticSlot_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.OnFocusReceived");
		
		UBP_ProfileAppearance_CosmeticSlot_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Get_NewItemSizeBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticSlot_C::Get_NewItemSizeBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Get_NewItemSizeBox_Visibility_1");
		
		UBP_ProfileAppearance_CosmeticSlot_C_Get_NewItemSizeBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Get_OuterBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticSlot_C::Get_OuterBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Get_OuterBox_Visibility_1");
		
		UBP_ProfileAppearance_CosmeticSlot_C_Get_OuterBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_ProfileAppearance_CosmeticSlot_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetTextColor");
		
		UBP_ProfileAppearance_CosmeticSlot_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ProfileAppearance_CosmeticSlot_C::GetBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetBackgroundColor");
		
		UBP_ProfileAppearance_CosmeticSlot_C_GetBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticSlot_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetVisibility_1");
		
		UBP_ProfileAppearance_CosmeticSlot_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetBackground_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_ProfileAppearance_CosmeticSlot_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.GetBackground_1");
		
		UBP_ProfileAppearance_CosmeticSlot_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.SetSlotAvailabilityText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::SetSlotAvailabilityText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.SetSlotAvailabilityText");
		
		UBP_ProfileAppearance_CosmeticSlot_C_SetSlotAvailabilityText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.SetSlotText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::SetSlotText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.SetSlotText");
		
		UBP_ProfileAppearance_CosmeticSlot_C_SetSlotText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.Construct");
		
		UBP_ProfileAppearance_CosmeticSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.PreConstruct");
		
		UBP_ProfileAppearance_CosmeticSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticSlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::ExecuteUbergraph_BP_ProfileAppearance_CosmeticSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticSlot");
		
		UBP_ProfileAppearance_CosmeticSlot_C_ExecuteUbergraph_BP_ProfileAppearance_CosmeticSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.OnHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 SelfRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::OnHover__DelegateSignature(class UUserWidget* SelfRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.OnHover__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_OnHover__DelegateSignature_Params params {};
		params.SelfRef = SelfRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.OnPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSubSlotButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticSlot_C::OnPressed__DelegateSignature(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C.OnPressed__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticSlot_C_OnPressed__DelegateSignature_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.bIsSubSlotButton = bIsSubSlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileAppearance_CosmeticSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileAppearance_CosmeticSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C");
		return ptr;
	}

}


