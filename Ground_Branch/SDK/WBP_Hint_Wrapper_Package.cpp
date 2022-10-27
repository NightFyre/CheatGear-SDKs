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
	 * 		Name   -> Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Hint_Wrapper_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.Construct");
		
		UWBP_Hint_Wrapper_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UWBP_Hint_Wrapper_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.FadeOut");
		
		UWBP_Hint_Wrapper_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.CleanUp
	 * 		Flags  -> ()
	 */
	void UWBP_Hint_Wrapper_C::CleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.CleanUp");
		
		UWBP_Hint_Wrapper_C_CleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.ExecuteUbergraph_WBP_Hint_Wrapper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Hint_Wrapper_C::ExecuteUbergraph_WBP_Hint_Wrapper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.ExecuteUbergraph_WBP_Hint_Wrapper");
		
		UWBP_Hint_Wrapper_C_ExecuteUbergraph_WBP_Hint_Wrapper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Hint_Wrapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Hint_Wrapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Hint_Wrapper.WBP_Hint_Wrapper_C");
		return ptr;
	}

}


