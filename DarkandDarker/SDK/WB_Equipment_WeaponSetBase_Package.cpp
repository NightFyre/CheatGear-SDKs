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
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.SetSlotColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanEquip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Equipment_WeaponSetBase_C::SetSlotColor(const struct FPrimaryAssetId& ItemId, bool bCanEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.SetSlotColor");
		
		UWB_Equipment_WeaponSetBase_C_SetSlotColor_Params params {};
		params.ItemId = ItemId;
		params.bCanEquip = bCanEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OverrideItemSizeBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USizeBox*                                    TargetSizeBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             InventoryWidth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             InventoryHeight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Equipment_WeaponSetBase_C::OverrideItemSizeBox(class USizeBox* TargetSizeBox, double InventoryWidth, double InventoryHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OverrideItemSizeBox");
		
		UWB_Equipment_WeaponSetBase_C_OverrideItemSizeBox_Params params {};
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
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_Equipment_WeaponSetBase_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnInitialized");
		
		UWB_Equipment_WeaponSetBase_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnFinishedItemDataSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemData                                   InItemData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTag                                HandType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                SlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemInventorySize                          InventorySize                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWB_Equipment_WeaponSetBase_C::OnFinishedItemDataSet(const struct FItemData& InItemData, const struct FGameplayTag& HandType, const struct FGameplayTag& SlotType, const struct FItemInventorySize& InventorySize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnFinishedItemDataSet");
		
		UWB_Equipment_WeaponSetBase_C_OnFinishedItemDataSet_Params params {};
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
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnOverlapItemWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValidSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanEquip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Equipment_WeaponSetBase_C::OnOverlapItemWidget(const struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnOverlapItemWidget");
		
		UWB_Equipment_WeaponSetBase_C_OnOverlapItemWidget_Params params {};
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
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnLeaveItemWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_Equipment_WeaponSetBase_C::OnLeaveItemWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnLeaveItemWidget");
		
		UWB_Equipment_WeaponSetBase_C_OnLeaveItemWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.ExecuteUbergraph_WB_Equipment_WeaponSetBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Equipment_WeaponSetBase_C::ExecuteUbergraph_WB_Equipment_WeaponSetBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.ExecuteUbergraph_WB_Equipment_WeaponSetBase");
		
		UWB_Equipment_WeaponSetBase_C_ExecuteUbergraph_WB_Equipment_WeaponSetBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Equipment_WeaponSetBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Equipment_WeaponSetBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C");
		return ptr;
	}

}


