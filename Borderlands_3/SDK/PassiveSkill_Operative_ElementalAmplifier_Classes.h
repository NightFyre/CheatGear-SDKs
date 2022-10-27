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
	 * BlueprintGeneratedClass PassiveSkill_Operative_ElementalAmplifier.PassiveSkill_Operative_ElementalAmplifier_C
	 * Size -> 0x0020 (FullSize[0x0200] - InheritedSize[0x01E0])
	 */
	class UPassiveSkill_Operative_ElementalAmplifier_C : public UPassiveSkill_Operative_KillSkillParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               SpecDuration;                                            // 0x01E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy);
		void ExecuteUbergraph_PassiveSkill_Operative_ElementalAmplifier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
