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
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearEnded
	 */
	struct UAbility_AnointParent_Gunner_C_AnointAutoBearEnded_Params
	{
	public:
		bool                                                       HasValidTarget;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IK66[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ChargeTarget;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearStarted
	 */
	struct UAbility_AnointParent_Gunner_C_AnointAutoBearStarted_Params
	{	};

	/**
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronBearEnded
	 */
	struct UAbility_AnointParent_Gunner_C_AnointIronBearEnded_Params
	{	};

	/**
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronIronBearStarted
	 */
	struct UAbility_AnointParent_Gunner_C_AnointIronIronBearStarted_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.OnActivated
	 */
	struct UAbility_AnointParent_Gunner_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.BindGunnerEvents
	 */
	struct UAbility_AnointParent_Gunner_C_BindGunnerEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.ExecuteUbergraph_Ability_AnointParent_Gunner
	 */
	struct UAbility_AnointParent_Gunner_C_ExecuteUbergraph_Ability_AnointParent_Gunner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_94EX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
