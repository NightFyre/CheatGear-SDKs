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
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.SaveUsedHint
	 * 		Flags  -> ()
	 */
	void UWBP_RandomHint_C::SaveUsedHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.SaveUsedHint");
		
		UWBP_RandomHint_C_SaveUsedHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.LoadUsedHints
	 * 		Flags  -> ()
	 */
	void UWBP_RandomHint_C::LoadUsedHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.LoadUsedHints");
		
		UWBP_RandomHint_C_LoadUsedHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.UseHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Output                                                     (Parm, OutParm)
	 */
	void UWBP_RandomHint_C::UseHint(class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.UseHint");
		
		UWBP_RandomHint_C_UseHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.Setup
	 * 		Flags  -> ()
	 */
	void UWBP_RandomHint_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.Setup");
		
		UWBP_RandomHint_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.CycleThroughHints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RandomHint_C::CycleThroughHints(int32_t Start, int32_t End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.CycleThroughHints");
		
		UWBP_RandomHint_C_CycleThroughHints_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_RandomHint_C::UpdateText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.UpdateText");
		
		UWBP_RandomHint_C_UpdateText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RandomHint.WBP_RandomHint_C.ExecuteUbergraph_WBP_RandomHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RandomHint_C::ExecuteUbergraph_WBP_RandomHint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RandomHint.WBP_RandomHint_C.ExecuteUbergraph_WBP_RandomHint");
		
		UWBP_RandomHint_C_ExecuteUbergraph_WBP_RandomHint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RandomHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RandomHint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RandomHint.WBP_RandomHint_C");
		return ptr;
	}

}


