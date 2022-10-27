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
	 * Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.OnActivated
	 */
	struct UOakAbility_Siren_ClassMod_Raid1_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.SirenCMRaid1_OnActionSkillActivated
	 */
	struct UOakAbility_Siren_ClassMod_Raid1_C_SirenCMRaid1_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1
	 */
	struct UOakAbility_Siren_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1N5L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
