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
	 * 		Name   -> Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Text Color
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor Uv2_WB_ItemTooltip_StatElem_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Text Color");
		
		Uv2_WB_ItemTooltip_StatElem_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Spell Name
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Out                                                        (Parm, OutParm)
	 */
	void Uv2_WB_ItemTooltip_StatElem_C::GetSpellName(class FText* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Spell Name");
		
		Uv2_WB_ItemTooltip_StatElem_C_GetSpellName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Skill Name
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Out                                                        (Parm, OutParm)
	 */
	void Uv2_WB_ItemTooltip_StatElem_C::GetSkillName(class FText* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Skill Name");
		
		Uv2_WB_ItemTooltip_StatElem_C_GetSkillName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Perk Name
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Out                                                        (Parm, OutParm)
	 */
	void Uv2_WB_ItemTooltip_StatElem_C::GetPerkName(class FText* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Perk Name");
		
		Uv2_WB_ItemTooltip_StatElem_C_GetPerkName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Stat Text
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText Uv2_WB_ItemTooltip_StatElem_C::GetStatText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Stat Text");
		
		Uv2_WB_ItemTooltip_StatElem_C_GetStatText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_ItemTooltip_StatElem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_ItemTooltip_StatElem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C");
		return ptr;
	}

}


