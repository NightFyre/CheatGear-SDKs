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
	 * BlueprintGeneratedClass Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C
	 * Size -> 0x0038 (FullSize[0x01E8] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_Deadlines_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_Deadlines; // 0x01B8(0x0028)
		float                                                      CooldownPercentToReturn;                                 // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DiminishingReturns;                                      // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void Deadlines_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void Deadlines_ActionSkillActivated(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_Passive_Gunner_Deadlines(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
