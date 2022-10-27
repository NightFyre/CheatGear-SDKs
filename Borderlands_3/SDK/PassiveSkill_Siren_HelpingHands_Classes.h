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
	 * BlueprintGeneratedClass PassiveSkill_Siren_HelpingHands.PassiveSkill_Siren_HelpingHands_C
	 * Size -> 0x0030 (FullSize[0x0218] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_HelpingHands_C : public UOakPassiveAbility_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_HelpingHands; // 0x01F0(0x0028)

	public:
		EGbxAbilityState CalculateAbilityState();
		void IsActionSkillActionActive(bool* res);
		void OnActivated();
		void Helping_Hands_on_Take_Any_Damage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnActionAbilityActivated(class UOakActionAbility* Ability);
		void OnResumed();
		void ExecuteUbergraph_PassiveSkill_Siren_HelpingHands(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
