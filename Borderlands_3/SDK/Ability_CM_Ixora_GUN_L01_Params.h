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
	 * Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.CalculateAbilityState
	 */
	struct UAbility_CM_Ixora_GUN_L01_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.OnActivated
	 */
	struct UAbility_CM_Ixora_GUN_L01_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.GunnerIxoraClassMod_OnCausedElementalEffect
	 */
	struct UAbility_CM_Ixora_GUN_L01_C_GunnerIxoraClassMod_OnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_GUN_L01
	 */
	struct UAbility_CM_Ixora_GUN_L01_C_ExecuteUbergraph_Ability_CM_Ixora_GUN_L01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
