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
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.GrenadeCooldown
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_GrenadeCooldown_Params
	{	};

	/**
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronIronBearStarted
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_AnointIronIronBearStarted_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointIronBearEnded
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_AnointIronBearEnded_Params
	{	};

	/**
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.AnointRemoveEffect
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnTookDamage
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_OnTookDamage_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GIY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.OnActivated
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C.ExecuteUbergraph_Ability_Gunner_IBGrenadeChance
	 */
	struct UAbility_Gunner_IBGrenadeChance_C_ExecuteUbergraph_Ability_Gunner_IBGrenadeChance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
