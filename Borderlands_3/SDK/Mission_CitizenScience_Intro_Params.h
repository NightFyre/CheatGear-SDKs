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
	 * Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.OnDialogSequenceFinished_3
	 */
	struct UMission_CitizenScience_Intro_C_OnDialogSequenceFinished_3_Params
	{	};

	/**
	 * Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Set_InteractWithMachine
	 */
	struct UMission_CitizenScience_Intro_C_Set_InteractWithMachine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Obj_InteractWithMachine
	 */
	struct UMission_CitizenScience_Intro_C_Obj_InteractWithMachine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8Q0I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MissionKickoff
	 */
	struct UMission_CitizenScience_Intro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MCE_InteractedWithMachine
	 */
	struct UMission_CitizenScience_Intro_C_MCE_InteractedWithMachine_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.ExecuteUbergraph_Mission_CitizenScience_Intro
	 */
	struct UMission_CitizenScience_Intro_C_ExecuteUbergraph_Mission_CitizenScience_Intro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QK7U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
