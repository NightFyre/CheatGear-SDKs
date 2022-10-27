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
	 * 		Name   -> Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.UpdateValue
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_TimeOfDay_C::UpdateValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.UpdateValue");
		
		UWBP_InGameMap_TimeOfDay_C_UpdateValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_TimeOfDay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.Construct");
		
		UWBP_InGameMap_TimeOfDay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.OnInitialTimeOfDayChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBSky*                                      SkyActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_TimeOfDay_C::OnInitialTimeOfDayChanged_Event_1(class AGBSky* SkyActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.OnInitialTimeOfDayChanged_Event_1");
		
		UWBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_1_Params params {};
		params.SkyActor = SkyActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.CheckWorldTimeUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_TimeOfDay_C::CheckWorldTimeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.CheckWorldTimeUpdated");
		
		UWBP_InGameMap_TimeOfDay_C_CheckWorldTimeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.ExecuteUbergraph_WBP_InGameMap_TimeOfDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_TimeOfDay_C::ExecuteUbergraph_WBP_InGameMap_TimeOfDay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.ExecuteUbergraph_WBP_InGameMap_TimeOfDay");
		
		UWBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InGameMap_TimeOfDay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InGameMap_TimeOfDay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C");
		return ptr;
	}

}


