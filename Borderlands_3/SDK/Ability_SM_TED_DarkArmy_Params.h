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
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnRegistered
	 */
	struct UAbility_SM_TED_DarkArmy_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ReloadStartedDelegate
	 */
	struct UAbility_SM_TED_DarkArmy_C_ReloadStartedDelegate_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnDeactivated
	 */
	struct UAbility_SM_TED_DarkArmy_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnUnregistered
	 */
	struct UAbility_SM_TED_DarkArmy_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnPaused
	 */
	struct UAbility_SM_TED_DarkArmy_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.OnActivated
	 */
	struct UAbility_SM_TED_DarkArmy_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C.ExecuteUbergraph_Ability_SM_TED_DarkArmy
	 */
	struct UAbility_SM_TED_DarkArmy_C_ExecuteUbergraph_Ability_SM_TED_DarkArmy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
