#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_Resurrection_Capture_Base.BP_Resurrection_Capture_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Resurrection_Capture_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Resurrection_Capture_Base.BP_Resurrection_Capture_Base_C.ExecuteUbergraph_BP_Resurrection_Capture_Base
	 */
	struct ABP_Resurrection_Capture_Base_C_ExecuteUbergraph_BP_Resurrection_Capture_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XFMV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
