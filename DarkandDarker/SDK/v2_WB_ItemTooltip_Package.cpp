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
	 * 		Name   -> Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_DescTextBlock_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_ItemTooltip_C::Get_DescTextBlock_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_DescTextBlock_Visibility_1");
		
		Uv2_WB_ItemTooltip_C_Get_DescTextBlock_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_StatWidget_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_ItemTooltip_C::Get_StatWidget_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_StatWidget_Visibility_1");
		
		Uv2_WB_ItemTooltip_C_Get_StatWidget_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_AbilityWidget_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_ItemTooltip_C::Get_AbilityWidget_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_AbilityWidget_Visibility_1");
		
		Uv2_WB_ItemTooltip_C_Get_AbilityWidget_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_RequirementWidget_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_ItemTooltip_C::Get_RequirementWidget_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip.v2_WB_ItemTooltip_C.Get_RequirementWidget_Visibility_1");
		
		Uv2_WB_ItemTooltip_C_Get_RequirementWidget_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_ItemTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_ItemTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_ItemTooltip.v2_WB_ItemTooltip_C");
		return ptr;
	}

}


