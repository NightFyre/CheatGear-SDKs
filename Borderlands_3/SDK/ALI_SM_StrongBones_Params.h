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
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_9
	 */
	struct UALI_SM_StrongBones_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_8
	 */
	struct UALI_SM_StrongBones_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_7
	 */
	struct UALI_SM_StrongBones_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_6
	 */
	struct UALI_SM_StrongBones_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_2
	 */
	struct UALI_SM_StrongBones_C_MCE_DrinkYourMilk_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_2
	 */
	struct UALI_SM_StrongBones_C_Obj_DrinkYourMilk_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G5DP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.SET_DrinkYourMilk
	 */
	struct UALI_SM_StrongBones_C_SET_DrinkYourMilk_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MissionKickoff
	 */
	struct UALI_SM_StrongBones_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_3
	 */
	struct UALI_SM_StrongBones_C_Obj_DrinkYourMilk_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8JO2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_3
	 */
	struct UALI_SM_StrongBones_C_MCE_DrinkYourMilk_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_4
	 */
	struct UALI_SM_StrongBones_C_Obj_DrinkYourMilk_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4TMU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_4
	 */
	struct UALI_SM_StrongBones_C_MCE_DrinkYourMilk_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.ExecuteUbergraph_ALI_SM_StrongBones
	 */
	struct UALI_SM_StrongBones_C_ExecuteUbergraph_ALI_SM_StrongBones_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KY1E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
