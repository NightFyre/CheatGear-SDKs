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
	 * 		Name   -> Function WB_SmallTooltip.WB_SmallTooltip_C.SetSmallToolTipDescription
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_SmallTooltip_C::SetSmallToolTipDescription(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SmallTooltip.WB_SmallTooltip_C.SetSmallToolTipDescription");
		
		UWB_SmallTooltip_C_SetSmallToolTipDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SmallTooltip.WB_SmallTooltip_C.ExecuteUbergraph_WB_SmallTooltip
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SmallTooltip_C::ExecuteUbergraph_WB_SmallTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SmallTooltip.WB_SmallTooltip_C.ExecuteUbergraph_WB_SmallTooltip");
		
		UWB_SmallTooltip_C_ExecuteUbergraph_WB_SmallTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_SmallTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_SmallTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_SmallTooltip.WB_SmallTooltip_C");
		return ptr;
	}

}


