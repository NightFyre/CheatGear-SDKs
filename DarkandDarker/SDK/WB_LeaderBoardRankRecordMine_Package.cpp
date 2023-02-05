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
	 * 		Name   -> Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnRankRecordMineData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankRecord                                 NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRankRecord                                 OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_LeaderBoardRankRecordMine_C::OnRankRecordMineData(const struct FRankRecord& NewValue, const struct FRankRecord& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnRankRecordMineData");
		
		UWB_LeaderBoardRankRecordMine_C_OnRankRecordMineData_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnLoadArtData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LeaderBoardRankRecordMine_C::OnLoadArtData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnLoadArtData");
		
		UWB_LeaderBoardRankRecordMine_C_OnLoadArtData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnFMsgWidgetStreamingModeNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetStreamingModeNotify               InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_LeaderBoardRankRecordMine_C::OnFMsgWidgetStreamingModeNotifyBlueprint(const struct FMsgWidgetStreamingModeNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnFMsgWidgetStreamingModeNotifyBlueprint");
		
		UWB_LeaderBoardRankRecordMine_C_OnFMsgWidgetStreamingModeNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.ExecuteUbergraph_WB_LeaderBoardRankRecordMine
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LeaderBoardRankRecordMine_C::ExecuteUbergraph_WB_LeaderBoardRankRecordMine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.ExecuteUbergraph_WB_LeaderBoardRankRecordMine");
		
		UWB_LeaderBoardRankRecordMine_C_ExecuteUbergraph_WB_LeaderBoardRankRecordMine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_LeaderBoardRankRecordMine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_LeaderBoardRankRecordMine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C");
		return ptr;
	}

}


