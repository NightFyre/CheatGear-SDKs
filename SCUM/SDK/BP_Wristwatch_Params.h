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
	 * Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay
	 */
	struct ABP_Wristwatch_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Wristwatch.BP_Wristwatch_C.ReceiveTick
	 */
	struct ABP_Wristwatch_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
	 */
	struct ABP_Wristwatch_C_SetDisplayBrightness_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
	 */
	struct ABP_Wristwatch_C_ExecuteUbergraph_BP_Wristwatch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PD3L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
