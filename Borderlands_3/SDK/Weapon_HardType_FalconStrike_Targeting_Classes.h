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
	 * BlueprintGeneratedClass Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C
	 * Size -> 0x0018 (FullSize[0x0B08] - InheritedSize[0x0AF0])
	 */
	class AWeapon_HardType_FalconStrike_Targeting_C : public AWeapon_Hardpoint_FalconStrike_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		class UWeaponSingleFeedReloadComponent*                    WeaponSingleFeedReload;                                  // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFalconStrikeTargetingComponent*                     FalconStrikeTargeting;                                   // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayFeedback();
		void UserConstructionScript();
		void BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting(class AActor* Target);
		void BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire();
		void ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
