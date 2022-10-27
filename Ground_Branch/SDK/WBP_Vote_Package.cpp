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
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.Parse Mission Option
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Parameter                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Vote_C::Parse_Mission_Option(const class FString& OptionString, class FString* Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.Parse Mission Option");
		
		UWBP_Vote_C_Parse_Mission_Option_Params params {};
		params.OptionString = OptionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Parameter != nullptr)
			*Parameter = params.Parameter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.GetMapAndOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Combined                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Vote_C::GetMapAndOptions(class FString* Combined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.GetMapAndOptions");
		
		UWBP_Vote_C_GetMapAndOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Combined != nullptr)
			*Combined = params.Combined;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.GetVotesNo
	 * 		Flags  -> ()
	 */
	class FText UWBP_Vote_C::GetVotesNo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.GetVotesNo");
		
		UWBP_Vote_C_GetVotesNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.GetVotesYes
	 * 		Flags  -> ()
	 */
	class FText UWBP_Vote_C::GetVotesYes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.GetVotesYes");
		
		UWBP_Vote_C_GetVotesYes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.GetVotingTimeLeft
	 * 		Flags  -> ()
	 */
	class FText UWBP_Vote_C::GetVotingTimeLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.GetVotingTimeLeft");
		
		UWBP_Vote_C_GetVotingTimeLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.Construct");
		
		UWBP_Vote_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.VoteEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPassed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Vote_C::VoteEnded(bool bPassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.VoteEnded");
		
		UWBP_Vote_C_VoteEnded_Params params {};
		params.bPassed = bPassed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.VoteTimer
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::VoteTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.VoteTimer");
		
		UWBP_Vote_C_VoteTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.SetTimer
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::SetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.SetTimer");
		
		UWBP_Vote_C_SetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.SetTexts
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::SetTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.SetTexts");
		
		UWBP_Vote_C_SetTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.AddTargetPlayerText
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::AddTargetPlayerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.AddTargetPlayerText");
		
		UWBP_Vote_C_AddTargetPlayerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.AddReason
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::AddReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.AddReason");
		
		UWBP_Vote_C_AddReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.AddMap
	 * 		Flags  -> ()
	 */
	void UWBP_Vote_C::AddMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.AddMap");
		
		UWBP_Vote_C_AddMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Vote.WBP_Vote_C.ExecuteUbergraph_WBP_Vote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Vote_C::ExecuteUbergraph_WBP_Vote(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Vote.WBP_Vote_C.ExecuteUbergraph_WBP_Vote");
		
		UWBP_Vote_C_ExecuteUbergraph_WBP_Vote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Vote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Vote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Vote.WBP_Vote_C");
		return ptr;
	}

}


