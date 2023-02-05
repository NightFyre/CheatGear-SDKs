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
	 * 		Name   -> Function WB_MerchantList.WB_MerchantList_C.OnAddMerchantListSlotWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 AddedSlotWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantList_C::OnAddMerchantListSlotWidget(class UUserWidget* AddedSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantList.WB_MerchantList_C.OnAddMerchantListSlotWidget");
		
		UWB_MerchantList_C_OnAddMerchantListSlotWidget_Params params {};
		params.AddedSlotWidget = AddedSlotWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantList.WB_MerchantList_C.OnRemoveAllMerchantListSlotWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_MerchantList_C::OnRemoveAllMerchantListSlotWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantList.WB_MerchantList_C.OnRemoveAllMerchantListSlotWidget");
		
		UWB_MerchantList_C_OnRemoveAllMerchantListSlotWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantList.WB_MerchantList_C.ExecuteUbergraph_WB_MerchantList
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantList_C::ExecuteUbergraph_WB_MerchantList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantList.WB_MerchantList_C.ExecuteUbergraph_WB_MerchantList");
		
		UWB_MerchantList_C_ExecuteUbergraph_WB_MerchantList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MerchantList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MerchantList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MerchantList.WB_MerchantList_C");
		return ptr;
	}

}


