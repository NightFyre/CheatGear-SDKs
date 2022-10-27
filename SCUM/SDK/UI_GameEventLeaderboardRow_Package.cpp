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
	 * 		Name   -> Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_GameEventLeaderboardRow_C::Get_Background_BrushColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor");
		
		UUI_GameEventLeaderboardRow_C_Get_Background_BrushColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventLeaderboardRow_C::SetRank(int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank");
		
		UUI_GameEventLeaderboardRow_C_SetRank_Params params {};
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      characterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FEventsRankingStats                         CharacterStats                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_GameEventLeaderboardRow_C::SetStats(const class FString& characterName, const struct FEventsRankingStats& CharacterStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats");
		
		UUI_GameEventLeaderboardRow_C_SetStats_Params params {};
		params.characterName = characterName;
		params.CharacterStats = CharacterStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventLeaderboardRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventLeaderboardRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C");
		return ptr;
	}

}


