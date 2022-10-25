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
	 * Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointTriggerEffect
	 */
	struct UAbility_Siren_Grasp_ConstantNova_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.TriggerNova
	 */
	struct UAbility_Siren_Grasp_ConstantNova_C_TriggerNova_Params
	{	};

	/**
	 * Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointRemoveEffect
	 */
	struct UAbility_Siren_Grasp_ConstantNova_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.StartTriggeringNovas
	 */
	struct UAbility_Siren_Grasp_ConstantNova_C_StartTriggeringNovas_Params
	{	};

	/**
	 * Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointGraspEnded
	 */
	struct UAbility_Siren_Grasp_ConstantNova_C_AnointGraspEnded_Params
	{
	public:
		bool                                                       Killed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova
	 */
	struct UAbility_Siren_Grasp_ConstantNova_C_ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZARE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
