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
	 * BlueprintGeneratedClass Ability_Malevolent.Ability_Malevolent_C
	 * Size -> 0x0060 (FullSize[0x0158] - InheritedSize[0x00F8])
	 */
	class UAbility_Malevolent_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Malevolent; // 0x0100(0x0028)
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Malevolent; // 0x0128(0x0028)
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void ReloadEndedDelegate(class AWeapon* EventWeapon, bool bCompleted);
		void OnDeactivated();
		void OnUnregistered();
		void OnPaused();
		void ExecuteUbergraph_Ability_Malevolent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
