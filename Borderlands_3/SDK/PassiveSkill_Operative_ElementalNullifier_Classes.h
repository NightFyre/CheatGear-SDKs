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
	 * BlueprintGeneratedClass PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C
	 * Size -> 0x0010 (FullSize[0x01F0] - InheritedSize[0x01E0])
	 */
	class UPassiveSkill_Operative_ElementalNullifier_C : public UPassiveSkill_Operative_KillSkillParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		class AActor*                                              DigicloneRef;                                            // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
