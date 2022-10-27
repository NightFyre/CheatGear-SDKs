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
	 * BlueprintGeneratedClass Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UAbility_Weapon_BioBetsy_Shock_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Weapon_CloudKill; // 0x0100(0x0028)

	public:
		void OnRegistered();
		void OnDeactivated();
		void OnPaused();
		void OnKilled(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void Reset();
		void ExecuteUbergraph_Ability_Weapon_BioBetsy_Shock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
