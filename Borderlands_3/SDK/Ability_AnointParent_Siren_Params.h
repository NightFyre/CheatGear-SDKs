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
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointFlareStarted
	 */
	struct UAbility_AnointParent_Siren_C_AnointFlareStarted_Params
	{
	public:
		EPhaseTranceAttackFamilyType                               FamilyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhasetranceAttackAction                                   ActionAction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointCastStarted
	 */
	struct UAbility_AnointParent_Siren_C_AnointCastStarted_Params
	{
	public:
		EPhaseTranceAttackFamilyType                               FamilyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhasetranceAttackAction                                   AttackAction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspEnded
	 */
	struct UAbility_AnointParent_Siren_C_AnointGraspEnded_Params
	{
	public:
		bool                                                       Killed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspStarted
	 */
	struct UAbility_AnointParent_Siren_C_AnointGraspStarted_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhaseTranceElementalType                                  Element;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamEnded
	 */
	struct UAbility_AnointParent_Siren_C_AnointSlamEnded_Params
	{	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamStarted
	 */
	struct UAbility_AnointParent_Siren_C_AnointSlamStarted_Params
	{	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.OnActivated
	 */
	struct UAbility_AnointParent_Siren_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.BindSirenEvents
	 */
	struct UAbility_AnointParent_Siren_C_BindSirenEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.ExecuteUbergraph_Ability_AnointParent_Siren
	 */
	struct UAbility_AnointParent_Siren_C_ExecuteUbergraph_Ability_AnointParent_Siren_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKY5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
