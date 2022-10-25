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
	 * BlueprintGeneratedClass Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C
	 * Size -> 0x0126 (FullSize[0x0240] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_ElectricSlide_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_WZZS[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		bool                                                       SlideProjectileAvaialable;                               // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y0F4[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownTime;                                            // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElectricSlide; // 0x0130(0x0028)
		struct FEnvQueryParams                                     BeamQuery;                                               // 0x0158(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        QueryTimer;                                              // 0x0210(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class AActor*>                                      CurrentTargets;                                          // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      TargetList;                                              // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UClass*                                              BeamData;                                                // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void StartSlide();
		void StopSlide(const struct FSlideEndedDetails& Details);
		void QueryEnemies();
		void ExecuteUbergraph_Ability_Artifact_ElectricSlide(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
