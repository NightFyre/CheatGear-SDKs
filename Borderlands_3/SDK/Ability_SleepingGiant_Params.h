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
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnResumed
	 */
	struct UAbility_SleepingGiant_C_OnResumed_Params
	{	};

	/**
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnActivated
	 */
	struct UAbility_SleepingGiant_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnRegistered
	 */
	struct UAbility_SleepingGiant_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadStartedEvent
	 */
	struct UAbility_SleepingGiant_C_ReloadStartedEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadEndedEvent
	 */
	struct UAbility_SleepingGiant_C_ReloadEndedEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnUnregistered
	 */
	struct UAbility_SleepingGiant_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_SleepingGiant.Ability_SleepingGiant_C.ExecuteUbergraph_Ability_SleepingGiant
	 */
	struct UAbility_SleepingGiant_C_ExecuteUbergraph_Ability_SleepingGiant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
