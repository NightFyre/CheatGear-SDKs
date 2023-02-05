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
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_DealTableCraft_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.Construct");
		
		UWB_DealTableCraft_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.ClearDatas
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableCraft_C::ClearDatas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.ClearDatas");
		
		UWB_DealTableCraft_C_ClearDatas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.OnFillButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableCraft_C::OnFillButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.OnFillButtonClicked");
		
		UWB_DealTableCraft_C_OnFillButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.OnDealButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableCraft_C::OnDealButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.OnDealButtonClicked");
		
		UWB_DealTableCraft_C_OnDealButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.OnRemoveStockCraftData
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_DealTableCraft_C::OnRemoveStockCraftData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.OnRemoveStockCraftData");
		
		UWB_DealTableCraft_C_OnRemoveStockCraftData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.OnSetStockCraftData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FStockCraftData                             InStockCraftData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_DealTableCraft_C::OnSetStockCraftData(const struct FStockCraftData& InStockCraftData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.OnSetStockCraftData");
		
		UWB_DealTableCraft_C_OnSetStockCraftData_Params params {};
		params.InStockCraftData = InStockCraftData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.OnSuccessStockCraft
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_DealTableCraft_C::OnSuccessStockCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.OnSuccessStockCraft");
		
		UWB_DealTableCraft_C_OnSuccessStockCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.OnStockCraftFillItemsResponse
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFillSucceed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FStockCraftRequiredData>             ResultRequiredDataArray                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_DealTableCraft_C::OnStockCraftFillItemsResponse(bool bFillSucceed, TArray<struct FStockCraftRequiredData> ResultRequiredDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.OnStockCraftFillItemsResponse");
		
		UWB_DealTableCraft_C_OnStockCraftFillItemsResponse_Params params {};
		params.bFillSucceed = bFillSucceed;
		params.ResultRequiredDataArray = ResultRequiredDataArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableCraft.WB_DealTableCraft_C.ExecuteUbergraph_WB_DealTableCraft
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableCraft_C::ExecuteUbergraph_WB_DealTableCraft(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableCraft.WB_DealTableCraft_C.ExecuteUbergraph_WB_DealTableCraft");
		
		UWB_DealTableCraft_C_ExecuteUbergraph_WB_DealTableCraft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_DealTableCraft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_DealTableCraft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_DealTableCraft.WB_DealTableCraft_C");
		return ptr;
	}

}


