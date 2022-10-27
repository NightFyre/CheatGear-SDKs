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
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_19
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_18
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_17
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_16
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_15
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_14
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_13
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_12
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.OnDialogSequenceFinished_11
	 */
	struct UMission_BuffFilmBuff_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_FindProjectorRoom
	 */
	struct UMission_BuffFilmBuff_C_MCE_FindProjectorRoom_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_PreMission
	 */
	struct UMission_BuffFilmBuff_C_Set_PreMission_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_SpeakBuffIntro
	 */
	struct UMission_BuffFilmBuff_C_MCE_SpeakBuffIntro_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_GetHardDrive
	 */
	struct UMission_BuffFilmBuff_C_Obj_GetHardDrive_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AWUP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_GetHardDrive
	 */
	struct UMission_BuffFilmBuff_C_Set_GetHardDrive_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_FindHardDrives
	 */
	struct UMission_BuffFilmBuff_C_MCE_FindHardDrives_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_PreMission
	 */
	struct UMission_BuffFilmBuff_C_Obj_PreMission_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_03L7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_TurnIn
	 */
	struct UMission_BuffFilmBuff_C_MCE_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_ReplaceLightBulb
	 */
	struct UMission_BuffFilmBuff_C_MCE_ReplaceLightBulb_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_KillMiniBoss
	 */
	struct UMission_BuffFilmBuff_C_MCE_KillMiniBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_PlaceHardDrive
	 */
	struct UMission_BuffFilmBuff_C_MCE_PlaceHardDrive_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_TurnIn
	 */
	struct UMission_BuffFilmBuff_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SC98[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_ReplaceLightBulb
	 */
	struct UMission_BuffFilmBuff_C_Obj_ReplaceLightBulb_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6RLR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_TakeLightBulb
	 */
	struct UMission_BuffFilmBuff_C_Obj_TakeLightBulb_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LLNW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_KillMiniboss
	 */
	struct UMission_BuffFilmBuff_C_Obj_KillMiniboss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IAKD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_AttachHardDrive
	 */
	struct UMission_BuffFilmBuff_C_Obj_AttachHardDrive_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4M1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_FindProjectorRoom
	 */
	struct UMission_BuffFilmBuff_C_Obj_FindProjectorRoom_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1MBU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_TurnIn
	 */
	struct UMission_BuffFilmBuff_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_ReplaceLightBulb
	 */
	struct UMission_BuffFilmBuff_C_Set_ReplaceLightBulb_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_TakeLightBulb
	 */
	struct UMission_BuffFilmBuff_C_Set_TakeLightBulb_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_KillMiniboss
	 */
	struct UMission_BuffFilmBuff_C_Set_KillMiniboss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_AttachHardDrive
	 */
	struct UMission_BuffFilmBuff_C_Set_AttachHardDrive_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_FindProjectorRoom
	 */
	struct UMission_BuffFilmBuff_C_Set_FindProjectorRoom_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_FindHardDrive
	 */
	struct UMission_BuffFilmBuff_C_Set_FindHardDrive_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_SearchTrashPiles_Counter
	 */
	struct UMission_BuffFilmBuff_C_Obj_SearchTrashPiles_Counter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_33N3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_SearchTrash
	 */
	struct UMission_BuffFilmBuff_C_Obj_SearchTrash_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JG8T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_SearchTrash
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_SearchTrash_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_Trash1
	 */
	struct UMission_BuffFilmBuff_C_Obj_Trash1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVZ4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_Trash2
	 */
	struct UMission_BuffFilmBuff_C_Obj_Trash2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PDY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_Trash3
	 */
	struct UMission_BuffFilmBuff_C_Obj_Trash3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X9DB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_Trash1
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_Trash1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_Trash2
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_Trash2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_Trash3
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_Trash3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_TakeLightBulb
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_TakeLightBulb_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_ProjectorPlaysBuffMovieFake
	 */
	struct UMission_BuffFilmBuff_C_Set_ProjectorPlaysBuffMovieFake_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_BuffMovieFake_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_BuffMovieFake_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0BTV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_COVVideo_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_COVVideo_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KXWQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_COVVideo_Inv_Objective] PROXY
	 */
	struct UMission_BuffFilmBuff_C_Obj_COVVideo_Inv_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_COVVideo_Inv_Objective] PROXY_1
	 */
	struct UMission_BuffFilmBuff_C_Obj_COVVideo_Inv_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_COVVideo_Inv_Objective] PROXY_2
	 */
	struct UMission_BuffFilmBuff_C_Obj_COVVideo_Inv_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_BuffMovieReal_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_BuffMovieReal_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTMI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_BuffMovieFake
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_BuffMovieFake_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_WalkIntoCamp
	 */
	struct UMission_BuffFilmBuff_C_Set_WalkIntoCamp_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_COVVideo_Inv_Objective] PROXY_3
	 */
	struct UMission_BuffFilmBuff_C_Obj_COVVideo_Inv_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_SearchTrash_Objective] PROXY_4
	 */
	struct UMission_BuffFilmBuff_C_Obj_SearchTrash_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_SearchTrashPiles_Counter_Objective] PROXY_5
	 */
	struct UMission_BuffFilmBuff_C_Obj_SearchTrashPiles_Counter_Objective_PROXY_5_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_Trash1_Objective] PROXY_6
	 */
	struct UMission_BuffFilmBuff_C_Obj_Trash1_Objective_PROXY_6_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_Trash2_Objective] PROXY_7
	 */
	struct UMission_BuffFilmBuff_C_Obj_Trash2_Objective_PROXY_7_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_Trash3_Objective] PROXY_8
	 */
	struct UMission_BuffFilmBuff_C_Obj_Trash3_Objective_PROXY_8_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_EnterCamp_PlayVideo
	 */
	struct UMission_BuffFilmBuff_C_MCE_EnterCamp_PlayVideo_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_WalkIntoCamp_Video_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_WalkIntoCamp_Video_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QJ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_ProjectorBlewUp
	 */
	struct UMission_BuffFilmBuff_C_Set_ProjectorBlewUp_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_ProjectorBlewUp_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_ProjectorBlewUp_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0VPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_BuffCampDoor
	 */
	struct UMission_BuffFilmBuff_C_Obj_BuffCampDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5859[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_BuffCampDoor
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_BuffCampDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_BuffCampDoor_Objective] PROXY_9
	 */
	struct UMission_BuffFilmBuff_C_Obj_BuffCampDoor_Objective_PROXY_9_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_GoToBulbStash
	 */
	struct UMission_BuffFilmBuff_C_Set_GoToBulbStash_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_GoToBulbStash
	 */
	struct UMission_BuffFilmBuff_C_Obj_GoToBulbStash_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0F7S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_GoToBulbStash
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_GoToBulbStash_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_LightbulbAreaWaypoint_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_LightbulbAreaWaypoint_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EDG7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_LightbulbAreaWaypoint_Inv
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_LightbulbAreaWaypoint_Inv_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_TakeLightBulb_Objective] PROXY_10
	 */
	struct UMission_BuffFilmBuff_C_Obj_TakeLightBulb_Objective_PROXY_10_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_BulbHolder_Inv
	 */
	struct UMission_BuffFilmBuff_C_Obj_BulbHolder_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P5G2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_FinishPickupDialog
	 */
	struct UMission_BuffFilmBuff_C_MCE_FinishPickupDialog_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_MovieFinished
	 */
	struct UMission_BuffFilmBuff_C_MCE_MovieFinished_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Set_TurnOffProjector
	 */
	struct UMission_BuffFilmBuff_C_Set_TurnOffProjector_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_TurnOffProjector
	 */
	struct UMission_BuffFilmBuff_C_Obj_TurnOffProjector_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4KI6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_TurnOffProjector
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_TurnOffProjector_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_ProjectorBroke
	 */
	struct UMission_BuffFilmBuff_C_MCE_ProjectorBroke_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.Obj_SpawnGoliathVO
	 */
	struct UMission_BuffFilmBuff_C_Obj_SpawnGoliathVO_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q2QH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_Update_SpawnGoliathVO
	 */
	struct UMission_BuffFilmBuff_C_MCE_Update_SpawnGoliathVO_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_AttachHardDrive_Objective] PROXY_11
	 */
	struct UMission_BuffFilmBuff_C_Obj_AttachHardDrive_Objective_PROXY_11_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_AttachHardDrive_Objective] PROXY_12
	 */
	struct UMission_BuffFilmBuff_C_Obj_AttachHardDrive_Objective_PROXY_12_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.[Obj_AttachHardDrive_Objective] PROXY_13
	 */
	struct UMission_BuffFilmBuff_C_Obj_AttachHardDrive_Objective_PROXY_13_Params
	{	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_FirstViedoFinished
	 */
	struct UMission_BuffFilmBuff_C_MCE_FirstViedoFinished_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_SecondVideoFinished
	 */
	struct UMission_BuffFilmBuff_C_MCE_SecondVideoFinished_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.MCE_BuffVideoFinished
	 */
	struct UMission_BuffFilmBuff_C_MCE_BuffVideoFinished_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BuffFilmBuff.Mission_BuffFilmBuff_C.ExecuteUbergraph_Mission_BuffFilmBuff
	 */
	struct UMission_BuffFilmBuff_C_ExecuteUbergraph_Mission_BuffFilmBuff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DP02[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
