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
	 * BlueprintGeneratedClass Ability_Gunner_IBGrenadeChance.Ability_Gunner_IBGrenadeChance_C
	 * Size -> 0x00BD (FullSize[0x02C8] - InheritedSize[0x020B])
	 */
	class UAbility_Gunner_IBGrenadeChance_C : public UAbility_AnointParent_Gunner_C
	{
	public:
		unsigned char                                              UnknownData_OQF2[0x5];                                   // 0x020B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0218(0x0028)
		bool                                                       OnCooldown;                                              // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OV51[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        GrenadeChance;                                           // 0x0248(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class AOakCharacter*                                       GrenadeSource;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter_Player*                                OakCharacterOwner;                                       // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeInitializationData                        CooldownTime;                                            // 0x0290(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void GrenadeCooldown();
		void AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear);
		void AnointIronBearEnded();
		void AnointRemoveEffect();
		void OnTookDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnActivated();
		void ExecuteUbergraph_Ability_Gunner_IBGrenadeChance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
