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
	 * BlueprintGeneratedClass Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C
	 * Size -> 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
	 */
	class UAbility_CM_Ixora2_BSM_L01_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class AOakCharacter_Player*                                OakCharacter;                                            // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CM_Ixora_BSM_L01; // 0x0108(0x0028)
		class AActor*                                              Player;                                                  // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       Pet;                                                     // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void BSMIxora2CM_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void BSMIxora2CM_OnBeastmasterPetSpawned(class AOakCharacter* Pet);
		void BSMIxora2CM_OnBeastmasterPetReleased(class AOakCharacter* Pet);
		void SetupPetEvents();
		void ExecuteUbergraph_Ability_CM_Ixora2_BSM_L01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
