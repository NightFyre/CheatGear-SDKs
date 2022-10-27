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
	 * Function Ability_BlindBandit.Ability_BlindBandit_C.OnActivated
	 */
	struct UAbility_BlindBandit_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_BlindBandit.Ability_BlindBandit_C.OnCausedDeath_Event
	 */
	struct UAbility_BlindBandit_C_OnCausedDeath_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_BlindBandit.Ability_BlindBandit_C.OnDeactivated
	 */
	struct UAbility_BlindBandit_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_BlindBandit.Ability_BlindBandit_C.ExecuteUbergraph_Ability_BlindBandit
	 */
	struct UAbility_BlindBandit_C_ExecuteUbergraph_Ability_BlindBandit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XKQS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
