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
	 * Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript
	 */
	struct ABP_EchoLogPickup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent
	 */
	struct ABP_EchoLogPickup_C_OnPickedUpEvent_Params
	{
	public:
		class AActor*                                              WasPickedUpBy;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup
	 */
	struct ABP_EchoLogPickup_C_ExecuteUbergraph_BP_EchoLogPickup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSCY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
