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
	 * BlueprintGeneratedClass PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C
	 * Size -> 0x0030 (FullSize[0x01E0] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_Samsara_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_PowerSiphon; // 0x01B8(0x0028)

	public:
		void OnActivated();
		void SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_PassiveSkill_Siren_Samsara(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
