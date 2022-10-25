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
	 * Function A_Wiggle.A_Wiggle_C.checkProceduralPrecondition
	 */
	struct UA_Wiggle_C_checkProceduralPrecondition_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.StartAction
	 */
	struct UA_Wiggle_C_StartAction_Params
	{	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.CleanupAction
	 */
	struct UA_Wiggle_C_CleanupAction_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.MoveInfo
	 */
	struct UA_Wiggle_C_MoveInfo_Params
	{
	public:
		struct FVector                                             atLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveRequest                                               Branches;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.LookWiggle
	 */
	struct UA_Wiggle_C_LookWiggle_Params
	{	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.FinishAction
	 */
	struct UA_Wiggle_C_FinishAction_Params
	{	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.LookTowardsTarget
	 */
	struct UA_Wiggle_C_LookTowardsTarget_Params
	{	};

	/**
	 * Function A_Wiggle.A_Wiggle_C.ExecuteUbergraph_A_Wiggle
	 */
	struct UA_Wiggle_C_ExecuteUbergraph_A_Wiggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
