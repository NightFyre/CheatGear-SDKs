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
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_15
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_14
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_13
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_12
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_11
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_10
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.OnDialogSequenceFinished_9
	 */
	struct UMission_FineDining_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_PickupGunGift
	 */
	struct UMission_FineDining_C_Obj_PickupGunGift_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJ8M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Set_PickupGunGift
	 */
	struct UMission_FineDining_C_Set_PickupGunGift_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Set_FindCactusArea
	 */
	struct UMission_FineDining_C_Set_FindCactusArea_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_FindCactusArea
	 */
	struct UMission_FineDining_C_Obj_FindCactusArea_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05UG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_FindCactusArea
	 */
	struct UMission_FineDining_C_Update_FindCactusArea_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_Breadcrumb_FindCactusArea
	 */
	struct UMission_FineDining_C_Obj_Breadcrumb_FindCactusArea_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45Q2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_FindCactusArea_Breadcrumb
	 */
	struct UMission_FineDining_C_Update_FindCactusArea_Breadcrumb_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_GetCactusFruit
	 */
	struct UMission_FineDining_C_ObjSet_GetCactusFruit_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_GetCactusFruit
	 */
	struct UMission_FineDining_C_Obj_GetCactusFruit_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_770M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_KillSkags
	 */
	struct UMission_FineDining_C_ObjSet_KillSkags_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_GetCactusFruit_Objective] PROXY
	 */
	struct UMission_FineDining_C_Obj_GetCactusFruit_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_KillTrainedSkags
	 */
	struct UMission_FineDining_C_Obj_KillTrainedSkags_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DUEA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_DestroyCactus1_Invis
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus1_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B5MV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_DestroyCactus1_Invis
	 */
	struct UMission_FineDining_C_Update_DestroyCactus1_Invis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.SpawnSuccSkags
	 */
	struct UMission_FineDining_C_SpawnSuccSkags_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_DestroyCactus2_Invis_Objective] PROXY_1
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus2_Invis_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_DestroyCactus1_Invis_Objective] PROXY_2
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus1_Invis_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_DestroyCactus2_Invis
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus2_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CK3B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_DestroyCactus3_Invis
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus3_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2XHO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_DestroyCactus4_Invis
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus4_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0Q4K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_DestroyCactus2_Invis
	 */
	struct UMission_FineDining_C_Update_DestroyCactus2_Invis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_DestroyCactus3_Invis
	 */
	struct UMission_FineDining_C_Update_DestroyCactus3_Invis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_DestroyCactus4_Invis
	 */
	struct UMission_FineDining_C_Update_DestroyCactus4_Invis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_DestroyCactus5_Invis
	 */
	struct UMission_FineDining_C_Update_DestroyCactus5_Invis_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_DestroyCactus5_Invis
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus5_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_39ZG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_DestroyCactus3_Invis_Objective] PROXY_3
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus3_Invis_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_DestroyCactus4_Invis_Objective] PROXY_4
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus4_Invis_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_DestroyCactus5_Invis_Objective] PROXY_5
	 */
	struct UMission_FineDining_C_Obj_DestroyCactus5_Invis_Objective_PROXY_5_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_KillAlphaSkag
	 */
	struct UMission_FineDining_C_Obj_KillAlphaSkag_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRWS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_KillAlphaSkag
	 */
	struct UMission_FineDining_C_ObjSet_KillAlphaSkag_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_KillMincemeat
	 */
	struct UMission_FineDining_C_ObjSet_KillMincemeat_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_KillMincemeat
	 */
	struct UMission_FineDining_C_Obj_KillMincemeat_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSJA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_KillBadassSkags
	 */
	struct UMission_FineDining_C_Obj_KillBadassSkags_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DTO9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_KillBadassSkags_Invis
	 */
	struct UMission_FineDining_C_Obj_KillBadassSkags_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZUP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_MincemeatObjTracker_Invis
	 */
	struct UMission_FineDining_C_Obj_MincemeatObjTracker_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KTPN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_IngedientDropOff
	 */
	struct UMission_FineDining_C_ObjSet_IngedientDropOff_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_IngedientDropOff
	 */
	struct UMission_FineDining_C_Obj_IngedientDropOff_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UVAI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_AdvanceObj_KillBadassSkags
	 */
	struct UMission_FineDining_C_Update_AdvanceObj_KillBadassSkags_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_GoToBanditCamp_Invis
	 */
	struct UMission_FineDining_C_Obj_GoToBanditCamp_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KD13[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_IngredientDropOff
	 */
	struct UMission_FineDining_C_Update_IngredientDropOff_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_SuccSkagKilled
	 */
	struct UMission_FineDining_C_Update_SuccSkagKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_EnterGunArea
	 */
	struct UMission_FineDining_C_Update_EnterGunArea_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.FirstFruitPickedUp
	 */
	struct UMission_FineDining_C_FirstFruitPickedUp_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_TrySpawnSuccSkags
	 */
	struct UMission_FineDining_C_Update_TrySpawnSuccSkags_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_PickupAlphaSkagMeat
	 */
	struct UMission_FineDining_C_Obj_PickupAlphaSkagMeat_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KTV8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_PickupAlphaSkagMeat
	 */
	struct UMission_FineDining_C_ObjSet_PickupAlphaSkagMeat_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_KillAlphaSkag_Objective] PROXY_6
	 */
	struct UMission_FineDining_C_Obj_KillAlphaSkag_Objective_PROXY_6_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Update_ApproachMincemeatCamp
	 */
	struct UMission_FineDining_C_Update_ApproachMincemeatCamp_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj__CollectFinalMeat
	 */
	struct UMission_FineDining_C_Obj__CollectFinalMeat_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VH3M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ObjSet_CollectFinalMeat
	 */
	struct UMission_FineDining_C_ObjSet_CollectFinalMeat_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_KillBadassSkags_Objective] PROXY_7
	 */
	struct UMission_FineDining_C_Obj_KillBadassSkags_Objective_PROXY_7_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.[Obj_KillMincemeat_Objective] PROXY_8
	 */
	struct UMission_FineDining_C_Obj_KillMincemeat_Objective_PROXY_8_Params
	{	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.Obj_KillAlphaSkagWithSucc_Invis
	 */
	struct UMission_FineDining_C_Obj_KillAlphaSkagWithSucc_Invis_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U759[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_FineDining.Mission_FineDining_C.ExecuteUbergraph_Mission_FineDining
	 */
	struct UMission_FineDining_C_ExecuteUbergraph_Mission_FineDining_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01LW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
