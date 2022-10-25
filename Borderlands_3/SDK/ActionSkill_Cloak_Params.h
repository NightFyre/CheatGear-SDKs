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
	 * Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod4Effect
	 */
	struct UActionSkill_Cloak_C_TryMod4Effect_Params
	{	};

	/**
	 * Function ActionSkill_Cloak.ActionSkill_Cloak_C.TryMod1Effect
	 */
	struct UActionSkill_Cloak_C_TryMod1Effect_Params
	{	};

	/**
	 * Function ActionSkill_Cloak.ActionSkill_Cloak_C.GetMaxDurationModifier
	 */
	struct UActionSkill_Cloak_C_GetMaxDurationModifier_Params
	{
	public:
		EGbxAttributeModifierType                                  ModifierType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XXDG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DDV6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStartActionAbility
	 */
	struct UActionSkill_Cloak_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Cloak.ActionSkill_Cloak_C.OnStopActionAbility
	 */
	struct UActionSkill_Cloak_C_OnStopActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Cloak.ActionSkill_Cloak_C.ExecuteUbergraph_ActionSkill_Cloak
	 */
	struct UActionSkill_Cloak_C_ExecuteUbergraph_ActionSkill_Cloak_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y22A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
