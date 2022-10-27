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
	 * 		Name   -> Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateAddUpgradeData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          InWeaponSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentLoadoutCategoryIndex                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_LoadoutListItem_C::UpdateAddUpgradeData(EItemSlot InWeaponSlot, int32_t InParentLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateAddUpgradeData");
		
		UBP_KitSelect_LoadoutListItem_C_UpdateAddUpgradeData_Params params {};
		params.InWeaponSlot = InWeaponSlot;
		params.InParentLoadoutCategoryIndex = InParentLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_KitSelect_LoadoutListItem_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.OnFocusReceived");
		
		UBP_KitSelect_LoadoutListItem_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateUpgradeData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InUpgradeClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InParentItemSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentItemSubSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSupplyCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsSupplyCostVisible                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentLoadoutCategoryIndex                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_LoadoutListItem_C::UpdateUpgradeData(class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InParentItemSubSlot, int32_t InSupplyCost, bool InIsSupplyCostVisible, class UClass* InItemClass, int32_t InParentLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateUpgradeData");
		
		UBP_KitSelect_LoadoutListItem_C_UpdateUpgradeData_Params params {};
		params.InUpgradeClass = InUpgradeClass;
		params.InParentItemSlot = InParentItemSlot;
		params.InParentItemSubSlot = InParentItemSubSlot;
		params.InSupplyCost = InSupplyCost;
		params.InIsSupplyCostVisible = InIsSupplyCostVisible;
		params.InItemClass = InItemClass;
		params.InParentLoadoutCategoryIndex = InParentLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateItemData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InSupplyCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLoadoutCategoryIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_LoadoutListItem_C::UpdateItemData(int32_t InSupplyCost, EItemSlot InItemSlot, int32_t InSubSlot, class UClass* InItemClass, int32_t InLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateItemData");
		
		UBP_KitSelect_LoadoutListItem_C_UpdateItemData_Params params {};
		params.InSupplyCost = InSupplyCost;
		params.InItemSlot = InItemSlot;
		params.InSubSlot = InSubSlot;
		params.InItemClass = InItemClass;
		params.InLoadoutCategoryIndex = InLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateEmptyData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSlotText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInDisabledSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNewGear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InLoadoutCategoryIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_LoadoutListItem_C::UpdateEmptyData(class FText* InSlotText, EItemSlot InItemSlot, int32_t InSubSlot, bool bInDisabledSlot, bool bInIsNewGear, int32_t InLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateEmptyData");
		
		UBP_KitSelect_LoadoutListItem_C_UpdateEmptyData_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_LoadoutListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_LoadoutListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C");
		return ptr;
	}

}


