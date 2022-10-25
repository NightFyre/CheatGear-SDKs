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
	 * BlueprintGeneratedClass BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C
	 * Size -> 0x0040 (FullSize[0x01B8] - InheritedSize[0x0178])
	 */
	class UBP_CE_Beastmaster_CloakAbility_On_C : public UOakAction_Cloak
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0178(0x0008) Transient, DuplicateTransient
		class UWwiseAudioEffect*                                   AudioEffect;                                             // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SecondaryCloakFX;                                        // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatusEffectInstanceReference                      SpiderAntSpeedStatusEffect;                              // 0x0190(0x0018) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		bool                                                       bModifiedShot;                                           // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8IRA[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxAction*                                          TrackedTargetCE;                                         // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UClass* GetTrackedTargetEffect(const struct FOakActionCloak_TrackedTargetState& TrackedTargetState);
		void StopTrackedTargetCE();
		bool ShouldRegisterWeaponFireDelegates();
		void CleanupServer();
		void SetupMods();
		void SetupServer();
		void OnServerBegin(class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
