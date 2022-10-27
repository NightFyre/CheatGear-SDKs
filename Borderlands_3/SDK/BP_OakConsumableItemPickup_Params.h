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
	 * Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.UserConstructionScript
	 */
	struct ABP_OakConsumableItemPickup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ReceiveEndPlay
	 */
	struct ABP_OakConsumableItemPickup_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.OnPickedUpEvent
	 */
	struct ABP_OakConsumableItemPickup_C_OnPickedUpEvent_Params
	{
	public:
		class AActor*                                              WasPickedUpBy;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ExecuteUbergraph_BP_OakConsumableItemPickup
	 */
	struct ABP_OakConsumableItemPickup_C_ExecuteUbergraph_BP_OakConsumableItemPickup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_87V8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
