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
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_9
	 */
	struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_8
	 */
	struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_7
	 */
	struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_6
	 */
	struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_Stay
	 */
	struct UALI_SM_BlastRequests_C_SET_Stay_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_Stay
	 */
	struct UALI_SM_BlastRequests_C_Obj_Stay_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PN9F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Stayed
	 */
	struct UALI_SM_BlastRequests_C_MCE_Stayed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MissionKickoff
	 */
	struct UALI_SM_BlastRequests_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_Respawned
	 */
	struct UALI_SM_BlastRequests_C_INV_Obj_Respawned_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_91P0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Respawned
	 */
	struct UALI_SM_BlastRequests_C_MCE_Respawned_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_ReachOut
	 */
	struct UALI_SM_BlastRequests_C_SET_ReachOut_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_ReachOut
	 */
	struct UALI_SM_BlastRequests_C_Obj_ReachOut_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B3ZL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReachedOut
	 */
	struct UALI_SM_BlastRequests_C_MCE_ReachedOut_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_KriegReadyToBlowUp_Stay
	 */
	struct UALI_SM_BlastRequests_C_INV_Obj_KriegReadyToBlowUp_Stay_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZYZE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToRespawn
	 */
	struct UALI_SM_BlastRequests_C_INV_Obj_ReadyToRespawn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_59G0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_ReadyToRespawn_Objective] PROXY
	 */
	struct UALI_SM_BlastRequests_C_INV_Obj_ReadyToRespawn_Objective_PROXY_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_Respawned_Objective] PROXY_1
	 */
	struct UALI_SM_BlastRequests_C_INV_Obj_Respawned_Objective_PROXY_1_Params
	{	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReadytoRespawn
	 */
	struct UALI_SM_BlastRequests_C_MCE_ReadytoRespawn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToDespawnAtEnd
	 */
	struct UALI_SM_BlastRequests_C_INV_Obj_ReadyToDespawnAtEnd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QUTE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.ExecuteUbergraph_ALI_SM_BlastRequests
	 */
	struct UALI_SM_BlastRequests_C_ExecuteUbergraph_ALI_SM_BlastRequests_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WYNZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
