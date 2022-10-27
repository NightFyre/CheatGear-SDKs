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
	 * Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.OnActivated
	 */
	struct UAbility_CM_Ixora2_GUN_L01_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_EnterIronBear
	 */
	struct UAbility_CM_Ixora2_GUN_L01_C_CMIxora2_EnterIronBear_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_ExitIronBear
	 */
	struct UAbility_CM_Ixora2_GUN_L01_C_CMIxora2_ExitIronBear_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01
	 */
	struct UAbility_CM_Ixora2_GUN_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_28SU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
