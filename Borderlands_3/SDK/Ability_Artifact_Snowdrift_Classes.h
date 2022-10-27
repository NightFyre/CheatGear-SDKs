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
	 * BlueprintGeneratedClass Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C
	 * Size -> 0x00EF (FullSize[0x0209] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_Snowdrift_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_1JJ0[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_GlacialWave; // 0x0128(0x0028)
		struct FEnvQueryParams                                     EnvQuery;                                                // 0x0150(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       AugmentAvailable;                                        // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1(class AActor* Actor, int32_t InstanceIndex);
		void OnActivated();
		void StopSliding(const struct FSlideEndedDetails& Details);
		void OnAbilityTimerStarted(const struct FOakAbilityTimerSpec& Spec);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Ability_Artifact_Snowdrift(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
