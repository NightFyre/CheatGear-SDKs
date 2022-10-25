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
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnActivated
	 */
	struct UAbility_Hydrafrost_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnDeactivated
	 */
	struct UAbility_Hydrafrost_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnUnregistered
	 */
	struct UAbility_Hydrafrost_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnPaused
	 */
	struct UAbility_Hydrafrost_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnCauseDeath_CE
	 */
	struct UAbility_Hydrafrost_C_OnCauseDeath_CE_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.AmpBuff_CE
	 */
	struct UAbility_Hydrafrost_C_AmpBuff_CE_Params
	{	};

	/**
	 * Function Ability_Hydrafrost.Ability_Hydrafrost_C.ExecuteUbergraph_Ability_Hydrafrost
	 */
	struct UAbility_Hydrafrost_C_ExecuteUbergraph_Ability_Hydrafrost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FEY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
