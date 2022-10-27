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
	 * BlueprintGeneratedClass PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C
	 * Size -> 0x0040 (FullSize[0x01F0] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_SupersonicMan_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_Multitasker; // 0x01B8(0x0028)
		TArray<struct FStatusEffectInstanceReference>              StatusEffectInstances;                                   // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnActivated();
		void OOO_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void OOO_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
