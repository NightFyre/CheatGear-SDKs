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
	 * Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.Ammo Return
	 */
	struct UAbility_Artifact_OttoIdol_C_Ammo_Return_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.OnActivated
	 */
	struct UAbility_Artifact_OttoIdol_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.KilledEnemy
	 */
	struct UAbility_Artifact_OttoIdol_C_KilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.ExecuteUbergraph_Ability_Artifact_OttoIdol
	 */
	struct UAbility_Artifact_OttoIdol_C_ExecuteUbergraph_Ability_Artifact_OttoIdol_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
