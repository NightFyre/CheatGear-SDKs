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
	 * Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.UserConstructionScript
	 */
	struct ABPSeatPawn_GunnersNest_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveBeginPlay
	 */
	struct ABPSeatPawn_GunnersNest_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceivePossessed
	 */
	struct ABPSeatPawn_GunnersNest_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveUnpossessed
	 */
	struct ABPSeatPawn_GunnersNest_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ExecuteUbergraph_BPSeatPawn_GunnersNest
	 */
	struct ABPSeatPawn_GunnersNest_C_ExecuteUbergraph_BPSeatPawn_GunnersNest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z48W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
