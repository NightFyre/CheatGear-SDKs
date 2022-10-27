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
	 * BlueprintGeneratedClass Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C
	 * Size -> 0x0050 (FullSize[0x0148] - InheritedSize[0x00F8])
	 */
	class UAbility_CM_Ixora_OPE_L01_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               Chance;                                                  // 0x0100(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class AOakCharacter_Player*                                OakCharacterOwner;                                       // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CM_Ixora_OPE_L01; // 0x0120(0x0028)

	public:
		void OnActivated();
		void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_Ability_CM_Ixora_OPE_L01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
