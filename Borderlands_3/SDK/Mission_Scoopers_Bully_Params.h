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
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.OnDialogSequenceFinished_9
	 */
	struct UMission_Scoopers_Bully_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.OnDialogSequenceFinished_8
	 */
	struct UMission_Scoopers_Bully_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.OnDialogSequenceFinished_7
	 */
	struct UMission_Scoopers_Bully_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.OnDialogSequenceFinished_6
	 */
	struct UMission_Scoopers_Bully_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.MCE_BullyKilled
	 */
	struct UMission_Scoopers_Bully_C_MCE_BullyKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.MCE_SawRakkspitr
	 */
	struct UMission_Scoopers_Bully_C_MCE_SawRakkspitr_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_SawRakkspit
	 */
	struct UMission_Scoopers_Bully_C_Obj_SawRakkspit_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2B97[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.MissionKickoff
	 */
	struct UMission_Scoopers_Bully_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_PipeIsFlowing
	 */
	struct UMission_Scoopers_Bully_C_Obj_PipeIsFlowing_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLSK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Set_OpenTrapDoor
	 */
	struct UMission_Scoopers_Bully_C_Set_OpenTrapDoor_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Advance_OpenTrapDoor
	 */
	struct UMission_Scoopers_Bully_C_Advance_OpenTrapDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_OpenTrapDoor
	 */
	struct UMission_Scoopers_Bully_C_Obj_OpenTrapDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U9GD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_FindRedChest
	 */
	struct UMission_Scoopers_Bully_C_Obj_FindRedChest_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8WFM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Advance_FindRedChest
	 */
	struct UMission_Scoopers_Bully_C_Advance_FindRedChest_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Set_FindRedChest
	 */
	struct UMission_Scoopers_Bully_C_Set_FindRedChest_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Advance_PipeIsFlowing
	 */
	struct UMission_Scoopers_Bully_C_Advance_PipeIsFlowing_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_SwitchIsOn
	 */
	struct UMission_Scoopers_Bully_C_Obj_SwitchIsOn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_58W3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Advance_SwitchIsOn
	 */
	struct UMission_Scoopers_Bully_C_Advance_SwitchIsOn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Set_Bullystart
	 */
	struct UMission_Scoopers_Bully_C_Set_Bullystart_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Set_OpenTrapDoorInitial
	 */
	struct UMission_Scoopers_Bully_C_Set_OpenTrapDoorInitial_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.[Obj_OpenTrapDoor_Objective] PROXY
	 */
	struct UMission_Scoopers_Bully_C_Obj_OpenTrapDoor_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_KillBully
	 */
	struct UMission_Scoopers_Bully_C_Obj_KillBully_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4UD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_TimedToAdvanceToDirectHelp
	 */
	struct UMission_Scoopers_Bully_C_Obj_TimedToAdvanceToDirectHelp_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G1AZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Advance_TimedToAdvanceToDirectHelp
	 */
	struct UMission_Scoopers_Bully_C_Advance_TimedToAdvanceToDirectHelp_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Obj_ShootDumptrucksAss
	 */
	struct UMission_Scoopers_Bully_C_Obj_ShootDumptrucksAss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNY7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.Advance_ShootDumpTrucksAss
	 */
	struct UMission_Scoopers_Bully_C_Advance_ShootDumpTrucksAss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.CE_EllieSpellsItOut
	 */
	struct UMission_Scoopers_Bully_C_CE_EllieSpellsItOut_Params
	{	};

	/**
	 * Function Mission_Scoopers_Bully.Mission_Scoopers_Bully_C.ExecuteUbergraph_Mission_Scoopers_Bully
	 */
	struct UMission_Scoopers_Bully_C_ExecuteUbergraph_Mission_Scoopers_Bully_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TFNI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
