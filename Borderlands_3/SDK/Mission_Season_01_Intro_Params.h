#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_15
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_14
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_13
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_12
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_11
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_10
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.OnDialogSequenceFinished_9
	 */
	struct UMission_Season_01_Intro_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_GoToLeagueMap
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_GoToLeagueMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_FindLeagueBoss
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_FindLeagueBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_TurnIn
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_PortalOpen_INV
	 */
	struct UMission_Season_01_Intro_C_Obj_PortalOpen_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EXU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_PortalOpen
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_PortalOpen_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY
	 */
	struct UMission_Season_01_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_FindLeagueBoss
	 */
	struct UMission_Season_01_Intro_C_Obj_FindLeagueBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O47H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_GoToLeagueMap
	 */
	struct UMission_Season_01_Intro_C_Obj_GoToLeagueMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EAXG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_FindLeagueBoss
	 */
	struct UMission_Season_01_Intro_C_Set_FindLeagueBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_GoToLeagueMap
	 */
	struct UMission_Season_01_Intro_C_Set_GoToLeagueMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_LeaveLeagueMap
	 */
	struct UMission_Season_01_Intro_C_Set_LeaveLeagueMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_LeaveLeagueMap
	 */
	struct UMission_Season_01_Intro_C_Obj_LeaveLeagueMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RUQ4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_1
	 */
	struct UMission_Season_01_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_LeaveLeagueMap
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_LeaveLeagueMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_Gate1_Inv
	 */
	struct UMission_Season_01_Intro_C_Obj_Gate1_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BW1W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_Gate2_Inv
	 */
	struct UMission_Season_01_Intro_C_Obj_Gate2_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHUA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_Gate3_Inv
	 */
	struct UMission_Season_01_Intro_C_Obj_Gate3_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OOS9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_Gate1
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_Gate1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_Gate2
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_Gate2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_Gate3
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_Gate3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_100PercentDropRate_Inv
	 */
	struct UMission_Season_01_Intro_C_Obj_100PercentDropRate_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2KC1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_100PercentDropRate
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_100PercentDropRate_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_LeaveLeagueMapBC
	 */
	struct UMission_Season_01_Intro_C_Obj_LeaveLeagueMapBC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HBNN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_LeaveLeagueMapBC
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_LeaveLeagueMapBC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_TITLECARD_CaptainHaunt
	 */
	struct UMission_Season_01_Intro_C_Set_TITLECARD_CaptainHaunt_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_TITLECARD_CaptainHaunt
	 */
	struct UMission_Season_01_Intro_C_Obj_TITLECARD_CaptainHaunt_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7KR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_GetFirstShard
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_GetFirstShard_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_FirstShard
	 */
	struct UMission_Season_01_Intro_C_Obj_FirstShard_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8WDN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_FirstShard
	 */
	struct UMission_Season_01_Intro_C_Set_FirstShard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_KillLeagueBoss
	 */
	struct UMission_Season_01_Intro_C_Set_KillLeagueBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_KillLeagueBoss
	 */
	struct UMission_Season_01_Intro_C_Obj_KillLeagueBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SA3T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_KillLeagueBoss
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_KillLeagueBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_UseUberBoss
	 */
	struct UMission_Season_01_Intro_C_Obj_UseUberBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJLR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_UseUberBoss
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_UseUberBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_Gate2_BC
	 */
	struct UMission_Season_01_Intro_C_Obj_Gate2_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IJ4X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_Gate2_BC
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_Gate2_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_FindMaurice
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_FindMaurice_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_GetShards
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_GetShards_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_TalkToMauriceShards
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_TalkToMauriceShards_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_TurnIn
	 */
	struct UMission_Season_01_Intro_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z6FR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_TalkToMauriceShards
	 */
	struct UMission_Season_01_Intro_C_Obj_TalkToMauriceShards_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VNPG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_MauriceGiveTake
	 */
	struct UMission_Season_01_Intro_C_MCE_MauriceGiveTake_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MissionKickoff
	 */
	struct UMission_Season_01_Intro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_GetShards
	 */
	struct UMission_Season_01_Intro_C_Obj_GetShards_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQWL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_Gate1_BC
	 */
	struct UMission_Season_01_Intro_C_Obj_Gate1_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_880F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_Gate3_BC
	 */
	struct UMission_Season_01_Intro_C_Obj_Gate3_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TON0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_Gate3_BC
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_Gate3_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.MCE_Update_Gate1_BC
	 */
	struct UMission_Season_01_Intro_C_MCE_Update_Gate1_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_2
	 */
	struct UMission_Season_01_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_3
	 */
	struct UMission_Season_01_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Obj_FindMaurice
	 */
	struct UMission_Season_01_Intro_C_Obj_FindMaurice_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DKTJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_TurnIn
	 */
	struct UMission_Season_01_Intro_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_TalkToMauriceShards
	 */
	struct UMission_Season_01_Intro_C_Set_TalkToMauriceShards_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_GetShards
	 */
	struct UMission_Season_01_Intro_C_Set_GetShards_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.Set_FindMaurice
	 */
	struct UMission_Season_01_Intro_C_Set_FindMaurice_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Intro.Mission_Season_01_Intro_C.ExecuteUbergraph_Mission_Season_01_Intro
	 */
	struct UMission_Season_01_Intro_C_ExecuteUbergraph_Mission_Season_01_Intro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4SK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
