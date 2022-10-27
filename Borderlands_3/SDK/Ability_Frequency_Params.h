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
	 * Function Ability_Frequency.Ability_Frequency_C.OnUnregistered
	 */
	struct UAbility_Frequency_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Frequency.Ability_Frequency_C.OnDeactivated
	 */
	struct UAbility_Frequency_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Frequency.Ability_Frequency_C.OnKilled
	 */
	struct UAbility_Frequency_C_OnKilled_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Frequency.Ability_Frequency_C.OnRegistered
	 */
	struct UAbility_Frequency_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Frequency.Ability_Frequency_C.OnReloadStarted
	 */
	struct UAbility_Frequency_C_OnReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Frequency.Ability_Frequency_C.ExecuteUbergraph_Ability_Frequency
	 */
	struct UAbility_Frequency_C_ExecuteUbergraph_Ability_Frequency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5TZ3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
