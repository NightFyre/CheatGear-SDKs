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
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnDeactivated
	 */
	struct UAbility_SparkyBoom_v2_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnUnregistered
	 */
	struct UAbility_SparkyBoom_v2_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnPaused
	 */
	struct UAbility_SparkyBoom_v2_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadStarted
	 */
	struct UAbility_SparkyBoom_v2_C_Event_ReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.OnActivated
	 */
	struct UAbility_SparkyBoom_v2_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_ReloadEnded
	 */
	struct UAbility_SparkyBoom_v2_C_Event_ReloadEnded_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.Event_EnteredDownState
	 */
	struct UAbility_SparkyBoom_v2_C_Event_EnteredDownState_Params
	{	};

	/**
	 * Function Ability_SparkyBoom.Ability_SparkyBoom_v2_C.ExecuteUbergraph_Ability_SparkyBoom_v2
	 */
	struct UAbility_SparkyBoom_v2_C_ExecuteUbergraph_Ability_SparkyBoom_v2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3RH8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
