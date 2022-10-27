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
	 * BlueprintGeneratedClass PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C
	 * Size -> 0x0150 (FullSize[0x0300] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_Wildfire_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               SpreadChance;                                            // 0x01B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               SpreadChancePerStack;                                    // 0x01D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FEnvQueryParams                                     FindSpreadTarget;                                        // 0x01E8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AActor*                                              Target;                                                  // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PreviousTarget;                                          // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      TargetList;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UClass*                                              BeamData;                                                // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StatusEffectDuration;                                    // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StatusEffectDamagePerSecond;                             // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DamageType;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Wildfire; // 0x02D8(0x0028)

	public:
		void OnActivated();
		void WildfireOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
		void WildfireOnCausedMaxResource(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
		void OpenWildfireGates();
		void CloseWildfireGates();
		void ExecuteUbergraph_PassiveSkill_Siren_Wildfire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
