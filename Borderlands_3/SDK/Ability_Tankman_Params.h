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
	 * Function Ability_Tankman.Ability_Tankman_C.OnResumed
	 */
	struct UAbility_Tankman_C_OnResumed_Params
	{	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.OnActivated
	 */
	struct UAbility_Tankman_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.OnRegistered
	 */
	struct UAbility_Tankman_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.ReloadStartedEvent
	 */
	struct UAbility_Tankman_C_ReloadStartedEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.ReloadEndedEvent
	 */
	struct UAbility_Tankman_C_ReloadEndedEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.OnUnregistered
	 */
	struct UAbility_Tankman_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.OnCauseDeath_CE
	 */
	struct UAbility_Tankman_C_OnCauseDeath_CE_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.OnDownStateStart_CE
	 */
	struct UAbility_Tankman_C_OnDownStateStart_CE_Params
	{	};

	/**
	 * Function Ability_Tankman.Ability_Tankman_C.ExecuteUbergraph_Ability_Tankman
	 */
	struct UAbility_Tankman_C_ExecuteUbergraph_Ability_Tankman_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
