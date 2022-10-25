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
	 * BlueprintGeneratedClass WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C
	 * Size -> 0x0010 (FullSize[0x0AC0] - InheritedSize[0x0AB0])
	 */
	class AWeaponType_Hardpoints_BearFist_Projectile_C : public AWeaponType_Hardpoints_BearFist_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) Transient, DuplicateTransient
		class UWeaponFireProjectileComponent*                      WeaponFireProjectile;                                    // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void InnerSetHandVisible(bool bVisible);
		void UserConstructionScript();
		void OnAnimEnd_7F5D255649D94023774957950F0FEBE1();
		void OnEnd_7F5D255649D94023774957950F0FEBE1(EGbxActionEndState EndState, class AActor* Actor);
		void K2_Initialize();
		void BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile(bool bCompleted);
		void SetHandVisible(bool bVisible);
		void NotifyPlayerLeaving();
		void ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
