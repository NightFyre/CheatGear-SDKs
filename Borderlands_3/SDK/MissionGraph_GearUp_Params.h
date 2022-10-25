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
	 * Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]
	 */
	struct UMissionGraph_GearUp_C_Shlooting_Spree_Introduction_Params
	{
	public:
		unsigned char                                              UnknownData_I6F8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]
	 */
	struct UMissionGraph_GearUp_C_Shlooting_Spree_Params
	{
	public:
		unsigned char                                              UnknownData_YECG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp
	 */
	struct UMissionGraph_GearUp_C_ExecuteUbergraph_MissionGraph_GearUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QYKC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
