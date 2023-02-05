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
	 * 		Name   -> Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MerchantInvenTabBot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.Construct");
		
		UWB_MerchantInvenTabBot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.OnActiveServiceChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWidgetMerchantServiceType                         InServiceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantInvenTabBot_C::OnActiveServiceChanged(EWidgetMerchantServiceType InServiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.OnActiveServiceChanged");
		
		UWB_MerchantInvenTabBot_C_OnActiveServiceChanged_Params params {};
		params.InServiceType = InServiceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.ExecuteUbergraph_WB_MerchantInvenTabBot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantInvenTabBot_C::ExecuteUbergraph_WB_MerchantInvenTabBot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.ExecuteUbergraph_WB_MerchantInvenTabBot");
		
		UWB_MerchantInvenTabBot_C_ExecuteUbergraph_WB_MerchantInvenTabBot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MerchantInvenTabBot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MerchantInvenTabBot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C");
		return ptr;
	}

}


