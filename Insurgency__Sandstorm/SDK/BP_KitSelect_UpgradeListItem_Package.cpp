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
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.GetSlotNameTextVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_UpgradeListItem_C::GetSlotNameTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.GetSlotNameTextVisibility");
		
		UBP_KitSelect_UpgradeListItem_C_GetSlotNameTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.UpdateUpgradeAddData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeListItem_C::UpdateUpgradeAddData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.UpdateUpgradeAddData");
		
		UBP_KitSelect_UpgradeListItem_C_UpdateUpgradeAddData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_KitSelect_UpgradeListItem_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnFocusReceived");
		
		UBP_KitSelect_UpgradeListItem_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.UpdateUpgradeItemData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InUpgradeClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InParentItemSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSupplyCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInSupplyCostVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInPurchasable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNewGear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeListItem_C::UpdateUpgradeItemData(class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InSupplyCost, bool bInSupplyCostVisible, bool bInSelected, bool bInPurchasable, bool bInIsNewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.UpdateUpgradeItemData");
		
		UBP_KitSelect_UpgradeListItem_C_UpdateUpgradeItemData_Params params {};
		params.InUpgradeClass = InUpgradeClass;
		params.InParentItemSlot = InParentItemSlot;
		params.InSupplyCost = InSupplyCost;
		params.bInSupplyCostVisible = bInSupplyCostVisible;
		params.bInSelected = bInSelected;
		params.bInPurchasable = bInPurchasable;
		params.bInIsNewGear = bInIsNewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.BndEvt__BP_KitSelect_UpgradeButton_K2Node_ComponentBoundEvent_0_OnUpgradeListItemClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeListItem_C::BndEvt__BP_KitSelect_UpgradeButton_K2Node_ComponentBoundEvent_0_OnUpgradeListItemClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.BndEvt__BP_KitSelect_UpgradeButton_K2Node_ComponentBoundEvent_0_OnUpgradeListItemClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeListItem_C_BndEvt__BP_KitSelect_UpgradeButton_K2Node_ComponentBoundEvent_0_OnUpgradeListItemClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.BndEvt__BP_KitSelect_UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnAddUpgradeClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeListItem_C::BndEvt__BP_KitSelect_UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnAddUpgradeClicked__DelegateSignature(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.BndEvt__BP_KitSelect_UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnAddUpgradeClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeListItem_C_BndEvt__BP_KitSelect_UpgradeAddButton_K2Node_ComponentBoundEvent_1_OnAddUpgradeClicked__DelegateSignature_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KitSelect_UpgradeListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.Construct");
		
		UBP_KitSelect_UpgradeListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeListItem_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnAddedToFocusPath");
		
		UBP_KitSelect_UpgradeListItem_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_UpgradeListItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnMouseEnter");
		
		UBP_KitSelect_UpgradeListItem_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_UpgradeListItem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnMouseLeave");
		
		UBP_KitSelect_UpgradeListItem_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_UpgradeListItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.PreConstruct");
		
		UBP_KitSelect_UpgradeListItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.ExecuteUbergraph_BP_KitSelect_UpgradeListItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeListItem_C::ExecuteUbergraph_BP_KitSelect_UpgradeListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.ExecuteUbergraph_BP_KitSelect_UpgradeListItem");
		
		UBP_KitSelect_UpgradeListItem_C_ExecuteUbergraph_BP_KitSelect_UpgradeListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemUnhover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlotSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeListItem_C::OnUpgradeListItemUnhover__DelegateSignature(EWeaponUpgradeSlot UpgradeSlotSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemUnhover__DelegateSignature");
		
		UBP_KitSelect_UpgradeListItem_C_OnUpgradeListItemUnhover__DelegateSignature_Params params {};
		params.UpgradeSlotSlot = UpgradeSlotSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeListItem_C::OnUpgradeListItemHover__DelegateSignature(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemHover__DelegateSignature");
		
		UBP_KitSelect_UpgradeListItem_C_OnUpgradeListItemHover__DelegateSignature_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_UpgradeListItem_C::OnUpgradeListItemClicked__DelegateSignature(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C.OnUpgradeListItemClicked__DelegateSignature");
		
		UBP_KitSelect_UpgradeListItem_C_OnUpgradeListItemClicked__DelegateSignature_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_UpgradeListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_UpgradeListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_UpgradeListItem.BP_KitSelect_UpgradeListItem_C");
		return ptr;
	}

}


