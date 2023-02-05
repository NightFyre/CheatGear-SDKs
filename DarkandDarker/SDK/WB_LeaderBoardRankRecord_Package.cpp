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
	 * 		Name   -> Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnRankRecordData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankRecord                                 NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRankRecord                                 OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_LeaderBoardRankRecord_C::OnRankRecordData(const struct FRankRecord& NewValue, const struct FRankRecord& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnRankRecordData");
		
		UWB_LeaderBoardRankRecord_C_OnRankRecordData_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnMineRankRecordData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankRecord                                 MineValue                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsMine                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LeaderBoardRankRecord_C::OnMineRankRecordData(const struct FRankRecord& MineValue, bool IsMine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnMineRankRecordData");
		
		UWB_LeaderBoardRankRecord_C_OnMineRankRecordData_Params params {};
		params.MineValue = MineValue;
		params.IsMine = IsMine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.RankDataColorSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LeaderBoardRankRecord_C::RankDataColorSet(int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.RankDataColorSet");
		
		UWB_LeaderBoardRankRecord_C_RankDataColorSet_Params params {};
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnLoadArtData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LeaderBoardRankRecord_C::OnLoadArtData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnLoadArtData");
		
		UWB_LeaderBoardRankRecord_C_OnLoadArtData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnFMsgWidgetStreamingModeNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetStreamingModeNotify               InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_LeaderBoardRankRecord_C::OnFMsgWidgetStreamingModeNotifyBlueprint(const struct FMsgWidgetStreamingModeNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnFMsgWidgetStreamingModeNotifyBlueprint");
		
		UWB_LeaderBoardRankRecord_C_OnFMsgWidgetStreamingModeNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.ExecuteUbergraph_WB_LeaderBoardRankRecord
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LeaderBoardRankRecord_C::ExecuteUbergraph_WB_LeaderBoardRankRecord(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.ExecuteUbergraph_WB_LeaderBoardRankRecord");
		
		UWB_LeaderBoardRankRecord_C_ExecuteUbergraph_WB_LeaderBoardRankRecord_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_LeaderBoardRankRecord_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_LeaderBoardRankRecord_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C");
		return ptr;
	}

}


