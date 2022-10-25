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
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GeNetInfoVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StatOverlay_C::GeNetInfoVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GeNetInfoVis");
		
		UWBP_StatOverlay_C_GeNetInfoVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetFPSVIS
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StatOverlay_C::GetFPSVIS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetFPSVIS");
		
		UWBP_StatOverlay_C_GetFPSVIS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutLossPercentage
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextOutLossPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutLossPercentage");
		
		UWBP_StatOverlay_C_GetTextOutLossPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutPacketsPerSecond
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextOutPacketsPerSecond()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutPacketsPerSecond");
		
		UWBP_StatOverlay_C_GetTextOutPacketsPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutKiloBytesPerSecond
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextOutKiloBytesPerSecond()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextOutKiloBytesPerSecond");
		
		UWBP_StatOverlay_C_GetTextOutKiloBytesPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInLossPercentage
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextInLossPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInLossPercentage");
		
		UWBP_StatOverlay_C_GetTextInLossPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInPacketsPerSecond
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextInPacketsPerSecond()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInPacketsPerSecond");
		
		UWBP_StatOverlay_C_GetTextInPacketsPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInKiloBytesPerSecond
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextInKiloBytesPerSecond()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextInKiloBytesPerSecond");
		
		UWBP_StatOverlay_C_GetTextInKiloBytesPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextPing
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextPing");
		
		UWBP_StatOverlay_C_GetTextPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextFPS
	 * 		Flags  -> ()
	 */
	class FText UWBP_StatOverlay_C::GetTextFPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.GetTextFPS");
		
		UWBP_StatOverlay_C_GetTextFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StatOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.Tick");
		
		UWBP_StatOverlay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StatOverlay.WBP_StatOverlay_C.ExecuteUbergraph_WBP_StatOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StatOverlay_C::ExecuteUbergraph_WBP_StatOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StatOverlay.WBP_StatOverlay_C.ExecuteUbergraph_WBP_StatOverlay");
		
		UWBP_StatOverlay_C_ExecuteUbergraph_WBP_StatOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StatOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StatOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StatOverlay.WBP_StatOverlay_C");
		return ptr;
	}

}


