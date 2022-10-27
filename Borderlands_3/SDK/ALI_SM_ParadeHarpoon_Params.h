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
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_7
	 */
	struct UALI_SM_ParadeHarpoon_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_6
	 */
	struct UALI_SM_ParadeHarpoon_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_5
	 */
	struct UALI_SM_ParadeHarpoon_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_TakeHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_SET_TakeHarpoon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_TakeHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_Obj_TakeHarpoon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEUQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_TakeHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_MCE_TakeHarpoon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_FindHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_MCE_FindHarpoon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_FindHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_Obj_FindHarpoon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MREL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_GiveHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_SET_GiveHarpoon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_GiveHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_Obj_GiveHarpoon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XVO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_GiveHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_MCE_GiveHarpoon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_FindHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_SET_FindHarpoon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MissionKickoff
	 */
	struct UALI_SM_ParadeHarpoon_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.ExecuteUbergraph_ALI_SM_ParadeHarpoon
	 */
	struct UALI_SM_ParadeHarpoon_C_ExecuteUbergraph_ALI_SM_ParadeHarpoon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S3SA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
