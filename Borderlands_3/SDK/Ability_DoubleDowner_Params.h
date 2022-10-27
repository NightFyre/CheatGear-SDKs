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
	 * Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnActivated
	 */
	struct UAbility_DoubleDowner_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_DoubleDowner.Ability_DoubleDowner_C.Downed
	 */
	struct UAbility_DoubleDowner_C_Downed_Params
	{	};

	/**
	 * Function Ability_DoubleDowner.Ability_DoubleDowner_C.Upped
	 */
	struct UAbility_DoubleDowner_C_Upped_Params
	{	};

	/**
	 * Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnDeactivated
	 */
	struct UAbility_DoubleDowner_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_DoubleDowner.Ability_DoubleDowner_C.ExecuteUbergraph_Ability_DoubleDowner
	 */
	struct UAbility_DoubleDowner_C_ExecuteUbergraph_Ability_DoubleDowner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNJT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
