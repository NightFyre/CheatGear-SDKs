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
	 * 		Name   -> Function v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C.Get_TitleText_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor Uv2_WB_ItemTooltip_Requirement_C::Get_TitleText_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C.Get_TitleText_ColorAndOpacity_1");
		
		Uv2_WB_ItemTooltip_Requirement_C_Get_TitleText_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C.Get_ContentText_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor Uv2_WB_ItemTooltip_Requirement_C::Get_ContentText_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C.Get_ContentText_ColorAndOpacity_1");
		
		Uv2_WB_ItemTooltip_Requirement_C_Get_ContentText_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C.Get Content Text Text 0
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText Uv2_WB_ItemTooltip_Requirement_C::GetContentTextText0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C.Get Content Text Text 0");
		
		Uv2_WB_ItemTooltip_Requirement_C_GetContentTextText0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_ItemTooltip_Requirement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_ItemTooltip_Requirement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C");
		return ptr;
	}

}


