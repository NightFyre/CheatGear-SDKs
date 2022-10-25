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
	 * BlueprintGeneratedClass PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C
	 * Size -> 0x0070 (FullSize[0x0250] - InheritedSize[0x01E0])
	 */
	class UPassiveSkill_Operative_PlayingDirty_C : public UPassiveSkill_Operative_KillSkillParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_PlayingDirty; // 0x01E8(0x0028)
		struct FDataTableValueHandle                               ExtraShotChance;                                         // 0x0210(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    ExtraShots;                                              // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XWQ9[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               KillSkillTime;                                           // 0x0230(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        RicochetTimer;                                           // 0x0248(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void GetManualHUDIconValues(int32_t* outStackCount, float* outDuration, float* outTimeRemaining);
		void PlayingDirtyOnWeaponUsed(class AWeapon* EventWeapon);
		void OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy);
		void ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
