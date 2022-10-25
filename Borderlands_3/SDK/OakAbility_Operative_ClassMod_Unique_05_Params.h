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
	 * Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnActivated
	 */
	struct UOakAbility_Operative_ClassMod_Unique_05_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnCausedMaxResourceEffect
	 */
	struct UOakAbility_Operative_ClassMod_Unique_05_C_OnCausedMaxResourceEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05
	 */
	struct UOakAbility_Operative_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
