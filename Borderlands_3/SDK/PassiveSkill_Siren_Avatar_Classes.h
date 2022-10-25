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
	 * BlueprintGeneratedClass PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C
	 * Size -> 0x0058 (FullSize[0x0208] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Siren_Avatar_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Avatar; // 0x01B8(0x0028)
		struct FOakAbilityResourceController_SirenRushStack        RsrcCntrlr_OakAbilityResourceController_SirenRushStack_PassiveSkill_Siren_Avatar; // 0x01E0(0x0028)

	public:
		void OnActivated();
		void Avatar_OnActionSkillReady(class UOakActionAbility* ActionAbility);
		void Avatar_OnActionSkillActivating(class UOakActionAbility* ActionAbility);
		void PhaseTranceActivated(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction PhaseTranceAction, bool Success);
		void Avatar_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_PassiveSkill_Siren_Avatar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
