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
	 * Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnActivated
	 */
	struct UAbility_Siren_Slam_ReturnDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.SlamEnded
	 */
	struct UAbility_Siren_Slam_ReturnDamage_C_SlamEnded_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnDeactivated
	 */
	struct UAbility_Siren_Slam_ReturnDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.UnregisterCDM
	 */
	struct UAbility_Siren_Slam_ReturnDamage_C_UnregisterCDM_Params
	{	};

	/**
	 * Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage
	 */
	struct UAbility_Siren_Slam_ReturnDamage_C_ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSU1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
