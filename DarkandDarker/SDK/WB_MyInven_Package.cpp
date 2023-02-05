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
	 * 		Name   -> Function WB_MyInven.WB_MyInven_C.OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MyInven_C::OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MyInven.WB_MyInven_C.OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D");
		
		UWB_MyInven_C_OnMessageReceived_5AC46FC14F5308C86CAA6FA2B9CFA42D_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MyInven.WB_MyInven_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MyInven_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MyInven.WB_MyInven_C.Construct");
		
		UWB_MyInven_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MyInven.WB_MyInven_C.EventFMsgWidgetPlayerInventoryTabActiveNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetPlayerInventoryTabActiveNotify    Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_MyInven_C::EventFMsgWidgetPlayerInventoryTabActiveNotify(const struct FMsgWidgetPlayerInventoryTabActiveNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MyInven.WB_MyInven_C.EventFMsgWidgetPlayerInventoryTabActiveNotify");
		
		UWB_MyInven_C_EventFMsgWidgetPlayerInventoryTabActiveNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MyInven.WB_MyInven_C.ExecuteUbergraph_WB_MyInven
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MyInven_C::ExecuteUbergraph_WB_MyInven(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MyInven.WB_MyInven_C.ExecuteUbergraph_WB_MyInven");
		
		UWB_MyInven_C_ExecuteUbergraph_WB_MyInven_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MyInven_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MyInven_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MyInven.WB_MyInven_C");
		return ptr;
	}

}


