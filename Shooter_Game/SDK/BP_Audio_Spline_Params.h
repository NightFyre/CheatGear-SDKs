#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Function BP_Audio_Spline.BP_Audio_Spline_C.ReceiveBeginPlay
	 */
	struct ABP_Audio_Spline_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Audio_Spline.BP_Audio_Spline_C.Find Closest Point
	 */
	struct ABP_Audio_Spline_C_Find_Closest_Point_Params
	{	};

	/**
	 * Function BP_Audio_Spline.BP_Audio_Spline_C.ReceiveTick
	 */
	struct ABP_Audio_Spline_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_Spline.BP_Audio_Spline_C.ExecuteUbergraph_BP_Audio_Spline
	 */
	struct ABP_Audio_Spline_C_ExecuteUbergraph_BP_Audio_Spline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PVOZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
