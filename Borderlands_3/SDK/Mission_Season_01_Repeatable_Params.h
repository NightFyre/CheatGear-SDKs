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
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.OnDialogSequenceFinished_11
	 */
	struct UMission_Season_01_Repeatable_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.OnDialogSequenceFinished_10
	 */
	struct UMission_Season_01_Repeatable_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.OnDialogSequenceFinished_9
	 */
	struct UMission_Season_01_Repeatable_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.OnDialogSequenceFinished_8
	 */
	struct UMission_Season_01_Repeatable_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.OnDialogSequenceFinished_7
	 */
	struct UMission_Season_01_Repeatable_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_GoToLeagueMap
	 */
	struct UMission_Season_01_Repeatable_C_Set_GoToLeagueMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_FindLeagueBoss
	 */
	struct UMission_Season_01_Repeatable_C_Set_FindLeagueBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_GoToLeagueMap
	 */
	struct UMission_Season_01_Repeatable_C_Obj_GoToLeagueMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74AF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_FindLeagueBoss
	 */
	struct UMission_Season_01_Repeatable_C_Obj_FindLeagueBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_02GT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_GoToLeagueMap
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_GoToLeagueMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_FindLeagueBoss
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_FindLeagueBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_TurnIn
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_PortalOpen_INV
	 */
	struct UMission_Season_01_Repeatable_C_Obj_PortalOpen_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LASB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_PortalOpen
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_PortalOpen_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.[Obj_PortalOpen_INV_Objective] PROXY
	 */
	struct UMission_Season_01_Repeatable_C_Obj_PortalOpen_INV_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_LeaveLeagueMap
	 */
	struct UMission_Season_01_Repeatable_C_Set_LeaveLeagueMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_LeaveLeagueMap
	 */
	struct UMission_Season_01_Repeatable_C_Obj_LeaveLeagueMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNA2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.[Obj_PortalOpen_INV_Objective] PROXY_1
	 */
	struct UMission_Season_01_Repeatable_C_Obj_PortalOpen_INV_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_LeaveLeagueMap
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_LeaveLeagueMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_Gate1_Inv
	 */
	struct UMission_Season_01_Repeatable_C_Obj_Gate1_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IP70[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_Gate2_Inv
	 */
	struct UMission_Season_01_Repeatable_C_Obj_Gate2_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_Gate3_Inv
	 */
	struct UMission_Season_01_Repeatable_C_Obj_Gate3_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WG6D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_Gate1
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_Gate1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_Gate2
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_Gate2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_Gate3
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_Gate3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_LeaveLeagueMapBC
	 */
	struct UMission_Season_01_Repeatable_C_Obj_LeaveLeagueMapBC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CFQ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_LeaveLeagueMapBC
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_LeaveLeagueMapBC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_GetShards
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_GetShards_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_TalkToMauriceShards
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_TalkToMauriceShards_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_TurnIn
	 */
	struct UMission_Season_01_Repeatable_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPR3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_TalkToMauriceShards
	 */
	struct UMission_Season_01_Repeatable_C_Obj_TalkToMauriceShards_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G9XT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_GetShards
	 */
	struct UMission_Season_01_Repeatable_C_Obj_GetShards_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TU1R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_TurnIn
	 */
	struct UMission_Season_01_Repeatable_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_TalkToMauriceShards
	 */
	struct UMission_Season_01_Repeatable_C_Set_TalkToMauriceShards_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_GetShards
	 */
	struct UMission_Season_01_Repeatable_C_Set_GetShards_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_TITLECARD_CaptainHaunt
	 */
	struct UMission_Season_01_Repeatable_C_Set_TITLECARD_CaptainHaunt_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Set_KillLeagueBoss
	 */
	struct UMission_Season_01_Repeatable_C_Set_KillLeagueBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_KillLeagueBoss
	 */
	struct UMission_Season_01_Repeatable_C_Obj_KillLeagueBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOKR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_KillLeagueBoss
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_KillLeagueBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_UseUberBoss
	 */
	struct UMission_Season_01_Repeatable_C_Obj_UseUberBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0GO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_UseUberBoss
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_UseUberBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_Gate2_BC
	 */
	struct UMission_Season_01_Repeatable_C_Obj_Gate2_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCF7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_Gate2_BC
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_Gate2_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_TITLECARD_CaptainHaunt
	 */
	struct UMission_Season_01_Repeatable_C_Obj_TITLECARD_CaptainHaunt_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45DO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_MauriceGiveTake
	 */
	struct UMission_Season_01_Repeatable_C_MCE_MauriceGiveTake_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_Gate1_BC
	 */
	struct UMission_Season_01_Repeatable_C_Obj_Gate1_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V8YZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_Gate1_BC
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_Gate1_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.Obj_Gate3_BC
	 */
	struct UMission_Season_01_Repeatable_C_Obj_Gate3_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQAY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.MCE_Update_Gate3_BC
	 */
	struct UMission_Season_01_Repeatable_C_MCE_Update_Gate3_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.[Obj_PortalOpen_INV_Objective] PROXY_2
	 */
	struct UMission_Season_01_Repeatable_C_Obj_PortalOpen_INV_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.[Obj_PortalOpen_INV_Objective] PROXY_3
	 */
	struct UMission_Season_01_Repeatable_C_Obj_PortalOpen_INV_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_Season_01_Repeatable.Mission_Season_01_Repeatable_C.ExecuteUbergraph_Mission_Season_01_Repeatable
	 */
	struct UMission_Season_01_Repeatable_C_ExecuteUbergraph_Mission_Season_01_Repeatable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AV9F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
