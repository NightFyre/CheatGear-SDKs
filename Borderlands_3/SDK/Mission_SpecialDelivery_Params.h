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
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.OnDialogSequenceFinished_9
	 */
	struct UMission_SpecialDelivery_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.OnDialogSequenceFinished_8
	 */
	struct UMission_SpecialDelivery_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.OnDialogSequenceFinished_7
	 */
	struct UMission_SpecialDelivery_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.OnDialogSequenceFinished_6
	 */
	struct UMission_SpecialDelivery_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_BombDropped_Inv
	 */
	struct UMission_SpecialDelivery_C_Obj_BombDropped_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1MWQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE_Update_BombDropped
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_BombDropped_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_KillTyreenCampCounter
	 */
	struct UMission_SpecialDelivery_C_Obj_KillTyreenCampCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8WUD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Kill Tyreen Camp Counter
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Kill_Tyreen_Camp_Counter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_KillTroyLoyalists
	 */
	struct UMission_SpecialDelivery_C_Obj_KillTroyLoyalists_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JF40[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_ActivatePayload
	 */
	struct UMission_SpecialDelivery_C_Set_ActivatePayload_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE_Update_ActivatePayload
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_ActivatePayload_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_KillTroyCampCounter
	 */
	struct UMission_SpecialDelivery_C_Obj_KillTroyCampCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IR66[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Kill Troy Camp Counter
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Kill_Troy_Camp_Counter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Crane Counter
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Crane_Counter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_InvisibleCraneCounter
	 */
	struct UMission_SpecialDelivery_C_Obj_InvisibleCraneCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L1R7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Escort The Payload
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Escort_The_Payload_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_EscortThePayload
	 */
	struct UMission_SpecialDelivery_C_Obj_EscortThePayload_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIJ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_EscortThePayload
	 */
	struct UMission_SpecialDelivery_C_Set_EscortThePayload_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_GoToTroyCamp
	 */
	struct UMission_SpecialDelivery_C_Set_GoToTroyCamp_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Go To Troy Camp
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Go_To_Troy_Camp_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_GoToTroyCamp
	 */
	struct UMission_SpecialDelivery_C_Obj_GoToTroyCamp_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPS1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_GoToTyreenCamp
	 */
	struct UMission_SpecialDelivery_C_Obj_GoToTyreenCamp_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B3UK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Go To Tyreen Camp
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Go_To_Tyreen_Camp_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Special Delivery Complete
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Special_Delivery_Complete_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_SpecialDeliveryComplete
	 */
	struct UMission_SpecialDelivery_C_Obj_SpecialDeliveryComplete_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGFT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_SpecialDeliveryComplete
	 */
	struct UMission_SpecialDelivery_C_Set_SpecialDeliveryComplete_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Kill Troy Loyalists
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Kill_Troy_Loyalists_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_DropTheLoad
	 */
	struct UMission_SpecialDelivery_C_Obj_DropTheLoad_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R8PJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_DropTheLoad
	 */
	struct UMission_SpecialDelivery_C_Set_DropTheLoad_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Drop The Load
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Drop_The_Load_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_KillTroyLoyalists
	 */
	struct UMission_SpecialDelivery_C_Set_KillTroyLoyalists_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_ActivatePayload
	 */
	struct UMission_SpecialDelivery_C_Obj_ActivatePayload_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_24XU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_KillTyreenLoyalists
	 */
	struct UMission_SpecialDelivery_C_Set_KillTyreenLoyalists_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.MCE Update Kill Tyreen Loyalists
	 */
	struct UMission_SpecialDelivery_C_MCE_Update_Kill_Tyreen_Loyalists_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Obj_KillTyreenLoyalists
	 */
	struct UMission_SpecialDelivery_C_Obj_KillTyreenLoyalists_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AAFW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.Set_GoToTyreenCamp
	 */
	struct UMission_SpecialDelivery_C_Set_GoToTyreenCamp_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SpecialDelivery.Mission_SpecialDelivery_C.ExecuteUbergraph_Mission_SpecialDelivery
	 */
	struct UMission_SpecialDelivery_C_ExecuteUbergraph_Mission_SpecialDelivery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_STLN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
