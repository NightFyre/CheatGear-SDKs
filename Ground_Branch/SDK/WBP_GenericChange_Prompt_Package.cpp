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
	 * 		Name   -> Function WBP_GenericChange_Prompt.WBP_GenericChange_Prompt_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_GenericChange_Prompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GenericChange_Prompt.WBP_GenericChange_Prompt_C.Construct");
		
		UWBP_GenericChange_Prompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GenericChange_Prompt.WBP_GenericChange_Prompt_C.ExecuteUbergraph_WBP_GenericChange_Prompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GenericChange_Prompt_C::ExecuteUbergraph_WBP_GenericChange_Prompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GenericChange_Prompt.WBP_GenericChange_Prompt_C.ExecuteUbergraph_WBP_GenericChange_Prompt");
		
		UWBP_GenericChange_Prompt_C_ExecuteUbergraph_WBP_GenericChange_Prompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GenericChange_Prompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GenericChange_Prompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GenericChange_Prompt.WBP_GenericChange_Prompt_C");
		return ptr;
	}

}


