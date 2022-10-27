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
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetActionNames
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FName>                                KeyActions                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelectionRow_C::GetActionNames(TArray<class FName>* KeyActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetActionNames");
		
		UBP_WeaponSelectionRow_C_GetActionNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyActions != nullptr)
			*KeyActions = params.KeyActions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.UpdateItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AItemEquipable*                              NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          NewItemSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelectionRow_C::UpdateItem(class AItemEquipable* NewItem, EItemSlot NewItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.UpdateItem");
		
		UBP_WeaponSelectionRow_C_UpdateItem_Params params {};
		params.NewItem = NewItem;
		params.NewItemSlot = NewItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.UpdateSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WeaponSelectionRow_C::UpdateSelected(bool bNewSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.UpdateSelected");
		
		UBP_WeaponSelectionRow_C_UpdateSelected_Params params {};
		params.bNewSelected = bNewSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetBgColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_WeaponSelectionRow_C::GetBgColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetBgColor");
		
		UBP_WeaponSelectionRow_C_GetBgColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_WeaponSelectionRow_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetTextColor");
		
		UBP_WeaponSelectionRow_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_WeaponSelectionRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.Construct");
		
		UBP_WeaponSelectionRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.OnUpdateUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WeaponSelectionRow_C::OnUpdateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.OnUpdateUI");
		
		UBP_WeaponSelectionRow_C_OnUpdateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.ExecuteUbergraph_BP_WeaponSelectionRow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelectionRow_C::ExecuteUbergraph_BP_WeaponSelectionRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.ExecuteUbergraph_BP_WeaponSelectionRow");
		
		UBP_WeaponSelectionRow_C_ExecuteUbergraph_BP_WeaponSelectionRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WeaponSelectionRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WeaponSelectionRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WeaponSelectionRow.BP_WeaponSelectionRow_C");
		return ptr;
	}

}


