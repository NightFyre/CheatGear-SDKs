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
	 * 		Name   -> Function WBP_DragItem_Visual.WBP_DragItem_Visual_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_DragItem_Visual_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DragItem_Visual.WBP_DragItem_Visual_C.Construct");
		
		UWBP_DragItem_Visual_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DragItem_Visual.WBP_DragItem_Visual_C.ExecuteUbergraph_WBP_DragItem_Visual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DragItem_Visual_C::ExecuteUbergraph_WBP_DragItem_Visual(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DragItem_Visual.WBP_DragItem_Visual_C.ExecuteUbergraph_WBP_DragItem_Visual");
		
		UWBP_DragItem_Visual_C_ExecuteUbergraph_WBP_DragItem_Visual_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DragItem_Visual_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DragItem_Visual_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DragItem_Visual.WBP_DragItem_Visual_C");
		return ptr;
	}

}


