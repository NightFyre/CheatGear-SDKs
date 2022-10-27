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
	 * BlueprintGeneratedClass Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C
	 * Size -> 0x0046 (FullSize[0x0160] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_CausticCoast_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_7C8M[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Cauterizer; // 0x0128(0x0028)
		struct FTimerHandle                                        ProjectileTimer;                                         // 0x0150(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class ABPChar_Player_C*                                    BPChar_Player;                                           // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void StartSlide();
		void FireCorrosiveProjectile();
		void StoppedSliding(const struct FSlideEndedDetails& Details);
		void ExecuteUbergraph_Ability_Artifact_CausticCoast(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
