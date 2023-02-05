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
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_DealTableBuy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.Construct");
		
		UWB_DealTableBuy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.BeforeSetStockBuySellData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableBuy_C::BeforeSetStockBuySellData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.BeforeSetStockBuySellData");
		
		UWB_DealTableBuy_C_BeforeSetStockBuySellData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.OnRemoveStockBuyData
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_DealTableBuy_C::OnRemoveStockBuyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.OnRemoveStockBuyData");
		
		UWB_DealTableBuy_C_OnRemoveStockBuyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.OnSetStockBuyData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FStockBuyData                               InStockBuyBata                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_DealTableBuy_C::OnSetStockBuyData(const struct FStockBuyData& InStockBuyBata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.OnSetStockBuyData");
		
		UWB_DealTableBuy_C_OnSetStockBuyData_Params params {};
		params.InStockBuyBata = InStockBuyBata;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.OnFillButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableBuy_C::OnFillButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.OnFillButtonClicked");
		
		UWB_DealTableBuy_C_OnFillButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.OnDealButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableBuy_C::OnDealButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.OnDealButtonClicked");
		
		UWB_DealTableBuy_C_OnDealButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.OnStockBuyFillItemsResponse
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFillSucceed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FStockBuyRequiredData>               ResultRequiredDataArray                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_DealTableBuy_C::OnStockBuyFillItemsResponse(bool bFillSucceed, TArray<struct FStockBuyRequiredData> ResultRequiredDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.OnStockBuyFillItemsResponse");
		
		UWB_DealTableBuy_C_OnStockBuyFillItemsResponse_Params params {};
		params.bFillSucceed = bFillSucceed;
		params.ResultRequiredDataArray = ResultRequiredDataArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.OnSuccessStockBuy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_DealTableBuy_C::OnSuccessStockBuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.OnSuccessStockBuy");
		
		UWB_DealTableBuy_C_OnSuccessStockBuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.On Load Sound Data
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableBuy_C::OnLoadSoundData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.On Load Sound Data");
		
		UWB_DealTableBuy_C_OnLoadSoundData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableBuy.WB_DealTableBuy_C.ExecuteUbergraph_WB_DealTableBuy
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableBuy_C::ExecuteUbergraph_WB_DealTableBuy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableBuy.WB_DealTableBuy_C.ExecuteUbergraph_WB_DealTableBuy");
		
		UWB_DealTableBuy_C_ExecuteUbergraph_WB_DealTableBuy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_DealTableBuy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_DealTableBuy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_DealTableBuy.WB_DealTableBuy_C");
		return ptr;
	}

}


