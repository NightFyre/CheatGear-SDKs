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
	 * BlueprintGeneratedClass PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C
	 * Size -> 0x0158 (FullSize[0x0308] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_ShieldOfThought_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               Ricochet_Chance;                                         // 0x01B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               Action_Skill_Ricochet_Chance;                            // 0x01D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FEnvQueryParams                                     FindRicochetTarget;                                      // 0x01E8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class AActor*>                                      Targets;                                                 // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FDataTableValueHandle                               Ricochet_Damage;                                         // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               Action_Skill_Ricochet_damage;                            // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Deflection; // 0x02E0(0x0028)

	public:
		EGbxAbilityState CalculateAbilityState();
		void IsAffectedByActionSkill(class AActor* Actor, bool* res);
		void OnActivated();
		void SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
