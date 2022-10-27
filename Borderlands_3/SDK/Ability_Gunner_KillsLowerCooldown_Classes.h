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
	 * BlueprintGeneratedClass Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C
	 * Size -> 0x0035 (FullSize[0x0240] - InheritedSize[0x020B])
	 */
	class UAbility_Gunner_KillsLowerCooldown_C : public UAbility_AnointParent_Gunner_C
	{
	public:
		unsigned char                                              UnknownData_AD30[0x5];                                   // 0x020B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0218(0x0028)

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void KilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void AnointRemoveEffect();
		void BindKillEffect();
		void ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
