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
	 * Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointTriggerEffect
	 */
	struct UAbility_Gunner_NextMag_Parent_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.OnActivated
	 */
	struct UAbility_Gunner_NextMag_Parent_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ReloadedWeapon
	 */
	struct UAbility_Gunner_NextMag_Parent_C_ReloadedWeapon_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointAutoBearStarted
	 */
	struct UAbility_Gunner_NextMag_Parent_C_AnointAutoBearStarted_Params
	{	};

	/**
	 * Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ExecuteUbergraph_Ability_Gunner_NextMag_Parent
	 */
	struct UAbility_Gunner_NextMag_Parent_C_ExecuteUbergraph_Ability_Gunner_NextMag_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
