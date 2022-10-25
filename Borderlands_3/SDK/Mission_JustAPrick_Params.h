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
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_9
	 */
	struct UMission_JustAPrick_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_8
	 */
	struct UMission_JustAPrick_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_7
	 */
	struct UMission_JustAPrick_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.OnDialogSequenceFinished_6
	 */
	struct UMission_JustAPrick_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.Set_CollectHypo
	 */
	struct UMission_JustAPrick_C_Set_CollectHypo_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_CollectHypo
	 */
	struct UMission_JustAPrick_C_Obj_CollectHypo_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9N82[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.Set_TurnIn
	 */
	struct UMission_JustAPrick_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.Obj_TurnIn
	 */
	struct UMission_JustAPrick_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ETA4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_BringHyposBack
	 */
	struct UMission_JustAPrick_C_MCE_BringHyposBack_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.MCE_PlayerCollectedHypo
	 */
	struct UMission_JustAPrick_C_MCE_PlayerCollectedHypo_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.OBJ_Hidden_SteamJetActivated
	 */
	struct UMission_JustAPrick_C_OBJ_Hidden_SteamJetActivated_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LF46[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.Update_SteamJetActivated
	 */
	struct UMission_JustAPrick_C_Update_SteamJetActivated_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.MissionKickoff
	 */
	struct UMission_JustAPrick_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_JustAPrick.Mission_JustAPrick_C.ExecuteUbergraph_Mission_JustAPrick
	 */
	struct UMission_JustAPrick_C_ExecuteUbergraph_Mission_JustAPrick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZNWO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
