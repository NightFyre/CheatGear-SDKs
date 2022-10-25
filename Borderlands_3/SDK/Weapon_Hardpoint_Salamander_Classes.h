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
	 * BlueprintGeneratedClass Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C
	 * Size -> 0x00F0 (FullSize[0x0B78] - InheritedSize[0x0A88])
	 */
	class AWeapon_Hardpoint_Salamander_C : public AWeaponType_Hardpoints_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A88(0x0008) Transient, DuplicateTransient
		class UOakDamageModifierComponent*                         OakDamageModifier;                                       // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakWeaponAudioProviderComponent*                    OakWeaponAudioProvider;                                  // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FAttributeEffectData                                AttEffect_Default_EffectChance;                          // 0x0AA0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_Default_EffectDamage;                          // 0x0AE8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_Mod3_EffectDamage;                             // 0x0B30(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void SetupMod3();
		void SetupNoMod();
		void SetupMod2();
		void ApplySalamanderMod2(class UObject* DamageSource, class AActor* Hardpoint);
		void ToggleBlockEnabled(bool Toggle);
		void UserConstructionScript();
		void CausedDamage_Salamander(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander(bool bAutoReload);
		void K2_Initialize();
		void K2_Initialize1P();
		void ExecuteUbergraph_Weapon_Hardpoint_Salamander(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
