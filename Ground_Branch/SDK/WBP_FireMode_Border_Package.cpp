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
	 * 		Name   -> Function WBP_FireMode_Border.WBP_FireMode_Border_C.GetSelectedImageVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_FireMode_Border_C::GetSelectedImageVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Border.WBP_FireMode_Border_C.GetSelectedImageVis");
		
		UWBP_FireMode_Border_C_GetSelectedImageVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Border.WBP_FireMode_Border_C.GetBorderColour
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWBP_FireMode_Border_C::GetBorderColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Border.WBP_FireMode_Border_C.GetBorderColour");
		
		UWBP_FireMode_Border_C_GetBorderColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Border.WBP_FireMode_Border_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_FireMode_Border_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Border.WBP_FireMode_Border_C.Construct");
		
		UWBP_FireMode_Border_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Border.WBP_FireMode_Border_C.ExecuteUbergraph_WBP_FireMode_Border
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FireMode_Border_C::ExecuteUbergraph_WBP_FireMode_Border(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Border.WBP_FireMode_Border_C.ExecuteUbergraph_WBP_FireMode_Border");
		
		UWBP_FireMode_Border_C_ExecuteUbergraph_WBP_FireMode_Border_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_FireMode_Border_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_FireMode_Border_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FireMode_Border.WBP_FireMode_Border_C");
		return ptr;
	}

}


