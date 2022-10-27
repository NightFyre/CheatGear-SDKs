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
	 * Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.AnointTriggerEffect
	 */
	struct UAbility_Beast_ExitStealthNova_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EU3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExitStealth
	 */
	struct UAbility_Beast_ExitStealthNova_C_ExitStealth_Params
	{	};

	/**
	 * Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExecuteUbergraph_Ability_Beast_ExitStealthNova
	 */
	struct UAbility_Beast_ExitStealthNova_C_ExecuteUbergraph_Ability_Beast_ExitStealthNova_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
