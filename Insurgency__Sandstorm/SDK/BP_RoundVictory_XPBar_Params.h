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
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_7
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_7_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_6
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_6_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_5
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_5_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_4
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_4_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_3
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_3_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_2
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_2_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_1
	 */
	struct UBP_RoundVictory_XPBar_C_SequenceEvent__ENTRYPOINTBP_RoundVictory_XPBar_1_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.PushNextQueuedXPComponent
	 */
	struct UBP_RoundVictory_XPBar_C_PushNextQueuedXPComponent_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.Estimate Time to Animate
	 */
	struct UBP_RoundVictory_XPBar_C_Estimate_Time_to_Animate_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.TransitionToNextState
	 */
	struct UBP_RoundVictory_XPBar_C_TransitionToNextState_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.StartIncrementing
	 */
	struct UBP_RoundVictory_XPBar_C_StartIncrementing_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.IncrementingHitTotalXP
	 */
	struct UBP_RoundVictory_XPBar_C_IncrementingHitTotalXP_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.IncrementingHitLevelUp
	 */
	struct UBP_RoundVictory_XPBar_C_IncrementingHitLevelUp_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.SetProgressBarPct
	 */
	struct UBP_RoundVictory_XPBar_C_SetProgressBarPct_Params
	{
	public:
		bool                                                       bCurrentXPBar;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HIHR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Pct;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.TickIncrement
	 */
	struct UBP_RoundVictory_XPBar_C_TickIncrement_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHGX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.UpdateWidgets_Current
	 */
	struct UBP_RoundVictory_XPBar_C_UpdateWidgets_Current_Params
	{
	public:
		int64_t                                                    XP;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.UpdateWidgets_Full
	 */
	struct UBP_RoundVictory_XPBar_C_UpdateWidgets_Full_Params
	{
	public:
		int64_t                                                    XP;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.CalculateIncrementRate
	 */
	struct UBP_RoundVictory_XPBar_C_CalculateIncrementRate_Params
	{
	public:
		int32_t                                                    Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IncrementRate;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.AddCurrencyUnlocked
	 */
	struct UBP_RoundVictory_XPBar_C_AddCurrencyUnlocked_Params
	{
	public:
		int32_t                                                    Currency;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1KWJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.AddCosmeticUnlocked
	 */
	struct UBP_RoundVictory_XPBar_C_AddCosmeticUnlocked_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ATNC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.GetUnlockedClasses
	 */
	struct UBP_RoundVictory_XPBar_C_GetUnlockedClasses_Params
	{
	public:
		int32_t                                                    InStartLevel;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InNewLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPlayerClassLimit>                           Results;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.InitializeBar
	 */
	struct UBP_RoundVictory_XPBar_C_InitializeBar_Params
	{
	public:
		int64_t                                                    TotalXP;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EarnedXP;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75MU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameStatsXPComponent>                       XPComponents;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       BackendRewardsPending;                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VPX0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameStatsLevelUpReward                             Rewards;                                                 // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.AnimEvent_IncreaseToNextLevel
	 */
	struct UBP_RoundVictory_XPBar_C_AnimEvent_IncreaseToNextLevel_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.Construct
	 */
	struct UBP_RoundVictory_XPBar_C_Construct_Params
	{	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.Tick
	 */
	struct UBP_RoundVictory_XPBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_XPBar.BP_RoundVictory_XPBar_C.ExecuteUbergraph_BP_RoundVictory_XPBar
	 */
	struct UBP_RoundVictory_XPBar_C_ExecuteUbergraph_BP_RoundVictory_XPBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
