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
	 * BlueprintGeneratedClass PassiveSkill_Gunner_MeansOfDestruction.PassiveSkill_Gunner_MeansOfDestruction_C
	 * Size -> 0x004C (FullSize[0x01FC] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Gunner_MeansOfDestruction_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FRandomStream                                       Stream_AmmoRefillChance;                                 // 0x01B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_MeansOfDestruction; // 0x01C0(0x0028)
		struct FRandomStream                                       Stream_GrenadeRefillChance;                              // 0x01E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      NewAmmoReturnChance;                                     // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewGrenadeReturnChance;                                  // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReturnedAmmoAmount;                                      // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OnCausedDamage_MeansOfDestruction(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void OnGradeChanged();
		void DetermineNewChance();
		void ResetMoDClamp_Ammo();
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ResetModClamp_Grenade();
		void ExecuteUbergraph_PassiveSkill_Gunner_MeansOfDestruction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
