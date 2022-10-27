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
	 * BlueprintGeneratedClass OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C
	 * Size -> 0x0058 (FullSize[0x0150] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Beastmaster_Unique03_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Beastmaster_Unique03; // 0x0100(0x0028)
		struct FGameplayTagContainer                               DesiredTags;                                             // 0x0128(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRandomStream                                       RandomStream_SkillTriggerChance;                         // 0x0148(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void OnCausedDamage_UniqueClassMod03(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_OakAbility_Beastmaster_Unique03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
