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
	 * Function WBP_WatchApp.WBP_WatchApp_C.GetTimeToNextRoundTimeAlert
	 */
	struct UWBP_WatchApp_C_GetTimeToNextRoundTimeAlert_Params
	{
	public:
		float                                                      CurrentRoundTime;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeToNextTimeReminder;                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.ClearAlertAndStopPulse
	 */
	struct UWBP_WatchApp_C_ClearAlertAndStopPulse_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.SetAlertTextAndStartPulse
	 */
	struct UWBP_WatchApp_C_SetAlertTextAndStartPulse_Params
	{
	public:
		class FText                                                AlertText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackSpeed;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4K8B[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.GetAlertPulseVis
	 */
	struct UWBP_WatchApp_C_GetAlertPulseVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.GetDistanceReadingText
	 */
	struct UWBP_WatchApp_C_GetDistanceReadingText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.GetObjectiveMarkerVis
	 */
	struct UWBP_WatchApp_C_GetObjectiveMarkerVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.Tick
	 */
	struct UWBP_WatchApp_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.Construct
	 */
	struct UWBP_WatchApp_C_Construct_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnObjectiveLocationChanged
	 */
	struct UWBP_WatchApp_C_OnObjectiveLocationChanged_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.UpdateBearingAndDistance
	 */
	struct UWBP_WatchApp_C_UpdateBearingAndDistance_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnAlertLevelChanged
	 */
	struct UWBP_WatchApp_C_OnAlertLevelChanged_Params
	{
	public:
		EAlertLevel                                                NewAlertLevel;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnWatchConfigChanged
	 */
	struct UWBP_WatchApp_C_OnWatchConfigChanged_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnWatchModeChanged
	 */
	struct UWBP_WatchApp_C_OnWatchModeChanged_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.BindDelegates
	 */
	struct UWBP_WatchApp_C_BindDelegates_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnCaptureStateChanged
	 */
	struct UWBP_WatchApp_C_OnCaptureStateChanged_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnCaptureZoneChanged
	 */
	struct UWBP_WatchApp_C_OnCaptureZoneChanged_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.Timer_UpdateBearingAndDistance
	 */
	struct UWBP_WatchApp_C_Timer_UpdateBearingAndDistance_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.UpdateTimeText
	 */
	struct UWBP_WatchApp_C_UpdateTimeText_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.Destruct
	 */
	struct UWBP_WatchApp_C_Destruct_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnRoundTimeAlert
	 */
	struct UWBP_WatchApp_C_OnRoundTimeAlert_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.RestoreWatchModeAfterAlert
	 */
	struct UWBP_WatchApp_C_RestoreWatchModeAfterAlert_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.PlayInRangeAlertSound
	 */
	struct UWBP_WatchApp_C_PlayInRangeAlertSound_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.PlayCapturingAlertSound
	 */
	struct UWBP_WatchApp_C_PlayCapturingAlertSound_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.PlayRoundTimeRemainingAlertSound
	 */
	struct UWBP_WatchApp_C_PlayRoundTimeRemainingAlertSound_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.UpdateDistanceText
	 */
	struct UWBP_WatchApp_C_UpdateDistanceText_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.ScheduleNextRoundTimeAlert
	 */
	struct UWBP_WatchApp_C_ScheduleNextRoundTimeAlert_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.SendRoundTimeAlert
	 */
	struct UWBP_WatchApp_C_SendRoundTimeAlert_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnRoundStageSet
	 */
	struct UWBP_WatchApp_C_OnRoundStageSet_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.OnProximityAlert
	 */
	struct UWBP_WatchApp_C_OnProximityAlert_Params
	{	};

	/**
	 * Function WBP_WatchApp.WBP_WatchApp_C.ExecuteUbergraph_WBP_WatchApp
	 */
	struct UWBP_WatchApp_C_ExecuteUbergraph_WBP_WatchApp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
