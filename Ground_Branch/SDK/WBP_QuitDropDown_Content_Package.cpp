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
	 * 		Name   -> Function WBP_QuitDropDown_Content.WBP_QuitDropDown_Content_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_QuitDropDown_Content_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_Content.WBP_QuitDropDown_Content_C.Construct");
		
		UWBP_QuitDropDown_Content_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuitDropDown_Content.WBP_QuitDropDown_Content_C.ExecuteUbergraph_WBP_QuitDropDown_Content
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuitDropDown_Content_C::ExecuteUbergraph_WBP_QuitDropDown_Content(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuitDropDown_Content.WBP_QuitDropDown_Content_C.ExecuteUbergraph_WBP_QuitDropDown_Content");
		
		UWBP_QuitDropDown_Content_C_ExecuteUbergraph_WBP_QuitDropDown_Content_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_QuitDropDown_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_QuitDropDown_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuitDropDown_Content.WBP_QuitDropDown_Content_C");
		return ptr;
	}

}


