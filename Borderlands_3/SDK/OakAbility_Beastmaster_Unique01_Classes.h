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
	 * BlueprintGeneratedClass OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Beastmaster_Unique01_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveAbility_Beastmaster_Unique_01; // 0x0100(0x0028)

	public:
		void OnActivated();
		void CausedDeath_UniqueClassMod01(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void AddPetDamageModifier(class AOakCharacter* Pet);
		void ExecuteUbergraph_OakAbility_Beastmaster_Unique01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
