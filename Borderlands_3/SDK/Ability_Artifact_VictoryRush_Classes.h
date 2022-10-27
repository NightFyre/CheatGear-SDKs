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
	 * BlueprintGeneratedClass Ability_Artifact_VictoryRush.Ability_Artifact_VictoryRush_C
	 * Size -> 0x004E (FullSize[0x0168] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_VictoryRush_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_QV96[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_VictoryRush; // 0x0128(0x0028)
		struct FStatusEffectInstanceReference                      StatusEffect;                                            // 0x0150(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference

	public:
		void OnActivated();
		void OnKill(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_Ability_Artifact_VictoryRush(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
