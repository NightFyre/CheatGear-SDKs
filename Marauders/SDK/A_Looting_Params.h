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
	 * Function A_Looting.A_Looting_C.checkProceduralPrecondition
	 */
	struct UA_Looting_C_checkProceduralPrecondition_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function A_Looting.A_Looting_C.StartAction
	 */
	struct UA_Looting_C_StartAction_Params
	{	};

	/**
	 * Function A_Looting.A_Looting_C.CleanupAction
	 */
	struct UA_Looting_C_CleanupAction_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Looting.A_Looting_C.ShuffleAround
	 */
	struct UA_Looting_C_ShuffleAround_Params
	{	};

	/**
	 * Function A_Looting.A_Looting_C.LookTowardsTarget
	 */
	struct UA_Looting_C_LookTowardsTarget_Params
	{	};

	/**
	 * Function A_Looting.A_Looting_C.ExecuteUbergraph_A_Looting
	 */
	struct UA_Looting_C_ExecuteUbergraph_A_Looting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3JL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
