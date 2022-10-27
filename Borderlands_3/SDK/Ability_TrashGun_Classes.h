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
	 * BlueprintGeneratedClass Ability_TrashGun.Ability_TrashGun_C
	 * Size -> 0x00A8 (FullSize[0x01A0] - InheritedSize[0x00F8])
	 */
	class UAbility_TrashGun_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FStatusEffectSpec                                   FireRateStatus;                                          // 0x0100(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FStatusEffectSpec                                   HeatPerShotStatus;                                       // 0x0138(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_TrashGun; // 0x0170(0x0028)
		class AOakCharacter*                                       OakCharacter;                                            // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void RandomRandomness();
		void KillCDM();
		void ExecuteUbergraph_Ability_TrashGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
