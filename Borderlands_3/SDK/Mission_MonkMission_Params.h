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
	 * Function Mission_MonkMission.Mission_MonkMission_C.OnDialogSequenceFinished_13
	 */
	struct UMission_MonkMission_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OnDialogSequenceFinished_12
	 */
	struct UMission_MonkMission_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OnDialogSequenceFinished_11
	 */
	struct UMission_MonkMission_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OnDialogSequenceFinished_10
	 */
	struct UMission_MonkMission_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OnDialogSequenceFinished_9
	 */
	struct UMission_MonkMission_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OnDialogSequenceFinished_8
	 */
	struct UMission_MonkMission_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_HarvestLivers
	 */
	struct UMission_MonkMission_C_Obj_HarvestLivers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2P1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Set_EnterCellar
	 */
	struct UMission_MonkMission_C_Set_EnterCellar_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_EnterCellar
	 */
	struct UMission_MonkMission_C_Obj_EnterCellar_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1NW5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_EnterCellar
	 */
	struct UMission_MonkMission_C_Update_EnterCellar_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Set_TalkToMendel
	 */
	struct UMission_MonkMission_C_Set_TalkToMendel_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.MCE_Update_TalkToMendel
	 */
	struct UMission_MonkMission_C_MCE_Update_TalkToMendel_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_TalkToMendel
	 */
	struct UMission_MonkMission_C_Obj_TalkToMendel_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QZGA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Set_KillBirthers
	 */
	struct UMission_MonkMission_C_Set_KillBirthers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Set_KillHive
	 */
	struct UMission_MonkMission_C_Set_KillHive_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_OpenBarrel01
	 */
	struct UMission_MonkMission_C_Update_OpenBarrel01_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_KillBirthers
	 */
	struct UMission_MonkMission_C_Obj_KillBirthers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VWJJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_KillBirthers
	 */
	struct UMission_MonkMission_C_Update_KillBirthers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_KillHive
	 */
	struct UMission_MonkMission_C_Obj_KillHive_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VMQB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_KillHive
	 */
	struct UMission_MonkMission_C_Update_KillHive_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OBJ_RingBell
	 */
	struct UMission_MonkMission_C_OBJ_RingBell_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QI3L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_RingBell
	 */
	struct UMission_MonkMission_C_Update_RingBell_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_OpenBarrel01
	 */
	struct UMission_MonkMission_C_Obj_OpenBarrel01_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9VJT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_OpenBarrel02
	 */
	struct UMission_MonkMission_C_Obj_OpenBarrel02_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HFH8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_OpenBarrel03
	 */
	struct UMission_MonkMission_C_Obj_OpenBarrel03_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YD8H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_OpenBarrel02
	 */
	struct UMission_MonkMission_C_Update_OpenBarrel02_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_OpenBarrel03
	 */
	struct UMission_MonkMission_C_Update_OpenBarrel03_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.[Obj_HarvestLivers_Objective] PROXY
	 */
	struct UMission_MonkMission_C_Obj_HarvestLivers_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_GetStriker
	 */
	struct UMission_MonkMission_C_Obj_GetStriker_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z9YU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_PlaceStriker
	 */
	struct UMission_MonkMission_C_Obj_PlaceStriker_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FM1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_FloodRatch
	 */
	struct UMission_MonkMission_C_Obj_FloodRatch_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3A6H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.SET_FollowMonk
	 */
	struct UMission_MonkMission_C_SET_FollowMonk_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OBJ_FollowMonk
	 */
	struct UMission_MonkMission_C_OBJ_FollowMonk_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_36D6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_FollowMonk
	 */
	struct UMission_MonkMission_C_Update_FollowMonk_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.SET_ClearInitialGunk
	 */
	struct UMission_MonkMission_C_SET_ClearInitialGunk_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.MissionKickoff
	 */
	struct UMission_MonkMission_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.SET_FindLivers
	 */
	struct UMission_MonkMission_C_SET_FindLivers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Advance_FindLivers
	 */
	struct UMission_MonkMission_C_Advance_FindLivers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_HarvestLivers
	 */
	struct UMission_MonkMission_C_Update_HarvestLivers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_PlaceStriker
	 */
	struct UMission_MonkMission_C_Update_PlaceStriker_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.OBJ_PlaceLivers
	 */
	struct UMission_MonkMission_C_OBJ_PlaceLivers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UM0V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_PlaceLivers
	 */
	struct UMission_MonkMission_C_Update_PlaceLivers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.[Obj_FloodRatch_Objective] PROXY_1
	 */
	struct UMission_MonkMission_C_Obj_FloodRatch_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.[Obj_KillBirthers_Objective] PROXY_2
	 */
	struct UMission_MonkMission_C_Obj_KillBirthers_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.[Obj_OpenBarrel02_Objective] PROXY_3
	 */
	struct UMission_MonkMission_C_Obj_OpenBarrel02_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.[Obj_OpenBarrel03_Objective] PROXY_4
	 */
	struct UMission_MonkMission_C_Obj_OpenBarrel03_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Obj_Invisible_OpenRewardDoor
	 */
	struct UMission_MonkMission_C_Obj_Invisible_OpenRewardDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FXJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.Update_Invisible_OpenRewardDoor
	 */
	struct UMission_MonkMission_C_Update_Invisible_OpenRewardDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_MonkMission.Mission_MonkMission_C.ExecuteUbergraph_Mission_MonkMission
	 */
	struct UMission_MonkMission_C_ExecuteUbergraph_Mission_MonkMission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8H2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
