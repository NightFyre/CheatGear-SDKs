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
	 * 		Name   -> Function WBP_NumMenuEntry.WBP_NumMenuEntry_C.Get_TextBlock_0_Text_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_NumMenuEntry_C::Get_TextBlock_0_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NumMenuEntry.WBP_NumMenuEntry_C.Get_TextBlock_0_Text_1");
		
		UWBP_NumMenuEntry_C_Get_TextBlock_0_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NumMenuEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NumMenuEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NumMenuEntry.WBP_NumMenuEntry_C");
		return ptr;
	}

}


