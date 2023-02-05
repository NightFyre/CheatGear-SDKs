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
	 * 		Name   -> Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassCurrentPerk_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnInitialized");
		
		UWB_ClassCurrentPerk_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassLevelNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassLevelNotify                  InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassCurrentPerk_C::OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassLevelNotifyBlueprint");
		
		UWB_ClassCurrentPerk_C_OnFMsgWidgetClassLevelNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassCurrentPerk_C::OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint(const struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint");
		
		UWB_ClassCurrentPerk_C_OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetClassSlotUnLockLevelNotify        InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassCurrentPerk_C::OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint");
		
		UWB_ClassCurrentPerk_C_OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.ExecuteUbergraph_WB_ClassCurrentPerk
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassCurrentPerk_C::ExecuteUbergraph_WB_ClassCurrentPerk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassCurrentPerk.WB_ClassCurrentPerk_C.ExecuteUbergraph_WB_ClassCurrentPerk");
		
		UWB_ClassCurrentPerk_C_ExecuteUbergraph_WB_ClassCurrentPerk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassCurrentPerk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassCurrentPerk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassCurrentPerk.WB_ClassCurrentPerk_C");
		return ptr;
	}

}


