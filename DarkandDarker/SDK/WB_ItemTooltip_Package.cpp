/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.FindItemDataGameplayEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemDataGameplayEffect>             ItemDataGameplayEffectArray                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimaryAssetId                             EffectId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemDataGameplayEffect                     FoundItemDataGameplayEffect                                (Parm, OutParm)
	 */
	void UWB_ItemTooltip_C::FindItemDataGameplayEffect(TArray<struct FItemDataGameplayEffect>* ItemDataGameplayEffectArray, const struct FPrimaryAssetId& EffectId, struct FItemDataGameplayEffect* FoundItemDataGameplayEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.FindItemDataGameplayEffect");
		
		UWB_ItemTooltip_C_FindItemDataGameplayEffect_Params params {};
		params.EffectId = EffectId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDataGameplayEffectArray != nullptr)
			*ItemDataGameplayEffectArray = params.ItemDataGameplayEffectArray;
		if (FoundItemDataGameplayEffect != nullptr)
			*FoundItemDataGameplayEffect = params.FoundItemDataGameplayEffect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.Completed_E5EDA09445BB690707F6069D183BA8BC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltip_C::Completed_E5EDA09445BB690707F6069D183BA8BC(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.Completed_E5EDA09445BB690707F6069D183BA8BC");
		
		UWB_ItemTooltip_C_Completed_E5EDA09445BB690707F6069D183BA8BC_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.OnItemData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemData                                   NewItemData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FItemData                                   OldItemData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ItemTooltip_C::OnItemData(const struct FItemData& NewItemData, const struct FItemData& OldItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.OnItemData");
		
		UWB_ItemTooltip_C_OnItemData_Params params {};
		params.NewItemData = NewItemData;
		params.OldItemData = OldItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.OnLoadArtData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltip_C::OnLoadArtData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.OnLoadArtData");
		
		UWB_ItemTooltip_C_OnLoadArtData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipWeapon");
		
		UWB_ItemTooltip_C_UpdateItemTooltipWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipArmor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipArmor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipArmor");
		
		UWB_ItemTooltip_C_UpdateItemTooltipArmor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipUtility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipUtility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipUtility");
		
		UWB_ItemTooltip_C_UpdateItemTooltipUtility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltip");
		
		UWB_ItemTooltip_C_UpdateItemTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatProperty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipStatProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatProperty");
		
		UWB_ItemTooltip_C_UpdateItemTooltipStatProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatAbility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipStatAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatAbility");
		
		UWB_ItemTooltip_C_UpdateItemTooltipStatAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipDesc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipDesc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipDesc");
		
		UWB_ItemTooltip_C_UpdateItemTooltipDesc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipMics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipMics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipMics");
		
		UWB_ItemTooltip_C_UpdateItemTooltipMics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.OnUpdateItemRequirementsFulfilledStatus
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFulfilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EItemRequirementType>                       UnmetRequirementsArray                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ItemTooltip_C::OnUpdateItemRequirementsFulfilledStatus(bool bFulfilled, TArray<EItemRequirementType> UnmetRequirementsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.OnUpdateItemRequirementsFulfilledStatus");
		
		UWB_ItemTooltip_C_OnUpdateItemRequirementsFulfilledStatus_Params params {};
		params.bFulfilled = bFulfilled;
		params.UnmetRequirementsArray = UnmetRequirementsArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipRequirements
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipRequirements");
		
		UWB_ItemTooltip_C_UpdateItemTooltipRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.OnLoadDescData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltip_C::OnLoadDescData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.OnLoadDescData");
		
		UWB_ItemTooltip_C_OnLoadDescData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipAccessory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipAccessory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipAccessory");
		
		UWB_ItemTooltip_C_UpdateItemTooltipAccessory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.OnSetCostInfoData
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMerchantCostInfo>                   InCostInfoArray                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltip_C::OnSetCostInfoData(TArray<struct FMerchantCostInfo> InCostInfoArray, bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.OnSetCostInfoData");
		
		UWB_ItemTooltip_C_OnSetCostInfoData_Params params {};
		params.InCostInfoArray = InCostInfoArray;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.OnRefreshItemName
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ItemTooltip_C::OnRefreshItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.OnRefreshItemName");
		
		UWB_ItemTooltip_C_OnRefreshItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatPropertyDescData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TypeText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ValueText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_ItemTooltip_C::UpdateItemTooltipStatPropertyDescData(const class FText& TypeText, const class FText& ValueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatPropertyDescData");
		
		UWB_ItemTooltip_C_UpdateItemTooltipStatPropertyDescData_Params params {};
		params.TypeText = TypeText;
		params.ValueText = ValueText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltip.WB_ItemTooltip_C.ExecuteUbergraph_WB_ItemTooltip
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltip_C::ExecuteUbergraph_WB_ItemTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltip.WB_ItemTooltip_C.ExecuteUbergraph_WB_ItemTooltip");
		
		UWB_ItemTooltip_C_ExecuteUbergraph_WB_ItemTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemTooltip.WB_ItemTooltip_C");
		return ptr;
	}

}


