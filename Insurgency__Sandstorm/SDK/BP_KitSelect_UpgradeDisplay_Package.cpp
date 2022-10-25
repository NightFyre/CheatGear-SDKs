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
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.UpdateUpgradeDisplayData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InUpgradeClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InParentItemSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentItemSubSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSupplyCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsSupplyCostVisible                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentLoadoutCategoryIndex                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::UpdateUpgradeDisplayData(class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InParentItemSubSlot, int32_t InSupplyCost, bool bInIsSupplyCostVisible, class UClass* InItemClass, int32_t InParentLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.UpdateUpgradeDisplayData");
		
		UBP_KitSelect_UpgradeDisplay_C_UpdateUpgradeDisplayData_Params params {};
		params.InUpgradeClass = InUpgradeClass;
		params.InParentItemSlot = InParentItemSlot;
		params.InParentItemSubSlot = InParentItemSubSlot;
		params.InSupplyCost = InSupplyCost;
		params.bInIsSupplyCostVisible = bInIsSupplyCostVisible;
		params.InItemClass = InItemClass;
		params.InParentLoadoutCategoryIndex = InParentLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_SupplyCostWidget_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_UpgradeDisplay_C::Get_SupplyCostWidget_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_SupplyCostWidget_Visibility_1");
		
		UBP_KitSelect_UpgradeDisplay_C_Get_SupplyCostWidget_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.HandleGamepadRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::HandleGamepadRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.HandleGamepadRemove");
		
		UBP_KitSelect_UpgradeDisplay_C_HandleGamepadRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_KitSelect_UpgradeDisplay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnKeyDown");
		
		UBP_KitSelect_UpgradeDisplay_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_KitSelect_UpgradeDisplay_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnFocusReceived");
		
		UBP_KitSelect_UpgradeDisplay_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.SetClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::SetClass(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.SetClass");
		
		UBP_KitSelect_UpgradeDisplay_C_SetClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.GetButtonFgColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_UpgradeDisplay_C::GetButtonFgColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.GetButtonFgColor");
		
		UBP_KitSelect_UpgradeDisplay_C_GetButtonFgColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_Background_BrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_KitSelect_UpgradeDisplay_C::Get_Background_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_Background_BrushColor_1");
		
		UBP_KitSelect_UpgradeDisplay_C_Get_Background_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.RefreshLeftTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::RefreshLeftTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.RefreshLeftTab");
		
		UBP_KitSelect_UpgradeDisplay_C_RefreshLeftTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_SupplyCostWidget_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_UpgradeDisplay_C::Get_SupplyCostWidget_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.Get_SupplyCostWidget_Text_1");
		
		UBP_KitSelect_UpgradeDisplay_C_Get_SupplyCostWidget_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnMouseLeave");
		
		UBP_KitSelect_UpgradeDisplay_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeDisplay_C_BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnClassSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnClassSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnClassSet");
		
		UBP_KitSelect_UpgradeDisplay_C_OnClassSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnAddedToFocusPath");
		
		UBP_KitSelect_UpgradeDisplay_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnRemovedFromFocusPath");
		
		UBP_KitSelect_UpgradeDisplay_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnMouseEnter");
		
		UBP_KitSelect_UpgradeDisplay_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_UpgradeDisplay_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.PreConstruct");
		
		UBP_KitSelect_UpgradeDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.ExecuteUbergraph_BP_KitSelect_UpgradeDisplay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::ExecuteUbergraph_BP_KitSelect_UpgradeDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.ExecuteUbergraph_BP_KitSelect_UpgradeDisplay");
		
		UBP_KitSelect_UpgradeDisplay_C_ExecuteUbergraph_BP_KitSelect_UpgradeDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ParentItemClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnHover__DelegateSignature(class UClass* UpgradeClass, class UClass* ParentItemClass, bool HoverValue, EItemSlot ItemSlot, int32_t ItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnHover__DelegateSignature");
		
		UBP_KitSelect_UpgradeDisplay_C_OnHover__DelegateSignature_Params params {};
		params.UpgradeClass = UpgradeClass;
		params.ParentItemClass = ParentItemClass;
		params.HoverValue = HoverValue;
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnUnequipClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          ParentSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnUnequipClicked__DelegateSignature(class UClass* Class, EItemSlot ParentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnUnequipClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeDisplay_C_OnUnequipClicked__DelegateSignature_Params params {};
		params.Class = Class;
		params.ParentSlot = ParentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ParentSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ParentLoadoutCategoryIndex                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeDisplay_C::OnClicked__DelegateSignature(EItemSlot ParentSlot, int32_t ParentLoadoutCategoryIndex, class UClass* UpgradeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C.OnClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeDisplay_C_OnClicked__DelegateSignature_Params params {};
		params.ParentSlot = ParentSlot;
		params.ParentLoadoutCategoryIndex = ParentLoadoutCategoryIndex;
		params.UpgradeClass = UpgradeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_UpgradeDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_UpgradeDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_UpgradeDisplay.BP_KitSelect_UpgradeDisplay_C");
		return ptr;
	}

}


