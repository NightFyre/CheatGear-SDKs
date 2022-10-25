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
	 * 		Name   -> Function WBP_Hint_Manager.WBP_Hint_Manager_C.AddHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 HintWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Hint_Manager_C::AddHint(class UUserWidget* HintWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Manager.WBP_Hint_Manager_C.AddHint");
		
		UWBP_Hint_Manager_C_AddHint_Params params {};
		params.HintWidget = HintWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Hint_Manager.WBP_Hint_Manager_C.ClearAll
	 * 		Flags  -> ()
	 */
	void UWBP_Hint_Manager_C::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Manager.WBP_Hint_Manager_C.ClearAll");
		
		UWBP_Hint_Manager_C_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Hint_Manager.WBP_Hint_Manager_C.ExecuteUbergraph_WBP_Hint_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Hint_Manager_C::ExecuteUbergraph_WBP_Hint_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Hint_Manager.WBP_Hint_Manager_C.ExecuteUbergraph_WBP_Hint_Manager");
		
		UWBP_Hint_Manager_C_ExecuteUbergraph_WBP_Hint_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Hint_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Hint_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Hint_Manager.WBP_Hint_Manager_C");
		return ptr;
	}

}


