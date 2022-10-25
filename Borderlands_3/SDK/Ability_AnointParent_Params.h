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
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveCDM
	 */
	struct UAbility_AnointParent_C_AnointRemoveCDM_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointRegisterCDM
	 */
	struct UAbility_AnointParent_C_AnointRegisterCDM_Params
	{
	public:
		bool                                                       Register;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveEffect
	 */
	struct UAbility_AnointParent_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointTriggerEffect
	 */
	struct UAbility_AnointParent_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillReadied
	 */
	struct UAbility_AnointParent_C_AnointOnActionSkillReadied_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillActivated
	 */
	struct UAbility_AnointParent_C_AnointOnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BIN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillCoolingDown
	 */
	struct UAbility_AnointParent_C_AnointOnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANX4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnPlayerAbilitySlotChanged
	 */
	struct UAbility_AnointParent_C_AnointParent_OnPlayerAbilitySlotChanged_Params
	{
	public:
		class UOakPlayerAbilitySlotData*                           SlotData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SetBinds
	 */
	struct UAbility_AnointParent_C_AnointParent_SetBinds_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillCoolingDown
	 */
	struct UAbility_AnointParent_C_AnointParent_OnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillActivated
	 */
	struct UAbility_AnointParent_C_AnointParent_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillReadied
	 */
	struct UAbility_AnointParent_C_AnointParent_OnActionSkillReadied_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_BeastmasterActionSkillActivated
	 */
	struct UAbility_AnointParent_C_AnointParent_BeastmasterActionSkillActivated_Params
	{
	public:
		Enum_BeastmasterActionSkill                                ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OperativeActionSkillActivated
	 */
	struct UAbility_AnointParent_C_AnointParent_OperativeActionSkillActivated_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SirenPhaseGraspedEnemy
	 */
	struct UAbility_AnointParent_C_AnointParent_SirenPhaseGraspedEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhaseTranceElementalType                                  Element;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_PhaseGraspEnded
	 */
	struct UAbility_AnointParent_C_AnointParent_PhaseGraspEnded_Params
	{
	public:
		bool                                                       Killed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutStarted
	 */
	struct UAbility_AnointParent_C_AnointParent_HulkedOutStarted_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutEnded
	 */
	struct UAbility_AnointParent_C_AnointParent_HulkedOutEnded_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.OnDeactivated
	 */
	struct UAbility_AnointParent_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.OnActivated
	 */
	struct UAbility_AnointParent_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.BindBeastmasterEvents
	 */
	struct UAbility_AnointParent_C_BindBeastmasterEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.BindOperativeEvents
	 */
	struct UAbility_AnointParent_C_BindOperativeEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.BindSirenEvents
	 */
	struct UAbility_AnointParent_C_BindSirenEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.BindGunnerEvents
	 */
	struct UAbility_AnointParent_C_BindGunnerEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent.Ability_AnointParent_C.ExecuteUbergraph_Ability_AnointParent
	 */
	struct UAbility_AnointParent_C_ExecuteUbergraph_Ability_AnointParent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LA86[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
