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
	 * Function Mission_TheHangover.Mission_TheHangover_C.OnDialogSequenceFinished_13
	 */
	struct UMission_TheHangover_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.OnDialogSequenceFinished_12
	 */
	struct UMission_TheHangover_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.OnDialogSequenceFinished_11
	 */
	struct UMission_TheHangover_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.OnDialogSequenceFinished_10
	 */
	struct UMission_TheHangover_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.OnDialogSequenceFinished_9
	 */
	struct UMission_TheHangover_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.OnDialogSequenceFinished_8
	 */
	struct UMission_TheHangover_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_GoToBarNearlyDone
	 */
	struct UMission_TheHangover_C_Set_GoToBarNearlyDone_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_GoToBarNearlyDone
	 */
	struct UMission_TheHangover_C_Obj_GoToBarNearlyDone_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WPQ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Go To Bar Nearly Done
	 */
	struct UMission_TheHangover_C_MCE_Go_To_Bar_Nearly_Done_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Reactor Switch2 Used
	 */
	struct UMission_TheHangover_C_MCE_Reactor_Switch2_Used_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_UseBreakerSwitch2
	 */
	struct UMission_TheHangover_C_Obj_UseBreakerSwitch2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GXR3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Reactor Switch3 Used
	 */
	struct UMission_TheHangover_C_MCE_Reactor_Switch3_Used_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_UseBreakerSwitch3
	 */
	struct UMission_TheHangover_C_Obj_UseBreakerSwitch3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L1Y8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MissionKickoff
	 */
	struct UMission_TheHangover_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Apollo Is Dead
	 */
	struct UMission_TheHangover_C_MCE_Apollo_Is_Dead_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_KillApollo
	 */
	struct UMission_TheHangover_C_Set_KillApollo_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_KillApollo
	 */
	struct UMission_TheHangover_C_Obj_KillApollo_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WU7C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Artemis Is Dead
	 */
	struct UMission_TheHangover_C_MCE_Artemis_Is_Dead_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_KillArtemis
	 */
	struct UMission_TheHangover_C_Obj_KillArtemis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRFT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_KillArtemis
	 */
	struct UMission_TheHangover_C_Set_KillArtemis_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Arrived At The Hangover
	 */
	struct UMission_TheHangover_C_MCE_Arrived_At_The_Hangover_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_GoToTheHangover
	 */
	struct UMission_TheHangover_C_Obj_GoToTheHangover_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SE98[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_GoToTheHangover
	 */
	struct UMission_TheHangover_C_Set_GoToTheHangover_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_GrabTheCoolantValve
	 */
	struct UMission_TheHangover_C_Obj_GrabTheCoolantValve_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3ON[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_GrabTheCoolantValve
	 */
	struct UMission_TheHangover_C_Set_GrabTheCoolantValve_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Reactor Switch1 Used
	 */
	struct UMission_TheHangover_C_MCE_Reactor_Switch1_Used_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE Coolant Valve Placed Used
	 */
	struct UMission_TheHangover_C_MCE_Coolant_Valve_Placed_Used_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_SwitchCounter
	 */
	struct UMission_TheHangover_C_Obj_SwitchCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YAY1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE_Update_SwitchCounter
	 */
	struct UMission_TheHangover_C_MCE_Update_SwitchCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_UseBreakerSwitch1
	 */
	struct UMission_TheHangover_C_Obj_UseBreakerSwitch1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6N7D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_UseReactorSwitches
	 */
	struct UMission_TheHangover_C_Set_UseReactorSwitches_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_UseCoolantValve
	 */
	struct UMission_TheHangover_C_Obj_UseCoolantValve_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5F1X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_UseCoolantValve
	 */
	struct UMission_TheHangover_C_Set_UseCoolantValve_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Set_KillJabbers
	 */
	struct UMission_TheHangover_C_Set_KillJabbers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.MCE_Update_KillJabbers
	 */
	struct UMission_TheHangover_C_MCE_Update_KillJabbers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.Obj_KillJabbers
	 */
	struct UMission_TheHangover_C_Obj_KillJabbers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z82D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TheHangover.Mission_TheHangover_C.ExecuteUbergraph_Mission_TheHangover
	 */
	struct UMission_TheHangover_C_ExecuteUbergraph_Mission_TheHangover_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
