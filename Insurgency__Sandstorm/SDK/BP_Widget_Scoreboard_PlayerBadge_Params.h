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
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateDevStatus
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_UpdateDevStatus_Params
	{
	public:
		bool                                                       bNewDevStatus;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateActiveWidget
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_UpdateActiveWidget_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateExperience
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_UpdateExperience_Params
	{
	public:
		int32_t                                                    NewExperience;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetRankColors
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_SetRankColors_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetRankNumberText
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_SetRankNumberText_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.GetRankNumber
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_GetRankNumber_Params
	{
	public:
		int32_t                                                    RankNumber;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetDefaultsFromPlayerState
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_SetDefaultsFromPlayerState_Params
	{
	public:
		unsigned char                                              UnknownData_S6UJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.PreConstruct
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge
	 */
	struct UBP_Widget_Scoreboard_PlayerBadge_C_ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
