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
	 * 		Name   -> Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OverrideItemSizeBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USizeBox*                                    TargetSizeBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             InventoryWidth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             InventoryHeight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_EquipmentSlotBase_C::OverrideItemSizeBox(class USizeBox* TargetSizeBox, double InventoryWidth, double InventoryHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OverrideItemSizeBox");
		
		UWB_EquipmentSlotBase_C_OverrideItemSizeBox_Params params {};
		params.TargetSizeBox = TargetSizeBox;
		params.InventoryWidth = InventoryWidth;
		params.InventoryHeight = InventoryHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnRemoveItem
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemData                                   InItemData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_EquipmentSlotBase_C::OnRemoveItem(const struct FItemData& InItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnRemoveItem");
		
		UWB_EquipmentSlotBase_C_OnRemoveItem_Params params {};
		params.InItemData = InItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnFinishedItemDataSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemData                                   InItemData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTag                                HandType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                SlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemInventorySize                          InventorySize                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWB_EquipmentSlotBase_C::OnFinishedItemDataSet(const struct FItemData& InItemData, const struct FGameplayTag& HandType, const struct FGameplayTag& SlotType, const struct FItemInventorySize& InventorySize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnFinishedItemDataSet");
		
		UWB_EquipmentSlotBase_C_OnFinishedItemDataSet_Params params {};
		params.InItemData = InItemData;
		params.HandType = HandType;
		params.SlotType = SlotType;
		params.InventorySize = InventorySize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnLeaveItemWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_EquipmentSlotBase_C::OnLeaveItemWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnLeaveItemWidget");
		
		UWB_EquipmentSlotBase_C_OnLeaveItemWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnOverlapItemWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValidSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanEquip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_EquipmentSlotBase_C::OnOverlapItemWidget(const struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.OnOverlapItemWidget");
		
		UWB_EquipmentSlotBase_C_OnOverlapItemWidget_Params params {};
		params.ItemId = ItemId;
		params.bValidSlot = bValidSlot;
		params.bCanEquip = bCanEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.ExecuteUbergraph_WB_EquipmentSlotBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_EquipmentSlotBase_C::ExecuteUbergraph_WB_EquipmentSlotBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EquipmentSlotBase.WB_EquipmentSlotBase_C.ExecuteUbergraph_WB_EquipmentSlotBase");
		
		UWB_EquipmentSlotBase_C_ExecuteUbergraph_WB_EquipmentSlotBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_EquipmentSlotBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_EquipmentSlotBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_EquipmentSlotBase.WB_EquipmentSlotBase_C");
		return ptr;
	}

}


