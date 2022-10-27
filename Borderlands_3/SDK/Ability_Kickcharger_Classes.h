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
	 * BlueprintGeneratedClass Ability_Kickcharger.Ability_Kickcharger_C
	 * Size -> 0x0042 (FullSize[0x013A] - InheritedSize[0x00F8])
	 */
	class UAbility_Kickcharger_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD; // 0x0100(0x0028)
		struct FGbxAttributeModifierHandle                         ChargeTimeAttributeModifierHandle;                       // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       isCharging;                                              // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isFullyCharged;                                          // 0x0139(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDeactivated();
		void WeaponFired(class AWeapon* EventWeapon);
		void StopSliding(const struct FSlideEndedDetails& Details);
		void InstantChargeExpired();
		void FullyChargedAudio();
		void OnActivated();
		void ChargeTicker();
		void ExecuteUbergraph_Ability_Kickcharger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
