/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardWidget_C::SetTopShownCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount");
		
		UUI_GameEventLeaderboardWidget_C_SetTopShownCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_GameEventLeaderboardRow_C*               row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardWidget_C::AssignRowColor(class UUI_GameEventLeaderboardRow_C* row, int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor");
		
		UUI_GameEventLeaderboardWidget_C_AssignRowColor_Params params {};
		params.row = row;
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
	 * 		Flags  -> ()
	 */
	void UUI_GameEventLeaderboardWidget_C::UpdateTopList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList");
		
		UUI_GameEventLeaderboardWidget_C_UpdateTopList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEventsRankingStatsOrderByField                    orderByField                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortOrder                                         sortOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardWidget_C::RefreshData(EEventsRankingStatsOrderByField orderByField, ESortOrder sortOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData");
		
		UUI_GameEventLeaderboardWidget_C_RefreshData_Params params {};
		params.orderByField = orderByField;
		params.sortOrder = sortOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardWidget_C::UpdateRankingList(int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList");
		
		UUI_GameEventLeaderboardWidget_C_UpdateRankingList_Params params {};
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEventsRankingStatsItem>             EventsRankingStatsItems                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UVerticalBox*                                TargetWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardWidget_C::UpdateList(TArray<struct FEventsRankingStatsItem>* EventsRankingStatsItems, class UVerticalBox* TargetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList");
		
		UUI_GameEventLeaderboardWidget_C_UpdateList_Params params {};
		params.TargetWidget = TargetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventsRankingStatsItems != nullptr)
			*EventsRankingStatsItems = params.EventsRankingStatsItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GameEventLeaderboardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct");
		
		UUI_GameEventLeaderboardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_GameEventLeaderboardWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct");
		
		UUI_GameEventLeaderboardWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers
	 * 		Flags  -> ()
	 */
	void UUI_GameEventLeaderboardWidget_C::UpdateTopPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers");
		
		UUI_GameEventLeaderboardWidget_C_UpdateTopPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking
	 * 		Flags  -> ()
	 */
	void UUI_GameEventLeaderboardWidget_C::UpdatePlayerRanking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking");
		
		UUI_GameEventLeaderboardWidget_C_UpdatePlayerRanking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardWidget_C::ExecuteUbergraph_UI_GameEventLeaderboardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget");
		
		UUI_GameEventLeaderboardWidget_C_ExecuteUbergraph_UI_GameEventLeaderboardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventLeaderboardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventLeaderboardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C");
		return ptr;
	}

}


