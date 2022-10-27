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
	 * Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnActivated
	 */
	struct UOakAbility_Gunner_Unique05_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.OnWeaponStartReloaded_UniqueClassMod05
	 */
	struct UOakAbility_Gunner_Unique05_C_OnWeaponStartReloaded_UniqueClassMod05_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.DontNeedNoAbilityTimers
	 */
	struct UOakAbility_Gunner_Unique05_C_DontNeedNoAbilityTimers_Params
	{	};

	/**
	 * Function OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C.ExecuteUbergraph_OakAbility_Gunner_Unique05
	 */
	struct UOakAbility_Gunner_Unique05_C_ExecuteUbergraph_OakAbility_Gunner_Unique05_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H350[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
