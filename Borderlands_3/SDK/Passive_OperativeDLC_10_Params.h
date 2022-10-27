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
	 * Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.OnActivated
	 */
	struct UPassive_OperativeDLC_9_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ResetGate
	 */
	struct UPassive_OperativeDLC_9_C_ResetGate_Params
	{	};

	/**
	 * Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.CustomEvent_1
	 */
	struct UPassive_OperativeDLC_9_C_CustomEvent_1_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ExecuteUbergraph_Passive_OperativeDLC_10
	 */
	struct UPassive_OperativeDLC_9_C_ExecuteUbergraph_Passive_OperativeDLC_10_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LHO6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
