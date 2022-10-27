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
	 * Function Ability_Heckle.Ability_Heckle_C.OnActivated
	 */
	struct UAbility_Heckle_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Heckle.Ability_Heckle_C.OnDeactivated
	 */
	struct UAbility_Heckle_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Heckle.Ability_Heckle_C.ExecuteUbergraph_Ability_Heckle
	 */
	struct UAbility_Heckle_C_ExecuteUbergraph_Ability_Heckle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFGS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
