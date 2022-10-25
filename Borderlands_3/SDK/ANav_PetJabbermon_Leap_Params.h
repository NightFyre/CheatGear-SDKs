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
	 * Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.Notify_Landed_Pet
	 */
	struct UANav_PetJabbermon_Leap_C_Notify_Landed_Pet_Params
	{	};

	/**
	 * Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.ExecuteUbergraph_ANav_PetJabbermon_Leap
	 */
	struct UANav_PetJabbermon_Leap_C_ExecuteUbergraph_ANav_PetJabbermon_Leap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9PFQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
