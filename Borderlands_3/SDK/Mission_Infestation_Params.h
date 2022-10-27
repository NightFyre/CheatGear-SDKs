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
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_23
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_22
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_21
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_20
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_19
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_18
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_17
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_16
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_15
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_14
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OnDialogSequenceFinished_13
	 */
	struct UMission_Infestation_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Set_InvestigateComotion
	 */
	struct UMission_Infestation_C_Set_InvestigateComotion_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Set_FreezeOtherKevins
	 */
	struct UMission_Infestation_C_Set_FreezeOtherKevins_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Obj_CollectKevin
	 */
	struct UMission_Infestation_C_Obj_CollectKevin_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEAO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Obj_InfestationDispose
	 */
	struct UMission_Infestation_C_Obj_InfestationDispose_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q7OA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Obj_InvestigateComotion
	 */
	struct UMission_Infestation_C_Obj_InvestigateComotion_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XOZX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Update_InvestigateCommotion
	 */
	struct UMission_Infestation_C_Update_InvestigateCommotion_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.ME_Player has disposed of a Kevin
	 */
	struct UMission_Infestation_C_ME_Player_has_disposed_of_a_Kevin_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OBJ_TakeFreezeGun
	 */
	struct UMission_Infestation_C_OBJ_TakeFreezeGun_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1BTF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.SET_TakeFreezeGun
	 */
	struct UMission_Infestation_C_SET_TakeFreezeGun_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Update_TakeFreezeGun
	 */
	struct UMission_Infestation_C_Update_TakeFreezeGun_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Update_CollectKevin
	 */
	struct UMission_Infestation_C_Update_CollectKevin_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.SET_FreezeExampleKevin
	 */
	struct UMission_Infestation_C_SET_FreezeExampleKevin_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OBJ_FreezeExampleKevin
	 */
	struct UMission_Infestation_C_OBJ_FreezeExampleKevin_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FH0D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.SET_DisposeOfKevins
	 */
	struct UMission_Infestation_C_SET_DisposeOfKevins_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Update_FreezeExampleKevin
	 */
	struct UMission_Infestation_C_Update_FreezeExampleKevin_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.[!]Set an Objective in the Details[!]
	 */
	struct UMission_Infestation_C_Set_an_Objective_in_the_Details_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.SET_CollectExampleKevin
	 */
	struct UMission_Infestation_C_SET_CollectExampleKevin_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.[OBJ_FreezeExampleKevin_Objective] PROXY_1
	 */
	struct UMission_Infestation_C_OBJ_FreezeExampleKevin_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.OBJ_CollectExampleFrozenKevin
	 */
	struct UMission_Infestation_C_OBJ_CollectExampleFrozenKevin_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URC7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Clear_FreezeExampleKevin
	 */
	struct UMission_Infestation_C_Clear_FreezeExampleKevin_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.Update_CollectExampleFrozenKevin
	 */
	struct UMission_Infestation_C_Update_CollectExampleFrozenKevin_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.MCE_KevinCaptured
	 */
	struct UMission_Infestation_C_MCE_KevinCaptured_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.MCE_Dialog_UseCryo_Tannis
	 */
	struct UMission_Infestation_C_MCE_Dialog_UseCryo_Tannis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.MCE_Dialog_NowPickItUp_Tannis
	 */
	struct UMission_Infestation_C_MCE_Dialog_NowPickItUp_Tannis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.MCE_Dialog_UseCryo_Claptrap
	 */
	struct UMission_Infestation_C_MCE_Dialog_UseCryo_Claptrap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.MissionKickoff
	 */
	struct UMission_Infestation_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Infestation.Mission_Infestation_C.ExecuteUbergraph_Mission_Infestation
	 */
	struct UMission_Infestation_C_ExecuteUbergraph_Mission_Infestation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
