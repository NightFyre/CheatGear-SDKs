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
	 * BlueprintGeneratedClass Ability_BOTD.Ability_BOTD_C
	 * Size -> 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
	 */
	class UAbility_BOTD_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class AActor*                                              Killed;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD; // 0x0108(0x0028)

	public:
		void OnActivated();
		void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_Ability_BOTD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
