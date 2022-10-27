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
	 * 		Name   -> Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.GetTimeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RoundTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TimeText                                                   (Parm, OutParm)
	 */
	void UWBP_InGameMap_TimeRemaining_C::GetTimeText(float RoundTime, class FText* TimeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.GetTimeText");
		
		UWBP_InGameMap_TimeRemaining_C_GetTimeText_Params params {};
		params.RoundTime = RoundTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeText != nullptr)
			*TimeText = params.TimeText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_TimeRemaining_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.Construct");
		
		UWBP_InGameMap_TimeRemaining_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.UpdateValue
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_TimeRemaining_C::UpdateValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.UpdateValue");
		
		UWBP_InGameMap_TimeRemaining_C_UpdateValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.CheckTimeRemaining
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_TimeRemaining_C::CheckTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.CheckTimeRemaining");
		
		UWBP_InGameMap_TimeRemaining_C_CheckTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.ExecuteUbergraph_WBP_InGameMap_TimeRemaining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_TimeRemaining_C::ExecuteUbergraph_WBP_InGameMap_TimeRemaining(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.ExecuteUbergraph_WBP_InGameMap_TimeRemaining");
		
		UWBP_InGameMap_TimeRemaining_C_ExecuteUbergraph_WBP_InGameMap_TimeRemaining_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InGameMap_TimeRemaining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InGameMap_TimeRemaining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C");
		return ptr;
	}

}


