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
	 * Function Ability_Juliet.Ability_Juliet_C.OnResumed
	 */
	struct UAbility_Juliet_C_OnResumed_Params
	{	};

	/**
	 * Function Ability_Juliet.Ability_Juliet_C.OnActivated
	 */
	struct UAbility_Juliet_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Juliet.Ability_Juliet_C.OnRegistered
	 */
	struct UAbility_Juliet_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Juliet.Ability_Juliet_C.ReloadStartedEvent
	 */
	struct UAbility_Juliet_C_ReloadStartedEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Juliet.Ability_Juliet_C.OnUnregistered
	 */
	struct UAbility_Juliet_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Juliet.Ability_Juliet_C.OnCausedDeath_CE
	 */
	struct UAbility_Juliet_C_OnCausedDeath_CE_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Juliet.Ability_Juliet_C.ExecuteUbergraph_Ability_Juliet
	 */
	struct UAbility_Juliet_C_ExecuteUbergraph_Ability_Juliet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q706[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
