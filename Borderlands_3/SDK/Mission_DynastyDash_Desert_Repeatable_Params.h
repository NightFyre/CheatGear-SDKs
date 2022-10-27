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
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OnDialogSequenceFinished_13
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OnDialogSequenceFinished_12
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OnDialogSequenceFinished_11
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OnDialogSequenceFinished_10
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OnDialogSequenceFinished_9
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OnDialogSequenceFinished_8
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_AcquireBurgers
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_AcquireBurgers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IYNC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.SET_AcquireBurgers
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_SET_AcquireBurgers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.SET_DeliverBurgers
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_SET_DeliverBurgers_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_DeliverBurgers
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_DeliverBurgers_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UKNA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.MCE_DeliverBurgers
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_MCE_DeliverBurgers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.SET_ReturnToStart
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_SET_ReturnToStart_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_CompleteDeliveryFast
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_CompleteDeliveryFast_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQC9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_CompleteDeliveryMed
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_CompleteDeliveryMed_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y519[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_CompleteDeliverySlow
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_CompleteDeliverySlow_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NMQQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.[OBJ_CompleteDeliveryFast_Objective] PROXY
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_CompleteDeliveryFast_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.[OBJ_CompleteDeliveryMed_Objective] PROXY_1
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_CompleteDeliveryMed_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.[OBJ_CompleteDeliverySlow_Objective] PROXY_2
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_CompleteDeliverySlow_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.MCE_AcquireBurgers
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_MCE_AcquireBurgers_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_ReturnToStart
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_ReturnToStart_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BC8B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.MCE_ReturnToStart
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_MCE_ReturnToStart_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.MCE_DetermineResults
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_MCE_DetermineResults_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.OBJ_SignTest
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_OBJ_SignTest_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2PDW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.MCE_ShotSign
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_MCE_ShotSign_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.MissionKickoff
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_DynastyDash_Desert_Repeatable.Mission_DynastyDash_Desert_Repeatable_C.ExecuteUbergraph_Mission_DynastyDash_Desert_Repeatable
	 */
	struct UMission_DynastyDash_Desert_Repeatable_C_ExecuteUbergraph_Mission_DynastyDash_Desert_Repeatable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SO0Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
