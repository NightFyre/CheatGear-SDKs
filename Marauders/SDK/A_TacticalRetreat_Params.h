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
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.checkProceduralPrecondition
	 */
	struct UA_TacticalRetreat_C_checkProceduralPrecondition_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.MoveInfo
	 */
	struct UA_TacticalRetreat_C_MoveInfo_Params
	{
	public:
		struct FVector                                             atLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveRequest                                               Branches;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.StartAction
	 */
	struct UA_TacticalRetreat_C_StartAction_Params
	{	};

	/**
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.LookTowardsTarget
	 */
	struct UA_TacticalRetreat_C_LookTowardsTarget_Params
	{	};

	/**
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.ShootAtPlayer
	 */
	struct UA_TacticalRetreat_C_ShootAtPlayer_Params
	{	};

	/**
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.CleanupAction
	 */
	struct UA_TacticalRetreat_C_CleanupAction_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_TacticalRetreat.A_TacticalRetreat_C.ExecuteUbergraph_A_TacticalRetreat
	 */
	struct UA_TacticalRetreat_C_ExecuteUbergraph_A_TacticalRetreat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGDD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
