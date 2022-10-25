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
	 * BlueprintGeneratedClass Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C
	 * Size -> 0x0178 (FullSize[0x0C00] - InheritedSize[0x0A88])
	 */
	class AWeapon_Hardpoint_Minigun_C : public AWeaponType_Hardpoints_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A88(0x0008) Transient, DuplicateTransient
		class UOakDamageModifierComponent*                         OakDamageModifier;                                       // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStatusEffectManagerComponent*                       StatusEffectManager;                                     // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakWeaponAudioProviderComponent*                    OakWeaponAudioProvider;                                  // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponFireProjectileComponent*                      WeaponFireProjectile_Minigun;                            // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponRecoilPatternComponent*                       WeaponRecoilPattern;                                     // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHeatComponent_Gunner_Minigun_C*                     HeatComponent_Gunner_Minigun;                            // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FAttributeEffectData                                AttEffect_UseHeatImpulse_Mod1;                           // 0x0AC0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_Mod3_CryoMultiplier;                           // 0x0B08(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_Mod3_UseHeatImpulse;                           // 0x0B50(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_Mod3_MaxAccuracy;                              // 0x0B98(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UWwiseEvent*                                         OverHeatAudioLoop;                                       // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              OverheatAudioLoopInstance;                               // 0x0BE8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void StopOverheatAudio();
		void InitAudio();
		void SetupMod2();
		void SetupMod1();
		void SetupMod3();
		void GetShellCasingEjectEffect(class UParticleSystem** FX);
		void InitializeBarrelMaterials();
		void UserConstructionScript();
		void BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun();
		void K2_InitializeMod();
		void K2_Initialize();
		void InitializeHardPointIronCub();
		void ExecuteUbergraph_Weapon_Hardpoint_Minigun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
