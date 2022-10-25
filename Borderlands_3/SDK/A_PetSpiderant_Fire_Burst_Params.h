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
	 * Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.Notify_SkillUse
	 */
	struct UA_PetSpiderant_Fire_Burst_C_Notify_SkillUse_Params
	{	};

	/**
	 * Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.ExecuteUbergraph_A_PetSpiderant_Fire_Burst
	 */
	struct UA_PetSpiderant_Fire_Burst_C_ExecuteUbergraph_A_PetSpiderant_Fire_Burst_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GX99[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
