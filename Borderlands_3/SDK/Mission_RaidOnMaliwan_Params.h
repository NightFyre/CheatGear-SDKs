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
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area4
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area4_KillBoss
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area4_KillBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LPAY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area4_KillBoss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area4_KillBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area4_KilledBoss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area4_KilledBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea4
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area3_KilledMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area3_KilledMiniboss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea4
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea4
	 */
	struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLF8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area0
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area0_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_GearUp
	 */
	struct UMission_RaidOnMaliwan_C_Obj_GearUp_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5X5K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea1
	 */
	struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JOG6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_GearUp
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_GearUp_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea1
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_StartingDialog
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_StartingDialog_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea1
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area3_KillMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area3_KillMiniboss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area3
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area3_KillMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area3_KillMiniboss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3H5I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_PostMission
	 */
	struct UMission_RaidOnMaliwan_C_Set_PostMission_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_PostMission
	 */
	struct UMission_RaidOnMaliwan_C_Obj_PostMission_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U8GX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_PostMission
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_PostMission_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_ClearArea3
	 */
	struct UMission_RaidOnMaliwan_C_MCE_ClearArea3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_ClearArea4
	 */
	struct UMission_RaidOnMaliwan_C_MCE_ClearArea4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Elevator1
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Elevator1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.[Obj_ProceedToArea1_Objective] PROXY
	 */
	struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea1_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1BC_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area1BC_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6YN4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1BC
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area1BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea2
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea3
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area1Boss
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area1Boss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area2_KilledMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area2_KilledMiniboss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea3
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea3
	 */
	struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MZUW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area2Boss
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area2Boss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BC
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BC_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area2BC_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F9LS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area3BC_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area3BC_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W4J9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area3BC
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area3BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2_KillMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area2_KillMiniboss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area2
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2_KillMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area2_KillMiniboss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4EQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area3Boss
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area3Boss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area1_KilledMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area1_KilledMiniboss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea2
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea2
	 */
	struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YIAA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area4Boss
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area4Boss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area4BC
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area4BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7JJ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area4BC
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area4BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1_SpecialMaliwanDoor_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area1_SpecialMaliwanDoor_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_77DN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1_SpecialMaliwanDoor
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area1_SpecialMaliwanDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1BC2_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area1BC2_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XDWT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1BC2
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area1BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BC2_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area2BC2_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PWIP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BC2
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BC3_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area2BC3_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FMSE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BC3
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BC3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area2BossDelay
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area2BossDelay_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BossDelay
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area2BossDelay_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A6WM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BossDelay
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BossDelay_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area1
	 */
	struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1_KillMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area1_KillMiniboss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_RaidCountdown_Inv
	 */
	struct UMission_RaidOnMaliwan_C_Obj_RaidCountdown_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_67H1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_RaidCountdown
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_RaidCountdown_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area2
	 */
	struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area1
	 */
	struct UMission_RaidOnMaliwan_C_Set_Area1_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1_KillMiniboss
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area1_KillMiniboss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_481I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area3
	 */
	struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area4
	 */
	struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Area2DoorOpened
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Area2DoorOpened_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area4BC2
	 */
	struct UMission_RaidOnMaliwan_C_Obj_Area4BC2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HOAJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area4BC2
	 */
	struct UMission_RaidOnMaliwan_C_MCE_Update_Area4BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.ExecuteUbergraph_Mission_RaidOnMaliwan
	 */
	struct UMission_RaidOnMaliwan_C_ExecuteUbergraph_Mission_RaidOnMaliwan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
