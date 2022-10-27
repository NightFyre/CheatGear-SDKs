/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.GetTeamName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TeamName                                                   (Parm, OutParm)
	 */
	void UWBP_Mission_MatchSummaryPVP_C::GetTeamName(unsigned char TeamId, class FText* TeamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.GetTeamName");
		
		UWBP_Mission_MatchSummaryPVP_C_GetTeamName_Params params {};
		params.TeamId = TeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamName != nullptr)
			*TeamName = params.TeamName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.UpdateNormalMatchStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_MatchSummaryPVP_C::UpdateNormalMatchStats(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.UpdateNormalMatchStats");
		
		UWBP_Mission_MatchSummaryPVP_C_UpdateNormalMatchStats_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.SetTeamRolesVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_MatchSummaryPVP_C::SetTeamRolesVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.SetTeamRolesVisibility");
		
		UWBP_Mission_MatchSummaryPVP_C_SetTeamRolesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_MatchSummaryPVP_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.Construct");
		
		UWBP_Mission_MatchSummaryPVP_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.BindMatchStats
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_MatchSummaryPVP_C::BindMatchStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.BindMatchStats");
		
		UWBP_Mission_MatchSummaryPVP_C_BindMatchStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.OnMatchStatsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_MatchSummaryPVP_C::OnMatchStatsUpdated(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.OnMatchStatsUpdated");
		
		UWBP_Mission_MatchSummaryPVP_C_OnMatchStatsUpdated_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.ExecuteUbergraph_WBP_Mission_MatchSummaryPVP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_MatchSummaryPVP_C::ExecuteUbergraph_WBP_Mission_MatchSummaryPVP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.ExecuteUbergraph_WBP_Mission_MatchSummaryPVP");
		
		UWBP_Mission_MatchSummaryPVP_C_ExecuteUbergraph_WBP_Mission_MatchSummaryPVP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_MatchSummaryPVP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_MatchSummaryPVP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C");
		return ptr;
	}

}


