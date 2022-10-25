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
	 * Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.UserConstructionScript
	 */
	struct ABP_ShieldBoosterPickup_Health_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.ReceiveBeginPlay
	 */
	struct ABP_ShieldBoosterPickup_Health_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.PickedUp
	 */
	struct ABP_ShieldBoosterPickup_Health_C_PickedUp_Params
	{
	public:
		class AOakCharacter*                                       PickupInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Health
	 */
	struct ABP_ShieldBoosterPickup_Health_C_ExecuteUbergraph_BP_ShieldBoosterPickup_Health_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OBMQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
