/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage.WBP_EngineMessage_C.GetSuffixVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_EngineMessage_C::GetSuffixVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage.WBP_EngineMessage_C.GetSuffixVis");
		
		UWBP_EngineMessage_C_GetSuffixVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage.WBP_EngineMessage_C.GetPrefixVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_EngineMessage_C::GetPrefixVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage.WBP_EngineMessage_C.GetPrefixVis");
		
		UWBP_EngineMessage_C_GetPrefixVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage.WBP_EngineMessage_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_EngineMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage.WBP_EngineMessage_C.Construct");
		
		UWBP_EngineMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage.WBP_EngineMessage_C.SetMessageColour
	 * 		Flags  -> ()
	 */
	void UWBP_EngineMessage_C::SetMessageColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage.WBP_EngineMessage_C.SetMessageColour");
		
		UWBP_EngineMessage_C_SetMessageColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage.WBP_EngineMessage_C.OnAnimationFinished_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_EngineMessage_C::OnAnimationFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage.WBP_EngineMessage_C.OnAnimationFinished_Event_1");
		
		UWBP_EngineMessage_C_OnAnimationFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage.WBP_EngineMessage_C.ExecuteUbergraph_WBP_EngineMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EngineMessage_C::ExecuteUbergraph_WBP_EngineMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage.WBP_EngineMessage_C.ExecuteUbergraph_WBP_EngineMessage");
		
		UWBP_EngineMessage_C_ExecuteUbergraph_WBP_EngineMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EngineMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EngineMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EngineMessage.WBP_EngineMessage_C");
		return ptr;
	}

}


