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
	 * Function Ability_CraderMP5.Ability_CraderMP5_C.CalculateAbilityState
	 */
	struct UAbility_CraderMP5_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ESLM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CraderMP5.Ability_CraderMP5_C.OnActivated
	 */
	struct UAbility_CraderMP5_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_CraderMP5.Ability_CraderMP5_C.OnDeactivated
	 */
	struct UAbility_CraderMP5_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_CraderMP5.Ability_CraderMP5_C.ExecuteUbergraph_Ability_CraderMP5
	 */
	struct UAbility_CraderMP5_C_ExecuteUbergraph_Ability_CraderMP5_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KTVS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
