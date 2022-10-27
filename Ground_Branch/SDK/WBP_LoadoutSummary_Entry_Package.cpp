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
	 * 		Name   -> Function WBP_LoadoutSummary_Entry.WBP_LoadoutSummary_Entry_C.Get_TextBlock_Entry_Text_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_LoadoutSummary_Entry_C::Get_TextBlock_Entry_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadoutSummary_Entry.WBP_LoadoutSummary_Entry_C.Get_TextBlock_Entry_Text_1");
		
		UWBP_LoadoutSummary_Entry_C_Get_TextBlock_Entry_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_LoadoutSummary_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_LoadoutSummary_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutSummary_Entry.WBP_LoadoutSummary_Entry_C");
		return ptr;
	}

}


