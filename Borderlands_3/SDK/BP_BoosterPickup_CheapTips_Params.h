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
	 * Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.UserConstructionScript
	 */
	struct ABP_BoosterPickup_CheapTips_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ReceiveBeginPlay
	 */
	struct ABP_BoosterPickup_CheapTips_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.PickedUp
	 */
	struct ABP_BoosterPickup_CheapTips_C_PickedUp_Params
	{
	public:
		class AOakCharacter*                                       PickupInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ExecuteUbergraph_BP_BoosterPickup_CheapTips
	 */
	struct ABP_BoosterPickup_CheapTips_C_ExecuteUbergraph_BP_BoosterPickup_CheapTips_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
