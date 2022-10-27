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
	 * BlueprintGeneratedClass PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C
	 * Size -> 0x0068 (FullSize[0x0250] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_GuardianAngel_C : public UPassiveSkill_Siren_WIthNova_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		bool                                                       GuardianAngelReadied;                                    // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UFJP[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_GuardianAngel; // 0x01F8(0x0028)
		struct FDataTableValueHandle                               HealthRestore;                                           // 0x0220(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x0238(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void GetNovaDamage(float* res);
		void OnDownStateStart();
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ActiveGuardianAngel();
		void GuardianAngel_OnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void OnActivated();
		void ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
