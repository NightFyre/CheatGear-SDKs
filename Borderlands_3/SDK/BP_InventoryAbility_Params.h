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
	 * Function BP_InventoryAbility.BP_InventoryAbility_C.CalculateAbilityState
	 */
	struct UBP_InventoryAbility_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InventoryAbility.BP_InventoryAbility_C.OnActivated
	 */
	struct UBP_InventoryAbility_C_OnActivated_Params
	{	};

	/**
	 * Function BP_InventoryAbility.BP_InventoryAbility_C.ExecuteUbergraph_BP_InventoryAbility
	 */
	struct UBP_InventoryAbility_C_ExecuteUbergraph_BP_InventoryAbility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BJ7W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
