﻿/**
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
	 * 		Name   -> Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassCurrentSkill_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnInitialized");
		
		UWB_ClassCurrentSkill_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassLevelNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassLevelNotify                  InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassCurrentSkill_C::OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassLevelNotifyBlueprint");
		
		UWB_ClassCurrentSkill_C_OnFMsgWidgetClassLevelNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassCurrentSkill_C::OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint(const struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint");
		
		UWB_ClassCurrentSkill_C_OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassSlotUnLockLevelNotify        InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassCurrentSkill_C::OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint");
		
		UWB_ClassCurrentSkill_C_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.ExecuteUbergraph_WB_ClassCurrentSkill
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassCurrentSkill_C::ExecuteUbergraph_WB_ClassCurrentSkill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentSkill.WB_ClassCurrentSkill_C.ExecuteUbergraph_WB_ClassCurrentSkill");
		
		UWB_ClassCurrentSkill_C_ExecuteUbergraph_WB_ClassCurrentSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassCurrentSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassCurrentSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassCurrentSkill.WB_ClassCurrentSkill_C");
		return ptr;
	}

}


