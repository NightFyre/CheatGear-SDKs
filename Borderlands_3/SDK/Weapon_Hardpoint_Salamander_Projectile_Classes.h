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
	 * BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C
	 * Size -> 0x0015 (FullSize[0x0B8D] - InheritedSize[0x0B78])
	 */
	class AWeapon_Hardpoint_Salamander_Projectile_C : public AWeapon_Hardpoint_Salamander_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B78(0x0008) Transient, DuplicateTransient
		class UBPWeaponFireProjectile_Salamander_C*                BPWeaponFireProjectile_Salamander;                       // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    nCounter;                                                // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bReadyForSplat;                                          // 0x0B8C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void K2_InitializeMod();
		void BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile();
		void ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
