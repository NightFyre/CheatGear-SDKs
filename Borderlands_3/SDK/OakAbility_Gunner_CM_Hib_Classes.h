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
	 * BlueprintGeneratedClass OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C
	 * Size -> 0x0088 (FullSize[0x0180] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Gunner_CM_Hib_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Gunner_CM_Hib; // 0x0100(0x0028)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_OakAbility_Gunner_CM_Hib; // 0x0128(0x0028)
		class AOakCharacter_Player*                                PlayerCharacterOwner;                                    // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABPClass_ClassMod_C*                                 BaseClassMod;                                            // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               TickTime;                                                // 0x0160(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        ScalarTimer;                                             // 0x0178(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void OnClicked(unsigned char InputChannel);
		void OnPutDown(class AWeapon* EventWeapon);
		void OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
		void OnSwitchMode();
		void StartClassModBonus();
		void StopClassModBonus();
		void UpdateScalar();
		void OnDeactivated();
		void BindWeaponEvents(class AWeapon* NewWeapon);
		void UnbindWeaponEvents(class AWeapon* OldWeapon);
		void OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
		void ExecuteUbergraph_OakAbility_Gunner_CM_Hib(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
