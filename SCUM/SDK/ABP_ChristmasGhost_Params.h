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
	 * Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimGraph
	 */
	struct UABP_ChristmasGhost_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimNotify_SpawnChristmasGift
	 */
	struct UABP_ChristmasGhost_C_AnimNotify_SpawnChristmasGift_Params
	{	};

	/**
	 * Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.ExecuteUbergraph_ABP_ChristmasGhost
	 */
	struct UABP_ChristmasGhost_C_ExecuteUbergraph_ABP_ChristmasGhost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZRDR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
