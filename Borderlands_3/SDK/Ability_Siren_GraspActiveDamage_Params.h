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
	 * Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnActivated
	 */
	struct UAbility_Siren_GraspActiveDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnDeactivated
	 */
	struct UAbility_Siren_GraspActiveDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ChangedSkill
	 */
	struct UAbility_Siren_GraspActiveDamage_C_ChangedSkill_Params
	{
	public:
		class UOakPlayerAbilitySlotData*                           SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspStarted
	 */
	struct UAbility_Siren_GraspActiveDamage_C_PhasegraspStarted_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhaseTranceElementalType                                  Element;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspEnded
	 */
	struct UAbility_Siren_GraspActiveDamage_C_PhasegraspEnded_Params
	{
	public:
		bool                                                       Killed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ExecuteUbergraph_Ability_Siren_GraspActiveDamage
	 */
	struct UAbility_Siren_GraspActiveDamage_C_ExecuteUbergraph_Ability_Siren_GraspActiveDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
