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
	 * Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnActivated
	 */
	struct UPassiveSkill_Gunner_FireInSkagDen_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnEnteredIronBear_FireSkagDen
	 */
	struct UPassiveSkill_Gunner_FireInSkagDen_C_OnEnteredIronBear_FireSkagDen_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen
	 */
	struct UPassiveSkill_Gunner_FireInSkagDen_C_ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1KGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
