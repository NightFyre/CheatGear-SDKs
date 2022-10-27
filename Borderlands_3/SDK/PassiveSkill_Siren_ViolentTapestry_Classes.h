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
	 * BlueprintGeneratedClass PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C
	 * Size -> 0x0060 (FullSize[0x0210] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_ViolentTapestry_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_ViolentTapestry; // 0x01B8(0x0028)
		struct FOakAbilityResourceController_SirenRushStack        RsrcCntrlr_OakAbilityResourceController_SirenRushStack_PassiveSkill_Siren_ViolentTapestry; // 0x01E0(0x0028)
		class UBPEventHub_Siren_C*                                 SirenEventHub;                                           // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EGbxAbilityState CalculateAbilityState();
		void OnActivated();
		void ViolentTapestry_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
		void ViolentTapestry_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
		void ViolentTapestryTriggerRushStacks(int32_t RushStacks);
		void ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
