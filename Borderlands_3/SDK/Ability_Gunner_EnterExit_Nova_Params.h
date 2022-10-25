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
	 * Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointTriggerEffect
	 */
	struct UAbility_Gunner_EnterExit_Nova_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3X6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronIronBearStarted
	 */
	struct UAbility_Gunner_EnterExit_Nova_C_AnointIronIronBearStarted_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronBearEnded
	 */
	struct UAbility_Gunner_EnterExit_Nova_C_AnointIronBearEnded_Params
	{	};

	/**
	 * Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.ExecuteUbergraph_Ability_Gunner_EnterExit_Nova
	 */
	struct UAbility_Gunner_EnterExit_Nova_C_ExecuteUbergraph_Ability_Gunner_EnterExit_Nova_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LUD0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
