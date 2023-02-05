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
	 * 		Name   -> Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.OnUpdateItemRequirementsFulfilledStatus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFulfilled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EItemRequirementType>                       UnmetRequirementArray                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ItemTooltipRequirementGroup_C::OnUpdateItemRequirementsFulfilledStatus(bool bFulfilled, TArray<EItemRequirementType> UnmetRequirementArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.OnUpdateItemRequirementsFulfilledStatus");
		
		UWB_ItemTooltipRequirementGroup_C_OnUpdateItemRequirementsFulfilledStatus_Params params {};
		params.bFulfilled = bFulfilled;
		params.UnmetRequirementArray = UnmetRequirementArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.SetItemRequirementData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDesignDataItemRequirement                  DesignDataItemRequirement                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               HasAnyRequirement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementGroup_C::SetItemRequirementData(const struct FDesignDataItemRequirement& DesignDataItemRequirement, bool* HasAnyRequirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.SetItemRequirementData");
		
		UWB_ItemTooltipRequirementGroup_C_SetItemRequirementData_Params params {};
		params.DesignDataItemRequirement = DesignDataItemRequirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAnyRequirement != nullptr)
			*HasAnyRequirement = params.HasAnyRequirement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.AddRequirementWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemRequirementType                               RequirementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemTooltipRequirementWidget*               Widget                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipRequirementGroup_C::AddRequirementWidget(EItemRequirementType RequirementType, class UItemTooltipRequirementWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C.AddRequirementWidget");
		
		UWB_ItemTooltipRequirementGroup_C_AddRequirementWidget_Params params {};
		params.RequirementType = RequirementType;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemTooltipRequirementGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemTooltipRequirementGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C");
		return ptr;
	}

}


