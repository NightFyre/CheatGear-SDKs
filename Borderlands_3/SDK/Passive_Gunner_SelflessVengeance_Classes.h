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
	 * BlueprintGeneratedClass Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C
	 * Size -> 0x0068 (FullSize[0x0218] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_SelflessVengeance_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_SelflessVengeance; // 0x01B8(0x0028)
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Passive_Gunner_SelflessVengeance; // 0x01E0(0x0028)
		TArray<class AOakCharacter_Player*>                        ShotModifiedAllies;                                      // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void ApplyBonusDamageToTarget(float Damage, class UDamageSource* DmgSource, class AActor* Target);
		void OnActivated();
		void ReloadEnded_SelflessVengeance(class AWeapon* EventWeapon, bool bCompleted);
		void OnAbilityTimerStarted(const struct FOakAbilityTimerSpec& Spec);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Passive_Gunner_SelflessVengeance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
