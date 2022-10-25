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
	 * Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.SirenUnique04_ActivatedRushBonus
	 */
	struct UOakAbility_Siren_ClassMod_Unique_04_C_SirenUnique04_ActivatedRushBonus_Params
	{
	public:
		int32_t                                                    RushStacks;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.TickDownRushStacks
	 */
	struct UOakAbility_Siren_ClassMod_Unique_04_C_TickDownRushStacks_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.OnActivated
	 */
	struct UOakAbility_Siren_ClassMod_Unique_04_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04
	 */
	struct UOakAbility_Siren_ClassMod_Unique_04_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DC1E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
