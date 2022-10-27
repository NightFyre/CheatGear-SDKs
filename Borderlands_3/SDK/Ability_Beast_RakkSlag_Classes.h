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
	 * BlueprintGeneratedClass Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C
	 * Size -> 0x005E (FullSize[0x0268] - InheritedSize[0x020A])
	 */
	class UAbility_Beast_RakkSlag_C : public UAbility_AnointParent_Beastmaster_C
	{
	public:
		unsigned char                                              UnknownData_0RCQ[0x6];                                   // 0x020A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0218(0x0028)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Beast_RakkSlag; // 0x0240(0x0028)

	public:
		void OnActivated();
		void RakkDamageDealt(class AActor* DamagedEnemy);
		void OnDeactivated();
		void ExecuteUbergraph_Ability_Beast_RakkSlag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
