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
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_31
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_31_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_30
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_30_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_29
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_29_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_28
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_28_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_27
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_27_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_26
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_26_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_25
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_25_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_24
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_24_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_23
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_22
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_21
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_20
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_19
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_18
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_17
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_FollowChaddRocketLift
	 */
	struct UMission_DudeBro_C_MCE_FollowChaddRocketLift_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_PlayerBaseJump
	 */
	struct UMission_DudeBro_C_Obj_PlayerBaseJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_00L1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Player Has Completed Jump
	 */
	struct UMission_DudeBro_C_MCE_Player_Has_Completed_Jump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ChaddUsesLift
	 */
	struct UMission_DudeBro_C_Set_ChaddUsesLift_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddUsesLift
	 */
	struct UMission_DudeBro_C_Obj_ChaddUsesLift_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZFRV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddIsJumping
	 */
	struct UMission_DudeBro_C_Obj_ChaddIsJumping_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F8ZS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ChaddArrivedAtPreJump
	 */
	struct UMission_DudeBro_C_Set_ChaddArrivedAtPreJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddArrivedAtPreJump
	 */
	struct UMission_DudeBro_C_Obj_ChaddArrivedAtPreJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KZCV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ChaddGetsIntoPositionToJump
	 */
	struct UMission_DudeBro_C_Set_ChaddGetsIntoPositionToJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddGetsIntoPositionToJump
	 */
	struct UMission_DudeBro_C_Obj_ChaddGetsIntoPositionToJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0FO7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE ChaddSaysRandomJumpLine
	 */
	struct UMission_DudeBro_C_MCE_ChaddSaysRandomJumpLine_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Kill Grog
	 */
	struct UMission_DudeBro_C_MCE_Kill_Grog_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Chadd Read To Jump
	 */
	struct UMission_DudeBro_C_MCE_Chadd_Read_To_Jump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_UseRocketPart2
	 */
	struct UMission_DudeBro_C_Obj_UseRocketPart2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PRJT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_UseRocketPart3
	 */
	struct UMission_DudeBro_C_Obj_UseRocketPart3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RF4Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Use Rocket Part 2
	 */
	struct UMission_DudeBro_C_MCE_Use_Rocket_Part_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Use Rocket Part 3
	 */
	struct UMission_DudeBro_C_MCE_Use_Rocket_Part_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FuelCanCounter
	 */
	struct UMission_DudeBro_C_Obj_FuelCanCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TORG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_FuelCanCounter
	 */
	struct UMission_DudeBro_C_MCE_Update_FuelCanCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddRocketLift
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddRocketLift_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4GO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddRocketLift
	 */
	struct UMission_DudeBro_C_Set_FollowChaddRocketLift_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Watch Chadd Base Jump
	 */
	struct UMission_DudeBro_C_MCE_Watch_Chadd_Base_Jump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_PlayerBaseJumpPrep
	 */
	struct UMission_DudeBro_C_Obj_PlayerBaseJumpPrep_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BADM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Answer Call Talk To Chadd
	 */
	struct UMission_DudeBro_C_MCE_Answer_Call_Talk_To_Chadd_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_AnswerCallTalkToChadd
	 */
	struct UMission_DudeBro_C_Obj_AnswerCallTalkToChadd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q73V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_AnswerCallTalkToChadd
	 */
	struct UMission_DudeBro_C_Set_AnswerCallTalkToChadd_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Give Guts To Chadd
	 */
	struct UMission_DudeBro_C_MCE_Give_Guts_To_Chadd_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Follow Chadd Saurian Fight
	 */
	struct UMission_DudeBro_C_MCE_Follow_Chadd_Saurian_Fight_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddSaurianFight
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddSaurianFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NPPT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GiveGutsToChadd
	 */
	struct UMission_DudeBro_C_Obj_GiveGutsToChadd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WR4Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddSaurianFight
	 */
	struct UMission_DudeBro_C_Set_FollowChaddSaurianFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GetGrogGuts
	 */
	struct UMission_DudeBro_C_Obj_GetGrogGuts_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CX3V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_KillGrog
	 */
	struct UMission_DudeBro_C_Obj_KillGrog_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RLIT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_GiveGutsToChadd
	 */
	struct UMission_DudeBro_C_Set_GiveGutsToChadd_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_KillGrog
	 */
	struct UMission_DudeBro_C_Set_KillGrog_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Revive Chadd Jump
	 */
	struct UMission_DudeBro_C_MCE_Revive_Chadd_Jump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Follow Chadd Base Jump
	 */
	struct UMission_DudeBro_C_MCE_Follow_Chadd_Base_Jump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Follow Chadd Grog Fight
	 */
	struct UMission_DudeBro_C_MCE_Follow_Chadd_Grog_Fight_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddGrogFight
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddGrogFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7M1M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddGrogFight
	 */
	struct UMission_DudeBro_C_Set_FollowChaddGrogFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Revive Chadd Fight
	 */
	struct UMission_DudeBro_C_MCE_Revive_Chadd_Fight_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE GotChaddLootMissionComplete
	 */
	struct UMission_DudeBro_C_MCE_GotChaddLootMissionComplete_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GetChaddLoot
	 */
	struct UMission_DudeBro_C_Obj_GetChaddLoot_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NWWM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_GetChaddLoot
	 */
	struct UMission_DudeBro_C_Set_GetChaddLoot_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Shoot The Igniter
	 */
	struct UMission_DudeBro_C_MCE_Shoot_The_Igniter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Use Rocket Part 1
	 */
	struct UMission_DudeBro_C_MCE_Use_Rocket_Part_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ShootTheIgniter
	 */
	struct UMission_DudeBro_C_Obj_ShootTheIgniter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7S1Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ShootTheIgniter
	 */
	struct UMission_DudeBro_C_Set_ShootTheIgniter_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_UseRocketPart1
	 */
	struct UMission_DudeBro_C_Obj_UseRocketPart1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDMS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_UseRocketParts
	 */
	struct UMission_DudeBro_C_Set_UseRocketParts_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GetRocketParts
	 */
	struct UMission_DudeBro_C_Obj_GetRocketParts_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8QPD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_GetRocketParts
	 */
	struct UMission_DudeBro_C_Set_GetRocketParts_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ReviveChaddJump
	 */
	struct UMission_DudeBro_C_Obj_ReviveChaddJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MOGB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ReviveChaddJump
	 */
	struct UMission_DudeBro_C_Set_ReviveChaddJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddBaseJump
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddBaseJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JF1S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddBaseJump
	 */
	struct UMission_DudeBro_C_Set_FollowChaddBaseJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ReviveChaddFight
	 */
	struct UMission_DudeBro_C_Obj_ReviveChaddFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6SO6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ReviveChaddFight
	 */
	struct UMission_DudeBro_C_Set_ReviveChaddFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_KillSaurianChaddFight
	 */
	struct UMission_DudeBro_C_Obj_KillSaurianChaddFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9BPQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_KillSaurianChaddFight
	 */
	struct UMission_DudeBro_C_Set_KillSaurianChaddFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_BaseJumpPrepCounter
	 */
	struct UMission_DudeBro_C_Obj_BaseJumpPrepCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YC8V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_ChaddIsJumping
	 */
	struct UMission_DudeBro_C_MCE_Update_ChaddIsJumping_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_BaseJumpPrepCounter
	 */
	struct UMission_DudeBro_C_MCE_Update_BaseJumpPrepCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_BaseJumpCounter
	 */
	struct UMission_DudeBro_C_Obj_BaseJumpCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3YRQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_BaseJumpCounter
	 */
	struct UMission_DudeBro_C_MCE_Update_BaseJumpCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.[Obj_ReviveChaddJump_Objective] PROXY
	 */
	struct UMission_DudeBro_C_Obj_ReviveChaddJump_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.[Obj_FuelCanCounter_Objective] PROXY_1
	 */
	struct UMission_DudeBro_C_Obj_FuelCanCounter_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MissionKickoff
	 */
	struct UMission_DudeBro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.ExecuteUbergraph_Mission_DudeBro
	 */
	struct UMission_DudeBro_C_ExecuteUbergraph_Mission_DudeBro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9BW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
