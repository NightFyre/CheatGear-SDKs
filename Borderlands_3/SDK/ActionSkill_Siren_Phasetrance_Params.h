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
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetDLCSkillOrb
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetDLCSkillOrb_Params
	{
	public:
		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*           res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RegisterDLCSkillOrb
	 */
	struct UActionSkill_Siren_Phasetrance_C_RegisterDLCSkillOrb_Params
	{
	public:
		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*           Orb;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Quicken
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_Quicken_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       res;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TRD6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CalculateAbilityState
	 */
	struct UActionSkill_Siren_Phasetrance_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetSingularityRadius
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetSingularityRadius_Params
	{
	public:
		struct FPhaseTranceActivationComboData                     ComboData;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      res;                                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetEssenceDurationAdjust
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetEssenceDurationAdjust_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5XFV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.TryFindNewEssenceGraspTarget
	 */
	struct UActionSkill_Siren_Phasetrance_C_TryFindNewEssenceGraspTarget_Params
	{
	public:
		class AActor*                                              LastGraspTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnWebGraspMissed
	 */
	struct UActionSkill_Siren_Phasetrance_C_OnWebGraspMissed_Params
	{	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnKilledGraspedEnemy
	 */
	struct UActionSkill_Siren_Phasetrance_C_OnKilledGraspedEnemy_Params
	{
	public:
		class AActor*                                              Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.AdjustLeechDamage
	 */
	struct UActionSkill_Siren_Phasetrance_C_AdjustLeechDamage_Params
	{
	public:
		float                                                      StartingDamage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FinalDamage;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindLeechTarget
	 */
	struct UActionSkill_Siren_Phasetrance_C_FindLeechTarget_Params
	{
	public:
		class AActor*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetLeechTarget
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetLeechTarget_Params
	{
	public:
		class AActor*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_SoulSap
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_SoulSap_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bRes;                                                    // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJ00[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Allure
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_Allure_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bRes;                                                    // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RDX0[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_StillnessOfMind
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_StillnessOfMind_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bRes;                                                    // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V7AQ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_BrightStar
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_BrightStar_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bRes;                                                    // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RH4B[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Glamour
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_Glamour_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bRes;                                                    // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YHIX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect
	 */
	struct UActionSkill_Siren_Phasetrance_C_DoEffect_Params
	{
	public:
		struct FOakPhaseTranceEffectSpec                           Spec;                                                    // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CreateAttackActionRegisters
	 */
	struct UActionSkill_Siren_Phasetrance_C_CreateAttackActionRegisters_Params
	{
	public:
		TArray<struct FGbxActionRegister>                          res;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ShouldAbortActivation
	 */
	struct UActionSkill_Siren_Phasetrance_C_ShouldAbortActivation_Params
	{
	public:
		unsigned char                                              OutAbortCode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z8J8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetActionSkillWidgetKeyframe
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetActionSkillWidgetKeyframe_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ResetCounters
	 */
	struct UActionSkill_Siren_Phasetrance_C_ResetCounters_Params
	{	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetMaxCooldownModifier
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetMaxCooldownModifier_Params
	{
	public:
		EGbxAttributeModifierType                                  ModifierType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KCJ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBQ8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindSpreadTarget
	 */
	struct UActionSkill_Siren_Phasetrance_C_FindSpreadTarget_Params
	{
	public:
		class AActor*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.StartAttack
	 */
	struct UActionSkill_Siren_Phasetrance_C_StartAttack_Params
	{	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Calculate Leech Heal Amount
	 */
	struct UActionSkill_Siren_Phasetrance_C_Calculate_Leech_Heal_Amount_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Don_t_Adjust;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ABCW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W2OT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetCooldownRestartPercent
	 */
	struct UActionSkill_Siren_Phasetrance_C_GetCooldownRestartPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnStartActionAbility
	 */
	struct UActionSkill_Siren_Phasetrance_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnActivated
	 */
	struct UActionSkill_Siren_Phasetrance_C_OnActivated_Params
	{	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RecallOrb
	 */
	struct UActionSkill_Siren_Phasetrance_C_RecallOrb_Params
	{	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ExecuteUbergraph_ActionSkill_Siren_Phasetrance
	 */
	struct UActionSkill_Siren_Phasetrance_C_ExecuteUbergraph_ActionSkill_Siren_Phasetrance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M9W7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Phasetrance_RecallOrb__DelegateSignature
	 */
	struct UActionSkill_Siren_Phasetrance_C_Phasetrance_RecallOrb__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
