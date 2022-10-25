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
	 * 		Name   -> Function WBP_UseItemMenu.WBP_UseItemMenu_C.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AGBItem*>                             Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_UseItemMenu_C::Open(TArray<class AGBItem*> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UseItemMenu.WBP_UseItemMenu_C.Open");
		
		UWBP_UseItemMenu_C_Open_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UseItemMenu.WBP_UseItemMenu_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_UseItemMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UseItemMenu.WBP_UseItemMenu_C.Close");
		
		UWBP_UseItemMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UseItemMenu.WBP_UseItemMenu_C.ForceClosed
	 * 		Flags  -> ()
	 */
	void UWBP_UseItemMenu_C::ForceClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UseItemMenu.WBP_UseItemMenu_C.ForceClosed");
		
		UWBP_UseItemMenu_C_ForceClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UseItemMenu.WBP_UseItemMenu_C.ExecuteUbergraph_WBP_UseItemMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_UseItemMenu_C::ExecuteUbergraph_WBP_UseItemMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UseItemMenu.WBP_UseItemMenu_C.ExecuteUbergraph_WBP_UseItemMenu");
		
		UWBP_UseItemMenu_C_ExecuteUbergraph_WBP_UseItemMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_UseItemMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_UseItemMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_UseItemMenu.WBP_UseItemMenu_C");
		return ptr;
	}

}


