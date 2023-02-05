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
	 * 		Name   -> Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.InitializeList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFulfilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementClass_C::InitializeList(bool bFulfilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.InitializeList");
		
		UWB_ItemTooltipRequirementClass_C_InitializeList_Params params {};
		params.bFulfilled = bFulfilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ItemTooltipRequirementClass_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.Construct");
		
		UWB_ItemTooltipRequirementClass_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.OnChangedRequirementStatus
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFulfilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementClass_C::OnChangedRequirementStatus(bool bFulfilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.OnChangedRequirementStatus");
		
		UWB_ItemTooltipRequirementClass_C_OnChangedRequirementStatus_Params params {};
		params.bFulfilled = bFulfilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.ExecuteUbergraph_WB_ItemTooltipRequirementClass
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementClass_C::ExecuteUbergraph_WB_ItemTooltipRequirementClass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C.ExecuteUbergraph_WB_ItemTooltipRequirementClass");
		
		UWB_ItemTooltipRequirementClass_C_ExecuteUbergraph_WB_ItemTooltipRequirementClass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemTooltipRequirementClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemTooltipRequirementClass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C");
		return ptr;
	}

}


