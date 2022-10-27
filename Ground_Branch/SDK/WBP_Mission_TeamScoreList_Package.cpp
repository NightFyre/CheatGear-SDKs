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
	 * 		Name   -> Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.SetTeamRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TeamRole                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_TeamScoreList_C::SetTeamRole(const class FName& TeamRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.SetTeamRole");
		
		UWBP_Mission_TeamScoreList_C_SetTeamRole_Params params {};
		params.TeamRole = TeamRole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.GetTotalTeamBoxVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Mission_TeamScoreList_C::GetTotalTeamBoxVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.GetTotalTeamBoxVis");
		
		UWBP_Mission_TeamScoreList_C_GetTotalTeamBoxVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_TeamScoreList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.Construct");
		
		UWBP_Mission_TeamScoreList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.BindTeamScores
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_TeamScoreList_C::BindTeamScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.BindTeamScores");
		
		UWBP_Mission_TeamScoreList_C_BindTeamScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.OnTeamScoresUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_TeamScoreList_C::OnTeamScoresUpdated(class AGBGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.OnTeamScoresUpdated");
		
		UWBP_Mission_TeamScoreList_C_OnTeamScoresUpdated_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.ExecuteUbergraph_WBP_Mission_TeamScoreList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_TeamScoreList_C::ExecuteUbergraph_WBP_Mission_TeamScoreList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.ExecuteUbergraph_WBP_Mission_TeamScoreList");
		
		UWBP_Mission_TeamScoreList_C_ExecuteUbergraph_WBP_Mission_TeamScoreList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_TeamScoreList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_TeamScoreList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C");
		return ptr;
	}

}


