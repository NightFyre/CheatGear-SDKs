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
	 * 		Name   -> Function WB_GameTooltip.WB_GameTooltip_C.OnSetData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NameText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DescText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_GameTooltip_C::OnSetData(const class FText& NameText, const class FText& DescText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameTooltip.WB_GameTooltip_C.OnSetData");
		
		UWB_GameTooltip_C_OnSetData_Params params {};
		params.NameText = NameText;
		params.DescText = DescText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameTooltip.WB_GameTooltip_C.ExecuteUbergraph_WB_GameTooltip
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_GameTooltip_C::ExecuteUbergraph_WB_GameTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameTooltip.WB_GameTooltip_C.ExecuteUbergraph_WB_GameTooltip");
		
		UWB_GameTooltip_C_ExecuteUbergraph_WB_GameTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_GameTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_GameTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_GameTooltip.WB_GameTooltip_C");
		return ptr;
	}

}


