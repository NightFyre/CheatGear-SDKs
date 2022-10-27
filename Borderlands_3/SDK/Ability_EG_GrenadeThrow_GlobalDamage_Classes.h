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
	 * BlueprintGeneratedClass Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C
	 * Size -> 0x0070 (FullSize[0x0168] - InheritedSize[0x00F8])
	 */
	class UAbility_EG_GrenadeThrow_GlobalDamage_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        BonusDamageTimer;                                        // 0x0108(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        RemoveCDMTimer;                                          // 0x0110(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_EG_Generic_KillStackReloadDamage; // 0x0118(0x0028)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_EG_GrenadeThrow_GlobalDamage; // 0x0140(0x0028)

	public:
		void OnActivated();
		void GrenadeThrown();
		void ApplyCDM();
		void RemoveCDM();
		void ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
