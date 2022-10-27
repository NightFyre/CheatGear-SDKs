#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.LockOnEmpty
	 */
	struct ABP_Mk18_MOD1_C_LockOnEmpty_Params
	{
	public:
		bool                                                       bShouldLock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2H6E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.UpdateSafetyAlpha
	 */
	struct ABP_Mk18_MOD1_C_UpdateSafetyAlpha_Params
	{	};

	/**
	 * Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.ExecuteUbergraph_BP_Mk18_MOD1
	 */
	struct ABP_Mk18_MOD1_C_ExecuteUbergraph_BP_Mk18_MOD1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
