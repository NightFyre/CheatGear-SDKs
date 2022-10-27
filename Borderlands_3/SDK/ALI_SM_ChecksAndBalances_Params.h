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
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_27
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_27_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_26
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_26_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_25
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_25_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_24
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_24_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_23
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_22
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_21
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_20
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_19
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_18
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_17
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_16
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OnDialogSequenceFinished_15
	 */
	struct UALI_SM_ChecksAndBalances_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FindClues
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FindClues_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FindThadeus
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FindThadeus_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V9QW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FindClues
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FindClues_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0OG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FoundClue
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FoundClue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FollowCarrots
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FollowCarrots_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G0DK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FollowedCarrots
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FollowedCarrots_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FollowCarrots
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FollowCarrots_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FollowCarrots_BC1
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FollowCarrots_BC1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KI7M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FollowCarrots_BC1
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FollowCarrots_BC1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FollowCarrots_BC2
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FollowCarrots_BC2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M6XY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FollowCarrots_BC2
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FollowCarrots_BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FollowCarrots_BC3
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FollowCarrots_BC3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_37ZV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FollowCarrots_BC3
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FollowCarrots_BC3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_TalkToThadeus
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_TalkToThadeus_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7UO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_TalkedToThadeus
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_TalkedToThadeus_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FreeingThaddeus
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FreeingThaddeus_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.[Obj_FindThadeus_Objective] PROXY
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FindThadeus_Objective_PROXY_Params
	{	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_DidNotFindClue
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_DidNotFindClue_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8E55[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_DidNotFindClue
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_DidNotFindClue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_ReadyToSpawnEnforcer
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_ReadyToSpawnEnforcer_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_607L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_ReadyToSpawnEnforcer
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_ReadyToSpawnEnforcer_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_KillEnforcer
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_KillEnforcer_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GE1Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_KilledEnforcer
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_KilledEnforcer_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_GetKey
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_GetKey_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2KQY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_GetKey
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_GetKey_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FreeThaddeus
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FreeThaddeus_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EAJK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FreedThaddeus
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FreedThaddeus_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FollowThaddeus_2
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FollowThaddeus_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJ2A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FollowThaddeus_2
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FollowThaddeus_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FollowThaddeus_3
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FollowThaddeus_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3J9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_PlayerArrived
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_PlayerArrived_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FollowThaddeus_3
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FollowThaddeus_3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_TakeThaddeusPlace
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_TakeThaddeusPlace_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HK3O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_TookThaddeusPlace
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_TookThaddeusPlace_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_CheckMate
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_CheckMate_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_KillEnforcer
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_KillEnforcer_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_KillEnforcerAndCrew
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_KillEnforcerAndCrew_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_KillCrew
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_KillCrew_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L4P9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_KilledCrew
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_KilledCrew_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_KilledEnforcerAndCrew
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_KilledEnforcerAndCrew_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7HYH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FreeThaddeus
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FreeThaddeus_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_MoveToCheckmatePosition
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_MoveToCheckmatePosition_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADKI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_MovedToCheckmatePosition
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_MovedToCheckmatePosition_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_AttackEnemyKing
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_AttackEnemyKing_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AMRU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_AttackedEnemyKing
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_AttackedEnemyKing_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_DefeatBlackheartArmy
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_DefeatBlackheartArmy_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SHVY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_DefeatedBlackheartArmy
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_DefeatedBlackheartArmy_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_TalkToKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_TalkToKrieg_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VGXM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_TalkedToKingKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_TalkedToKingKrieg_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_Knighting
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_Knighting_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_KneelInFrontOfKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_KneelInFrontOfKrieg_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ZAT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_KneeledInFrontOfKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_KneeledInFrontOfKrieg_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_ReadyForDancingFinish
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_ReadyForDancingFinish_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5DDM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_KillEnforcerPreCheck
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_KillEnforcerPreCheck_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L3EG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_PlayerArrived
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_PlayerArrived_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F96C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_ThaddeusArrived
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_ThaddeusArrived_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2UZ1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_ThaddeusArrived
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_ThaddeusArrived_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_PlayerLeft
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_PlayerLeft_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_DefeatBlackheartArmy_King
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_DefeatBlackheartArmy_King_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R1L1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_DefeatedBlackheartArmy_King
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_DefeatedBlackheartArmy_King_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_DefeatBlackheartArmy_Minions
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_DefeatBlackheartArmy_Minions_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IGKN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_DefeatedBlackheartArmy_Minions
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_DefeatedBlackheartArmy_Minions_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_MayaBackToPosition
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_MayaBackToPosition_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LRJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_MayaBackInPosition
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_MayaBackInPosition_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_KreigBackInPosition
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_KreigBackInPosition_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDI3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_KriegBackInPosition
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_KriegBackInPosition_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_ThaddeusBackInPosition
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_ThaddeusBackInPosition_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0PYU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_ThaddeusBackInPostion
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_ThaddeusBackInPostion_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.INV_Obj_KillCrew_PreCheck
	 */
	struct UALI_SM_ChecksAndBalances_C_INV_Obj_KillCrew_PreCheck_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QDH1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_TalkKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_TalkKrieg_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EQLA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_TalkedKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_TalkedKrieg_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.SET_TalkKrieg
	 */
	struct UALI_SM_ChecksAndBalances_C_SET_TalkKrieg_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_FindDistort
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_FindDistort_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5SEZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_FoundDistort
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_FoundDistort_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Set_FindDistort
	 */
	struct UALI_SM_ChecksAndBalances_C_Set_FindDistort_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.OPT_Obj_SpeakToKriegAboutTale
	 */
	struct UALI_SM_ChecksAndBalances_C_OPT_Obj_SpeakToKriegAboutTale_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P64V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_SpokeToKriegAboutTale
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_SpokeToKriegAboutTale_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_INV_FollowThaddeus_1_StartMove
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_INV_FollowThaddeus_1_StartMove_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OH81[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.Obj_INV_FollowThaddeus_2_StartMove
	 */
	struct UALI_SM_ChecksAndBalances_C_Obj_INV_FollowThaddeus_2_StartMove_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H37Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_INV_FollowThaddeus_1_StartMove
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_INV_FollowThaddeus_1_StartMove_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.MCE_INV_FollowThaddeus_2_StartMove
	 */
	struct UALI_SM_ChecksAndBalances_C_MCE_INV_FollowThaddeus_2_StartMove_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C.ExecuteUbergraph_ALI_SM_ChecksAndBalances
	 */
	struct UALI_SM_ChecksAndBalances_C_ExecuteUbergraph_ALI_SM_ChecksAndBalances_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7C6N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
