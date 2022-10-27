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
	 * BlueprintGeneratedClass PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C
	 * Size -> 0x0060 (FullSize[0x0210] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Gunner_CloudOfLead_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		class AOakCharacter*                                       OwnerCharacter;                                          // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_PassiveSkill_Gunner_CloudOfLead; // 0x01C0(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_CloudOfLead; // 0x01E8(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void OnPaused();
		void CustomEvent_1(class AOakCharacter_IronBear* IronBear);
		void ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
