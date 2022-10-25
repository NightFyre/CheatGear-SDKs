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
	 * Function A_Crouch.A_Crouch_C.checkProceduralPrecondition
	 */
	struct UA_Crouch_C_checkProceduralPrecondition_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function A_Crouch.A_Crouch_C.StartAction
	 */
	struct UA_Crouch_C_StartAction_Params
	{	};

	/**
	 * Function A_Crouch.A_Crouch_C.CleanupAction
	 */
	struct UA_Crouch_C_CleanupAction_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Crouch.A_Crouch_C.LookTowardsTarget
	 */
	struct UA_Crouch_C_LookTowardsTarget_Params
	{	};

	/**
	 * Function A_Crouch.A_Crouch_C.ExecuteUbergraph_A_Crouch
	 */
	struct UA_Crouch_C_ExecuteUbergraph_A_Crouch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
