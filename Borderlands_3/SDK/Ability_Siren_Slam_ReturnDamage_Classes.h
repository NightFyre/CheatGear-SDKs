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
	 * BlueprintGeneratedClass Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C
	 * Size -> 0x005F (FullSize[0x0220] - InheritedSize[0x01C1])
	 */
	class UAbility_Siren_Slam_ReturnDamage_C : public UAbility_AnointParent_SkillEnd_C
	{
	public:
		unsigned char                                              UnknownData_8XBG[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x01D0(0x0028)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Siren_Slam_ReturnDamage; // 0x01F8(0x0028)

	public:
		void OnActivated();
		void SlamEnded(class UOakActionAbility* ActionAbility);
		void OnDeactivated();
		void UnregisterCDM();
		void ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
