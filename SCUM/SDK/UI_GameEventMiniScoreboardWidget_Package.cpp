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
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
	 * 		Flags  -> ()
	 */
	void UUI_GameEventMiniScoreboardWidget_C::UpdateWinCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters");
		
		UUI_GameEventMiniScoreboardWidget_C_UpdateWinCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
	 * 		Flags  -> ()
	 */
	void UUI_GameEventMiniScoreboardWidget_C::UpdateTeamScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores");
		
		UUI_GameEventMiniScoreboardWidget_C_UpdateTeamScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
	 * 		Flags  -> ()
	 */
	void UUI_GameEventMiniScoreboardWidget_C::InitInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo");
		
		UUI_GameEventMiniScoreboardWidget_C_InitInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventMiniScoreboardWidget_C::EmptyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage");
		
		UUI_GameEventMiniScoreboardWidget_C_EmptyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate
	 * 		Flags  -> ()
	 */
	void UUI_GameEventMiniScoreboardWidget_C::OnUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate");
		
		UUI_GameEventMiniScoreboardWidget_C_OnUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard
	 * 		Flags  -> ()
	 */
	void UUI_GameEventMiniScoreboardWidget_C::InitializeScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard");
		
		UUI_GameEventMiniScoreboardWidget_C_InitializeScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventMiniScoreboardWidget_C::ExecuteUbergraph_UI_GameEventMiniScoreboardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget");
		
		UUI_GameEventMiniScoreboardWidget_C_ExecuteUbergraph_UI_GameEventMiniScoreboardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventMiniScoreboardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventMiniScoreboardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C");
		return ptr;
	}

}


