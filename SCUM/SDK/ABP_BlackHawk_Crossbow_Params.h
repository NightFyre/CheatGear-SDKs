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
	 * Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.AnimGraph
	 */
	struct UABP_BlackHawk_Crossbow_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.BlueprintUpdateAnimation
	 */
	struct UABP_BlackHawk_Crossbow_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.ExecuteUbergraph_ABP_BlackHawk_Crossbow
	 */
	struct UABP_BlackHawk_Crossbow_C_ExecuteUbergraph_ABP_BlackHawk_Crossbow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
