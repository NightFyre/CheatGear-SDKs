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
	 * BlueprintGeneratedClass Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C
	 * Size -> 0x0060 (FullSize[0x0210] - InheritedSize[0x01B0])
	 */
	class UAbility_PetShared_GeneticLink_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		class AActor*                                              PetSpiderant;                                            // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_PetSpiderant_GeneticLink; // 0x01C0(0x0028)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_PetShared_GeneticLink; // 0x01E8(0x0028)

	public:
		void NewFunction_1(float DamageDealt);
		void OnActivated();
		void OnTakeDamage_GeneticLink(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void EnablePetBonusDamage();
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Ability_PetShared_GeneticLink(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
