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
	 * Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnRegistered
	 */
	struct UAbility_SpiritOfMaya_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnHitFriendly
	 */
	struct UAbility_SpiritOfMaya_C_OnHitFriendly_Params
	{
	public:
		struct FHitFriendlyEventDetails                            Details;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.ExecuteUbergraph_Ability_SpiritOfMaya
	 */
	struct UAbility_SpiritOfMaya_C_ExecuteUbergraph_Ability_SpiritOfMaya_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9E4O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
