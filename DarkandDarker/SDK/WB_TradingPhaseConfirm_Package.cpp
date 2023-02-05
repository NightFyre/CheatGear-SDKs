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
	 * 		Name   -> Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.Get Trade Fee Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWB_TradingPhaseConfirm_C::GetTradeFeeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.Get Trade Fee Text");
		
		UWB_TradingPhaseConfirm_C_GetTradeFeeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TradingPhaseConfirm_C::BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UWB_TradingPhaseConfirm_C_BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.ExecuteUbergraph_WB_TradingPhaseConfirm
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_TradingPhaseConfirm_C::ExecuteUbergraph_WB_TradingPhaseConfirm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.ExecuteUbergraph_WB_TradingPhaseConfirm");
		
		UWB_TradingPhaseConfirm_C_ExecuteUbergraph_WB_TradingPhaseConfirm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_TradingPhaseConfirm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_TradingPhaseConfirm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C");
		return ptr;
	}

}


