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
	 * BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C
	 * Size -> 0x0060 (FullSize[0x0210] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_DLCSkill_15_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_16; // 0x01B8(0x0028)
		struct FDataTableValueHandle                               ShieldRestorePerGrade;                                   // 0x01E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x01F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void DLCSkill15_UsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
		void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
