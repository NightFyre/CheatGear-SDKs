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
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_23
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_22
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_21
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_20
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_19
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_18
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_17
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_16
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_15
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_14
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.OnDialogSequenceFinished_13
	 */
	struct UMission_Season_02_Intro_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MissionKickoff
	 */
	struct UMission_Season_02_Intro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_FindMaurice
	 */
	struct UMission_Season_02_Intro_C_Set_FindMaurice_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_FindMaurice
	 */
	struct UMission_Season_02_Intro_C_Obj_FindMaurice_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URHR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_FindMaurice
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_FindMaurice_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_KillFirstInformant
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_KillFirstInformant_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_CollectCoordinates_Actual
	 */
	struct UMission_Season_02_Intro_C_Set_CollectCoordinates_Actual_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_KillAssassin
	 */
	struct UMission_Season_02_Intro_C_Obj_KillAssassin_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMLH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_KillAssassin
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_KillAssassin_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_TalkToMauriceAgain
	 */
	struct UMission_Season_02_Intro_C_Set_TalkToMauriceAgain_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_TalkToMauriceAgain
	 */
	struct UMission_Season_02_Intro_C_Obj_TalkToMauriceAgain_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HB29[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_TalkToMauriceAgain
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_TalkToMauriceAgain_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_GoToLeagueMap
	 */
	struct UMission_Season_02_Intro_C_Set_GoToLeagueMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_GoToLeagueMap
	 */
	struct UMission_Season_02_Intro_C_Obj_GoToLeagueMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LXJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_GoToLeagueMap
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_GoToLeagueMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_LocateKey
	 */
	struct UMission_Season_02_Intro_C_Obj_LocateKey_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_US95[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_LocateKey
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_LocateKey_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_KillBoss
	 */
	struct UMission_Season_02_Intro_C_Set_KillBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_KillBoss
	 */
	struct UMission_Season_02_Intro_C_Obj_KillBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PTJA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_KillBoss
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_KillBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_TITLECARD_Boss
	 */
	struct UMission_Season_02_Intro_C_Set_TITLECARD_Boss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_TITLECARD_Boss
	 */
	struct UMission_Season_02_Intro_C_Obj_TITLECARD_Boss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQ1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_LeaveLeagueMap
	 */
	struct UMission_Season_02_Intro_C_Set_LeaveLeagueMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_LeaveLeagueMap
	 */
	struct UMission_Season_02_Intro_C_Obj_LeaveLeagueMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GOTW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_LeaveLeagueMap
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_LeaveLeagueMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_TurnIn
	 */
	struct UMission_Season_02_Intro_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_TurnIn
	 */
	struct UMission_Season_02_Intro_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A637[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_TurnIn
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_ReachFrontGate
	 */
	struct UMission_Season_02_Intro_C_Set_ReachFrontGate_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_FindBoss
	 */
	struct UMission_Season_02_Intro_C_Obj_FindBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SOG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_FindBoss
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_FindBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_CollectKey
	 */
	struct UMission_Season_02_Intro_C_Set_CollectKey_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_FindBoss_Objective] PROXY
	 */
	struct UMission_Season_02_Intro_C_Obj_FindBoss_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_ReachFrontGate_Inv
	 */
	struct UMission_Season_02_Intro_C_Obj_ReachFrontGate_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W1YZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_ReachFrontGate
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_ReachFrontGate_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_PortalOpen_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E10C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_PortalOpen_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_PortalOpen_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_1
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_FindBoss
	 */
	struct UMission_Season_02_Intro_C_Set_FindBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_FindFirstInformant
	 */
	struct UMission_Season_02_Intro_C_Set_FindFirstInformant_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_FindFirstInformant
	 */
	struct UMission_Season_02_Intro_C_Obj_FindFirstInformant_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UCQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_InvestigateScene
	 */
	struct UMission_Season_02_Intro_C_Obj_InvestigateScene_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4AC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_InvestigateScene
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_InvestigateScene_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_CollectCoordinates
	 */
	struct UMission_Season_02_Intro_C_Obj_CollectCoordinates_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UY0U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_CollectCoordinates
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_CollectCoordinates_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_CollectKey
	 */
	struct UMission_Season_02_Intro_C_Obj_CollectKey_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRNS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_CollectKey
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_CollectKey_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_AdvanceToAssassin_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_AdvanceToAssassin_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2GZI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_AdvanceToAssassin_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_AdvanceToAssassin_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_CheckAssassinSpawned
	 */
	struct UMission_Season_02_Intro_C_Obj_CheckAssassinSpawned_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E215[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_CheckAssassinSpawned
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_CheckAssassinSpawned_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_InvestigateStatue
	 */
	struct UMission_Season_02_Intro_C_Set_InvestigateStatue_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_FindBoss_Objective] PROXY_2
	 */
	struct UMission_Season_02_Intro_C_Obj_FindBoss_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_InvestigateStatue
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_InvestigateStatue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_InvestigateStatue
	 */
	struct UMission_Season_02_Intro_C_Obj_InvestigateStatue_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S6FI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_SkipStatue
	 */
	struct UMission_Season_02_Intro_C_MCE_SkipStatue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_BringKeyToStatue
	 */
	struct UMission_Season_02_Intro_C_Set_BringKeyToStatue_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_BringKeyToStatue
	 */
	struct UMission_Season_02_Intro_C_Obj_BringKeyToStatue_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MFEY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_BringKeyToStatue
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_BringKeyToStatue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_3
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_4
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_5
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_5_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_6
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_6_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_7
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_7_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_8
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_8_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_9
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_9_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_UseUberBoss_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_UseUberBoss_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UV4T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_UseUberBoss_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_UseUberBoss_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_EnterMansion
	 */
	struct UMission_Season_02_Intro_C_Set_EnterMansion_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_FindBoss_Objective] PROXY_10
	 */
	struct UMission_Season_02_Intro_C_Obj_FindBoss_Objective_PROXY_10_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_EnterMansion_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_EnterMansion_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QZ5S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_EnterMansion_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_EnterMansion_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_CourtyardUnlock1
	 */
	struct UMission_Season_02_Intro_C_Obj_CourtyardUnlock1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GCBF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_CourtyardUnlock2
	 */
	struct UMission_Season_02_Intro_C_Obj_CourtyardUnlock2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WDXI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_CourtyardUnlock1
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_CourtyardUnlock1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_CourtyardUnlock2
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_CourtyardUnlock2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_CourtyardUnlock3
	 */
	struct UMission_Season_02_Intro_C_Obj_CourtyardUnlock3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0YCN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_CourtyardUnlock3
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_CourtyardUnlock3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_LockerWaypoint_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_LockerWaypoint_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D44V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_LockerWaypoint_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_LockerWaypoint_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_SpawnFirstInformant
	 */
	struct UMission_Season_02_Intro_C_Obj_SpawnFirstInformant_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HYGO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_SpawnFirstInformant
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_SpawnFirstInformant_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_EnterBallroom_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_EnterBallroom_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SKRS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_EnterBallroom_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_EnterBallroom_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_ReturnToFountain_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_ReturnToFountain_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IYLW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_ReturnToFountain_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_ReturnToFountain_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_VO_Gate1
	 */
	struct UMission_Season_02_Intro_C_Obj_VO_Gate1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y452[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_VO_Gate1
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_VO_Gate1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_VO_Gate2
	 */
	struct UMission_Season_02_Intro_C_Obj_VO_Gate2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OF2M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_VO_Gate2
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_VO_Gate2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_ActivateStairSlide
	 */
	struct UMission_Season_02_Intro_C_Obj_ActivateStairSlide_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XYAS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_ActivateStairSlide
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_ActivateStairSlide_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_FindBoss_Waypoint_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_FindBoss_Waypoint_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W6B6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_FindBoss_Waypoint_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_FindBoss_Waypoint_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_11
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_11_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_LocateKey_BC1
	 */
	struct UMission_Season_02_Intro_C_Obj_LocateKey_BC1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCNG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_LocateKey_BC1
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_LocateKey_BC1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_ClearArea
	 */
	struct UMission_Season_02_Intro_C_Obj_ClearArea_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8N4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_ClearArea
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_ClearArea_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_ClearArea
	 */
	struct UMission_Season_02_Intro_C_Set_ClearArea_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_CollectKey_Initial
	 */
	struct UMission_Season_02_Intro_C_Set_CollectKey_Initial_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_CollectKey_Objective] PROXY_12
	 */
	struct UMission_Season_02_Intro_C_Obj_CollectKey_Objective_PROXY_12_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_SkipEnterBallroomObjSet_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_SkipEnterBallroomObjSet_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ZJC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_SkipEnterBallroomObjSet_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_SkipEnterBallroomObjSet_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_LocateKey_BC1_Objective] PROXY_13
	 */
	struct UMission_Season_02_Intro_C_Obj_LocateKey_BC1_Objective_PROXY_13_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_LocateKey_BC2
	 */
	struct UMission_Season_02_Intro_C_Obj_LocateKey_BC2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5UZX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_LocateKey_BC2
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_LocateKey_BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_14
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_14_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_15
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_15_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_MauriceGiveTake_Cartels
	 */
	struct UMission_Season_02_Intro_C_MCE_MauriceGiveTake_Cartels_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_ClearArea_FrontDoor
	 */
	struct UMission_Season_02_Intro_C_Obj_ClearArea_FrontDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EM7C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_ClearArea_FrontDoor
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_ClearArea_FrontDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_EnterMansion_Actual
	 */
	struct UMission_Season_02_Intro_C_Obj_EnterMansion_Actual_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VW2B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_EnterMansion_Actual
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_EnterMansion_Actual_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_ClearArea_FrontDoor
	 */
	struct UMission_Season_02_Intro_C_Set_ClearArea_FrontDoor_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Set_EnterMansion_Actual
	 */
	struct UMission_Season_02_Intro_C_Set_EnterMansion_Actual_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_FindBoss_Objective] PROXY_16
	 */
	struct UMission_Season_02_Intro_C_Obj_FindBoss_Objective_PROXY_16_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_17
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_17_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.[Obj_PortalOpen_INV_Objective] PROXY_18
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalOpen_INV_Objective_PROXY_18_Params
	{	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.Obj_PortalWaypoint_INV
	 */
	struct UMission_Season_02_Intro_C_Obj_PortalWaypoint_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3PH5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.MCE_Update_PortalWaypoint_INV
	 */
	struct UMission_Season_02_Intro_C_MCE_Update_PortalWaypoint_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_02_Intro.Mission_Season_02_Intro_C.ExecuteUbergraph_Mission_Season_02_Intro
	 */
	struct UMission_Season_02_Intro_C_ExecuteUbergraph_Mission_Season_02_Intro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YM2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
