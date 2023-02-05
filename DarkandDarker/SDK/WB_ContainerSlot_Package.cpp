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
	 * 		Name   -> Function WB_ContainerSlot.WB_ContainerSlot_C.OnSetNewItem
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFullfilledAll                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ContainerSlot_C::OnSetNewItem(bool bFullfilledAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ContainerSlot.WB_ContainerSlot_C.OnSetNewItem");
		
		UWB_ContainerSlot_C_OnSetNewItem_Params params {};
		params.bFullfilledAll = bFullfilledAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ContainerSlot.WB_ContainerSlot_C.OnRemoveItem
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_ContainerSlot_C::OnRemoveItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ContainerSlot.WB_ContainerSlot_C.OnRemoveItem");
		
		UWB_ContainerSlot_C_OnRemoveItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ContainerSlot.WB_ContainerSlot_C.OnLeaveItemWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWB_ContainerSlot_C::OnLeaveItemWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ContainerSlot.WB_ContainerSlot_C.OnLeaveItemWidget");
		
		UWB_ContainerSlot_C_OnLeaveItemWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ContainerSlot.WB_ContainerSlot_C.OnOverlapItemWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanSetItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ContainerSlot_C::OnOverlapItemWidget(bool bCanSetItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ContainerSlot.WB_ContainerSlot_C.OnOverlapItemWidget");
		
		UWB_ContainerSlot_C_OnOverlapItemWidget_Params params {};
		params.bCanSetItem = bCanSetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ContainerSlot.WB_ContainerSlot_C.ExecuteUbergraph_WB_ContainerSlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ContainerSlot_C::ExecuteUbergraph_WB_ContainerSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ContainerSlot.WB_ContainerSlot_C.ExecuteUbergraph_WB_ContainerSlot");
		
		UWB_ContainerSlot_C_ExecuteUbergraph_WB_ContainerSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ContainerSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ContainerSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ContainerSlot.WB_ContainerSlot_C");
		return ptr;
	}

}


