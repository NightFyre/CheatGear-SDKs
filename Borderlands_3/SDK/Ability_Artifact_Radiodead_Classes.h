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
	 * BlueprintGeneratedClass Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C
	 * Size -> 0x003F (FullSize[0x0159] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_Radiodead_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_9JW9[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    BPChar_Player;                                           // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_PlagueAgent; // 0x0130(0x0028)
		bool                                                       AugmentAvailable;                                        // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnActivated();
		void StopSliding(const struct FSlideEndedDetails& Details);
		void OnAbilityTimerStarted(const struct FOakAbilityTimerSpec& Spec);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Ability_Artifact_Radiodead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
