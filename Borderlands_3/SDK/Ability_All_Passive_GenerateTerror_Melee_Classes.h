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
	 * BlueprintGeneratedClass Ability_All_Passive_GenerateTerror_Melee.Ability_All_Passive_GenerateTerror_Melee_C
	 * Size -> 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
	 */
	class UAbility_All_Passive_GenerateTerror_Melee_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_SkillEnd_AccuracyHandling; // 0x0100(0x0028)
		class ABPChar_Player_C*                                    Player;                                                  // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GenerateTerrorRate;                                      // 0x0130(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        GenerateTerrorDuration;                                  // 0x0138(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_Ability_All_Passive_GenerateTerror_Melee(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
