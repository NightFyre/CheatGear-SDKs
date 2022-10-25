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
	 * Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.OnActivated
	 */
	struct UAbility_Beast_RakkCharge_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.OnDeactivated
	 */
	struct UAbility_Beast_RakkCharge_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Beast_RakkCharge.Ability_Beast_RakkCharge_C.ExecuteUbergraph_Ability_Beast_RakkCharge
	 */
	struct UAbility_Beast_RakkCharge_C_ExecuteUbergraph_Ability_Beast_RakkCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WPTW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
