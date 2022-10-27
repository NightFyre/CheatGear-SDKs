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
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.InvalidateCachedElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::InvalidateCachedElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.InvalidateCachedElements");
		
		UBP_ProfileAppearance_CosmeticItem_C_InvalidateCachedElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateCache
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::UpdateCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateCache");
		
		UBP_ProfileAppearance_CosmeticItem_C_UpdateCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateExclusion
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::UpdateExclusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateExclusion");
		
		UBP_ProfileAppearance_CosmeticItem_C_UpdateExclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsDLCorBundleItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::IsDLCorBundleItem(bool* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsDLCorBundleItem");
		
		UBP_ProfileAppearance_CosmeticItem_C_IsDLCorBundleItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.SetNewItemNotificationVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::SetNewItemNotificationVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.SetNewItemNotificationVisibility");
		
		UBP_ProfileAppearance_CosmeticItem_C_SetNewItemNotificationVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ProfileAppearance_CosmeticItem_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnFocusReceived");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_ProfileAppearance_CosmeticItem_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetColorAndOpacity_1");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsOwned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bOwned                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::IsOwned(bool* bOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsOwned");
		
		UBP_ProfileAppearance_CosmeticItem_C_IsOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOwned != nullptr)
			*bOwned = params.bOwned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ResetShoppingCart
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::ResetShoppingCart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ResetShoppingCart");
		
		UBP_ProfileAppearance_CosmeticItem_C_ResetShoppingCart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.HasChildCosmetic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bHasChild                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::HasChildCosmetic(bool* bHasChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.HasChildCosmetic");
		
		UBP_ProfileAppearance_CosmeticItem_C_HasChildCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasChild != nullptr)
			*bHasChild = params.bHasChild;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.AddToShoppingCart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::AddToShoppingCart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.AddToShoppingCart");
		
		UBP_ProfileAppearance_CosmeticItem_C_AddToShoppingCart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIncludeBase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::IsEquipped(bool bIncludeBase, bool* Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.IsEquipped");
		
		UBP_ProfileAppearance_CosmeticItem_C_IsEquipped_Params params {};
		params.bIncludeBase = bIncludeBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipped != nullptr)
			*Equipped = params.Equipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Get_NewItemSizeBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::Get_NewItemSizeBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Get_NewItemSizeBox_Visibility_1");
		
		UBP_ProfileAppearance_CosmeticItem_C_Get_NewItemSizeBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateOwnership
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::UpdateOwnership()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.UpdateOwnership");
		
		UBP_ProfileAppearance_CosmeticItem_C_UpdateOwnership_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Get_MainSizeBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::Get_MainSizeBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Get_MainSizeBox_Visibility_1");
		
		UBP_ProfileAppearance_CosmeticItem_C_Get_MainSizeBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetText_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_ProfileAppearance_CosmeticItem_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetText_1");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetLockBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ProfileAppearance_CosmeticItem_C::GetLockBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetLockBackgroundColor");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetLockBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ShowLargeText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::ShowLargeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ShowLargeText");
		
		UBP_ProfileAppearance_CosmeticItem_C_ShowLargeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ShowSmallText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::ShowSmallText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ShowSmallText");
		
		UBP_ProfileAppearance_CosmeticItem_C_ShowSmallText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetVisibility_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::GetVisibility_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetVisibility_2");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetVisibility_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.CostIconVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::CostIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.CostIconVisibility");
		
		UBP_ProfileAppearance_CosmeticItem_C_CostIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.LockedIconVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::LockedIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.LockedIconVisibility");
		
		UBP_ProfileAppearance_CosmeticItem_C_LockedIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetRarityColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ProfileAppearance_CosmeticItem_C::GetRarityColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetRarityColor");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetRarityColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_ProfileAppearance_CosmeticItem_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetVisibility_1");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_ProfileAppearance_CosmeticItem_C::GetBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.GetBackgroundColor");
		
		UBP_ProfileAppearance_CosmeticItem_C_GetBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.PopulateItemText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::PopulateItemText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.PopulateItemText");
		
		UBP_ProfileAppearance_CosmeticItem_C_PopulateItemText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticItem_C_BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnMouseLeave");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnMouseEnter");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnAddedToFocusPath");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnRemovedFromFocusPath");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.Construct");
		
		UBP_ProfileAppearance_CosmeticItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::ExecuteUbergraph_BP_ProfileAppearance_CosmeticItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticItem");
		
		UBP_ProfileAppearance_CosmeticItem_C_ExecuteUbergraph_BP_ProfileAppearance_CosmeticItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     WidgetRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnUnhovered__DelegateSignature(class UWidget* WidgetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnUnhovered__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnUnhovered__DelegateSignature_Params params {};
		params.WidgetRef = WidgetRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnHovered__DelegateSignature(class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnHovered__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnHovered__DelegateSignature_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ProfileAppearance_CosmeticItem_C*        CosmeticButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticItem_C::OnPressed__DelegateSignature(class UBP_ProfileAppearance_CosmeticItem_C* CosmeticButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C.OnPressed__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticItem_C_OnPressed__DelegateSignature_Params params {};
		params.CosmeticButton = CosmeticButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileAppearance_CosmeticItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileAppearance_CosmeticItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileAppearance_CosmeticItem.BP_ProfileAppearance_CosmeticItem_C");
		return ptr;
	}

}


