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
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.SetTeamRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TeamRole                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_MatchSummaryPVE_C::SetTeamRole(const class FName& TeamRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.SetTeamRole");
		
		UWBP_Mission_MatchSummaryPVE_C_SetTeamRole_Params params {};
		params.TeamRole = TeamRole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.GetTotalTeamBoxVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Mission_MatchSummaryPVE_C::GetTotalTeamBoxVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.GetTotalTeamBoxVis");
		
		UWBP_Mission_MatchSummaryPVE_C_GetTotalTeamBoxVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_MatchSummaryPVE_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.Construct");
		
		UWBP_Mission_MatchSummaryPVE_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.BindMatchStats
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_MatchSummaryPVE_C::BindMatchStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.BindMatchStats");
		
		UWBP_Mission_MatchSummaryPVE_C_BindMatchStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.OnMatchStatsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_MatchSummaryPVE_C::OnMatchStatsUpdated(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.OnMatchStatsUpdated");
		
		UWBP_Mission_MatchSummaryPVE_C_OnMatchStatsUpdated_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.ExecuteUbergraph_WBP_Mission_MatchSummaryPVE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_MatchSummaryPVE_C::ExecuteUbergraph_WBP_Mission_MatchSummaryPVE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.ExecuteUbergraph_WBP_Mission_MatchSummaryPVE");
		
		UWBP_Mission_MatchSummaryPVE_C_ExecuteUbergraph_WBP_Mission_MatchSummaryPVE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_MatchSummaryPVE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_MatchSummaryPVE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C");
		return ptr;
	}

}


