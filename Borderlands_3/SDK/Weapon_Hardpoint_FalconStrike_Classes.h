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
	 * BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C
	 * Size -> 0x0068 (FullSize[0x0AF0] - InheritedSize[0x0A88])
	 */
	class AWeapon_Hardpoint_FalconStrike_C : public AWeaponType_Hardpoints_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A88(0x0008) Transient, DuplicateTransient
		class UBPWeaponFireProjectile_Gunner_FalconStrike_C*       BPWeaponFireProjectile_Gunner_FalconStrike;              // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStatusEffectManagerComponent*                       StatusEffectManager;                                     // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakWeaponAudioProviderComponent*                    OakWeaponAudioProvider;                                  // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponVisibleAmmoComponent*                         WeaponVisibleAmmo;                                       // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponRecoilPatternComponent*                       WeaponRecoilPattern;                                     // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CurrentGbxAction_Fire;                                   // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CurrentGbxAction_Rotate;                                 // 0x0AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPAnim_IronBear_FalconStrike_C*                     BPAnim_FalconStrike_3rd;                                 // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPAnim_IronBear_FalconStrike_C*                     BPAnim_FalconStrike_1st;                                 // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFeedbackData*                                       FFeedback_FalconStrike;                                  // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPAnim_IronBear_FalconStrike_C*                     BPAnim_FalconStrike_IronCub;                             // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryPerformFeedback();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void InitAnimation(class UBPAnim_IronBear_FalconStrike_C* Anim);
		void K2_Initialize1P();
		void K2_InitializeMod1P();
		void K2_InitializeMod();
		void InitializeHardPointIronCub();
		void ExecuteUbergraph_Weapon_Hardpoint_FalconStrike(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
