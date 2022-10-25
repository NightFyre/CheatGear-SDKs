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
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ShowOwned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::ShowOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ShowOwned");
		
		UBP_MainMenu_OnlineStore_C_ShowOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoResetProfile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::DoResetProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoResetProfile");
		
		UBP_MainMenu_OnlineStore_C_DoResetProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.NavigateBack");
		
		UBP_MainMenu_OnlineStore_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClearNewIndications
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::ClearNewIndications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClearNewIndications");
		
		UBP_MainMenu_OnlineStore_C_ClearNewIndications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_OnlineStore_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnKeyUp");
		
		UBP_MainMenu_OnlineStore_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.SelectFirstVisibleItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::SelectFirstVisibleItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.SelectFirstVisibleItem");
		
		UBP_MainMenu_OnlineStore_C_SelectFirstVisibleItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_OnlineStore_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnFocusReceived");
		
		UBP_MainMenu_OnlineStore_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateHintsButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::UpdateHintsButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateHintsButtons");
		
		UBP_MainMenu_OnlineStore_C_UpdateHintsButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_OnlineStore_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnCustomNavigation");
		
		UBP_MainMenu_OnlineStore_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.SetNavigationRules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::SetNavigationRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.SetNavigationRules");
		
		UBP_MainMenu_OnlineStore_C_SetNavigationRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoUpDownNaviagtion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_OnlineStore_C::DoUpDownNaviagtion(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoUpDownNaviagtion");
		
		UBP_MainMenu_OnlineStore_C_DoUpDownNaviagtion_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoLeftRightNaviagtion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_OnlineStore_C::DoLeftRightNaviagtion(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoLeftRightNaviagtion");
		
		UBP_MainMenu_OnlineStore_C_DoLeftRightNaviagtion_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateCategoryNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::UpdateCategoryNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateCategoryNotification");
		
		UBP_MainMenu_OnlineStore_C_UpdateCategoryNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.HasNewItemsByCategoryAndOperation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EStoreItemCategory                                 InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InOperationName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutHasNew                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_OnlineStore_C::HasNewItemsByCategoryAndOperation(EStoreItemCategory InCategory, const class FName& InOperationName, bool* OutHasNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.HasNewItemsByCategoryAndOperation");
		
		UBP_MainMenu_OnlineStore_C_HasNewItemsByCategoryAndOperation_Params params {};
		params.InCategory = InCategory;
		params.InOperationName = InOperationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHasNew != nullptr)
			*OutHasNew = params.OutHasNew;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClickStoreItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_Item_C*                      InStoreItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::ClickStoreItem(class UBP_OnlineStore_Item_C* InStoreItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClickStoreItem");
		
		UBP_MainMenu_OnlineStore_C_ClickStoreItem_Params params {};
		params.InStoreItem = InStoreItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.PurchaseItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStoreItem*                                  PurchasedItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::PurchaseItem(class UStoreItem* PurchasedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.PurchaseItem");
		
		UBP_MainMenu_OnlineStore_C_PurchaseItem_Params params {};
		params.PurchasedItem = PurchasedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.GetListByCategoryAndOperation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EStoreItemCategory                                 InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InOperationName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UStoreItem*>                          OutStoreItems                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::GetListByCategoryAndOperation(EStoreItemCategory InCategory, const class FName& InOperationName, TArray<class UStoreItem*>* OutStoreItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.GetListByCategoryAndOperation");
		
		UBP_MainMenu_OnlineStore_C_GetListByCategoryAndOperation_Params params {};
		params.InCategory = InCategory;
		params.InOperationName = InOperationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStoreItems != nullptr)
			*OutStoreItems = params.OutStoreItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClearItemsList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::ClearItemsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClearItemsList");
		
		UBP_MainMenu_OnlineStore_C_ClearItemsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateSelectedItemData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::UpdateSelectedItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateSelectedItemData");
		
		UBP_MainMenu_OnlineStore_C_UpdateSelectedItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ChangeSelectedItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_Item_C*                      InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::ChangeSelectedItem(class UBP_OnlineStore_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ChangeSelectedItem");
		
		UBP_MainMenu_OnlineStore_C_ChangeSelectedItem_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.PopulateItemsByList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UStoreItem*>                          InItemsList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::PopulateItemsByList(TArray<class UStoreItem*>* InItemsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.PopulateItemsByList");
		
		UBP_MainMenu_OnlineStore_C_PopulateItemsByList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemsList != nullptr)
			*InItemsList = params.InItemsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BindActionsToItemButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_Item_C*                      InItemButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::BindActionsToItemButton(class UBP_OnlineStore_Item_C* InItemButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BindActionsToItemButton");
		
		UBP_MainMenu_OnlineStore_C_BindActionsToItemButton_Params params {};
		params.InItemButton = InItemButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BindActionsToCategoriesButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::BindActionsToCategoriesButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BindActionsToCategoriesButtons");
		
		UBP_MainMenu_OnlineStore_C_BindActionsToCategoriesButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateSelectedCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_CategoryBaseButton_C*        InNewCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::UpdateSelectedCategory(class UBP_OnlineStore_CategoryBaseButton_C* InNewCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateSelectedCategory");
		
		UBP_MainMenu_OnlineStore_C_UpdateSelectedCategory_Params params {};
		params.InNewCategory = InNewCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ChangeSelectedCategoryButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_CategoryBaseButton_C*        InCategoryButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::ChangeSelectedCategoryButton(class UBP_OnlineStore_CategoryBaseButton_C* InCategoryButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ChangeSelectedCategoryButton");
		
		UBP_MainMenu_OnlineStore_C_ChangeSelectedCategoryButton_Params params {};
		params.InCategoryButton = InCategoryButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_CategoryBaseButton_C*        SelectedCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(class UBP_OnlineStore_CategoryBaseButton_C* SelectedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature_Params params {};
		params.SelectedCategory = SelectedCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OnlineStore_CategoryBaseButton_C*        SelectedCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature(class UBP_OnlineStore_CategoryBaseButton_C* SelectedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature_Params params {};
		params.SelectedCategory = SelectedCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnStoreItemListUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::OnStoreItemListUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnStoreItemListUpdated");
		
		UBP_MainMenu_OnlineStore_C_OnStoreItemListUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnHasSalesChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::OnHasSalesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnHasSalesChanged");
		
		UBP_MainMenu_OnlineStore_C_OnHasSalesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.Construct");
		
		UBP_MainMenu_OnlineStore_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ExecuteUbergraph_BP_MainMenu_OnlineStore
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_OnlineStore_C::ExecuteUbergraph_BP_MainMenu_OnlineStore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ExecuteUbergraph_BP_MainMenu_OnlineStore");
		
		UBP_MainMenu_OnlineStore_C_ExecuteUbergraph_BP_MainMenu_OnlineStore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_OnlineStore_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_OnlineStore_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_OnlineStore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_OnlineStore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C");
		return ptr;
	}

}


