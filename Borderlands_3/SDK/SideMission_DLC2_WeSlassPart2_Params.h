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
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.OnDialogSequenceFinished_9
	 */
	struct USideMission_DLC2_WeSlassPart2_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.OnDialogSequenceFinished_8
	 */
	struct USideMission_DLC2_WeSlassPart2_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.OnDialogSequenceFinished_7
	 */
	struct USideMission_DLC2_WeSlassPart2_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.OnDialogSequenceFinished_6
	 */
	struct USideMission_DLC2_WeSlassPart2_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.SET_FightEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_SET_FightEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_FightEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_FightEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_53M5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_EistaDowned
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_EistaDowned_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Set_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Set_ReturnToEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Set_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Set_FollowEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Set_GiveMushroom
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Set_GiveMushroom_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Set_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Set_ReviveEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_ReturnToEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N78X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_ReturnToEista_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_FollowEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4AME[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_FollowEista_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_GiveMushroom
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_GiveMushroom_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PMX2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_GiveMushroom
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_GiveMushroom_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_ReviveEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JY7Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_ReviveEista_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_FindBlueMushroom
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_FindBlueMushroom_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MissionKickoff
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MissionKickoff_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_FindBlueMushroom
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_FindBlueMushroom_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QG0O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.SET_FindBlueMushroom
	 */
	struct USideMission_DLC2_WeSlassPart2_C_SET_FindBlueMushroom_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Set_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Set_GoToArmory_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.Obj_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart2_C_Obj_GoToArmory_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z466[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.MCE_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart2_C_MCE_GoToArmory_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C.ExecuteUbergraph_SideMission_DLC2_WeSlassPart2
	 */
	struct USideMission_DLC2_WeSlassPart2_C_ExecuteUbergraph_SideMission_DLC2_WeSlassPart2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DCFT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
