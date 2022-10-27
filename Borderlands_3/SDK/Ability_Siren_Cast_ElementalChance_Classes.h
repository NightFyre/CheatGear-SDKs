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
	 * BlueprintGeneratedClass Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C
	 * Size -> 0x0033 (FullSize[0x0240] - InheritedSize[0x020D])
	 */
	class UAbility_Siren_Cast_ElementalChance_C : public UAbility_AnointParent_Siren_C
	{
	public:
		unsigned char                                              UnknownData_RI6T[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0218(0x0028)

	public:
		void OnActivated();
		void CastUsed(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction PhaseTranceAction, bool Success);
		void OnDeactivated();
		void ExecuteUbergraph_Ability_Siren_Cast_ElementalChance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
