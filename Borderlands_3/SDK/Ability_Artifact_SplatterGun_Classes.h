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
	 * BlueprintGeneratedClass Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C
	 * Size -> 0x0067 (FullSize[0x0181] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_SplatterGun_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_W70H[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Burninator; // 0x0128(0x0028)
		bool                                                       bIsShotgun;                                              // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3AYA[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Artifact_DeputysBadge; // 0x0158(0x0028)
		bool                                                       AbilityActivated;                                        // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Ammo_Return(class AOakCharacter* Character);
		void OnActivated();
		void StartSlide();
		void EndSlide(const struct FSlideEndedDetails& Details);
		void ExecuteUbergraph_Ability_Artifact_SplatterGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
