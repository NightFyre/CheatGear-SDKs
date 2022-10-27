/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.Finished_54BC5F4D4E481384960AD59474319862
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_TextChat_OutputListing_C::Finished_54BC5F4D4E481384960AD59474319862()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.Finished_54BC5F4D4E481384960AD59474319862");
		
		UWBP_HUDElement_TextChat_OutputListing_C_Finished_54BC5F4D4E481384960AD59474319862_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.LifetimeExpired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_TextChat_OutputListing_C::LifetimeExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.LifetimeExpired");
		
		UWBP_HUDElement_TextChat_OutputListing_C_LifetimeExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HUDElement_TextChat_OutputListing_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.OnInitialized");
		
		UWBP_HUDElement_TextChat_OutputListing_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.SetupListing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDTextChatMsgInfo*                          Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_OutputListing_C::SetupListing(class UHDTextChatMsgInfo* Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.SetupListing");
		
		UWBP_HUDElement_TextChat_OutputListing_C_SetupListing_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_OutputListing_C::ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing");
		
		UWBP_HUDElement_TextChat_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_TextChat_OutputListing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_TextChat_OutputListing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C");
		return ptr;
	}

}


