#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function GOAP_Controller.GOAP_Controller_C.CheckSetGroupTargetLogic
	 */
	struct AGOAP_Controller_C_CheckSetGroupTargetLogic_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Temp_ReloadedAmmo
	 */
	struct AGOAP_Controller_C_Temp_ReloadedAmmo_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Temp_RemoveAmmo
	 */
	struct AGOAP_Controller_C_Temp_RemoveAmmo_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.SetInitialAmmo
	 */
	struct AGOAP_Controller_C_SetInitialAmmo_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.NewFunction_1
	 */
	struct AGOAP_Controller_C_NewFunction_1_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Get Ammo Info
	 */
	struct AGOAP_Controller_C_Get_Ammo_Info_Params
	{
	public:
		int32_t                                                    CurrentAmmo;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasZeroAmmo;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.ReSeenPlayerCooldown
	 */
	struct AGOAP_Controller_C_ReSeenPlayerCooldown_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.CheckIfCurrentTargetAlive
	 */
	struct AGOAP_Controller_C_CheckIfCurrentTargetAlive_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.WorkOutTarget
	 */
	struct AGOAP_Controller_C_WorkOutTarget_Params
	{
	public:
		class ARaidCharacter*                                      SeenChar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.NoTargetStalkingState
	 */
	struct AGOAP_Controller_C_NoTargetStalkingState_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FPSP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeToHuntForSeconds;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.FirstSeenPlayer
	 */
	struct AGOAP_Controller_C_FirstSeenPlayer_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.SetATarget_IfDifferentPersonOrCloser
	 */
	struct AGOAP_Controller_C_SetATarget_IfDifferentPersonOrCloser_Params
	{
	public:
		class ARaidCharacter*                                      TEnemy;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.TookDamageWithoutHavingATarget
	 */
	struct AGOAP_Controller_C_TookDamageWithoutHavingATarget_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.ResetLost
	 */
	struct AGOAP_Controller_C_ResetLost_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.StartsettingKeys
	 */
	struct AGOAP_Controller_C_StartsettingKeys_Params
	{
	public:
		ERaidAIState                                               NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.ProcessTaskComplete
	 */
	struct AGOAP_Controller_C_ProcessTaskComplete_Params
	{
	public:
		class FString                                              TaskState;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GoalFinsihed;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.StateLogic
	 */
	struct AGOAP_Controller_C_StateLogic_Params
	{
	public:
		ERaidGOAPEvent                                             NewGOAPEvent;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4MD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARaidCharacter*                                      SeenChar;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0010(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.OnLoaded_50EF9035470C6F40F0D618AF20DD24AA
	 */
	struct AGOAP_Controller_C_OnLoaded_50EF9035470C6F40F0D618AF20DD24AA_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.OnLoaded_75A398344E9F583E768203A8B2779CA8
	 */
	struct AGOAP_Controller_C_OnLoaded_75A398344E9F583E768203A8B2779CA8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.OnGOAPEvent
	 */
	struct AGOAP_Controller_C_OnGOAPEvent_Params
	{
	public:
		ERaidGOAPEvent                                             NewGOAPEvent;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TM1O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARaidCharacter*                                      SeenChar;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0010(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.QueryFinsihed
	 */
	struct AGOAP_Controller_C_QueryFinsihed_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.PlayVoice
	 */
	struct AGOAP_Controller_C_PlayVoice_Params
	{
	public:
		bool                                                       IsAShout;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TZL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          VoiceSetDT;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                VoiceLine;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Ai_TurnOnOffDebugText
	 */
	struct AGOAP_Controller_C_Ai_TurnOnOffDebugText_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.ReceiveTick
	 */
	struct AGOAP_Controller_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.AIShout
	 */
	struct AGOAP_Controller_C_AIShout_Params
	{
	public:
		bool                                                       Whisper;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8M4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SoundRow;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FKEZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          DataTable;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Multi_AIShout
	 */
	struct AGOAP_Controller_C_Multi_AIShout_Params
	{
	public:
		bool                                                       Whisper;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8NGO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Sound_row;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3W3U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          DataTable;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.StartlastDamagedTimer
	 */
	struct AGOAP_Controller_C_StartlastDamagedTimer_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.TurnOffRecentlyHeardAfterTime
	 */
	struct AGOAP_Controller_C_TurnOffRecentlyHeardAfterTime_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.TurnOffReSeenPlayerCooldown
	 */
	struct AGOAP_Controller_C_TurnOffReSeenPlayerCooldown_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Ai_SetMyGoal
	 */
	struct AGOAP_Controller_C_Ai_SetMyGoal_Params
	{
	public:
		class FString                                              CurrentPlan;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.CustomEvent_1
	 */
	struct AGOAP_Controller_C_CustomEvent_1_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.OnGOAPTaskCompleted
	 */
	struct AGOAP_Controller_C_OnGOAPTaskCompleted_Params
	{
	public:
		class FString                                              TaskFinsihed;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GoalComplete;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.ReceiveBeginPlay
	 */
	struct AGOAP_Controller_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.HasLootedRecently
	 */
	struct AGOAP_Controller_C_HasLootedRecently_Params
	{
	public:
		float                                                      TimeTilllCanUseALootableAgain;                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.GetRandomLookingPos
	 */
	struct AGOAP_Controller_C_GetRandomLookingPos_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Ai_StoreBaseMissRate
	 */
	struct AGOAP_Controller_C_Ai_StoreBaseMissRate_Params
	{
	public:
		float                                                      BaseMissRate;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.Ai_CheckSetMyInitialAmmoCount
	 */
	struct AGOAP_Controller_C_Ai_CheckSetMyInitialAmmoCount_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.DebugStimulusEvent
	 */
	struct AGOAP_Controller_C_DebugStimulusEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		ERaidGOAPEvent                                             NormalEvent;                                             // 0x0044(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.UsedALootableAtLocation
	 */
	struct AGOAP_Controller_C_UsedALootableAtLocation_Params
	{
	public:
		struct FVector                                             LootLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.LostPlayerStartHunting
	 */
	struct AGOAP_Controller_C_LostPlayerStartHunting_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.StartGOAPEvent
	 */
	struct AGOAP_Controller_C_StartGOAPEvent_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.StopGOAPEvent
	 */
	struct AGOAP_Controller_C_StopGOAPEvent_Params
	{	};

	/**
	 * Function GOAP_Controller.GOAP_Controller_C.ExecuteUbergraph_GOAP_Controller
	 */
	struct AGOAP_Controller_C_ExecuteUbergraph_GOAP_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
