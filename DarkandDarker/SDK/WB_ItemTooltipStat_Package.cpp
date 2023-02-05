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
	 * 		Name   -> Function WB_ItemTooltipStat.WB_ItemTooltipStat_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipStat_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipStat.WB_ItemTooltipStat_C.OnListItemObjectSet");
		
		UWB_ItemTooltipStat_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipStat.WB_ItemTooltipStat_C.ExecuteUbergraph_WB_ItemTooltipStat
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipStat_C::ExecuteUbergraph_WB_ItemTooltipStat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipStat.WB_ItemTooltipStat_C.ExecuteUbergraph_WB_ItemTooltipStat");
		
		UWB_ItemTooltipStat_C_ExecuteUbergraph_WB_ItemTooltipStat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemTooltipStat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemTooltipStat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemTooltipStat.WB_ItemTooltipStat_C");
		return ptr;
	}

}


