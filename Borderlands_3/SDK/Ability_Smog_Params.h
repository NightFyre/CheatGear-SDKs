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
	 * Function Ability_Smog.Ability_Smog_C.OnRegistered
	 */
	struct UAbility_Smog_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Smog.Ability_Smog_C.OnUnregistered
	 */
	struct UAbility_Smog_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Smog.Ability_Smog_C.ExecuteUbergraph_Ability_Smog
	 */
	struct UAbility_Smog_C_ExecuteUbergraph_Ability_Smog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K6ST[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
