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
	 * Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnActivated
	 */
	struct UAbility_Shield_Manawell_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.SlamEnd
	 */
	struct UAbility_Shield_Manawell_C_SlamEnd_Params
	{
	public:
		struct FGroundSlamEndedDetails                             Details;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.StopEffect
	 */
	struct UAbility_Shield_Manawell_C_StopEffect_Params
	{	};

	/**
	 * Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnDeactivated
	 */
	struct UAbility_Shield_Manawell_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.DrainShield
	 */
	struct UAbility_Shield_Manawell_C_DrainShield_Params
	{	};

	/**
	 * Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.ExecuteUbergraph_Ability_Shield_Manawell
	 */
	struct UAbility_Shield_Manawell_C_ExecuteUbergraph_Ability_Shield_Manawell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B4EV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
