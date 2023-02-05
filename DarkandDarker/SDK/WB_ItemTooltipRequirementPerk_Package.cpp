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
	 * 		Name   -> Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.InitializeList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFulfilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementPerk_C::InitializeList(bool bFulfilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.InitializeList");
		
		UWB_ItemTooltipRequirementPerk_C_InitializeList_Params params {};
		params.bFulfilled = bFulfilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ItemTooltipRequirementPerk_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.Construct");
		
		UWB_ItemTooltipRequirementPerk_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.OnChangedRequirementStatus
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFulfilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementPerk_C::OnChangedRequirementStatus(bool bFulfilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.OnChangedRequirementStatus");
		
		UWB_ItemTooltipRequirementPerk_C_OnChangedRequirementStatus_Params params {};
		params.bFulfilled = bFulfilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.ExecuteUbergraph_WB_ItemTooltipRequirementPerk
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementPerk_C::ExecuteUbergraph_WB_ItemTooltipRequirementPerk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C.ExecuteUbergraph_WB_ItemTooltipRequirementPerk");
		
		UWB_ItemTooltipRequirementPerk_C_ExecuteUbergraph_WB_ItemTooltipRequirementPerk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemTooltipRequirementPerk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemTooltipRequirementPerk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C");
		return ptr;
	}

}


