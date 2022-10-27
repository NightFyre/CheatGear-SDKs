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
	 * BlueprintGeneratedClass Ability_Artifact_LastStand.Ability_Artifact_LastStand_C
	 * Size -> 0x006A (FullSize[0x0184] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_LastStand_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_Q7JB[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		float                                                      StatusDuration;                                          // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldMaxValue;                                          // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldCurrentValue;                                      // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthMaxValue;                                          // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthCurrentValue;                                      // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CooldownTime;                                            // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ArtifactAbilityAvailable;                                // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VT52[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_LastStand; // 0x0148(0x0028)
		class FName                                                ScreenParticleTag;                                       // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ShieldEmitter;                                           // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CooldownTime_Augmented;                                  // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LastStandArtifactAbility();
		void SetVariables();
		void OnActivated();
		void TakeDamage_LastStand(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnAbilityTimerStarted(const struct FOakAbilityTimerSpec& Spec);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Ability_Artifact_LastStand(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
