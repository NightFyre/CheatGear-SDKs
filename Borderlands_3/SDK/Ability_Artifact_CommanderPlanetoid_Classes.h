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
	 * BlueprintGeneratedClass Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C
	 * Size -> 0x005E (FullSize[0x0178] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_CommanderPlanetoid_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_7YLS[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FTimerHandle                                        ElementalSwitchTimer;                                    // 0x0128(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    ElementIndex;                                            // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2O42[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOakDamageCauserComponent*                           DamageComponent;                                         // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Artifact_CommanderPlanet_1; // 0x0140(0x0028)
		TArray<class UConditionalDamageModifier*>                  Elements;                                                // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void OnActivated();
		void OnDeactivated();
		void SwitchElement();
		void ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
