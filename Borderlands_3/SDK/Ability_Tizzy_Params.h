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
	 * Function Ability_Tizzy.Ability_Tizzy_C.StopTizzy
	 */
	struct UAbility_Tizzy_C_StopTizzy_Params
	{	};

	/**
	 * Function Ability_Tizzy.Ability_Tizzy_C.StartTizzy
	 */
	struct UAbility_Tizzy_C_StartTizzy_Params
	{	};

	/**
	 * Function Ability_Tizzy.Ability_Tizzy_C.OnActivated
	 */
	struct UAbility_Tizzy_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Tizzy.Ability_Tizzy_C.NotifyHeatChange
	 */
	struct UAbility_Tizzy_C_NotifyHeatChange_Params
	{	};

	/**
	 * Function Ability_Tizzy.Ability_Tizzy_C.OnDeactivated
	 */
	struct UAbility_Tizzy_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Tizzy.Ability_Tizzy_C.WeaponUsed
	 */
	struct UAbility_Tizzy_C_WeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Tizzy.Ability_Tizzy_C.ExecuteUbergraph_Ability_Tizzy
	 */
	struct UAbility_Tizzy_C_ExecuteUbergraph_Ability_Tizzy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CYSD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
