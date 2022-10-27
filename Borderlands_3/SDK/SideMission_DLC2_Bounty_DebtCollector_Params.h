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
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_7
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_6
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_5
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_FindGideon
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_MCE_FindGideon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_DestroyBottles
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Set_DestroyBottles_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_DestroyBottles
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Obj_DestroyBottles_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DOCZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_DestroyBottles
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_MCE_DestroyBottles_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MissionKickoff
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_MissionKickoff_Params
	{	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_FindGideon
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Obj_FindGideon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EL0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_KillGideon
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Set_KillGideon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_KillGideon
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Obj_KillGideon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7CEZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_KillGideon
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_MCE_KillGideon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_FindGideon
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Set_FindGideon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_INV_DestroyBottles
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_Obj_INV_DestroyBottles_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O3BZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_INV_DestroyBottles
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_MCE_INV_DestroyBottles_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector
	 */
	struct USideMission_DLC2_Bounty_DebtCollector_C_ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4HHH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
