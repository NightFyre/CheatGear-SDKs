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
	 * BlueprintGeneratedClass PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C
	 * Size -> 0x0034 (FullSize[0x01E4] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Gunnerner_Grizzled_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunnerner_Grizzled; // 0x01B8(0x0028)
		float                                                      DiminishingReturns;                                      // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MozeKilledEvent(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void OnActivated();
		void OnAbilityTimerStarted(const struct FOakAbilityTimerSpec& Spec);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
