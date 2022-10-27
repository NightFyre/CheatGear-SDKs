/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.SetPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MobilityStatusBar_C::SetPercent(float InPercent, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.SetPercent");
		
		UWBP_MobilityStatusBar_C_SetPercent_Params params {};
		params.InPercent = InPercent;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.PingValueFull
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MobilityStatusBar_C::PingValueFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.PingValueFull");
		
		UWBP_MobilityStatusBar_C_PingValueFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.ExecuteUbergraph_WBP_MobilityStatusBar
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MobilityStatusBar_C::ExecuteUbergraph_WBP_MobilityStatusBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MobilityStatusBar.WBP_MobilityStatusBar_C.ExecuteUbergraph_WBP_MobilityStatusBar");
		
		UWBP_MobilityStatusBar_C_ExecuteUbergraph_WBP_MobilityStatusBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MobilityStatusBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MobilityStatusBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MobilityStatusBar.WBP_MobilityStatusBar_C");
		return ptr;
	}

}


