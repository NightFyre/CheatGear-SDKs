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
	 * 		Name   -> Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassSpellCurrentSkill_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnInitialized");
		
		UWB_ClassSpellCurrentSkill_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnFMsgWidgetClassLevelNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassLevelNotify                  InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassSpellCurrentSkill_C::OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnFMsgWidgetClassLevelNotifyBlueprint");
		
		UWB_ClassSpellCurrentSkill_C_OnFMsgWidgetClassLevelNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassSlotUnLockLevelNotify        InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassSpellCurrentSkill_C::OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint");
		
		UWB_ClassSpellCurrentSkill_C_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.ExecuteUbergraph_WB_ClassSpellCurrentSkill
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellCurrentSkill_C::ExecuteUbergraph_WB_ClassSpellCurrentSkill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C.ExecuteUbergraph_WB_ClassSpellCurrentSkill");
		
		UWB_ClassSpellCurrentSkill_C_ExecuteUbergraph_WB_ClassSpellCurrentSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassSpellCurrentSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassSpellCurrentSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C");
		return ptr;
	}

}


