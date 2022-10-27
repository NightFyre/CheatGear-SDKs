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
	 * BlueprintGeneratedClass PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C
	 * Size -> 0x0030 (FullSize[0x01E0] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_SeeinRed_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_SeeinRed; // 0x01B8(0x0028)

	public:
		void OnActivated();
		void SeeinRedOnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_PassiveSkill_Operative_SeeinRed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
