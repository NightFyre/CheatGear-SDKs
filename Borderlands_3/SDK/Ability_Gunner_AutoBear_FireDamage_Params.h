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
	 * Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.AnointAutoBearEnded
	 */
	struct UAbility_Gunner_AutoBear_FireDamage_C_AnointAutoBearEnded_Params
	{
	public:
		bool                                                       HasValidTarget;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2IJA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ChargeTarget;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage
	 */
	struct UAbility_Gunner_AutoBear_FireDamage_C_ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
