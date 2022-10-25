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
	 * BlueprintGeneratedClass Ability_SparkyBoom.Ability_SparkyBoom_v2_C
	 * Size -> 0x0088 (FullSize[0x0180] - InheritedSize[0x00F8])
	 */
	class UAbility_SparkyBoom_v2_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Malevolent; // 0x0100(0x0028)
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Quickdraw; // 0x0130(0x0028)
		class AOakCharacter*                                       OakChar;                                                 // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWeapon*                                             MyWeapon;                                                // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatusEffectInstanceReference                      FireStatus;                                              // 0x0168(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference

	public:
		void OnDeactivated();
		void OnUnregistered();
		void OnPaused();
		void Event_ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
		void OnActivated();
		void Event_ReloadEnded(class AWeapon* EventWeapon, bool bCompleted);
		void Event_EnteredDownState();
		void ExecuteUbergraph_Ability_SparkyBoom_v2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
