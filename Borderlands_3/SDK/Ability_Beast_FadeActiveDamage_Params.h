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
	 * Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnActivated
	 */
	struct UAbility_Beast_FadeActiveDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnDeactivated
	 */
	struct UAbility_Beast_FadeActiveDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayStarted
	 */
	struct UAbility_Beast_FadeActiveDamage_C_FadeAwayStarted_Params
	{
	public:
		Enum_BeastmasterActionSkill                                ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayEnded
	 */
	struct UAbility_Beast_FadeActiveDamage_C_FadeAwayEnded_Params
	{	};

	/**
	 * Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ChangedSkill
	 */
	struct UAbility_Beast_FadeActiveDamage_C_ChangedSkill_Params
	{
	public:
		class UOakPlayerAbilitySlotData*                           SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ExecuteUbergraph_Ability_Beast_FadeActiveDamage
	 */
	struct UAbility_Beast_FadeActiveDamage_C_ExecuteUbergraph_Ability_Beast_FadeActiveDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E7I7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
