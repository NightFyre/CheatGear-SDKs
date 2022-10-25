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
	 * Function BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C.ReceiveBeginPlay
	 */
	struct UBP_ZoneMap_AIPOI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C.ExecuteUbergraph_BP_ZoneMap_AIPOI
	 */
	struct UBP_ZoneMap_AIPOI_C_ExecuteUbergraph_BP_ZoneMap_AIPOI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R9YR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
