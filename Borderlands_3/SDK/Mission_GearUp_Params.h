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
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_OpenAllWindows
	 */
	struct UMission_GearUp_C_Obj_OpenAllWindows_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NLEL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_OpenAllWindows
	 */
	struct UMission_GearUp_C_MCE_Update_OpenAllWindows_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_EnterMap
	 */
	struct UMission_GearUp_C_MCE_VO_EnterMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_RunStart
	 */
	struct UMission_GearUp_C_MCE_VO_RunStart_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_CircleMoving
	 */
	struct UMission_GearUp_C_MCE_VO_CircleMoving_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_CircleStopping
	 */
	struct UMission_GearUp_C_MCE_VO_CircleStopping_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_ResetMission
	 */
	struct UMission_GearUp_C_MCE_ResetMission_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Set_RunStart
	 */
	struct UMission_GearUp_C_Set_RunStart_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_RespawnPlayers
	 */
	struct UMission_GearUp_C_MCE_RespawnPlayers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_KilledBoss
	 */
	struct UMission_GearUp_C_MCE_VO_KilledBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_APlayerDied
	 */
	struct UMission_GearUp_C_MCE_VO_APlayerDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_FinalCircleStop
	 */
	struct UMission_GearUp_C_MCE_VO_FinalCircleStop_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_StartCountdown_INV
	 */
	struct UMission_GearUp_C_MCE_Update_StartCountdown_INV_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_EarlyBanter
	 */
	struct UMission_GearUp_C_MCE_VO_EarlyBanter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_StartCountdown_INV
	 */
	struct UMission_GearUp_C_Obj_StartCountdown_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3PEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_SponsorBanter
	 */
	struct UMission_GearUp_C_MCE_VO_SponsorBanter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_Airdrop
	 */
	struct UMission_GearUp_C_MCE_VO_Airdrop_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_InterruptBanter
	 */
	struct UMission_GearUp_C_MCE_InterruptBanter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_OutsideCircle
	 */
	struct UMission_GearUp_C_MCE_VO_OutsideCircle_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_AdvanceToMixedSet
	 */
	struct UMission_GearUp_C_MCE_AdvanceToMixedSet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_LootTrap
	 */
	struct UMission_GearUp_C_MCE_VO_LootTrap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_VO_RevenantAmbush
	 */
	struct UMission_GearUp_C_MCE_VO_RevenantAmbush_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_FailGearUpRun
	 */
	struct UMission_GearUp_C_MCE_FailGearUpRun_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_RespawnStationUsed
	 */
	struct UMission_GearUp_C_MCE_RespawnStationUsed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_InterruptWelcomeBack
	 */
	struct UMission_GearUp_C_MCE_InterruptWelcomeBack_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_PrizeDoorOpen
	 */
	struct UMission_GearUp_C_MCE_PrizeDoorOpen_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Set_CircleMoveStop_AndBoss
	 */
	struct UMission_GearUp_C_Set_CircleMoveStop_AndBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_CircleMove_3
	 */
	struct UMission_GearUp_C_Obj_CircleMove_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CF6T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_CircleStop_3
	 */
	struct UMission_GearUp_C_Obj_CircleStop_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KD70[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_CircleMove_3
	 */
	struct UMission_GearUp_C_MCE_Update_CircleMove_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_CircleStop_3
	 */
	struct UMission_GearUp_C_MCE_Update_CircleStop_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_CompleteMission
	 */
	struct UMission_GearUp_C_MCE_CompleteMission_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.AdvanceToKillBossSet
	 */
	struct UMission_GearUp_C_AdvanceToKillBossSet_Params
	{	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_KillBoss_BC
	 */
	struct UMission_GearUp_C_Obj_KillBoss_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F85F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_KillBoss_BC
	 */
	struct UMission_GearUp_C_MCE_Update_KillBoss_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Set_CircleMoveStop
	 */
	struct UMission_GearUp_C_Set_CircleMoveStop_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.[Obj_BossFightStart_Objective] PROXY
	 */
	struct UMission_GearUp_C_Obj_BossFightStart_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_BossFightStart
	 */
	struct UMission_GearUp_C_Obj_BossFightStart_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNFM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_BossFightStart
	 */
	struct UMission_GearUp_C_MCE_Update_BossFightStart_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.[Obj_BossFightStart_Objective] PROXY_1
	 */
	struct UMission_GearUp_C_Obj_BossFightStart_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Audio_RevenantSpawn
	 */
	struct UMission_GearUp_C_MCE_Audio_RevenantSpawn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.[Obj_KillBoss_Objective] PROXY_2
	 */
	struct UMission_GearUp_C_Obj_KillBoss_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_KillBoss
	 */
	struct UMission_GearUp_C_MCE_Update_KillBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_KillBoss
	 */
	struct UMission_GearUp_C_Obj_KillBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I48V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Set_KillBoss
	 */
	struct UMission_GearUp_C_Set_KillBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_Update_RunStart
	 */
	struct UMission_GearUp_C_MCE_Update_RunStart_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_ActivateMission_Remote
	 */
	struct UMission_GearUp_C_MCE_ActivateMission_Remote_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.MCE_AdvanceToKillBossSet
	 */
	struct UMission_GearUp_C_MCE_AdvanceToKillBossSet_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.Obj_RunStart
	 */
	struct UMission_GearUp_C_Obj_RunStart_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XO09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.[Obj_CircleMove_2_Objective] PROXY_3
	 */
	struct UMission_GearUp_C_Obj_CircleMove_2_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.[Obj_CircleStop_2_Objective] PROXY_4
	 */
	struct UMission_GearUp_C_Obj_CircleStop_2_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_GearUp.Mission_GearUp_C.ExecuteUbergraph_Mission_GearUp
	 */
	struct UMission_GearUp_C_ExecuteUbergraph_Mission_GearUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CAG4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
