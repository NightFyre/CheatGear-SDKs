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
	 * Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnActivated
	 */
	struct UAbility_Artifact_Toboggan_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnDeactivated
	 */
	struct UAbility_Artifact_Toboggan_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.WeaponFired
	 */
	struct UAbility_Artifact_Toboggan_C_WeaponFired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.StartedSliding
	 */
	struct UAbility_Artifact_Toboggan_C_StartedSliding_Params
	{	};

	/**
	 * Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.BubbleExpired
	 */
	struct UAbility_Artifact_Toboggan_C_BubbleExpired_Params
	{	};

	/**
	 * Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.ExecuteUbergraph_Ability_Artifact_Toboggan
	 */
	struct UAbility_Artifact_Toboggan_C_ExecuteUbergraph_Ability_Artifact_Toboggan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QG6O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
