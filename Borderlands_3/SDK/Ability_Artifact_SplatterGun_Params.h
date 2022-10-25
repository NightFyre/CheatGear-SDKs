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
	 * Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.Ammo Return
	 */
	struct UAbility_Artifact_SplatterGun_C_Ammo_Return_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.OnActivated
	 */
	struct UAbility_Artifact_SplatterGun_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.StartSlide
	 */
	struct UAbility_Artifact_SplatterGun_C_StartSlide_Params
	{	};

	/**
	 * Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.EndSlide
	 */
	struct UAbility_Artifact_SplatterGun_C_EndSlide_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.ExecuteUbergraph_Ability_Artifact_SplatterGun
	 */
	struct UAbility_Artifact_SplatterGun_C_ExecuteUbergraph_Ability_Artifact_SplatterGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KIAP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
