#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function 00_ActionParent.00_ActionParent_C.CheckLineOfSightForShooting
	 */
	struct U00_ActionParent_C_CheckLineOfSightForShooting_Params
	{
	public:
		float                                                      ChanceToStillShootIfNoLOS;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAbleToShoot;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.GetTotalMissRate
	 */
	struct U00_ActionParent_C_GetTotalMissRate_Params
	{
	public:
		float                                                      Modifier_Amount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MissRate;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.StopRunning_IfAlreadyRunning
	 */
	struct U00_ActionParent_C_StopRunning_IfAlreadyRunning_Params
	{	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.StartRunning_IfNotAlreadyRunning
	 */
	struct U00_ActionParent_C_StartRunning_IfNotAlreadyRunning_Params
	{	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.StopCrouching_IfAlreadyCrouching
	 */
	struct U00_ActionParent_C_StopCrouching_IfAlreadyCrouching_Params
	{	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.StartCrouching_IfNotAlreadyCrouching
	 */
	struct U00_ActionParent_C_StartCrouching_IfNotAlreadyCrouching_Params
	{	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.isGroupAiWithValidCaptainMoveToLoc
	 */
	struct U00_ActionParent_C_isGroupAiWithValidCaptainMoveToLoc_Params
	{
	public:
		bool                                                       CaptainWithValidLocation;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PBZZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MoveToLocation;                                          // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.Group_MoveWithCaptain
	 */
	struct U00_ActionParent_C_Group_MoveWithCaptain_Params
	{	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.SetGroupTargetSameAsCaptain
	 */
	struct U00_ActionParent_C_SetGroupTargetSameAsCaptain_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S0UI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.isAGroupAiWithAliveCaptain
	 */
	struct U00_ActionParent_C_isAGroupAiWithAliveCaptain_Params
	{
	public:
		bool                                                       isGroupAiWithAliveCaptain;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6IT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.SetActionRunning
	 */
	struct U00_ActionParent_C_SetActionRunning_Params
	{
	public:
		bool                                                       ActionRunning;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function 00_ActionParent.00_ActionParent_C.IsActionRunning
	 */
	struct U00_ActionParent_C_IsActionRunning_Params
	{
	public:
		bool                                                       IsActionRunning;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
