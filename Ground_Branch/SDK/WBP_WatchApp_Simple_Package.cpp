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
	 * 		Name   -> Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_Simple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.Tick");
		
		UWBP_WatchApp_Simple_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_Simple_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.Construct");
		
		UWBP_WatchApp_Simple_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.UpdateTimeText
	 * 		Flags  -> ()
	 */
	void UWBP_WatchApp_Simple_C::UpdateTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.UpdateTimeText");
		
		UWBP_WatchApp_Simple_C_UpdateTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.ExecuteUbergraph_WBP_WatchApp_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WatchApp_Simple_C::ExecuteUbergraph_WBP_WatchApp_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WatchApp_Simple.WBP_WatchApp_Simple_C.ExecuteUbergraph_WBP_WatchApp_Simple");
		
		UWBP_WatchApp_Simple_C_ExecuteUbergraph_WBP_WatchApp_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_WatchApp_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_WatchApp_Simple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WatchApp_Simple.WBP_WatchApp_Simple_C");
		return ptr;
	}

}


