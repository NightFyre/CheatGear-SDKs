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
	 * 		Name   -> Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.GetTotalTeamBoxVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Mission_PlayerScoreList_C::GetTotalTeamBoxVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.GetTotalTeamBoxVis");
		
		UWBP_Mission_PlayerScoreList_C_GetTotalTeamBoxVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_PlayerScoreList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.Construct");
		
		UWBP_Mission_PlayerScoreList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.BindPlayerScores
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_PlayerScoreList_C::BindPlayerScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.BindPlayerScores");
		
		UWBP_Mission_PlayerScoreList_C_BindPlayerScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.OnPlayerScoresUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerScoreList_C::OnPlayerScoresUpdated(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.OnPlayerScoresUpdated");
		
		UWBP_Mission_PlayerScoreList_C_OnPlayerScoresUpdated_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.ExecuteUbergraph_WBP_Mission_PlayerScoreList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerScoreList_C::ExecuteUbergraph_WBP_Mission_PlayerScoreList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.ExecuteUbergraph_WBP_Mission_PlayerScoreList");
		
		UWBP_Mission_PlayerScoreList_C_ExecuteUbergraph_WBP_Mission_PlayerScoreList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_PlayerScoreList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_PlayerScoreList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C");
		return ptr;
	}

}


