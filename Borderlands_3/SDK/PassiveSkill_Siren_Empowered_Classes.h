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
	 * BlueprintGeneratedClass PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C
	 * Size -> 0x0038 (FullSize[0x0220] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_Empowered_C : public UOakPassiveAbility_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Siren_Empowered; // 0x01F0(0x0028)
		class UConditionalDamageTypeModifier*                      CurrentModifier;                                         // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetModifier(class UConditionalDamageTypeModifier** res);
		void OnActivated();
		void OnAttunedElementChanged();
		void RemoveModifier();
		void AddModifier();
		void ExecuteUbergraph_PassiveSkill_Siren_Empowered(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
