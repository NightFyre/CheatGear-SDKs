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
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetNoItemVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetNoItemVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetNoItemVis");
		
		UWBP_StanceIndicator_C_GetNoItemVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetEngagedVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetEngagedVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetEngagedVis");
		
		UWBP_StanceIndicator_C_GetEngagedVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetReadyVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetReadyVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetReadyVis");
		
		UWBP_StanceIndicator_C_GetReadyVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetLowReadyVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetLowReadyVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetLowReadyVis");
		
		UWBP_StanceIndicator_C_GetLowReadyVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetHighReadyVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetHighReadyVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetHighReadyVis");
		
		UWBP_StanceIndicator_C_GetHighReadyVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetSidearmVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetSidearmVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetSidearmVis");
		
		UWBP_StanceIndicator_C_GetSidearmVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetRifleVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetRifleVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetRifleVis");
		
		UWBP_StanceIndicator_C_GetRifleVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetItemTypeVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPrimaryAssetType                           ItemAssetType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetItemTypeVis(const struct FPrimaryAssetType& ItemAssetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetItemTypeVis");
		
		UWBP_StanceIndicator_C_GetItemTypeVis_Params params {};
		params.ItemAssetType = ItemAssetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetStandingVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetStandingVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetStandingVis");
		
		UWBP_StanceIndicator_C_GetStandingVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetCrouchingVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_StanceIndicator_C::GetCrouchingVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StanceIndicator.WBP_StanceIndicator_C.GetCrouchingVis");
		
		UWBP_StanceIndicator_C_GetCrouchingVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StanceIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StanceIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StanceIndicator.WBP_StanceIndicator_C");
		return ptr;
	}

}


