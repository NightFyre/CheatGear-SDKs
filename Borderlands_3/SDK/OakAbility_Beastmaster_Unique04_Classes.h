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
	 * BlueprintGeneratedClass OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C
	 * Size -> 0x0058 (FullSize[0x0150] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Beastmaster_Unique04_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_OakAbility_Beastmaster_Unique04; // 0x0100(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Beastmaster_Unique04; // 0x0128(0x0028)

	public:
		void OnActivated();
		void PetSpawned_ClassModUnique04(class AOakCharacter* Pet);
		void ApplyPetConditionalModifier(class AOakCharacter* NewPet);
		void RemovePetModifier(class AOakCharacter* NewPet);
		void ExecuteUbergraph_OakAbility_Beastmaster_Unique04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
