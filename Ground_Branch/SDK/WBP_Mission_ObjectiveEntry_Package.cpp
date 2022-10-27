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
	 * 		Name   -> Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.Get_TextBlock_Completion_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_Mission_ObjectiveEntry_C::Get_TextBlock_Completion_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.Get_TextBlock_Completion_ColorAndOpacity_1");
		
		UWBP_Mission_ObjectiveEntry_C_Get_TextBlock_Completion_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_ObjectiveEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.Construct");
		
		UWBP_Mission_ObjectiveEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.ExecuteUbergraph_WBP_Mission_ObjectiveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_ObjectiveEntry_C::ExecuteUbergraph_WBP_Mission_ObjectiveEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.ExecuteUbergraph_WBP_Mission_ObjectiveEntry");
		
		UWBP_Mission_ObjectiveEntry_C_ExecuteUbergraph_WBP_Mission_ObjectiveEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_ObjectiveEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_ObjectiveEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C");
		return ptr;
	}

}


