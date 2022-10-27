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
	 * 		Name   -> Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetRangeText
	 * 		Flags  -> ()
	 */
	class FText UWBP_MoskitoOverlay_C::GetRangeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetRangeText");
		
		UWBP_MoskitoOverlay_C_GetRangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetTextColour
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_MoskitoOverlay_C::GetTextColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetTextColour");
		
		UWBP_MoskitoOverlay_C_GetTextColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetNVReticleVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_MoskitoOverlay_C::GetNVReticleVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetNVReticleVis");
		
		UWBP_MoskitoOverlay_C_GetNVReticleVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetOverlayVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_MoskitoOverlay_C::GetOverlayVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MoskitoOverlay.WBP_MoskitoOverlay_C.GetOverlayVis");
		
		UWBP_MoskitoOverlay_C_GetOverlayVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MoskitoOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MoskitoOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MoskitoOverlay.WBP_MoskitoOverlay_C");
		return ptr;
	}

}


