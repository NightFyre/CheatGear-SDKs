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
	 * BlueprintGeneratedClass Ability_Shield_Manawell.Ability_Shield_Manawell_C
	 * Size -> 0x0056 (FullSize[0x0170] - InheritedSize[0x011A])
	 */
	class UAbility_Shield_Manawell_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_OQFV[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Burninator; // 0x0128(0x0028)
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0150(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		class AShield*                                             Shield;                                                  // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void SlamEnd(const struct FGroundSlamEndedDetails& Details);
		void StopEffect();
		void OnDeactivated();
		void DrainShield();
		void ExecuteUbergraph_Ability_Shield_Manawell(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
