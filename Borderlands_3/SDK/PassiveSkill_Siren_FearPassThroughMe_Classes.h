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
	 * BlueprintGeneratedClass PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C
	 * Size -> 0x0090 (FullSize[0x0278] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_FearPassThroughMe_C : public UPassiveSkill_Siren_WIthNova_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		bool                                                       Readied;                                                 // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_65KU[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_FearPassThroughMe; // 0x01F8(0x0028)
		struct FDataTableValueHandle                               DamagePerRank;                                           // 0x0220(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FVector                                             NovaLocation;                                            // 0x0238(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AffectedByElement;                                       // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FJKX[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EOakElementalType>                                  AffectedElements;                                        // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x0260(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void GetNovaDamage(float* res);
		void GetPhaseTranceElementalInfo(class UClass** OutClass, EPhaseTranceElementalType* OutType);
		void OnActivated();
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void FearPassThroughMe_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
		void FearPassThroughMe_OnCuasedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
		void FearPassThroughMe_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser);
		void DoFearPassThroughMeNova();
		void ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
