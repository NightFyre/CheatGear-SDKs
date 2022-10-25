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
	 * Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnActivated
	 */
	struct UAbility_PrivateInvestigator_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.CausedDamage
	 */
	struct UAbility_PrivateInvestigator_C_CausedDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3XNF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.ModeSwitched
	 */
	struct UAbility_PrivateInvestigator_C_ModeSwitched_Params
	{	};

	/**
	 * Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnUnregistered
	 */
	struct UAbility_PrivateInvestigator_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.OnDeactivated
	 */
	struct UAbility_PrivateInvestigator_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_PrivateInvestigator.Ability_PrivateInvestigator_C.ExecuteUbergraph_Ability_PrivateInvestigator
	 */
	struct UAbility_PrivateInvestigator_C_ExecuteUbergraph_Ability_PrivateInvestigator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
