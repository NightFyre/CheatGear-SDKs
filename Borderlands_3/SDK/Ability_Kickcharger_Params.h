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
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.OnDeactivated
	 */
	struct UAbility_Kickcharger_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.WeaponFired
	 */
	struct UAbility_Kickcharger_C_WeaponFired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.StopSliding
	 */
	struct UAbility_Kickcharger_C_StopSliding_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.InstantChargeExpired
	 */
	struct UAbility_Kickcharger_C_InstantChargeExpired_Params
	{	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.FullyChargedAudio
	 */
	struct UAbility_Kickcharger_C_FullyChargedAudio_Params
	{	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.OnActivated
	 */
	struct UAbility_Kickcharger_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.ChargeTicker
	 */
	struct UAbility_Kickcharger_C_ChargeTicker_Params
	{	};

	/**
	 * Function Ability_Kickcharger.Ability_Kickcharger_C.ExecuteUbergraph_Ability_Kickcharger
	 */
	struct UAbility_Kickcharger_C_ExecuteUbergraph_Ability_Kickcharger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1XG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
