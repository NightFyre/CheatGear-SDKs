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
	 * BlueprintGeneratedClass OakAbility_Gunner_CM_Raid1.OakAbility_Gunner_CM_Raid1_C
	 * Size -> 0x0040 (FullSize[0x0138] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Gunner_CM_Raid1_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class AOakCharacter_Player*                                PlayerCharacterOwner;                                    // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Gunner_CM_Raid1; // 0x0108(0x0028)
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CMRaid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void CMRaid1_IronBear_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void CMRaid1_IronBear_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnActivated();
		void ExecuteUbergraph_OakAbility_Gunner_CM_Raid1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
