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
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_7
	 */
	struct UALI_SM_HotNBothered_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_6
	 */
	struct UALI_SM_HotNBothered_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_5
	 */
	struct UALI_SM_HotNBothered_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MissionKickoff
	 */
	struct UALI_SM_HotNBothered_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.Obj_TurnHeatOn
	 */
	struct UALI_SM_HotNBothered_C_Obj_TurnHeatOn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U6LM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MCE_TurnedHeatOn
	 */
	struct UALI_SM_HotNBothered_C_MCE_TurnedHeatOn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.SET_TurnHeatOn
	 */
	struct UALI_SM_HotNBothered_C_SET_TurnHeatOn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.ExecuteUbergraph_ALI_SM_HotNBothered
	 */
	struct UALI_SM_HotNBothered_C_ExecuteUbergraph_ALI_SM_HotNBothered_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55C0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
