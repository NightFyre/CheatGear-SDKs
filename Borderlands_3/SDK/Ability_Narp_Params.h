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
	 * Function Ability_Narp.Ability_Narp_C.OnActivated
	 */
	struct UAbility_Narp_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Narp.Ability_Narp_C.OnReloadStarted
	 */
	struct UAbility_Narp_C_OnReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Narp.Ability_Narp_C.OnReloadEnded
	 */
	struct UAbility_Narp_C_OnReloadEnded_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Narp.Ability_Narp_C.OnDeactivated
	 */
	struct UAbility_Narp_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Narp.Ability_Narp_C.OnUnregistered
	 */
	struct UAbility_Narp_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Narp.Ability_Narp_C.ExecuteUbergraph_Ability_Narp
	 */
	struct UAbility_Narp_C_ExecuteUbergraph_Ability_Narp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UX1I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
