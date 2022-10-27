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
	 * Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ReceiveBeginPlay
	 */
	struct UBPHeatComponent_CoV_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.OnStartOverheat
	 */
	struct UBPHeatComponent_CoV_C_OnStartOverheat_Params
	{	};

	/**
	 * Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ExecuteUbergraph_BPHeatComponent_CoV
	 */
	struct UBPHeatComponent_CoV_C_ExecuteUbergraph_BPHeatComponent_CoV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BGHI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
