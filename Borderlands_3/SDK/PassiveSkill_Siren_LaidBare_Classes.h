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
	 * BlueprintGeneratedClass PassiveSkill_Siren_LaidBare.PassiveSkill_Siren_LaidBare_C
	 * Size -> 0x0048 (FullSize[0x01F8] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_LaidBare_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               ExposureDuration;                                        // 0x01B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Exposure; // 0x01D0(0x0028)

	public:
		void OnActivated();
		void SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_PassiveSkill_Siren_LaidBare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
