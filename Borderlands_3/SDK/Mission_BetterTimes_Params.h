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
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_19
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_18
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_17
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_16
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_15
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_14
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_13
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_12
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.OnDialogSequenceFinished_11
	 */
	struct UMission_BetterTimes_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_GetEchoLogs_2
	 */
	struct UMission_BetterTimes_C_Set_GetEchoLogs_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_KillCreature
	 */
	struct UMission_BetterTimes_C_Set_KillCreature_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_GetEchoLogs_4
	 */
	struct UMission_BetterTimes_C_Set_GetEchoLogs_4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_OnSpawnCreature
	 */
	struct UMission_BetterTimes_C_MCE_OnSpawnCreature_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_PlacedEcho
	 */
	struct UMission_BetterTimes_C_MCE_PlacedEcho_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_PlaceEchoLogs
	 */
	struct UMission_BetterTimes_C_Set_PlaceEchoLogs_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_GotEchoLog
	 */
	struct UMission_BetterTimes_C_MCE_GotEchoLog_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_AssembledAnyRocketPart
	 */
	struct UMission_BetterTimes_C_MCE_AssembledAnyRocketPart_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_GetEchoLog_Second
	 */
	struct UMission_BetterTimes_C_Obj_INV_GetEchoLog_Second_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UN6X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_GotEchoLog_Second
	 */
	struct UMission_BetterTimes_C_MCE_GotEchoLog_Second_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_OnCreatureKilled
	 */
	struct UMission_BetterTimes_C_MCE_OnCreatureKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_ShootEchoLog_Second
	 */
	struct UMission_BetterTimes_C_Obj_ShootEchoLog_Second_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2RE1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.[Obj_GetEchoLogs_Objective] PROXY
	 */
	struct UMission_BetterTimes_C_Obj_GetEchoLogs_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.[Obj_GetEchoLogs_Objective] PROXY_1
	 */
	struct UMission_BetterTimes_C_Obj_GetEchoLogs_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.[Obj_GetEchoLogs_Objective] PROXY_2
	 */
	struct UMission_BetterTimes_C_Obj_GetEchoLogs_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_ShootEchoLog_Second
	 */
	struct UMission_BetterTimes_C_Set_ShootEchoLog_Second_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_ShootedEchoLog_Second
	 */
	struct UMission_BetterTimes_C_MCE_ShootedEchoLog_Second_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.SET_PlaceDetonator
	 */
	struct UMission_BetterTimes_C_SET_PlaceDetonator_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_PlaceDetonator
	 */
	struct UMission_BetterTimes_C_Obj_PlaceDetonator_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCLP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_PlacedDetonator
	 */
	struct UMission_BetterTimes_C_MCE_PlacedDetonator_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_GetEchoLogs
	 */
	struct UMission_BetterTimes_C_Obj_GetEchoLogs_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O8LA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_PlaceEchoLogs
	 */
	struct UMission_BetterTimes_C_Obj_PlaceEchoLogs_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UTLS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_GetDetonator
	 */
	struct UMission_BetterTimes_C_Set_GetDetonator_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_GetDetonator
	 */
	struct UMission_BetterTimes_C_Obj_GetDetonator_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9OOT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_ClearedOldBase
	 */
	struct UMission_BetterTimes_C_MCE_ClearedOldBase_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_GetEchoLog_Second
	 */
	struct UMission_BetterTimes_C_Set_GetEchoLog_Second_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.[Obj_GetEchoLogs_Objective] PROXY_3
	 */
	struct UMission_BetterTimes_C_Obj_GetEchoLogs_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_GetEchoLog_First
	 */
	struct UMission_BetterTimes_C_Obj_INV_GetEchoLog_First_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_000N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_GotEchoLog_First
	 */
	struct UMission_BetterTimes_C_MCE_GotEchoLog_First_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_AssembleRocket_3
	 */
	struct UMission_BetterTimes_C_Set_AssembleRocket_3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_AssembleRocket_4
	 */
	struct UMission_BetterTimes_C_Set_AssembleRocket_4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_AssembleRocket_Piece1
	 */
	struct UMission_BetterTimes_C_Obj_INV_AssembleRocket_Piece1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CTJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_AssembleRocket_Piece2
	 */
	struct UMission_BetterTimes_C_Obj_INV_AssembleRocket_Piece2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_43UE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.[Obj_AssembleRocket_Objective] PROXY_4
	 */
	struct UMission_BetterTimes_C_Obj_AssembleRocket_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_AssembleRocket_Piece3
	 */
	struct UMission_BetterTimes_C_Obj_INV_AssembleRocket_Piece3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUQB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.[Obj_AssembleRocket_Objective] PROXY_5
	 */
	struct UMission_BetterTimes_C_Obj_AssembleRocket_Objective_PROXY_5_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_AssembledRocketPart_2
	 */
	struct UMission_BetterTimes_C_MCE_AssembledRocketPart_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_AssembledRocketPart_3
	 */
	struct UMission_BetterTimes_C_MCE_AssembledRocketPart_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_AssembledRocketPart_4
	 */
	struct UMission_BetterTimes_C_MCE_AssembledRocketPart_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_GetEchoLog_Third
	 */
	struct UMission_BetterTimes_C_Obj_INV_GetEchoLog_Third_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J63L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_ClearOldBase
	 */
	struct UMission_BetterTimes_C_Set_ClearOldBase_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_AssembleRocket
	 */
	struct UMission_BetterTimes_C_Obj_AssembleRocket_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OKNT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_ClearOldBase_BC1
	 */
	struct UMission_BetterTimes_C_Obj_INV_ClearOldBase_BC1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PEIY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_ClearOldBase_BC2
	 */
	struct UMission_BetterTimes_C_Obj_INV_ClearOldBase_BC2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJ79[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_ClearedOldBase_BC1
	 */
	struct UMission_BetterTimes_C_MCE_ClearedOldBase_BC1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_ClearedOldBase_BC2
	 */
	struct UMission_BetterTimes_C_MCE_ClearedOldBase_BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MissionKickoff
	 */
	struct UMission_BetterTimes_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_AssembleRocket_2
	 */
	struct UMission_BetterTimes_C_Set_AssembleRocket_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_ClearOldBase
	 */
	struct UMission_BetterTimes_C_Obj_ClearOldBase_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_42OQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_GoToBeach
	 */
	struct UMission_BetterTimes_C_Obj_GoToBeach_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_54PF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_KillCreature
	 */
	struct UMission_BetterTimes_C_Obj_KillCreature_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FLBQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_WentToOldBase
	 */
	struct UMission_BetterTimes_C_MCE_WentToOldBase_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_WentToBeach
	 */
	struct UMission_BetterTimes_C_MCE_WentToBeach_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_INV_WhereIsThirdEchoLog
	 */
	struct UMission_BetterTimes_C_Obj_INV_WhereIsThirdEchoLog_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DAYP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_INV_WhereIsThirdEchoLog
	 */
	struct UMission_BetterTimes_C_MCE_INV_WhereIsThirdEchoLog_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_TalkToSparrow
	 */
	struct UMission_BetterTimes_C_Set_TalkToSparrow_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_TalkToSparrow
	 */
	struct UMission_BetterTimes_C_Obj_TalkToSparrow_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C33H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_GoToOldBase
	 */
	struct UMission_BetterTimes_C_Obj_GoToOldBase_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L0W7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_TalkedToSparrow
	 */
	struct UMission_BetterTimes_C_MCE_TalkedToSparrow_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_MissionComplete
	 */
	struct UMission_BetterTimes_C_MCE_MissionComplete_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_RocketExploded1
	 */
	struct UMission_BetterTimes_C_MCE_RocketExploded1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_GoToOldBase_2
	 */
	struct UMission_BetterTimes_C_Set_GoToOldBase_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.CustomEvent_OnThirdEchoLog_Finished
	 */
	struct UMission_BetterTimes_C_CustomEvent_OnThirdEchoLog_Finished_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.CustomEvent_OnSecondEchoLog_Finished
	 */
	struct UMission_BetterTimes_C_CustomEvent_OnSecondEchoLog_Finished_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.CustomEvent_OnFirstEchoLog_Finished
	 */
	struct UMission_BetterTimes_C_CustomEvent_OnFirstEchoLog_Finished_Params
	{	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_GetRocketParts
	 */
	struct UMission_BetterTimes_C_Obj_GetRocketParts_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DFIT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_GetRocketParts
	 */
	struct UMission_BetterTimes_C_Set_GetRocketParts_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.MCE_LaunchedRocket
	 */
	struct UMission_BetterTimes_C_MCE_LaunchedRocket_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Set_LaunchRocket
	 */
	struct UMission_BetterTimes_C_Set_LaunchRocket_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.Obj_LaunchRocket
	 */
	struct UMission_BetterTimes_C_Obj_LaunchRocket_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5K0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BetterTimes.Mission_BetterTimes_C.ExecuteUbergraph_Mission_BetterTimes
	 */
	struct UMission_BetterTimes_C_ExecuteUbergraph_Mission_BetterTimes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QQE4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
