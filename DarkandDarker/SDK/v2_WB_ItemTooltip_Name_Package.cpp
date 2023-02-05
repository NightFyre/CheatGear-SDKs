/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C.GetSoulHeartOwnerNameTextBlockColorAndOpacity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor Uv2_WB_ItemTooltip_Name_C::GetSoulHeartOwnerNameTextBlockColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C.GetSoulHeartOwnerNameTextBlockColorAndOpacity");
		
		Uv2_WB_ItemTooltip_Name_C_GetSoulHeartOwnerNameTextBlockColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C.GetSoulHeartTextBlockVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_ItemTooltip_Name_C::GetSoulHeartTextBlockVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C.GetSoulHeartTextBlockVisibility");
		
		Uv2_WB_ItemTooltip_Name_C_GetSoulHeartTextBlockVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_ItemTooltip_Name_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_ItemTooltip_Name_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C");
		return ptr;
	}

}


