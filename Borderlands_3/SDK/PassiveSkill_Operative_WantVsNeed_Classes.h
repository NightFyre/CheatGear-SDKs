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
	 * BlueprintGeneratedClass PassiveSkill_Operative_WantVsNeed.PassiveSkill_Operative_WantVsNeed_C
	 * Size -> 0x0048 (FullSize[0x0228] - InheritedSize[0x01E0])
	 */
	class UPassiveSkill_Operative_WantVsNeed_C : public UPassiveSkill_Operative_KillSkillParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               Scalar;                                                  // 0x01E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Operative_WantVsNeed; // 0x0200(0x0028)

	public:
		void OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy);
		void OnActivated();
		void ExecuteUbergraph_PassiveSkill_Operative_WantVsNeed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
