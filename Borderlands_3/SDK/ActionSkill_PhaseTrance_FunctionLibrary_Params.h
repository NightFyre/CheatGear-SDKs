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
	 * Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CanPerformPassiveGhostArmAction
	 */
	struct UActionSkill_PhaseTrance_FunctionLibrary_C_CanPerformPassiveGhostArmAction_Params
	{
	public:
		class AOakCharacter_Player*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRes;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XAZV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.TriggerPhaseTrancePassives
	 */
	struct UActionSkill_PhaseTrance_FunctionLibrary_C_TriggerPhaseTrancePassives_Params
	{
	public:
		class AOakCharacter_Player*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.IsImmuneToPhaseLock
	 */
	struct UActionSkill_PhaseTrance_FunctionLibrary_C_IsImmuneToPhaseLock_Params
	{
	public:
		class AActor*                                              GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRes;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q6HQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CalculatePhaseTranceDamage
	 */
	struct UActionSkill_PhaseTrance_FunctionLibrary_C_CalculatePhaseTranceDamage_Params
	{
	public:
		class AOakCharacter_Player*                                ContextSource;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPhaseTranceActivationComboData                     ComboData;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      res;                                                     // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.GetSirenStatusEffectInfo
	 */
	struct UActionSkill_PhaseTrance_FunctionLibrary_C_GetSirenStatusEffectInfo_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCauseDamageStatusEffectOverrides                   StatusEffectOverride;                                    // 0x0008(0x001C)  (Parm, OutParm, NoDestructor)
		unsigned char                                              UnknownData_35DG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
