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
	 * BlueprintGeneratedClass Weapon_Hardpoint_GrenadeLauncher.Weapon_Hardpoint_GrenadeLauncher_C
	 * Size -> 0x025D (FullSize[0x0CE5] - InheritedSize[0x0A88])
	 */
	class AWeapon_Hardpoint_GrenadeLauncher_C : public AWeaponType_Hardpoints_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A88(0x0008) Transient, DuplicateTransient
		class UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C*    BPWeaponFireProjectile_Gunner_GrenadeLauncher;           // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponSingleFeedReloadComponent*                    WeaponSingleFeedReload;                                  // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponHeatComponent*                                WeaponHeat;                                              // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakWeaponAudioProviderComponent*                    OakWeaponAudioProvider;                                  // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStatusEffectManagerComponent*                       StatusEffectManager;                                     // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponRecoilPatternComponent*                       WeaponRecoilPattern;                                     // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FAttributeEffectData                                AttEffect_MaxLoadedAmmo_Mod1;                            // 0x0AC0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_CurrentAmmo_Mod1;                              // 0x0B08(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_MaxLoadedAmmo_Mod2;                            // 0x0B50(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_CurrentAmmo_Mod2;                              // 0x0B98(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_ReloadSpeed_Mod3;                              // 0x0BE0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      FXHeatAmount;                                            // 0x0C28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M746[0x4];                                   // 0x0C2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        HeatDecrementTimer;                                      // 0x0C30(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UMaterialInstanceDynamic*                            HeatMati;                                                // 0x0C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            HeatMati1P;                                              // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMeshComponent*                                      Material1stP;                                            // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeEffectData                                AttEffect_SingleFeedIncrement;                           // 0x0C50(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAttributeEffectData                                AttEffect_FireRate_MusicalChairs;                        // 0x0C98(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    nCounter2;                                               // 0x0CE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bReadyForSingularityGrenade;                             // 0x0CE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ApplyMod3AttributeEffects();
		void RegisterMuzzleFX();
		void UserConstructionScript();
		void NotifyPlayerLeaving();
		void K2_InitializeMod();
		void K2_Initialize1P();
		void K2_Initialize();
		void BndEvt__BPWeaponFireProjectile_Gunner_GrenadeLauncher_K2Node_ComponentBoundEvent_1_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_GrenadeLauncher();
		void InitializeHardPointIronCub();
		void ExecuteUbergraph_Weapon_Hardpoint_GrenadeLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
