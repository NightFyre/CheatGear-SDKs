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
	 * Function A_CrouchStalker.A_CrouchStalker_C.checkProceduralPrecondition
	 */
	struct UA_CrouchStalker_C_checkProceduralPrecondition_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function A_CrouchStalker.A_CrouchStalker_C.MoveInfo
	 */
	struct UA_CrouchStalker_C_MoveInfo_Params
	{
	public:
		struct FVector                                             atLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveRequest                                               Branches;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_CrouchStalker.A_CrouchStalker_C.StartAction
	 */
	struct UA_CrouchStalker_C_StartAction_Params
	{	};

	/**
	 * Function A_CrouchStalker.A_CrouchStalker_C.CleanupAction
	 */
	struct UA_CrouchStalker_C_CleanupAction_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_CrouchStalker.A_CrouchStalker_C.LookWiggle
	 */
	struct UA_CrouchStalker_C_LookWiggle_Params
	{	};

	/**
	 * Function A_CrouchStalker.A_CrouchStalker_C.FinishedTimer
	 */
	struct UA_CrouchStalker_C_FinishedTimer_Params
	{	};

	/**
	 * Function A_CrouchStalker.A_CrouchStalker_C.ExecuteUbergraph_A_CrouchStalker
	 */
	struct UA_CrouchStalker_C_ExecuteUbergraph_A_CrouchStalker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
