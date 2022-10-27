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
	 * Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActivated
	 */
	struct UOakAbility_Siren_ClassMod_Unique_05_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnGraspedTarget
	 */
	struct UOakAbility_Siren_ClassMod_Unique_05_C_OnGraspedTarget_Params
	{
	public:
		class AGbxCharacter*                                       GraspedTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActionSkillActivated
	 */
	struct UOakAbility_Siren_ClassMod_Unique_05_C_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnCausedAnyDamage
	 */
	struct UOakAbility_Siren_ClassMod_Unique_05_C_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IAIM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OpenDamageGate
	 */
	struct UOakAbility_Siren_ClassMod_Unique_05_C_OpenDamageGate_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05
	 */
	struct UOakAbility_Siren_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
