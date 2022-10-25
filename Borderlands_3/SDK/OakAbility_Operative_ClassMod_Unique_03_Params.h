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
	 * Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnSeeingRedActivated
	 */
	struct UOakAbility_Operative_ClassMod_Unique_03_C_OnSeeingRedActivated_Params
	{	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActivated
	 */
	struct UOakAbility_Operative_ClassMod_Unique_03_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnCausedDeath
	 */
	struct UOakAbility_Operative_ClassMod_Unique_03_C_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OperativeTriggerKillSkillEffect
	 */
	struct UOakAbility_Operative_ClassMod_Unique_03_C_OperativeTriggerKillSkillEffect_Params
	{	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActionSkillActivated
	 */
	struct UOakAbility_Operative_ClassMod_Unique_03_C_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03
	 */
	struct UOakAbility_Operative_ClassMod_Unique_03_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_54ZS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
