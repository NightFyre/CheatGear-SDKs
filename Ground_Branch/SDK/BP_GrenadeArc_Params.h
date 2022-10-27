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
	 * Function BP_GrenadeArc.BP_GrenadeArc_C.UserConstructionScript
	 */
	struct ABP_GrenadeArc_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GrenadeArc.BP_GrenadeArc_C.ReceiveTick
	 */
	struct ABP_GrenadeArc_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrenadeArc.BP_GrenadeArc_C.ReceiveBeginPlay
	 */
	struct ABP_GrenadeArc_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GrenadeArc.BP_GrenadeArc_C.ExecuteUbergraph_BP_GrenadeArc
	 */
	struct ABP_GrenadeArc_C_ExecuteUbergraph_BP_GrenadeArc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
