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
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_11
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_10
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_9
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_8
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.OnDialogSequenceFinished_7
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_TurnValves
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_TurnValves_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EI0D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MissionKickoff
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MissionKickoff_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_FindProcurerHouse
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_FindProcurerHouse_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PH2I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_TurnOffValves
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_TurnOffValves_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_ActivateSwitch
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_ActivateSwitch_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_ActivateSwitch
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_ActivateSwitch_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LP6V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_SwitchActivated
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_SwitchActivated_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ProcurerHouseFound
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ProcurerHouseFound_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Set_KillProcurer
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Set_KillProcurer_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_PickUpWine
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_PickUpWine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AXRC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_WinePickedUp
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_WinePickedUp_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_PlaceWine
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_PlaceWine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_KillProcurer
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_KillProcurer_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PAF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ProcurerKilled
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ProcurerKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Obj_PlaceWine
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Obj_PlaceWine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DV2Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_WinePlaced
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_WinePlaced_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Inv_Obj_Valve1
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Inv_Obj_Valve1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1T0G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.Inv_Obj_Valve2
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_Inv_Obj_Valve2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLXP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ValveTurned1
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ValveTurned1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.MCE_ValveTurned2
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_MCE_ValveTurned2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_PickUpWine
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_PickUpWine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.SET_FindProcurerHouse
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_SET_FindProcurerHouse_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C.ExecuteUbergraph_SideMission_DLC2_Bounty_BusinessAsUsual
	 */
	struct USideMission_DLC2_Bounty_BusinessAsUsual_C_ExecuteUbergraph_SideMission_DLC2_Bounty_BusinessAsUsual_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L5ZE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
