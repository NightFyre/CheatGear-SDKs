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
	 * 		Name   -> Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_VOIPOwnerChatIndicator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.PreConstruct");
		
		UWBP_VOIPOwnerChatIndicator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_VOIPOwnerChatIndicator_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.OnInitialized");
		
		UWBP_VOIPOwnerChatIndicator_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_VOIPOwnerChatIndicator_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.Activate");
		
		UWBP_VOIPOwnerChatIndicator_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_VOIPOwnerChatIndicator_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.Deactivate");
		
		UWBP_VOIPOwnerChatIndicator_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.InputAnimFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_VOIPOwnerChatIndicator_C::InputAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.InputAnimFinished");
		
		UWBP_VOIPOwnerChatIndicator_C_InputAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.ExecuteUbergraph_WBP_VOIPOwnerChatIndicator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIPOwnerChatIndicator_C::ExecuteUbergraph_WBP_VOIPOwnerChatIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C.ExecuteUbergraph_WBP_VOIPOwnerChatIndicator");
		
		UWBP_VOIPOwnerChatIndicator_C_ExecuteUbergraph_WBP_VOIPOwnerChatIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_VOIPOwnerChatIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VOIPOwnerChatIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C");
		return ptr;
	}

}


