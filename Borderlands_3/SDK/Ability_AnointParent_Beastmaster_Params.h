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
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointOnActionSkillCoolingDown
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointOnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndHulkOut
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointEndHulkOut_Params
	{	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndGammaBurst
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointEndGammaBurst_Params
	{	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointEndFadeAway
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointEndFadeAway_Params
	{	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedBeastmasterSkill
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointUsedBeastmasterSkill_Params
	{
	public:
		Enum_BeastmasterActionSkill                                ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointUsedAttackCommand
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointUsedAttackCommand_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          PetEvolution;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.OnActivated
	 */
	struct UAbility_AnointParent_Beastmaster_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.AnointBeastmasterFindLocation
	 */
	struct UAbility_AnointParent_Beastmaster_C_AnointBeastmasterFindLocation_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.BindBeastmasterEvents
	 */
	struct UAbility_AnointParent_Beastmaster_C_BindBeastmasterEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C.ExecuteUbergraph_Ability_AnointParent_Beastmaster
	 */
	struct UAbility_AnointParent_Beastmaster_C_ExecuteUbergraph_Ability_AnointParent_Beastmaster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FN2K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
