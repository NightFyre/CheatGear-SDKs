#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_GameState.BP_GameState_C.GetTimeToNextTimeReminder
	 */
	struct ABP_GameState_C_GetTimeToNextTimeReminder_Params
	{
	public:
		float                                                      CurrentRoundTime;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeToNextTimeReminder;                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.GetRoundStageText
	 */
	struct ABP_GameState_C_GetRoundStageText_Params
	{
	public:
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.GetSpectatorOptions
	 */
	struct ABP_GameState_C_GetSpectatorOptions_Params
	{
	public:
		TArray<class UWidget*>                                     OutOptions;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.OnVoteStartedEvent
	 */
	struct ABP_GameState_C_OnVoteStartedEvent_Params
	{
	public:
		class APlayerState*                                        VoteStarter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Command;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    VoteTime;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.OnVoteCountUpdatedEvent
	 */
	struct ABP_GameState_C_OnVoteCountUpdatedEvent_Params
	{
	public:
		int32_t                                                    YesVotes;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NoVotes;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.OnVoteEndedEvent
	 */
	struct ABP_GameState_C_OnVoteEndedEvent_Params
	{
	public:
		bool                                                       bPassed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNSM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NextVoteDelay;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.AllowVotingAgain
	 */
	struct ABP_GameState_C_AllowVotingAgain_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.RoundStageSet
	 */
	struct ABP_GameState_C_RoundStageSet_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.AddDeathOverlay
	 */
	struct ABP_GameState_C_AddDeathOverlay_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ShowMissionSummary
	 */
	struct ABP_GameState_C_ShowMissionSummary_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
	 */
	struct ABP_GameState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.BindToPlayerControllerState
	 */
	struct ABP_GameState_C_BindToPlayerControllerState_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.OnPlayerControllerStateChanged_Event_1
	 */
	struct ABP_GameState_C_OnPlayerControllerStateChanged_Event_1_Params
	{
	public:
		class FName                                                OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.InactiveCheck
	 */
	struct ABP_GameState_C_InactiveCheck_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.StartInactiveCheck
	 */
	struct ABP_GameState_C_StartInactiveCheck_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.StopInactiveCheck
	 */
	struct ABP_GameState_C_StopInactiveCheck_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.RefreshPlayerStats
	 */
	struct ABP_GameState_C_RefreshPlayerStats_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.OnGameMessageEvent
	 */
	struct ABP_GameState_C_OnGameMessageEvent_Params
	{
	public:
		class FName                                                GameMessageId;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Type;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ShowRoundTimeAlertOnWatch
	 */
	struct ABP_GameState_C_ShowRoundTimeAlertOnWatch_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
	 */
	struct ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_APUK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
