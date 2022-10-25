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
	 * BlueprintGeneratedClass Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C
	 * Size -> 0x0090 (FullSize[0x0188] - InheritedSize[0x00F8])
	 */
	class UAbility_All_Passive_TerrorProjectilesPerShot_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Passive_TerrorProjectilesPerShot; // 0x0108(0x0028)
		struct FAttributeEffectData                                AttEffect_AddedProjectilesPerShot;                       // 0x0130(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAttributeModifierHandle                         AttEffectHandle_AddedProjPerShot;                        // 0x0178(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetFiringComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent);
		void WeaponUsed(class AWeapon* EventWeapon);
		void WeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
		void AddProjectilePerShot(class AWeapon* InWeapon);
		void OnActivated();
		void ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
