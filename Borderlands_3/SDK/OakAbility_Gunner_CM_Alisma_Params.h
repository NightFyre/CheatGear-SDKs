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
	 * Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnActivated
	 */
	struct UOakAbility_Gunner_CM_Alisma_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnDeactivated
	 */
	struct UOakAbility_Gunner_CM_Alisma_C_OnDeactivated_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExitedIronBear
	 */
	struct UOakAbility_Gunner_CM_Alisma_C_ExitedIronBear_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.EnteredIronBear
	 */
	struct UOakAbility_Gunner_CM_Alisma_C_EnteredIronBear_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExecuteUbergraph_OakAbility_Gunner_CM_Alisma
	 */
	struct UOakAbility_Gunner_CM_Alisma_C_ExecuteUbergraph_OakAbility_Gunner_CM_Alisma_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0CRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
