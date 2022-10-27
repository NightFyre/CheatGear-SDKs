#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.IsCoopGamemode
	 */
	struct UBP_RoundVictory_C_IsCoopGamemode_Params
	{
	public:
		bool                                                       IsCoop;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CF3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.CheckMatchDraw
	 */
	struct UBP_RoundVictory_C_CheckMatchDraw_Params
	{
	public:
		bool                                                       Draw;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.PopEventItemUnlock
	 */
	struct UBP_RoundVictory_C_PopEventItemUnlock_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.ShowRoundStatsPanel
	 */
	struct UBP_RoundVictory_C_ShowRoundStatsPanel_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.TransitionToMatchOver
	 */
	struct UBP_RoundVictory_C_TransitionToMatchOver_Params
	{
	public:
		struct FPlayerMatchOverData                                UIData;                                                  // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.OnBackendRewardsReceived
	 */
	struct UBP_RoundVictory_C_OnBackendRewardsReceived_Params
	{
	public:
		int32_t                                                    RoundNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2YB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameStatsRoundReward                               Rewards;                                                 // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.OnMapVoteStarted
	 */
	struct UBP_RoundVictory_C_OnMapVoteStarted_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.TickTimeUntilText
	 */
	struct UBP_RoundVictory_C_TickTimeUntilText_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.SetupTimeUntilText
	 */
	struct UBP_RoundVictory_C_SetupTimeUntilText_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.StartAnimationSequence
	 */
	struct UBP_RoundVictory_C_StartAnimationSequence_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.GetTeamScore
	 */
	struct UBP_RoundVictory_C_GetTeamScore_Params
	{
	public:
		bool                                                       bLeftTeam;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0QT1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Score;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.ApplyTeamFactionEmblem
	 */
	struct UBP_RoundVictory_C_ApplyTeamFactionEmblem_Params
	{
	public:
		class UImage*                                              Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATeamInfo*                                           Team;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        RelativeColor;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  FallbackMaterial;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.UpdateFactionColorsAndIcons
	 */
	struct UBP_RoundVictory_C_UpdateFactionColorsAndIcons_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.UpdatePanelVisibility
	 */
	struct UBP_RoundVictory_C_UpdatePanelVisibility_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.PopulateTaglines
	 */
	struct UBP_RoundVictory_C_PopulateTaglines_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.GetRightTeam
	 */
	struct UBP_RoundVictory_C_GetRightTeam_Params
	{
	public:
		class ATeamInfo*                                           Team;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.GetLeftTeam
	 */
	struct UBP_RoundVictory_C_GetLeftTeam_Params
	{
	public:
		class ATeamInfo*                                           Team;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.OnItemDataLoaded_8EE2211342C797A1DD00C1B97F729155
	 */
	struct UBP_RoundVictory_C_OnItemDataLoaded_8EE2211342C797A1DD00C1B97F729155_Params
	{
	public:
		TArray<struct FOnlineItemClaimResponse>                    Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.ShowPlayerExpEvent
	 */
	struct UBP_RoundVictory_C_ShowPlayerExpEvent_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.OnInGameMenuVisible
	 */
	struct UBP_RoundVictory_C_OnInGameMenuVisible_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.OnScoreboardVisibilityChange
	 */
	struct UBP_RoundVictory_C_OnScoreboardVisibilityChange_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.Construct
	 */
	struct UBP_RoundVictory_C_Construct_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.ShowEventUnlocks
	 */
	struct UBP_RoundVictory_C_ShowEventUnlocks_Params
	{
	public:
		TArray<int32_t>                                            ItemIds;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.WidgetAnimationEvt_Anim_Intro_K2Node_WidgetAnimationEvent_1
	 */
	struct UBP_RoundVictory_C_WidgetAnimationEvt_Anim_Intro_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.Destruct
	 */
	struct UBP_RoundVictory_C_Destruct_Params
	{	};

	/**
	 * Function BP_RoundVictory.BP_RoundVictory_C.ExecuteUbergraph_BP_RoundVictory
	 */
	struct UBP_RoundVictory_C_ExecuteUbergraph_BP_RoundVictory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CJK2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
