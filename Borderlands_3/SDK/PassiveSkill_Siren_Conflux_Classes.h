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
	 * BlueprintGeneratedClass PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C
	 * Size -> 0x0068 (FullSize[0x0218] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_Conflux_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_DamageConfetti; // 0x01B8(0x0028)
		class AActor*                                              Target;                                                  // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StatusEffectDPS;                                         // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7YAS[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               Chance;                                                  // 0x01F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class UClass*>                                      DamageTypes;                                             // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void RemoveElement(class UObject* StatusEffect, class UClass** DamageType);
		void OnActivated();
		void DamageConfettiOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
		void DamageConfettiOnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
		void ReopenGate();
		void ExecuteUbergraph_PassiveSkill_Siren_Conflux(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
