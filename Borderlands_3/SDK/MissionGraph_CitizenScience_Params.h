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
	 * Function MissionGraph_CitizenScience.MissionGraph_CitizenScience_C.[Borderlands Science!]
	 */
	struct UMissionGraph_CitizenScience_C_Borderlands_Science_Params
	{
	public:
		unsigned char                                              UnknownData_R79X[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_CitizenScience.MissionGraph_CitizenScience_C.ExecuteUbergraph_MissionGraph_CitizenScience
	 */
	struct UMissionGraph_CitizenScience_C_ExecuteUbergraph_MissionGraph_CitizenScience_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NPUK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
