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
	 * BlueprintGeneratedClass PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C
	 * Size -> 0x0058 (FullSize[0x0208] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Gunner_FireInSkagDen_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Gunner_FireInSkagDen; // 0x01B8(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_FireInSkagDen; // 0x01E0(0x0028)

	public:
		void OnActivated();
		void OnEnteredIronBear_FireSkagDen(class AOakCharacter_IronBear* IronBear);
		void ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
