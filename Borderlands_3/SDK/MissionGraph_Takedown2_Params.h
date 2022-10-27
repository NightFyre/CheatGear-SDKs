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
	 * Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Takedown at the Guardian Breach]
	 */
	struct UMissionGraph_Takedown2_C_Takedown_at_the_Guardian_Breach_Params
	{
	public:
		unsigned char                                              UnknownData_6R5Y[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Discovery: Takedown at the Guardian Breach]
	 */
	struct UMissionGraph_Takedown2_C_Discovery_Takedown_at_the_Guardian_Breach_Params
	{
	public:
		unsigned char                                              UnknownData_BRCW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.ExecuteUbergraph_MissionGraph_Takedown2
	 */
	struct UMissionGraph_Takedown2_C_ExecuteUbergraph_MissionGraph_Takedown2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O1ZS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
