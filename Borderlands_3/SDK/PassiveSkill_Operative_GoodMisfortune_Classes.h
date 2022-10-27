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
	 * BlueprintGeneratedClass PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C
	 * Size -> 0x0040 (FullSize[0x0220] - InheritedSize[0x01E0])
	 */
	class UPassiveSkill_Operative_GoodMisfortune_C : public UPassiveSkill_Operative_KillSkillParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		int32_t                                                    SNTRYCount;                                              // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SAWV[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_GoodMisfortune; // 0x01F0(0x0028)
		int32_t                                                    BarrierCount;                                            // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CloneCount;                                              // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetDurationReturn(int32_t Count, float MaxDuration, float* res);
		void OnActivated();
		void GoodMisfortuneSNTRYActivated(class UOakActionAbility* ActionAbility);
		void OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy);
		void ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
