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
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_29
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_29_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_28
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_28_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_27
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_27_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_26
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_26_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_25
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_25_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_24
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_24_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_23
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_22
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_21
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_20
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_19
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_18
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_17
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.OnDialogSequenceFinished_16
	 */
	struct UMission_ProvingGrounds_Mission07_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_CompleteBossArena
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_CompleteBossArena_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KO1O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_EnterEncounter_2
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_EnterEncounter_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_CompleteEncounter_2
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_CompleteEncounter_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_Boss
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_Boss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_CompleteEncounter_4
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_CompleteEncounter_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JLFR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_EnterEncounter_3
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_EnterEncounter_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_CompleteEncounter_3
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_CompleteEncounter_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_EnterEncounter_4
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_EnterEncounter_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_CompleteEncounter_4
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_CompleteEncounter_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_EnterBossArena
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_EnterBossArena_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_CompleteBossArena
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_CompleteBossArena_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_EnterEncounter_2
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_EnterEncounter_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_EnterEncounter_4
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_EnterEncounter_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P125[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_TurnIn
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_TurnIn
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_TurnIn
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YEM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_EnterEncounter_4
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_EnterEncounter_4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_KillGemGuardian
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_KillGemGuardian_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_Encounter_3_KillSpawner
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_Encounter_3_KillSpawner_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_Encounter_2_KillSpawner
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_Encounter_2_KillSpawner_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1UPZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_CompleteEncounter_3
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_CompleteEncounter_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XQOW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_Encounter_2_KillSpawner
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_Encounter_2_KillSpawner_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_Encounter_1_KillSpawner
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_Encounter_1_KillSpawner_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U2BC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_Encounter_1_KillSpawner
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_Encounter_1_KillSpawner_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_EnterEncounter_3
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_EnterEncounter_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1BAK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_Encounter3_KillSpawner
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_Encounter3_KillSpawner_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HU1E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_EnterEncounter_3
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_EnterEncounter_3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_FindGemGuardian
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_FindGemGuardian_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3AKR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_CompleteEncounter_2
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_CompleteEncounter_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FJLV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_EnterEncounter_2
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_EnterEncounter_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L5JI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_FindGemGuardian
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_FindGemGuardian_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_CompleteEncounter1
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_CompleteEncounter1_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_CompleteEncounter2
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_CompleteEncounter2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Set_CompleteEncounter3
	 */
	struct UMission_ProvingGrounds_Mission07_C_Set_CompleteEncounter3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_HiddenGoblin1
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_HiddenGoblin1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YCDD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_HiddenGoblin2
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_HiddenGoblin2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_708A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_HiddenGoblin3
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_HiddenGoblin3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OY0C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Update_HiddenGoblin1
	 */
	struct UMission_ProvingGrounds_Mission07_C_Update_HiddenGoblin1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Update_HiddenGoblin2
	 */
	struct UMission_ProvingGrounds_Mission07_C_Update_HiddenGoblin2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Update_HiddenGoblin3
	 */
	struct UMission_ProvingGrounds_Mission07_C_Update_HiddenGoblin3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_KillGemGuardian
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_KillGemGuardian_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7KQH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_TimedGem_Gold
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_TimedGem_Gold_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K1B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_TimedGem_Gold
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_TimedGem_Gold_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_TimedGem_Silver
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_TimedGem_Silver_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ETS4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_TimedGem_Silver
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_TimedGem_Silver_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_DeathGem
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_DeathGem_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AVOQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_DeathGem
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_DeathGem_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MissionKickoff
	 */
	struct UMission_ProvingGrounds_Mission07_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_TriggerEndDialogue
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_TriggerEndDialogue_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VGSJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.MCE_Update_Obj_TriggerEndDialogue
	 */
	struct UMission_ProvingGrounds_Mission07_C_MCE_Update_Obj_TriggerEndDialogue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.Obj_EnterBossArena
	 */
	struct UMission_ProvingGrounds_Mission07_C_Obj_EnterBossArena_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQUK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_ProvingGrounds_Mission07.Mission_ProvingGrounds_Mission07_C.ExecuteUbergraph_Mission_ProvingGrounds_Mission07
	 */
	struct UMission_ProvingGrounds_Mission07_C_ExecuteUbergraph_Mission_ProvingGrounds_Mission07_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9C9N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
