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
	 * 		Name   -> Function WB_GameTooltipS.WB_GameTooltipS_C.OnSetData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_GameTooltipS_C::OnSetData(const class FText& Text, const struct FSlateColor& TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameTooltipS.WB_GameTooltipS_C.OnSetData");
		
		UWB_GameTooltipS_C_OnSetData_Params params {};
		params.Text = Text;
		params.TextColor = TextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameTooltipS.WB_GameTooltipS_C.ExecuteUbergraph_WB_GameTooltipS
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_GameTooltipS_C::ExecuteUbergraph_WB_GameTooltipS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameTooltipS.WB_GameTooltipS_C.ExecuteUbergraph_WB_GameTooltipS");
		
		UWB_GameTooltipS_C_ExecuteUbergraph_WB_GameTooltipS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_GameTooltipS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_GameTooltipS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_GameTooltipS.WB_GameTooltipS_C");
		return ptr;
	}

}


