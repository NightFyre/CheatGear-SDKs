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
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.IsActionSkillActionActive
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_IsActionSkillActionActive_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.OnActivated
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.Helping Hands on Take Any Damage
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_Helping_Hands_on_Take_Any_Damage_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9THY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.OnActionAbilityActivated
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_OnActionAbilityActivated_Params
	{
	public:
		class UOakActionAbility*                                   Ability;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.OnResumed
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_OnResumed_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C.ExecuteUbergraph_PassiveSkill_Siren_HelpingHands
	 */
	struct UPassiveSkill_Siren_HelpingHands_C_ExecuteUbergraph_PassiveSkill_Siren_HelpingHands_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QD1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
