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
	 * BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C
	 * Size -> 0x0060 (FullSize[0x0158] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Siren_ClassMod_Unique_04_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FOakAbilityResourceController_SirenRushStack        RsrcCntrlr_OakAbilityResourceController_SirenRushStack_OakAbility_Siren_Unique04; // 0x0100(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_Unique04; // 0x0128(0x0028)
		struct FTimerHandle                                        RushTimer;                                               // 0x0150(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void SirenUnique04_ActivatedRushBonus(int32_t RushStacks);
		void TickDownRushStacks();
		void OnActivated();
		void ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
