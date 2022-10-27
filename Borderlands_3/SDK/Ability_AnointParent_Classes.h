#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Ability_AnointParent.Ability_AnointParent_C
	 * Size -> 0x00C9 (FullSize[0x01C1] - InheritedSize[0x00F8])
	 */
	class UAbility_AnointParent_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class UOakPlayerAbilityManagerComponent*                   OakPlayerAbilityManager;                                 // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOakPlayerAbilityEventHub*                           PlayerAbilityEventHub;                                   // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent; // 0x0110(0x0028)
		class UStatusEffectData*                                   AnointmentEffect;                                        // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeInitializationData                        AnointmentDuration;                                      // 0x0140(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       AnointBeastmaster;                                       // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointGunner;                                            // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointOperative;                                         // 0x017A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointSiren;                                             // 0x017B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointBeastmasterHulkOutSuccessful;                      // 0x017C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointOnSkillUse;                                        // 0x017D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointOnSkillEnded;                                      // 0x017E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointOnSkillReadied;                                    // 0x017F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_AnointParent; // 0x0180(0x0028)
		class UConditionalDamageModifier*                          AnointConditionalDamageMod;                              // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnointCDMOakDamageCauser;                                // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowFakeGrasp;                                          // 0x01B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5HVG[0x6];                                   // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        RemoveAnointEffectTimer;                                 // 0x01B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       PhasegrapsSuccess;                                       // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnointRemoveCDM();
		void AnointRegisterCDM(bool Register, bool* res);
		void AnointRemoveEffect();
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void AnointOnActionSkillReadied(class UOakActionAbility* ActionAbility, bool* res);
		void AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res);
		void AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res);
		void AnointParent_OnPlayerAbilitySlotChanged(class UOakPlayerAbilitySlotData* SlotData);
		void AnointParent_SetBinds();
		void AnointParent_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
		void AnointParent_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void AnointParent_OnActionSkillReadied(class UOakActionAbility* ActionAbility);
		void AnointParent_BeastmasterActionSkillActivated(Enum_BeastmasterActionSkill ActionSkill);
		void AnointParent_OperativeActionSkillActivated(EOperativeGadgets ActionSkill);
		void AnointParent_SirenPhaseGraspedEnemy(class AActor* Enemy, EPhaseTranceElementalType Element);
		void AnointParent_PhaseGraspEnded(bool Killed);
		void AnointParent_HulkedOutStarted(bool res);
		void AnointParent_HulkedOutEnded();
		void OnDeactivated();
		void OnActivated();
		void BindBeastmasterEvents();
		void BindOperativeEvents();
		void BindSirenEvents();
		void BindGunnerEvents();
		void ExecuteUbergraph_Ability_AnointParent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
