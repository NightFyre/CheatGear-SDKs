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
	 * Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnActivated
	 */
	struct UAbility_Gunner_IronCubActiveDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnDeactivated
	 */
	struct UAbility_Gunner_IronCubActiveDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ChangedSkill
	 */
	struct UAbility_Gunner_IronCubActiveDamage_C_ChangedSkill_Params
	{
	public:
		class UOakPlayerAbilitySlotData*                           SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubStarted
	 */
	struct UAbility_Gunner_IronCubActiveDamage_C_IronCubStarted_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubEnded
	 */
	struct UAbility_Gunner_IronCubActiveDamage_C_IronCubEnded_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage
	 */
	struct UAbility_Gunner_IronCubActiveDamage_C_ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MUM9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
