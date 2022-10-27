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
	 * 		Name   -> Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.Get_TextBlock_DeadChatNote_Text_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_VOIP_Indicator_C::Get_TextBlock_DeadChatNote_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.Get_TextBlock_DeadChatNote_Text_1");
		
		UWBP_VOIP_Indicator_C_Get_TextBlock_DeadChatNote_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetHearingNoteVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_VOIP_Indicator_C::GetHearingNoteVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetHearingNoteVis");
		
		UWBP_VOIP_Indicator_C_GetHearingNoteVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetRadioVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_VOIP_Indicator_C::GetRadioVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetRadioVis");
		
		UWBP_VOIP_Indicator_C_GetRadioVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetTalkVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_VOIP_Indicator_C::GetTalkVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetTalkVis");
		
		UWBP_VOIP_Indicator_C_GetTalkVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_VOIP_Indicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.Construct");
		
		UWBP_VOIP_Indicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.ExecuteUbergraph_WBP_VOIP_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIP_Indicator_C::ExecuteUbergraph_WBP_VOIP_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.ExecuteUbergraph_WBP_VOIP_Indicator");
		
		UWBP_VOIP_Indicator_C_ExecuteUbergraph_WBP_VOIP_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_VOIP_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VOIP_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VOIP_Indicator.WBP_VOIP_Indicator_C");
		return ptr;
	}

}


