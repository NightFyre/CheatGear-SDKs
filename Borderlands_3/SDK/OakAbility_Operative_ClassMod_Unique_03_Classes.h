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
	 * BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C
	 * Size -> 0x0034 (FullSize[0x012C] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Operative_ClassMod_Unique_03_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Operative_ClassMod_Unique_03; // 0x0100(0x0028)
		int32_t                                                    Count;                                                   // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnSeeingRedActivated();
		void OnActivated();
		void OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void OperativeTriggerKillSkillEffect();
		void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
