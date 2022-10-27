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
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.OnDialogSequenceFinished_11
	 */
	struct UALI_SM_InkBlots_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.OnDialogSequenceFinished_10
	 */
	struct UALI_SM_InkBlots_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.OnDialogSequenceFinished_9
	 */
	struct UALI_SM_InkBlots_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.OnDialogSequenceFinished_8
	 */
	struct UALI_SM_InkBlots_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.OnDialogSequenceFinished_7
	 */
	struct UALI_SM_InkBlots_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_ShootOilPipe2
	 */
	struct UALI_SM_InkBlots_C_MCE_ShootOilPipe2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj_ShootOilPipe2
	 */
	struct UALI_SM_InkBlots_C_Obj_ShootOilPipe2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2W6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.SET_ShootOilPipe2
	 */
	struct UALI_SM_InkBlots_C_SET_ShootOilPipe2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.SET_ShootOilPipe3
	 */
	struct UALI_SM_InkBlots_C_SET_ShootOilPipe3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj_ShootOilPipe3
	 */
	struct UALI_SM_InkBlots_C_Obj_ShootOilPipe3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2FL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_ShootOilPipe3
	 */
	struct UALI_SM_InkBlots_C_MCE_ShootOilPipe3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.SET_FindBetterPerspective
	 */
	struct UALI_SM_InkBlots_C_SET_FindBetterPerspective_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj_FindBetterPerspective
	 */
	struct UALI_SM_InkBlots_C_Obj_FindBetterPerspective_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1J4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_FindBetterPerspective
	 */
	struct UALI_SM_InkBlots_C_MCE_FindBetterPerspective_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_ShootOilPipe1
	 */
	struct UALI_SM_InkBlots_C_MCE_ShootOilPipe1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj__ShootOilPipe1
	 */
	struct UALI_SM_InkBlots_C_Obj__ShootOilPipe1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RM05[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.SET_ShootOilPipe1
	 */
	struct UALI_SM_InkBlots_C_SET_ShootOilPipe1_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MissionKickoff
	 */
	struct UALI_SM_InkBlots_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj__INV_ShootOilPipe
	 */
	struct UALI_SM_InkBlots_C_Obj__INV_ShootOilPipe_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TNMY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_INV_ShootOilPipe
	 */
	struct UALI_SM_InkBlots_C_MCE_INV_ShootOilPipe_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj__INV_ShootOilPipe_3
	 */
	struct UALI_SM_InkBlots_C_Obj__INV_ShootOilPipe_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TEG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_INV_ShootOilPipe_3
	 */
	struct UALI_SM_InkBlots_C_MCE_INV_ShootOilPipe_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.Obj__INV_ShootOilPipe_4
	 */
	struct UALI_SM_InkBlots_C_Obj__INV_ShootOilPipe_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQS5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.MCE_INV_ShootOilPipe_4
	 */
	struct UALI_SM_InkBlots_C_MCE_INV_ShootOilPipe_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_InkBlots.ALI_SM_InkBlots_C.ExecuteUbergraph_ALI_SM_InkBlots
	 */
	struct UALI_SM_InkBlots_C_ExecuteUbergraph_ALI_SM_InkBlots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NZ6A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
