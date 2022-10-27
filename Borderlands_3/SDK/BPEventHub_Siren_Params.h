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
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_OnCausedDamage__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_OnCausedDamage__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N763[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageSource;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0020(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemyEnded__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemyEnded__DelegateSignature_Params
	{
	public:
		bool                                                       Killed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemy__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemy__DelegateSignature_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhaseTranceElementalType                                  Element;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamEnded__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_PhaseSlamEnded__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamStarted__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_PhaseSlamStarted__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.PhaseTranceOnSuccessfullyActivated__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_PhaseTranceOnSuccessfullyActivated__DelegateSignature_Params
	{
	public:
		EPhaseTranceAttackFamilyType                               FamilyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhasetranceAttackAction                                   PhaseTranceAction;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_RushEvent__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_RushEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_ActivateRushBonus__DelegateSignature
	 */
	struct UBPEventHub_Siren_C_SkillEvent_ActivateRushBonus__DelegateSignature_Params
	{
	public:
		int32_t                                                    RushStacks;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
