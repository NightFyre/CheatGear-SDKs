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
	 * Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnActivated
	 */
	struct UAbility_Beast_GravitySnareActiveDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnDeactivated
	 */
	struct UAbility_Beast_GravitySnareActiveDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareStarted
	 */
	struct UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareStarted_Params
	{
	public:
		Enum_BeastmasterActionSkill                                ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareEnded
	 */
	struct UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareEnded_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ChangedSkill
	 */
	struct UAbility_Beast_GravitySnareActiveDamage_C_ChangedSkill_Params
	{
	public:
		class UOakPlayerAbilitySlotData*                           SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage
	 */
	struct UAbility_Beast_GravitySnareActiveDamage_C_ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABP0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
