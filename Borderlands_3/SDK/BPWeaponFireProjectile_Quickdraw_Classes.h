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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C
	 * Size -> 0x0018 (FullSize[0x0998] - InheritedSize[0x0980])
	 */
	class UBPWeaponFireProjectile_Quickdraw_C : public UBPWeaponFireProjectileComponent_JAK_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) Transient, DuplicateTransient
		struct FTimerHandle                                        TimerHandle;                                             // 0x0988(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReloadTime(class AWeapon* EventWeapon, bool bAutoReload);
		void ApplyShotModAndReload();
		void ReloadTimer();
		void K2_OnActivated();
		void K2_OnDeactivated();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
