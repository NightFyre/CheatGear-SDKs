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
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_23
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_22
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_21
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_20
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_19
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_18
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_17
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_16
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_15
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_14
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.OnDialogSequenceFinished_13
	 */
	struct UMission_VendingMachineRepair_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.MCE_UsedHumanSpineOnMachine
	 */
	struct UMission_VendingMachineRepair_C_MCE_UsedHumanSpineOnMachine_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_GetSkagSpine_Objective] PROXY
	 */
	struct UMission_VendingMachineRepair_C_Obj_GetSkagSpine_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_UseCoVSpine_Objective] PROXY_1
	 */
	struct UMission_VendingMachineRepair_C_Obj_UseCoVSpine_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_GetCoVSpine_Objective] PROXY_2
	 */
	struct UMission_VendingMachineRepair_C_Obj_GetCoVSpine_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_UseSkagSpine_Objective] PROXY_3
	 */
	struct UMission_VendingMachineRepair_C_Obj_UseSkagSpine_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Update_MissionDeliverySpeak
	 */
	struct UMission_VendingMachineRepair_C_Update_MissionDeliverySpeak_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_CollectSpines
	 */
	struct UMission_VendingMachineRepair_C_Set_CollectSpines_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_FindTheProblem
	 */
	struct UMission_VendingMachineRepair_C_Obj_FindTheProblem_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NJE0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Advance_FindTheProblem
	 */
	struct UMission_VendingMachineRepair_C_Advance_FindTheProblem_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_CollectedSkagSpineButNotHuman
	 */
	struct UMission_VendingMachineRepair_C_Obj_CollectedSkagSpineButNotHuman_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.CE_KeepSecretDoorOpen
	 */
	struct UMission_VendingMachineRepair_C_CE_KeepSecretDoorOpen_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_FakeCoVSpineUsedSkagSpineNotCollected
	 */
	struct UMission_VendingMachineRepair_C_Obj_FakeCoVSpineUsedSkagSpineNotCollected_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9Z9F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Advance_FakeCoVSpineUsedSkagSpineNotCollected
	 */
	struct UMission_VendingMachineRepair_C_Advance_FakeCoVSpineUsedSkagSpineNotCollected_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_GetSkagSpineSingle
	 */
	struct UMission_VendingMachineRepair_C_Set_GetSkagSpineSingle_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_GetSkagSpine_Objective] PROXY_4
	 */
	struct UMission_VendingMachineRepair_C_Obj_GetSkagSpine_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_CollectedHumanSpineButNotSkag
	 */
	struct UMission_VendingMachineRepair_C_Obj_CollectedHumanSpineButNotSkag_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_UseSkageSpine
	 */
	struct UMission_VendingMachineRepair_C_Set_UseSkageSpine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_UseSkagSpine_Objective] PROXY_5
	 */
	struct UMission_VendingMachineRepair_C_Obj_UseSkagSpine_Objective_PROXY_5_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_UseCoVSpine
	 */
	struct UMission_VendingMachineRepair_C_Obj_UseCoVSpine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WKOT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_MissionComplete
	 */
	struct UMission_VendingMachineRepair_C_Set_MissionComplete_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_CompleteMarcusVendingMachine
	 */
	struct UMission_VendingMachineRepair_C_Obj_CompleteMarcusVendingMachine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q6XL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_UseCOVSpine
	 */
	struct UMission_VendingMachineRepair_C_Set_UseCOVSpine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_ShowSkagSpineObj
	 */
	struct UMission_VendingMachineRepair_C_Set_ShowSkagSpineObj_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.[Obj_GetSkagSpine_Objective] PROXY_6
	 */
	struct UMission_VendingMachineRepair_C_Obj_GetSkagSpine_Objective_PROXY_6_Params
	{	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_GetCoVSpine
	 */
	struct UMission_VendingMachineRepair_C_Obj_GetCoVSpine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COOO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_GetSkagSpine
	 */
	struct UMission_VendingMachineRepair_C_Obj_GetSkagSpine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ARA5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_GoSeeSecretArea
	 */
	struct UMission_VendingMachineRepair_C_Obj_GoSeeSecretArea_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UFC8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_CompleteGoSeeSecretArea
	 */
	struct UMission_VendingMachineRepair_C_Set_CompleteGoSeeSecretArea_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Advance_GoSeeSecretArea
	 */
	struct UMission_VendingMachineRepair_C_Advance_GoSeeSecretArea_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_VendingMachineInteraction
	 */
	struct UMission_VendingMachineRepair_C_Set_VendingMachineInteraction_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Set_UseSkagSpine
	 */
	struct UMission_VendingMachineRepair_C_Set_UseSkagSpine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.Obj_UseSkagSpine
	 */
	struct UMission_VendingMachineRepair_C_Obj_UseSkagSpine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6XG1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.MCE_UsedSkagSpineOnMachine
	 */
	struct UMission_VendingMachineRepair_C_MCE_UsedSkagSpineOnMachine_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_VendingMachineRepair.Mission_VendingMachineRepair_C.ExecuteUbergraph_Mission_VendingMachineRepair
	 */
	struct UMission_VendingMachineRepair_C_ExecuteUbergraph_Mission_VendingMachineRepair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JOXE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
