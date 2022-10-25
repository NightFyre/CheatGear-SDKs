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
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.UpdateSlotEmptyData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSlotText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInDisabledSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNewGear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InLoadoutCategoryIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::UpdateSlotEmptyData(class FText* InSlotText, EItemSlot InItemSlot, int32_t InSubSlot, bool bInDisabledSlot, bool bInIsNewGear, int32_t InLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.UpdateSlotEmptyData");
		
		UBP_KitSelect_SlotEmptyButton_C_UpdateSlotEmptyData_Params params {};
		params.InItemSlot = InItemSlot;
		params.InSubSlot = InSubSlot;
		params.bInDisabledSlot = bInDisabledSlot;
		params.bInIsNewGear = bInIsNewGear;
		params.InLoadoutCategoryIndex = InLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSlotText != nullptr)
			*InSlotText = params.InSlotText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_NotificationIcon_Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::Get_NotificationIcon_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_NotificationIcon_Visibility");
		
		UBP_KitSelect_SlotEmptyButton_C_Get_NotificationIcon_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.CallHoveredEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewHovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::CallHoveredEvent(bool bNewHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.CallHoveredEvent");
		
		UBP_KitSelect_SlotEmptyButton_C_CallHoveredEvent_Params params {};
		params.bNewHovered = bNewHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_KitSelect_SlotEmptyButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnFocusReceived");
		
		UBP_KitSelect_SlotEmptyButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_LeftTextWidget_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_SlotEmptyButton_C::Get_LeftTextWidget_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_LeftTextWidget_Text_1");
		
		UBP_KitSelect_SlotEmptyButton_C_Get_LeftTextWidget_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_ButtonBg_ColorAndOpacity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_SlotEmptyButton_C::Get_ButtonBg_ColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_ButtonBg_ColorAndOpacity");
		
		UBP_KitSelect_SlotEmptyButton_C_Get_ButtonBg_ColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_ButtonFg_ColorAndOpacity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_SlotEmptyButton_C::Get_ButtonFg_ColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Get_ButtonFg_ColorAndOpacity");
		
		UBP_KitSelect_SlotEmptyButton_C_Get_ButtonFg_ColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnAddedToFocusPath");
		
		UBP_KitSelect_SlotEmptyButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnRemovedFromFocusPath");
		
		UBP_KitSelect_SlotEmptyButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnMouseEnter");
		
		UBP_KitSelect_SlotEmptyButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnMouseLeave");
		
		UBP_KitSelect_SlotEmptyButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_SlotEmptyButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.Construct");
		
		UBP_KitSelect_SlotEmptyButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.ExecuteUbergraph_BP_KitSelect_SlotEmptyButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::ExecuteUbergraph_BP_KitSelect_SlotEmptyButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.ExecuteUbergraph_BP_KitSelect_SlotEmptyButton");
		
		UBP_KitSelect_SlotEmptyButton_C_ExecuteUbergraph_BP_KitSelect_SlotEmptyButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnEmptySlotHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::OnEmptySlotHovered__DelegateSignature(EItemSlot ItemSlot, int32_t ItemSubslot, bool bDisabled, bool bHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnEmptySlotHovered__DelegateSignature");
		
		UBP_KitSelect_SlotEmptyButton_C_OnEmptySlotHovered__DelegateSignature_Params params {};
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		params.bDisabled = bDisabled;
		params.bHovered = bHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnItemSlotSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LoadoutCategoryIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SlotEmptyButton_C::OnItemSlotSelected__DelegateSignature(EItemSlot Slot, int32_t SubSlot, int32_t LoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C.OnItemSlotSelected__DelegateSignature");
		
		UBP_KitSelect_SlotEmptyButton_C_OnItemSlotSelected__DelegateSignature_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.LoadoutCategoryIndex = LoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_SlotEmptyButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_SlotEmptyButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C");
		return ptr;
	}

}


