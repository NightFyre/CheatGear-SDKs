#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BP_BlackHawk_Unload.BP_BlackHawk_Unload_C.OnActionAnimNotify
	 */
	struct UBP_BlackHawk_Unload_C_OnActionAnimNotify_Params
	{
	public:
		ECharacterActionNotifyType                                 notifyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BlackHawk_Unload.BP_BlackHawk_Unload_C.ExecuteUbergraph_BP_BlackHawk_Unload
	 */
	struct UBP_BlackHawk_Unload_C_ExecuteUbergraph_BP_BlackHawk_Unload_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4P1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
