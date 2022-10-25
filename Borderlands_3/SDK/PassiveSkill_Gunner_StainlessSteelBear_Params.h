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
	 * Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.OnActivated
	 */
	struct UPassiveSkill_Gunner_StainlessSteelBear_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_AutoBearStarted
	 */
	struct UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_AutoBearStarted_Params
	{	};

	/**
	 * Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_IronBearEnteredAndReady
	 */
	struct UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_IronBearEnteredAndReady_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear
	 */
	struct UPassiveSkill_Gunner_StainlessSteelBear_C_ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ELJF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
