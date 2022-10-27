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
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.OnDialogSequenceFinished_11
	 */
	struct USideMission_DLC2_WeSlassPart1_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.OnDialogSequenceFinished_10
	 */
	struct USideMission_DLC2_WeSlassPart1_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.OnDialogSequenceFinished_9
	 */
	struct USideMission_DLC2_WeSlassPart1_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.OnDialogSequenceFinished_8
	 */
	struct USideMission_DLC2_WeSlassPart1_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.OnDialogSequenceFinished_7
	 */
	struct USideMission_DLC2_WeSlassPart1_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.SET_FightEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_SET_FightEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_FightEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_FightEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VUO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_EistaDowned
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_EistaDowned_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_FlowersGiven
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_FlowersGiven_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Set_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Set_ReviveEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_ReviveEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5QS1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_EistaRevived
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_EistaRevived_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_BringFlowers
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_BringFlowers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89AU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.SET_GiveFlowers
	 */
	struct USideMission_DLC2_WeSlassPart1_C_SET_GiveFlowers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Set_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Set_FollowEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_FollowEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YXD9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_EistaFollowed
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_EistaFollowed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Set_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Set_ReturnToEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MissionKickoff
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MissionKickoff_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_ReturnToEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U0CQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_PlayerReturned
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_PlayerReturned_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_FlowerFounded
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_FlowerFounded_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Set_FindFlowers
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Set_FindFlowers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Set_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Set_GoToArmory_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_GoToArmory_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HW5M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.MCE_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart1_C_MCE_GoToArmory_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.Obj_FindFlowers
	 */
	struct USideMission_DLC2_WeSlassPart1_C_Obj_FindFlowers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_49MV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C.ExecuteUbergraph_SideMission_DLC2_WeSlassPart1
	 */
	struct USideMission_DLC2_WeSlassPart1_C_ExecuteUbergraph_SideMission_DLC2_WeSlassPart1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
