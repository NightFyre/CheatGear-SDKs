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
	 * Function Challenge_Manufacturer_Vladof_ShotgunUnderbarrel.Challenge_Manufacturer_Vladof_ShotgunUnderbarrel_C.CheckForShotgunUnderbarrel
	 */
	struct UChallenge_Manufacturer_Vladof_ShotgunUnderbarrel_C_CheckForShotgunUnderbarrel_Params
	{
	public:
		class AOakWeapon*                                          Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CorrectUnderbarrel;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_Manufacturer_Vladof_ShotgunUnderbarrel.Challenge_Manufacturer_Vladof_ShotgunUnderbarrel_C.CheckKillCondition
	 */
	struct UChallenge_Manufacturer_Vladof_ShotgunUnderbarrel_C_CheckKillCondition_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 DeathDetails;                                            // 0x0008(0x0068)  (BlueprintVisible, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Challenge_Manufacturer_Vladof_ShotgunUnderbarrel.Challenge_Manufacturer_Vladof_ShotgunUnderbarrel_C.OnInitChallengeInstance
	 */
	struct UChallenge_Manufacturer_Vladof_ShotgunUnderbarrel_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
