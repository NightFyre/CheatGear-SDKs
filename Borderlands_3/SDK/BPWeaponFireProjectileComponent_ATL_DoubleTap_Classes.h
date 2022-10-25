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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C
	 * Size -> 0x0020 (FullSize[0x0978] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectileComponent_ATL_DoubleTap_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		class ABPWeap_ATL_BaseWeapon_C*                            ATL_BaseWeapon;                                          // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTargetIndex;                                      // 0x0968(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloseHoodDelay;                                          // 0x096C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              HomingLightProj;                                         // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class AActor* GetLockedTarget();
		void ReceiveBeginPlay();
		void Notify_WeaponFired();
		void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bAutoReload);
		void ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
