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
	 * 		Name   -> Function WB_DealTableSell.WB_DealTableSell_C.OnMessageReceived_E2C02A554E1053562145B488A3F64D4E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableSell_C::OnMessageReceived_E2C02A554E1053562145B488A3F64D4E(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableSell.WB_DealTableSell_C.OnMessageReceived_E2C02A554E1053562145B488A3F64D4E");
		
		UWB_DealTableSell_C_OnMessageReceived_E2C02A554E1053562145B488A3F64D4E_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableSell.WB_DealTableSell_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_DealTableSell_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableSell.WB_DealTableSell_C.Construct");
		
		UWB_DealTableSell_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableSell.WB_DealTableSell_C.EventFMsgDealTableTotalSellPriceNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgDealTableTotalSellPriceNotify           Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_DealTableSell_C::EventFMsgDealTableTotalSellPriceNotify(const struct FMsgDealTableTotalSellPriceNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableSell.WB_DealTableSell_C.EventFMsgDealTableTotalSellPriceNotify");
		
		UWB_DealTableSell_C_EventFMsgDealTableTotalSellPriceNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableSell.WB_DealTableSell_C.OnDealButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DealTableSell_C::OnDealButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableSell.WB_DealTableSell_C.OnDealButtonClicked");
		
		UWB_DealTableSell_C_OnDealButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableSell.WB_DealTableSell_C.On Load Sound Data
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableSell_C::OnLoadSoundData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableSell.WB_DealTableSell_C.On Load Sound Data");
		
		UWB_DealTableSell_C_OnLoadSoundData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableSell.WB_DealTableSell_C.ExecuteUbergraph_WB_DealTableSell
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableSell_C::ExecuteUbergraph_WB_DealTableSell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableSell.WB_DealTableSell_C.ExecuteUbergraph_WB_DealTableSell");
		
		UWB_DealTableSell_C_ExecuteUbergraph_WB_DealTableSell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_DealTableSell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_DealTableSell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_DealTableSell.WB_DealTableSell_C");
		return ptr;
	}

}


