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
	 * BlueprintGeneratedClass Ability_Hydrafrost.Ability_Hydrafrost_C
	 * Size -> 0x0060 (FullSize[0x0158] - InheritedSize[0x00F8])
	 */
	class UAbility_Hydrafrost_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Frostbite; // 0x0108(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Frostbite; // 0x0130(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void OnUnregistered();
		void OnPaused();
		void OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void AmpBuff_CE();
		void ExecuteUbergraph_Ability_Hydrafrost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
