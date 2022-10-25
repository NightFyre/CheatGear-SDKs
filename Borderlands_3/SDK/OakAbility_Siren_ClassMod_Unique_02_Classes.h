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
	 * BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C
	 * Size -> 0x01B9 (FullSize[0x02B1] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Siren_ClassMod_Unique_02_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_ClassMod_Unique_02; // 0x0100(0x0028)
		struct FPhaseTranceActivationComboData                     PhasetranceActivationData;                               // 0x0128(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FEnvQueryParams                                     FindNearbyTargetsEQS;                                    // 0x0140(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvQueryParams                                     FindNearbyPlayersEQS;                                    // 0x01F8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       Result;                                                  // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DoEffectQuicken(bool* res);
		EGbxAbilityState CalculateAbilityState();
		void CheckAscendant(bool* res);
		void FindNearbyEnemies(TArray<class AActor*>* Targets, bool* res);
		void FindNearbyPlayer(class AActor** Player, bool* res);
		void DoEffectStillnessofMind(bool* res);
		void DoEffectBrightStar(const struct FTransform& Transform, bool* res);
		void DoEffectGlamour(bool* res);
		void DoEffectSoulSap(class AActor* SourceActor, float Damage, bool* res);
		void DoEffectAllure(const struct FTransform& Transform, bool* res);
		void OnActivated();
		void OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
