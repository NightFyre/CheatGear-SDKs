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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C
	 * Size -> 0x0098 (FullSize[0x0248] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged10_NEW_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged10_NEW; // 0x01B8(0x0028)
		struct FRandomStream                                       Stream_RandomChance;                                     // 0x01E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UWeaponFireProjectileComponent*                      NewVar_1;                                                // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeEffectData                                AttEffect_AddedProjectilesPerShot;                       // 0x01F0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAttributeModifierHandle                         AttEffectHandle_AddedProjPerShot;                        // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetProjectileComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent);
		bool RandomChanceByGrade();
		void OnWeaponUsed_Ranged10(class AWeapon* EventWeapon);
		void OnWeaponChanged_Ranged10(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
		void OnActivated();
		void TryAddProjectileToNextShot(class AWeapon* InWeapon);
		void OnPaused();
		void OnDeactivated();
		void ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
