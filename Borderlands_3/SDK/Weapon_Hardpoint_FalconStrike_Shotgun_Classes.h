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
	 * BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class AWeapon_Hardpoint_FalconStrike_Shotgun_C : public AWeapon_Hardpoint_FalconStrike_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		class UWeaponSingleFeedReloadComponent*                    WeaponSingleFeedReload;                                  // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire();
		void ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
