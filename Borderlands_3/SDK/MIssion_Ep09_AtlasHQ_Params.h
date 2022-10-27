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
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_23
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_22
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_21
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_20
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_19
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_18
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_17
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_16
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_15
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_14
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OnDialogSequenceFinished_13
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_ClaptrapPhoneRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_ClaptrapPhoneRhys_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_HeadToAtlas
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_HeadToAtlas_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GE1L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_InvestigateFailure
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_InvestigateFailure_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_InvestigateFailure
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_InvestigateFailure_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GH4P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_DestroyCommandShip
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_DestroyCommandShip_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_DestroyCommandShip
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_DestroyCommandShip_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7933[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_HelpRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_HelpRhys_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_HelpRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_HelpRhys_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RAM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_DefeatBoss
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_DefeatBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_DefeatBoss
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_DefeatBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P2IY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player sees defenses go dead
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_sees_defenses_go_dead_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayeSeesFrontrunner
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayeSeesFrontrunner_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player defeats the inhibitor carrying mechs
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_defeats_the_inhibitor_carrying_mechs_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayerDefeatsWave3
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayerDefeatsWave3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player enters the boss arena
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_enters_the_boss_arena_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player defeats Negative Zero
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_defeats_Negative_Zero_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_DefenseFail_Inv
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_DefenseFail_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0WKV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_CannonsOne
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_CannonsOne_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_CanonsOne
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_CanonsOne_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TX15[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_CannonsThree
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_CannonsThree_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_CannonsThree
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_CannonsThree_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L756[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player reactivates the first cannons
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_reactivates_the_first_cannons_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player reactivates the final cannons
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_reactivates_the_final_cannons_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_RhysFinale
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_RhysFinale_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_RhysFinale
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_RhysFinale_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0F8M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player takes the key fragment from Rhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_takes_the_key_fragment_from_Rhys_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_BossTitleCard
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_BossTitleCard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_BossTitleCard_Inv
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_BossTitleCard_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W05B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_FinalDefenseControls
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_FinalDefenseControls_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_FinalDefenseControls
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_FinalDefenseControls_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3C3X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_ElevatorState_Inv
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_ElevatorState_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SZX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_TakeElevators
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_TakeElevators_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_TakeElevators
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_TakeElevators_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCKF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_Player arrives at the big Atlas reveal
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_Player_arrives_at_the_big_Atlas_reveal_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayerDefeatsWave1
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayerDefeatsWave1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OBJ_Wave1
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OBJ_Wave1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G2BA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OBJ_Wave2
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OBJ_Wave2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EPFV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_Wave1
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_Wave1_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_Wave2
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_Wave2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayerDefeatsWave2
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayerDefeatsWave2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.OBJ_Wave3
	 */
	struct UMIssion_Ep09_AtlasHQ_C_OBJ_Wave3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AP2U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_Wave3
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_Wave3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_KillFrontrunner
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_KillFrontrunner_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_KillFrontrunner
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_KillFrontrunner_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGIR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_KillFrontrunners
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_KillFrontrunners_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_KillFrontrunners
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_KillFrontrunners_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EPSO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_FrontrunnersKilled
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_FrontrunnersKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb01
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb01_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5XDA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UPDATE_Breadcrumb01
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UPDATE_Breadcrumb01_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb02
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb02_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PPUW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UPDATE_Breadcrumb02
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UPDATE_Breadcrumb02_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb03
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb03_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9W0F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UPDATE_Breadcrumb03
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UPDATE_Breadcrumb03_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb04
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb04_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S3S1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UPDATE_Breadcrumb04
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UPDATE_Breadcrumb04_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_DropDown
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_DropDown_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6LWY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_DropDown
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_DropDown_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_ReachedOffice
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_ReachedOffice_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayerEnteredAtlas
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayerEnteredAtlas_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_InAtlas
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_InAtlas_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJ94[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_Reveal
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_Reveal_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L64U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayerArrivesFrontCourtayrd
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayerArrivesFrontCourtayrd_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_InsideMan
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_InsideMan_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UIJ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_NeedTurrets
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_NeedTurrets_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5R9S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_NeedTurrets
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_NeedTurrets_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_NeedTurrets2
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_NeedTurrets2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOBI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_NeedTurrets2
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_NeedTurrets2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_Mechs
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_Mechs_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TTQK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_Mechs
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_Mechs_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_DeathScene
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_DeathScene_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T0JL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_DeathScene
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_DeathScene_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_DogKill
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_DogKill_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_77IF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_DogKill
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_DogKill_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_VO_InLobby
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_VO_InLobby_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_471X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_InLobby
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_InLobby_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VO_Elevator
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VO_Elevator_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_HeadToAtlasHQ
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_HeadToAtlasHQ_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_HeadToCity
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_HeadToCity_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_HeadToCity
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_HeadToCity_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQAR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_ArrivedAtCity
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_ArrivedAtCity_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_ClaptrapPhoneRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_ClaptrapPhoneRhys_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IA2P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_RhysPhonedIn
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_RhysPhonedIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_ListenToRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_ListenToRhys_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_ListenToRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_ListenToRhys_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URRT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_HeadToSecretEntrance
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_HeadToSecretEntrance_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0IFL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_HeadToSecretEntrance
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_HeadToSecretEntrance_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_ArrivedAtSecretEntrance
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_ArrivedAtSecretEntrance_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb0A
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb0A_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UG5Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UPDATE_Breadcrumb0A
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UPDATE_Breadcrumb0A_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Rhys_MustacheKeep
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Rhys_MustacheKeep_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYOA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_RhysFinale_Sync
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_RhysFinale_Sync_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6GY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_RhysFinale_Mustache
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_RhysFinale_Mustache_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_RhysFinale_TakeShard
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_RhysFinale_TakeShard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_PlayerMeetsRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_PlayerMeetsRhys_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.MRE_KeepMustache
	 */
	struct UMIssion_Ep09_AtlasHQ_C_MRE_KeepMustache_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Rhys_MustacheRemove
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Rhys_MustacheRemove_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9PM0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.MRE_RemoveMustache
	 */
	struct UMIssion_Ep09_AtlasHQ_C_MRE_RemoveMustache_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb01A
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb01A_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UULE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UPDATE_Breadcrumb01A
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UPDATE_Breadcrumb01A_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_RhysFinale_Decision
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_RhysFinale_Decision_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1QQA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_RhysFinale_Decision
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_RhysFinale_Decision_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Set_OpenDesk
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Set_OpenDesk_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_OpenDesk
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_OpenDesk_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0C11[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_DeskOpened
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_DeskOpened_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_UpdateListenToRhys
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_UpdateListenToRhys_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.MRE_OpenDoorAtlasComplete
	 */
	struct UMIssion_Ep09_AtlasHQ_C_MRE_OpenDoorAtlasComplete_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_UnlockFirstDoor
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_UnlockFirstDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGCO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Breadcrumb035
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Breadcrumb035_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IGTC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_VOMainLobby
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_VOMainLobby_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.Obj_Hidden_CommandShipIOState
	 */
	struct UMIssion_Ep09_AtlasHQ_C_Obj_Hidden_CommandShipIOState_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N3OU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ME_RearTurretSequenceComplete
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ME_RearTurretSequenceComplete_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.HackRewardBullshit
	 */
	struct UMIssion_Ep09_AtlasHQ_C_HackRewardBullshit_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z8DI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C.ExecuteUbergraph_MIssion_Ep09_AtlasHQ
	 */
	struct UMIssion_Ep09_AtlasHQ_C_ExecuteUbergraph_MIssion_Ep09_AtlasHQ_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D74G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
