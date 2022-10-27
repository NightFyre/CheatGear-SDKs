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
	 * BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C
	 * Size -> 0x0120 (FullSize[0x0218] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Beastmaster_ClassMod_Raid1_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Beastmaster_ClassMod_Raid1; // 0x0100(0x0028)
		struct FEnvQueryParams                                     FindTargets;                                             // 0x0128(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x01E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FTransform>                                  SpawnTransforms;                                         // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UOakActionAbility_RakkAttack*                        RakkAttackActionSkill;                                   // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DamagedActor;                                            // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FireRakk(class AActor* SourceActor, class AActor* TargetActor, const struct FTransform& Transform);
		void OnActivated();
		void BeastmasterClassModRaid1_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void BreakLoop();
		void ResetGate();
		void OnResumed();
		void ClassMod_Raid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
