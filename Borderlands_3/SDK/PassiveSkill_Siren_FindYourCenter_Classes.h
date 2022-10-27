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
	 * BlueprintGeneratedClass PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C
	 * Size -> 0x0048 (FullSize[0x0230] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_FindYourCenter_C : public UOakPassiveAbility_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               ExecutionerActiveTime;                                   // 0x01F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_FindYourCenter; // 0x0208(0x0028)

	public:
		void OnActivated();
		void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
