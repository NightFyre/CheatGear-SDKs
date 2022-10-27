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
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.OnDialogSequenceFinished_11
	 */
	struct USideMission_DLC2_WeSlassPart3_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.OnDialogSequenceFinished_10
	 */
	struct USideMission_DLC2_WeSlassPart3_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.OnDialogSequenceFinished_9
	 */
	struct USideMission_DLC2_WeSlassPart3_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.OnDialogSequenceFinished_8
	 */
	struct USideMission_DLC2_WeSlassPart3_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.OnDialogSequenceFinished_7
	 */
	struct USideMission_DLC2_WeSlassPart3_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_EggsRoomReached
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_EggsRoomReached_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.SET_FightEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_SET_FightEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_FightEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_FightEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XATN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_EistaDowned
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_EistaDowned_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_ReturnToEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRZA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Set_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Set_ReturnToEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_ReturnToEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_ReturnToEista_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_FollowEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05MM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Set_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Set_FollowEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_FollowEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_FollowEista_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_GiveEggs
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_GiveEggs_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OTRE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Set_GiveEggs
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Set_GiveEggs_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_GiveEggs
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_GiveEggs_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_ReviveEista_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E9PN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Set_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Set_ReviveEista_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_ReviveEista
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_ReviveEista_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MissionKickoff
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MissionKickoff_Params
	{	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_ReachEggsRoom
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_ReachEggsRoom_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YUOC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Set_ReachEggsRoom
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Set_ReachEggsRoom_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Obj_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Obj_GoToArmory_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RV7X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.Set_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart3_C_Set_GoToArmory_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.MCE_GoToArmory
	 */
	struct USideMission_DLC2_WeSlassPart3_C_MCE_GoToArmory_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_WeSlassPart3.SideMission_DLC2_WeSlassPart3_C.ExecuteUbergraph_SideMission_DLC2_WeSlassPart3
	 */
	struct USideMission_DLC2_WeSlassPart3_C_ExecuteUbergraph_SideMission_DLC2_WeSlassPart3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U3SP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
